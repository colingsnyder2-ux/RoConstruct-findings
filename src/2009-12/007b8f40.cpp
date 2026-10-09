// roc 2009-12 007b8f40  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b8f40
//
// 007b8f40  56                   push esi
// 007b8f41  57                   push edi
// 007b8f42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b8f46  57                   push edi
// 007b8f47  8bf1                 mov esi, ecx
// 007b8f49  e822100200           call 0x7d9f70
// 007b8f4e  56                   push esi
// 007b8f4f  8bcf                 mov ecx, edi
// 007b8f51  e8da9fffff           call 0x7b2f30
// 007b8f56  5f                   pop edi
// 007b8f57  5e                   pop esi
// 007b8f58  c20400               ret 4
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
