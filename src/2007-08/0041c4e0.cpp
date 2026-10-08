// from server: 100% by colin
// roc 2007-08 0041c4e0  unit: InsertDecal  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041c4e0
//
// 0041c4e0  51                   push ecx
// 0041c4e1  56                   push esi
// 0041c4e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041c4e6  56                   push esi
// 0041c4e7  c744240800000000     mov dword ptr [esp + 8], 0
// 0041c4ef  e8ccfeffff           call 0x41c3c0
// 0041c4f4  83c404               add esp, 4
// 0041c4f7  8bc6                 mov eax, esi
// 0041c4f9  5e                   pop esi
// 0041c4fa  59                   pop ecx
// 0041c4fb  c20400               ret 4

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
