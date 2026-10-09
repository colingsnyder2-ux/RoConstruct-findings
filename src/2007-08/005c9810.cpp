// from server: 69% by colin
// roc 2007-08 005c9810  unit: lua_exception  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9810
//
// 005c9810  51                   push ecx
// 005c9811  56                   push esi
// 005c9812  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9816  8d442404             lea eax, [esp + 4]
// 005c981a  50                   push eax
// 005c981b  6a01                 push 1
// 005c981d  56                   push esi
// 005c981e  e8ed5bffff           call 0x5bf410
// 005c9823  dd1c24               fstp qword ptr [esp]
// 005c9826  ff1558e87700         call dword ptr [0x77e858]
// 005c982c  dd5c2404             fstp qword ptr [esp + 4]
// 005c9830  83c404               add esp, 4
// 005c9833  56                   push esi
// 005c9834  e83743ffff           call 0x5bdb70
// 005c9839  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c983d  51                   push ecx
// 005c983e  56                   push esi
// 005c983f  e84c43ffff           call 0x5bdb90
// 005c9844  83c414               add esp, 0x14
// 005c9847  b802000000           mov eax, 2
// 005c984c  5e                   pop esi
// 005c984d  59                   pop ecx
// 005c984e  c3                   ret 

extern "C" __declspec(dllimport) double __stdcall frexp(double, int*);

extern "C" double __cdecl sub_5BF410(int, int, int*);
extern "C" void __cdecl sub_5BDB70(int);
extern "C" void __cdecl sub_5BDB90(int, int);

int __cdecl sub_5C9810(int a)
{
    int e;
    double m = sub_5BF410(a, 1, &e);
    double r = frexp(m, &e);
    sub_5BDB70(a);
    sub_5BDB90(a, e);
    return 2;
}
