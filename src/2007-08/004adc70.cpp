// from server: 59% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedCounted {
    void* vptr;
    volatile long refcount;
};

struct DeleteInstanceItem {
    void* vptr;
    void* field4;
    void* field8;
    bool construct(void* arg);
};

extern "C" bool __cdecl sub_004879d0(void* out);
extern "C" void* __cdecl sub_0062fef6(unsigned int size);

bool DeleteInstanceItem::construct(void* arg)
{
    unsigned char buf[24];
    if (sub_004879d0(buf)) {
        return true;
    }

    this->field8 = (void*)0x4aa3b0;
    this->vptr = (void*)0x4ad7e0;

    void* mem = sub_0062fef6(0x18);
    if (mem) {
        *(unsigned int*)((char*)mem + 0) = *(unsigned int*)(buf + 0);
        *(unsigned int*)((char*)mem + 4) = *(unsigned int*)(buf + 4);
        *(unsigned int*)((char*)mem + 8) = *(unsigned int*)(buf + 8);
        *(unsigned int*)((char*)mem + 12) = *(unsigned int*)(buf + 12);
        *(unsigned int*)((char*)mem + 16) = *(unsigned int*)(buf + 16);

        SharedCounted* sc = *(SharedCounted**)(buf + 16);
        if (sc) {
            _InterlockedExchangeAdd(&sc->refcount, 1);
        }
    }
    this->field4 = mem;

    SharedCounted* sc2 = *(SharedCounted**)(buf + 16);
    if (sc2) {
        if (_InterlockedExchangeAdd(&sc2->refcount, -1) == 1) {
            void** vt = *(void***)sc2;
            ((void (__thiscall*)(SharedCounted*))vt[1])(sc2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)sc2 + 8), -1) == 1) {
                void** vt2 = *(void***)sc2;
                ((void (__thiscall*)(SharedCounted*))vt2[2])(sc2);
            }
        }
    }

    return true;
}
