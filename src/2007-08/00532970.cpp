// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_5402B0();

struct VSelectionNotifier {
    void destroy();
};

void VSelectionNotifier::destroy()
{
    *(int*)((char*)this + 0x00) = 0x7a53cc;
    *(int*)((char*)this + 0x04) = 0x7a53c0;
    *(int*)((char*)this + 0x10) = 0x7a53b8;
    *(int*)((char*)this + 0x14) = 0x7a53a8;
    *(int*)((char*)this + 0x2c) = 0x7a5398;
    *(int*)((char*)this + 0x44) = 0x7a5388;
    *(int*)((char*)this + 0x5c) = 0x7a5378;
    *(int*)((char*)this + 0x74) = 0x7a5368;
    *(int*)((char*)this + 0x8c) = 0x7a5358;
    *(int*)((char*)this + 0xe8) = 0x7a5348;
    *(int*)((char*)this + 0x100) = 0x7a533c;

    void* p110 = *(void**)((char*)this + 0x110);
    if (p110 != 0) {
        sub_62FC62(p110);
    }
    *(int*)((char*)this + 0x110) = 0;
    *(int*)((char*)this + 0x114) = 0;
    *(int*)((char*)this + 0x118) = 0;

    char* p108 = *(char**)((char*)this + 0x108);
    if (p108 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(p108 + 4), -1) == 1) {
            (*(void(__thiscall**)(char*))(*(int*)p108 + 4))(p108);
            if (_InterlockedExchangeAdd((volatile long*)(p108 + 8), -1) == 1) {
                (*(void(__thiscall**)(char*))(*(int*)p108 + 8))(p108);
            }
        }
    }

    *(int*)((char*)this + 0x100) = 0x794a20;
    *(int*)((char*)this + 0xe8) = 0x7a532c;

    void* pF0 = *(void**)((char*)this + 0xf0);
    if (pF0 != 0) {
        sub_62FC62(pF0);
    }
    *(int*)((char*)this + 0xf0) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0xf8) = 0;

    *(int*)((char*)this + 0x00) = 0x7a52e4;
    *(int*)((char*)this + 0x04) = 0x7a52d8;
    *(int*)((char*)this + 0x10) = 0x7a52d0;
    *(int*)((char*)this + 0x14) = 0x7a52c0;
    *(int*)((char*)this + 0x2c) = 0x7a52b0;
    *(int*)((char*)this + 0x44) = 0x7a52a0;
    *(int*)((char*)this + 0x5c) = 0x7a5290;
    *(int*)((char*)this + 0x74) = 0x7a5280;
    *(int*)((char*)this + 0x8c) = 0x7a5270;

    sub_5402B0();
}
