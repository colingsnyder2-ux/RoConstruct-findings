// from server: 68% by colin
// roc 2007-08 00603a80  unit: RBX::JointStage  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603a80
//
// 00603a80  83ec0c               sub esp, 0xc
// 00603a83  56                   push esi
// 00603a84  8b742414             mov esi, dword ptr [esp + 0x14]
// 00603a88  57                   push edi
// 00603a89  8bf9                 mov edi, ecx
// 00603a8b  57                   push edi
// 00603a8c  8bce                 mov ecx, esi
// 00603a8e  e89d560000           call 0x609130
// 00603a93  8d442418             lea eax, [esp + 0x18]
// 00603a97  50                   push eax
// 00603a98  8d4c240c             lea ecx, [esp + 0xc]
// 00603a9c  51                   push ecx
// 00603a9d  8d4f10               lea ecx, [edi + 0x10]
// 00603aa0  89742420             mov dword ptr [esp + 0x20], esi
// 00603aa4  e807effdff           call 0x5e29b0
// 00603aa9  6a00                 push 0
// 00603aab  8bce                 mov ecx, esi
// 00603aad  e88ef5faff           call 0x5b3040
// 00603ab2  8bce                 mov ecx, esi
// 00603ab4  e807f5faff           call 0x5b2fc0
// 00603ab9  85c0                 test eax, eax
// 00603abb  7509                 jne 0x603ac6
// 00603abd  8b4f08               mov ecx, dword ptr [edi + 8]
// 00603ac0  56                   push esi
// 00603ac1  e81a370200           call 0x6271e0
// 00603ac6  5f                   pop edi
// 00603ac7  5e                   pop esi
// 00603ac8  83c40c               add esp, 0xc
// 00603acb  c20400               ret 4

struct IStage;
struct World;
struct Edge;
struct Primitive;
struct Joint;

struct IWorldStage {
    void onEdgeAdded(Edge* e);
    void onEdgeRemoving(Edge* e);
};

struct JointStage : IWorldStage {
    char pad[8];
    void onPrimitiveAdded(Primitive* p);
    void onPrimitiveRemoving(Primitive* p);
};

extern "C" void __stdcall sub_609130(IWorldStage* self, JointStage* stage);
extern "C" void __stdcall sub_5e29b0(void* self, void* a, void* b);
extern "C" void __stdcall sub_5b3040(void* self, int a);
extern "C" int __stdcall sub_5b2fc0(void* self);
extern "C" void __stdcall sub_6271e0(void* self, void* a);

void JointStage::onPrimitiveAdded(Primitive* p)
{
    sub_609130((IWorldStage*)p, this);
    void* local1;
    void* local2;
    local2 = p;
    sub_5e29b0((char*)this + 0x10, &local1, &local2);
    sub_5b3040(p, 0);
    if (sub_5b2fc0(p) == 0) {
        sub_6271e0(*(void**)((char*)this + 8), p);
    }
}
