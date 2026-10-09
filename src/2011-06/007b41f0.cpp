// roc 2011-06 007b41f0  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b41f0
//
// 007b41f0  56                   push esi
// 007b41f1  57                   push edi
// 007b41f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b41f6  57                   push edi
// 007b41f7  8bf1                 mov esi, ecx
// 007b41f9  e812ac0300           call 0x7eee10
// 007b41fe  56                   push esi
// 007b41ff  8bcf                 mov ecx, edi
// 007b4201  e8eadafeff           call 0x7a1cf0
// 007b4206  5f                   pop edi
// 007b4207  5e                   pop esi
// 007b4208  c20400               ret 4
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
