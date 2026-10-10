// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct TimerService {
    char pad0[0xe8];
    int field_e8;
    char pad_ec[4];
    void* field_f0;
    void* field_f4;
    void* field_f8;
    void destructor();
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_5A3FA0(void*);
extern "C" void __cdecl sub_5402B0(void*);

void TimerService::destructor()
{
    sub_5A3FA0(&field_f4);
    sub_62FC62(field_f8);
    field_f8 = 0;

    void* p = field_f0;
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*))vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(void*))vt2[2])(p);
            }
        }
    }

    if (this != 0) {
        *(void**)((char*)this + 0xe8) = (void*)0x795b60;
    }

    *(void**)this = (void*)0x7b4fa4;
    *(void**)((char*)this + 4) = (void*)0x7b4f9c;
    *(void**)((char*)this + 0x10) = (void*)0x7b4f94;
    *(void**)((char*)this + 0x14) = (void*)0x7b4f84;
    *(void**)((char*)this + 0x2c) = (void*)0x7b4f74;
    *(void**)((char*)this + 0x44) = (void*)0x7b4f64;
    *(void**)((char*)this + 0x5c) = (void*)0x7b4f54;
    *(void**)((char*)this + 0x74) = (void*)0x7b4f44;
    *(void**)((char*)this + 0x8c) = (void*)0x7b4f34;

    sub_5402B0(this);
}
