// roc 2010-06 00760bf0  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00760bf0
//
// 00760bf0  56                   push esi
// 00760bf1  57                   push edi
// 00760bf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00760bf6  57                   push edi
// 00760bf7  8bf1                 mov esi, ecx
// 00760bf9  e8d2b70200           call 0x78c3d0
// 00760bfe  56                   push esi
// 00760bff  8bcf                 mov ecx, edi
// 00760c01  e8bafefeff           call 0x750ac0
// 00760c06  5f                   pop edi
// 00760c07  5e                   pop esi
// 00760c08  c20400               ret 4
// copied from an identical function in another client (function ?onPrimitiveAdded@JointStage@ns_ROCX000000@@QAEXPAX@Z)

namespace ns_ROCX000000 {
struct IWorldStage {
    void onPrimitiveAdded(void* p);
};

struct JointStage : IWorldStage {
    void onPrimitiveAdded(void* p);
};

void JointStage::onPrimitiveAdded(void* p)
{
    IWorldStage::onPrimitiveAdded(p);
    ((IWorldStage*)p)->onPrimitiveAdded(this);
}
}
