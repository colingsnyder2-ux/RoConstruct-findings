// roc 2009-06 006dad50  unit: RBX::AssemblyStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dad50
//
// 006dad50  56                   push esi
// 006dad51  57                   push edi
// 006dad52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dad56  57                   push edi
// 006dad57  8bf1                 mov esi, ecx
// 006dad59  e8e2b00100           call 0x6f5e40
// 006dad5e  56                   push esi
// 006dad5f  8bcf                 mov ecx, edi
// 006dad61  e8daaeffff           call 0x6d5c40
// 006dad66  5f                   pop edi
// 006dad67  5e                   pop esi
// 006dad68  c20400               ret 4
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
