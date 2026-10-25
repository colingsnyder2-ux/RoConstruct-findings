// from server: 100% by colin
// roc 2008-06 005e54c0  unit: RBX::JointsService  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e54c0
//
// 005e54c0  56                   push esi
// 005e54c1  57                   push edi
// 005e54c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e54c6  57                   push edi
// 005e54c7  8bf1                 mov esi, ecx
// 005e54c9  e85259f7ff           call 0x55ae20
// 005e54ce  6a00                 push 0
// 005e54d0  68709f9300           push 0x939f70
// 005e54d5  687c909200           push 0x92907c
// 005e54da  6a00                 push 0
// 005e54dc  57                   push edi
// 005e54dd  e8e4c20b00           call 0x6a17c6
// 005e54e2  83c414               add esp, 0x14
// 005e54e5  85c0                 test eax, eax
// 005e54e7  740c                 je 0x5e54f5
// 005e54e9  50                   push eax
// 005e54ea  8d8e38010000         lea ecx, [esi + 0x138]
// 005e54f0  e8cb7fffff           call 0x5dd4c0
// 005e54f5  5f                   pop edi
// 005e54f6  5e                   pop esi
// 005e54f7  c20400               ret 4

struct IRenderable;

struct IRenderableBucket {
    void onAdded(IRenderable* r);
};

struct JointsService {
    char pad[0x138];
    IRenderableBucket bucket;
    void addInstance(void* inst);
};

struct Other {
    void sub_55AE20(void* inst);
};

extern "C" void* __cdecl sub_6A17C6(void* inst, int a, void* b, void* c, int d);

void JointsService::addInstance(void* inst) {
    ((Other*)this)->sub_55AE20(inst);
    void* r = sub_6A17C6(inst, 0, (void*)0x92907c, (void*)0x939f70, 0);
    if (r) {
        bucket.onAdded((IRenderable*)r);
    }
}
