// roc 2009-12 007b8f20  unit: RBX::SleepStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b8f20
//
// 007b8f20  56                   push esi
// 007b8f21  57                   push edi
// 007b8f22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b8f26  57                   push edi
// 007b8f27  8bf1                 mov esi, ecx
// 007b8f29  e842100200           call 0x7d9f70
// 007b8f2e  56                   push esi
// 007b8f2f  8bcf                 mov ecx, edi
// 007b8f31  e80aa0ffff           call 0x7b2f40
// 007b8f36  5f                   pop edi
// 007b8f37  5e                   pop esi
// 007b8f38  c20400               ret 4
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
