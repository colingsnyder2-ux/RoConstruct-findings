// from server: 100% by colin
// roc 2007-08 00603c40  unit: RBX::JointStage  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603c40
//
// 00603c40  56                   push esi
// 00603c41  57                   push edi
// 00603c42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00603c46  57                   push edi
// 00603c47  8bf1                 mov esi, ecx
// 00603c49  e892ffffff           call 0x603be0
// 00603c4e  56                   push esi
// 00603c4f  8bcf                 mov ecx, edi
// 00603c51  e8ea540000           call 0x609140
// 00603c56  5f                   pop edi
// 00603c57  5e                   pop esi
// 00603c58  c20400               ret 4

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
