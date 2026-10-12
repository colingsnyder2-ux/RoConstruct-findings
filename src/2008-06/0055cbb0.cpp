// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Data;

struct Manager {
    virtual Data* Allocate(int, int);
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual Manager* Clone();
};

struct Data {
    Manager* manager;
    int length;
    int capacity;
    long references;
};

extern void __cdecl ThrowMemoryException();
extern "C" int (__cdecl *memcpy_s)(void*, unsigned int,
                                  const void*, unsigned int);

Data* __cdecl CloneData(Data* source)
{
    Manager* manager = source->manager->Clone();
    Data* result;

    if (source->references < 0 || manager != source->manager) {
        result = manager->Allocate(source->length, 1);
        if (result == 0)
            ThrowMemoryException();

        result->length = source->length;
        unsigned int size = source->length + 1;
        memcpy_s(result + 1, size, source + 1, size);
    } else {
        result = source;
        _InterlockedExchangeAdd(&result->references, 1);
    }

    return result;
}
