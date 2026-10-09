// roc 2011-06 008de7e0  unit: CXTPPropertyGridInplaceButtons  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de7e0
//
// 008de7e0  56                   push esi
// 008de7e1  8bf1                 mov esi, ecx
// 008de7e3  8d8e84000000         lea ecx, [esi + 0x84]
// 008de7e9  ff15082ea400         call dword ptr [0xa42e08]
// 008de7ef  8d8e80000000         lea ecx, [esi + 0x80]
// 008de7f5  ff15082ea400         call dword ptr [0xa42e08]
// 008de7fb  8d4e7c               lea ecx, [esi + 0x7c]
// 008de7fe  ff15082ea400         call dword ptr [0xa42e08]
// 008de804  8d4e78               lea ecx, [esi + 0x78]
// 008de807  ff15082ea400         call dword ptr [0xa42e08]
// 008de80d  8d4e74               lea ecx, [esi + 0x74]
// 008de810  ff15082ea400         call dword ptr [0xa42e08]
// 008de816  8d4e70               lea ecx, [esi + 0x70]
// 008de819  ff15082ea400         call dword ptr [0xa42e08]
// 008de81f  8bce                 mov ecx, esi
// 008de821  5e                   pop esi
// 008de822  e9d3dd0e00           jmp 0x9cc5fa
// copied from an identical function in another client (function ?func@CXTPPropertyGridInplaceButtons@ns_ROCX000026@ns_ROCX00002a@@QAEXXZ)

namespace ns_ROCX000026 {
extern char G;

char* fn_ROCX000026()
{
    return &G;
}
}
