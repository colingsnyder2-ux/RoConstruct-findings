// roc 2008-06 0041e650  unit: InsertDecal  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e650
//
// 0041e650  51                   push ecx
// 0041e651  56                   push esi
// 0041e652  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041e656  56                   push esi
// 0041e657  c744240800000000     mov dword ptr [esp + 8], 0
// 0041e65f  e86cfeffff           call 0x41e4d0
// 0041e664  83c404               add esp, 4
// 0041e667  8bc6                 mov eax, esi
// 0041e669  5e                   pop esi
// 0041e66a  59                   pop ecx
// 0041e66b  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041c4e0@ns_ROCX000024@@QAEPAXPAX@Z)

namespace ns_ROCX000024 {
struct S_func_0041c4e0 {
    void* f(void* p);
};

extern "C" void __cdecl G1_func_0041c3c0(void*);

void* S_func_0041c4e0::f(void* p)
{
    volatile int local = 0;
    G1_func_0041c3c0(p);
    return p;
}
}
