// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int (__cdecl *memcpy_s)(void*, unsigned int, const void*, unsigned int);
extern void allocation_failure();

struct Header;

struct Manager
{
    virtual Header* allocate(int, int) = 0;
    virtual void release(Header*) = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual Manager* getManager() = 0;
};

struct Header
{
    Manager* manager;
    int length;
    int capacity;
    volatile long references;
};

struct S
{
    char* data;
    void f(int);
};

void S::f(int count)
{
    Header* oldHeader = reinterpret_cast<Header*>(data) - 1;
    int length = oldHeader->length;
    Header* newHeader = oldHeader->manager->getManager()->allocate(count, 1);

    if (!newHeader)
        allocation_failure();

    if (length < count)
        count = length;

    memcpy_s(newHeader + 1, count + 1, oldHeader + 1, count + 1);
    newHeader->length = length;

    if (_InterlockedExchangeAdd(&oldHeader->references, -1) - 1 <= 0)
        oldHeader->manager->release(oldHeader);

    data = reinterpret_cast<char*>(newHeader + 1);
}
