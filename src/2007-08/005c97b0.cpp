// from server: 94% by colin
// roc 2007-08 005c97b0  unit: lua_exception  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c97b0
//
// 005c97b0  56                   push esi
// 005c97b1  8b742408             mov esi, dword ptr [esp + 8]
// 005c97b5  6a01                 push 1
// 005c97b7  56                   push esi
// 005c97b8  e8535cffff           call 0x5bf410
// 005c97bd  dc0d289d7b00         fmul qword ptr [0x7b9d28]
// 005c97c3  dd1c24               fstp qword ptr [esp]
// 005c97c6  56                   push esi
// 005c97c7  e8a443ffff           call 0x5bdb70
// 005c97cc  83c40c               add esp, 0xc
// 005c97cf  b801000000           mov eax, 1
// 005c97d4  5e                   pop esi
// 005c97d5  c3                   ret 

extern "C" int __cdecl sub_5bf410(int, int);
extern "C" int __cdecl sub_5bdb70(int, double);
extern double dbl_7b9d28;

int __cdecl sub_5c97b0(int a)
{
    sub_5bf410(a, 1);
    sub_5bdb70(a, dbl_7b9d28);
    return 1;
}
