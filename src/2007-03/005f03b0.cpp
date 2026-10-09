// roc 2007-03 005f03b0  unit: seg_005f0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f03b0
//
// 005f03b0  56                   push esi
// 005f03b1  57                   push edi
// 005f03b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f03b6  57                   push edi
// 005f03b7  8bf1                 mov esi, ecx
// 005f03b9  e892ffffff           call 0x5f0350
// 005f03be  56                   push esi
// 005f03bf  8bcf                 mov ecx, edi
// 005f03c1  e8ea9dffff           call 0x5ea1b0
// 005f03c6  5f                   pop edi
// 005f03c7  5e                   pop esi
// 005f03c8  c20400               ret 4
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
