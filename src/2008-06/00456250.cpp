// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedValue
{
    void* value;
    RefCount* count;
    ~SharedValue();
};

__forceinline SharedValue::~SharedValue()
{
    if (count)
    {
        if (_InterlockedExchangeAdd(&count->strong, -1) == 0)
        {
            count->dispose();
            if (_InterlockedExchangeAdd(&count->weak, -1) == 0)
                count->destroy();
        }
    }
}

struct Record
{
    char padding[0xa8];
    void* value;
};

struct Records
{
    int GetCount() const;
    Record* GetAt(int index) const;
    void RemoveAt(int index);
};

struct Report
{
    char padding[0xe8];
    Records* records;
};

struct Owner;

struct OwnerTable
{
    char padding[0x194];
    Report* (__thiscall *GetReport)(Owner*);
};

struct Owner
{
    OwnerTable* table;
};

struct S
{
    void remove(SharedValue value, int unused);
};

void S::remove(SharedValue value, int unused)
{
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x39c);
    Records* records = owner->table->GetReport(owner)->records;

    for (int i = records->GetCount() - 1; i >= 0; --i)
    {
        if (records->GetAt(i)->value == value.value)
        {
            records->RemoveAt(i);
            break;
        }
    }
}
