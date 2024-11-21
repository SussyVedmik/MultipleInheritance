#include <cstring>
#include <iostream>

using namespace std;

class IOutput
{
public:
    virtual void Show() const = 0;
    virtual void Show(const string& info) const = 0;
    virtual ~IOutput() = default;
};

class IMath
{
public:
    virtual int Max() const = 0;
    virtual int Min() const = 0;
    virtual float Avg() const = 0;
    virtual bool Search(int valueToSearch) const = 0;
    virtual ~IMath() = default;
};

class ISort
{
public:
    virtual void SortAsc() = 0;
    virtual void SortDesc() = 0;
    virtual void SortByParam(bool isAsc) = 0;
    virtual ~ISort() = default;
};

class Array : public IOutput, public IMath, public ISort
{
private:
    int* data;
    int size;

public:
    Array(int* arr, int length);
    ~Array();

    void Show() const override;
    void Show(const string& info) const override;

    int Max() const override;
    int Min() const override;
    float Avg() const override;
    bool Search(int valueToSearch) const override;

    void SortAsc() override;
    void SortDesc() override;
    void SortByParam(bool isAsc) override;
};

