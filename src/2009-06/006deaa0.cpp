// roc 2009-06 006deaa0  unit: RBX::MovingAssemblyStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006deaa0
//
// 006deaa0  56                   push esi
// 006deaa1  57                   push edi
// 006deaa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006deaa6  57                   push edi
// 006deaa7  8bf1                 mov esi, ecx
// 006deaa9  e842fbffff           call 0x6de5f0
// 006deaae  56                   push esi
// 006deaaf  8bcf                 mov ecx, edi
// 006deab1  e88a71ffff           call 0x6d5c40
// 006deab6  5f                   pop edi
// 006deab7  5e                   pop esi
// 006deab8  c20400               ret 4
// copied from an identical function in another client (function ?onPrimitiveAdded@JointStage@ns_ROCX00000d@@QAEXPAX@Z)

namespace ns_ROCX00000d {
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
