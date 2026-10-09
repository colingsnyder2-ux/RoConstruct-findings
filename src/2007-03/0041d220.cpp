// roc 2007-03 0041d220  unit: seg_00410000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041d220
//
// 0041d220  51                   push ecx
// 0041d221  56                   push esi
// 0041d222  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041d226  56                   push esi
// 0041d227  c744240800000000     mov dword ptr [esp + 8], 0
// 0041d22f  e8ccfeffff           call 0x41d100
// 0041d234  83c404               add esp, 4
// 0041d237  8bc6                 mov eax, esi
// 0041d239  5e                   pop esi
// 0041d23a  59                   pop ecx
// 0041d23b  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_0041c4e0@ns_ROCX000013@@QAEPAXPAX@Z)

namespace ns_ROCX000013 {
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
