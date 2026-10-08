// from server: 72% by colin
// roc 2007-08 00411e30  unit: boost::bad_any_cast  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411e30
//
// 00411e30  51                   push ecx
// 00411e31  56                   push esi
// 00411e32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00411e36  83c104               add ecx, 4
// 00411e39  51                   push ecx
// 00411e3a  56                   push esi
// 00411e3b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00411e43  e848feffff           call 0x411c90
// 00411e48  83c408               add esp, 8
// 00411e4b  8bc6                 mov eax, esi
// 00411e4d  5e                   pop esi
// 00411e4e  59                   pop ecx
// 00411e4f  c20400               ret 4

struct S {
    char pad[4];
    S* f(S* arg);
};

extern void G1_func_00411c90(S*, S*);

S* S::f(S* arg)
{
    G1_func_00411c90(this + 1, arg);
    return arg;
}
