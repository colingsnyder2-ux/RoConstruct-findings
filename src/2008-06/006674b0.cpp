// from server: 100% by atomic.potato
// roc 2008-06 006674b0  unit: RBX::HUMAN::StrafingNoPhysics  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006674b0
//
// 006674b0  d905a49b8100         fld dword ptr [0x819ba4]
// 006674b6  8b442404             mov eax, dword ptr [esp + 4]
// 006674ba  56                   push esi
// 006674bb  83ec08               sub esp, 8
// 006674be  d95c2404             fstp dword ptr [esp + 4]
// 006674c2  8bf1                 mov esi, ecx
// 006674c4  d9055ccc8400         fld dword ptr [0x84cc5c]
// 006674ca  d91c24               fstp dword ptr [esp]
// 006674cd  50                   push eax
// 006674ce  e88d710000           call 0x66e660
// 006674d3  c70654ce8400         mov dword ptr [esi], 0x84ce54
// 006674d9  c746044cce8400       mov dword ptr [esi + 4], 0x84ce4c
// 006674e0  8bc6                 mov eax, esi
// 006674e2  5e                   pop esi
// 006674e3  c20400               ret 4

struct GroupDragTool {
    void* vtable;
    void* vtable2;
    char pad[0x98];
    float fieldA0;
    float fieldA4;
    GroupDragTool* construct(void* a, float x, float y);
};

struct StrafingNoPhysics {
    void* vtable;
    void* vtable2;
    StrafingNoPhysics* init(void* a);
};

extern float g_819ba4;
extern float g_84cc5c;
extern void* g_84ce54;
extern void* g_84ce4c;

StrafingNoPhysics* StrafingNoPhysics::init(void* a) {
    float f0 = g_819ba4;
    float f1 = g_84cc5c;
    ((GroupDragTool*)this)->construct(a, f0, f1);
    *(void**)this = &g_84ce54;
    *(void**)((char*)this + 4) = &g_84ce4c;
    return this;
}
