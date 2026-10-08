// from server: 84% by colin
// roc 2007-08 00411e00  unit: boost::bad_any_cast  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411e00
//
// 00411e00  51                   push ecx
// 00411e01  56                   push esi
// 00411e02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00411e06  83c104               add ecx, 4
// 00411e09  51                   push ecx
// 00411e0a  56                   push esi
// 00411e0b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00411e13  e8c8fdffff           call 0x411be0
// 00411e18  83c408               add esp, 8
// 00411e1b  8bc6                 mov eax, esi
// 00411e1d  5e                   pop esi
// 00411e1e  59                   pop ecx
// 00411e1f  c20400               ret 4

struct S_func_00411e00 {
    char pad[4];
    int m_field4;
    S_func_00411e00* f(S_func_00411e00* other);
};

extern "C" void __stdcall sub_00411be0(S_func_00411e00* a, S_func_00411e00** b);

S_func_00411e00* S_func_00411e00::f(S_func_00411e00* other)
{
    S_func_00411e00* tmp = 0;
    sub_00411be0(other, &tmp);
    return other;
}
