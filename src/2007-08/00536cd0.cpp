// from server: 47% by colin
// roc 2007-08 00536cd0  unit: boost::any::placeholder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536cd0
//
// 00536cd0  64a100000000         mov eax, dword ptr fs:[0]
// 00536cd6  6aff                 push -1
// 00536cd8  68c80a7500           push 0x750ac8
// 00536cdd  50                   push eax
// 00536cde  64892500000000       mov dword ptr fs:[0], esp
// 00536ce5  83ec28               sub esp, 0x28
// 00536ce8  833900               cmp dword ptr [ecx], 0
// 00536ceb  7516                 jne 0x536d03
// 00536ced  8d0c24               lea ecx, [esp]
// 00536cf0  e80bcfedff           call 0x413c00
// 00536cf5  50                   push eax
// 00536cf6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00536cfe  e86dd4edff           call 0x414170
// 00536d03  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00536d07  8b542438             mov edx, dword ptr [esp + 0x38]
// 00536d0b  50                   push eax
// 00536d0c  8b4104               mov eax, dword ptr [ecx + 4]
// 00536d0f  8b4908               mov ecx, dword ptr [ecx + 8]
// 00536d12  52                   push edx
// 00536d13  50                   push eax
// 00536d14  ffd1                 call ecx
// 00536d16  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00536d1a  83c40c               add esp, 0xc
// 00536d1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00536d24  83c434               add esp, 0x34
// 00536d27  c20800               ret 8

struct Placeholder
{
    void* vfptr;
    void* f4;
    void* f8;

    void func(int a, int b);
};

extern "C" void* __cdecl sub_413C00(void*);
extern "C" void __cdecl sub_414170(void*);

void Placeholder::func(int a, int b)
{
    if (*(void**)this == 0)
    {
        char buf[0x28];
        void* p = sub_413C00(buf);
        sub_414170(p);
    }
    void (*fn)(void*, int, int) = (void (*)(void*, int, int))f8;
    fn(f4, a, b);
}
