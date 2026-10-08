// from server: 80% by colin
// roc 2007-08 005c79e0  unit: lua_exception  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c79e0
//
// 005c79e0  83ec08               sub esp, 8
// 005c79e3  8d0424               lea eax, [esp]
// 005c79e6  50                   push eax
// 005c79e7  68ac997b00           push 0x7b99ac
// 005c79ec  51                   push ecx
// 005c79ed  ff15e8e87700         call dword ptr [0x77e8e8]
// 005c79f3  83c40c               add esp, 0xc
// 005c79f6  83f801               cmp eax, 1
// 005c79f9  751f                 jne 0x5c7a1a
// 005c79fb  dd0424               fld qword ptr [esp]
// 005c79fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c7a02  83ec08               sub esp, 8
// 005c7a05  dd1c24               fstp qword ptr [esp]
// 005c7a08  52                   push edx
// 005c7a09  e86261ffff           call 0x5bdb70
// 005c7a0e  83c40c               add esp, 0xc
// 005c7a11  b801000000           mov eax, 1
// 005c7a16  83c408               add esp, 8
// 005c7a19  c3                   ret 
// 005c7a1a  33c0                 xor eax, eax
// 005c7a1c  83c408               add esp, 8
// 005c7a1f  c3                   ret 

extern "C" int __cdecl fscanf(void*, const char*, ...);
extern "C" void __cdecl func_005bdb70(double, int);

struct S_func_005c79e0
{
    int f();
};

int S_func_005c79e0::f()
{
    double d;
    if (fscanf((void*)0x7b99ac, "HD;H@Wr", &d) == 1)
    {
        func_005bdb70(d, *(int*)((char*)&d + 12));
        return 1;
    }
    return 0;
}
