// roc 2011-06 007b41d0  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b41d0
//
// 007b41d0  56                   push esi
// 007b41d1  57                   push edi
// 007b41d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b41d6  57                   push edi
// 007b41d7  8bf1                 mov esi, ecx
// 007b41d9  e832ac0300           call 0x7eee10
// 007b41de  56                   push esi
// 007b41df  8bcf                 mov ecx, edi
// 007b41e1  e81adbfeff           call 0x7a1d00
// 007b41e6  5f                   pop edi
// 007b41e7  5e                   pop esi
// 007b41e8  c20400               ret 4
// copied from an identical function in another client (function ?onPrimitiveAdded@JointStage@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
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
