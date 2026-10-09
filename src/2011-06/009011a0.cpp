// roc 2011-06 009011a0  unit: CXTWindowMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009011a0
//
// 009011a0  56                   push esi
// 009011a1  57                   push edi
// 009011a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009011a6  57                   push edi
// 009011a7  8bf1                 mov esi, ecx
// 009011a9  e8f2feffff           call 0x9010a0
// 009011ae  85c0                 test eax, eax
// 009011b0  7417                 je 0x9011c9
// 009011b2  8b10                 mov edx, dword ptr [eax]
// 009011b4  8bc8                 mov ecx, eax
// 009011b6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 009011b9  6a00                 push 0
// 009011bb  ffd0                 call eax
// 009011bd  57                   push edi
// 009011be  8bce                 mov ecx, esi
// 009011c0  e8dbfeffff           call 0x9010a0
// 009011c5  85c0                 test eax, eax
// 009011c7  75e9                 jne 0x9011b2
// 009011c9  5f                   pop edi
// 009011ca  5e                   pop esi
// 009011cb  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@ns_ROCX000004@ns_ROCX0000ad@@QAEXH@Z)

namespace ns_ROCX000004 {
struct B_func_00767680 { virtual ~B_func_00767680(); };
struct S_func_00767680 : B_func_00767680 { ~S_func_00767680(); };
S_func_00767680::~S_func_00767680()
{
}
}
