// roc 2009-06 006dad30  unit: RBX::AssemblyStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dad30
//
// 006dad30  56                   push esi
// 006dad31  57                   push edi
// 006dad32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dad36  57                   push edi
// 006dad37  8bf1                 mov esi, ecx
// 006dad39  e802b10100           call 0x6f5e40
// 006dad3e  56                   push esi
// 006dad3f  8bcf                 mov ecx, edi
// 006dad41  e80aafffff           call 0x6d5c50
// 006dad46  5f                   pop edi
// 006dad47  5e                   pop esi
// 006dad48  c20400               ret 4
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
