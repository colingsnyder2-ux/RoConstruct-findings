// from server: 55% by colin
// roc 2007-08 0068acc0  unit: CXTPControlTabWorkspace  size: 637 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068acc0

extern "C" unsigned int __stdcall RegisterWindowMessageA(const char*);

struct CXTPControlTabWorkspace {
    void Construct();
};

// declarations for called functions
extern "C" void __cdecl sub_6305da();
extern "C" void __cdecl sub_68a120();
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_703040();
extern "C" void* __cdecl sub_6b3010();
extern "C" void __cdecl sub_6304c0();
extern "C" void __cdecl sub_738a1e();
extern "C" void __cdecl sub_64dfd0();
extern "C" void __cdecl sub_64d380();
extern "C" void __cdecl sub_738514();
extern "C" void __cdecl sub_694ae0();
extern "C" void __cdecl sub_6304ba();

void CXTPControlTabWorkspace::Construct()
{
    sub_6305da();
    *(void**)((char*)this + 0x54) = (void*)0x7cf7a0;
    *(void**)((char*)this) = (void*)0x7cfd64;
    *(void**)((char*)this + 0x54) = (void*)0x7cfd50;
    sub_68a120();
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0xbc) = 1;
    void* p = sub_62fef6(0x134);
    if (p != 0) {
        sub_703040();
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x8c) = p;
    *(int*)((char*)p + 0x28) = 1;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x94) = 1;
    *(int*)((char*)this + 0x5c) = 0;
    *(int*)((char*)this + 0x64) = 0;
    *(int*)((char*)this + 0x60) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 1;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0xb0) = 1;
    *(int*)((char*)this + 0xc4) = 0;
    *(int*)((char*)this + 0x118) = 0;
    *(int*)((char*)this + 0xcc) = 1;
    *(int*)((char*)this + 0x114) = 0;
    *(int*)((char*)this + 0xd0) = 5;
    *(int*)((char*)this + 0x110) = 0;
    void* obj = sub_6b3010();
    *(int*)((char*)this + 0xa0) = (*(int(__thiscall**)(void*, int))obj)(obj, 0x26f2);
    obj = sub_6b3010();
    *(int*)((char*)this + 0xa4) = (*(int(__thiscall**)(void*, int))obj)(obj, 0x26f3);
    obj = sub_6b3010();
    *(int*)((char*)this + 0xa8) = (*(int(__thiscall**)(void*, int))obj)(obj, 0x2394);
    obj = sub_6b3010();
    *(int*)((char*)this + 0xac) = (*(int(__thiscall**)(void*, int))obj)(obj, 0x2395);
    *(int*)((char*)this + 0xc0) = 1;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0xb4) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(unsigned int*)((char*)this + 0x11c) = RegisterWindowMessageA((const char*)0x7cfd2c);
    *(unsigned int*)((char*)this + 0x120) = RegisterWindowMessageA((const char*)0x7cfd10);
    sub_6304c0();
    sub_738a1e();
    sub_64dfd0();
    sub_64d380();
    *(int*)((char*)this + 0xb8) = 0;
    void* p2 = sub_62fef6(0x3c);
    if (p2 != 0) {
        sub_738514();
        *(void**)p2 = (void*)0x7cfc6c;
    } else {
        p2 = 0;
    }
    *(void**)((char*)this + 0xec) = p2;
    *(void**)((char*)p2 + 0x38) = this;
    void* p3 = sub_62fef6(0xa4);
    if (p3 != 0) {
        sub_694ae0();
    } else {
        p3 = 0;
    }
    *(void**)((char*)this + 0xc8) = p3;
    *(int*)((char*)this + 0x58) = 0;
    *(int*)((char*)this + 0xd4) = 0;
    *(int*)((char*)this + 0xd8) = 1;
    sub_6304ba();
}
