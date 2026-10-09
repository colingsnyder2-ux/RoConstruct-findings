// roc 2011-06 008a4990  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4990
//
// 008a4990  56                   push esi
// 008a4991  57                   push edi
// 008a4992  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a4996  8bf1                 mov esi, ecx
// 008a4998  81ffbf2f0000         cmp edi, 0x2fbf
// 008a499e  7505                 jne 0x8a49a5
// 008a49a0  e8fbfdffff           call 0x8a47a0
// 008a49a5  57                   push edi
// 008a49a6  8bce                 mov ecx, esi
// 008a49a8  e8a36ef7ff           call 0x81b850
// 008a49ad  5f                   pop edi
// 008a49ae  5e                   pop esi
// 008a49af  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX000025@ns_ROCX000018@@QAEXI@Z)

namespace ns_ROCX000025 {
struct S_func_0069a500 {
    char pad0[580];
    int m_x;
    int f();
};
int S_func_0069a500::f()
{
    return m_x;
}
}
