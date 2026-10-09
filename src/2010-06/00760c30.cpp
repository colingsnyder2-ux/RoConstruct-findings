// roc 2010-06 00760c30  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00760c30
//
// 00760c30  56                   push esi
// 00760c31  57                   push edi
// 00760c32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00760c36  57                   push edi
// 00760c37  8bf1                 mov esi, ecx
// 00760c39  e892b70200           call 0x78c3d0
// 00760c3e  56                   push esi
// 00760c3f  8bcf                 mov ecx, edi
// 00760c41  e86afefeff           call 0x750ab0
// 00760c46  5f                   pop edi
// 00760c47  5e                   pop esi
// 00760c48  c20400               ret 4
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
