// from server: 77% by colin
// roc 2007-08 0060a480  unit: RBX::RotatePJoint  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a480
//
// 0060a480  83ec08               sub esp, 8
// 0060a483  56                   push esi
// 0060a484  57                   push edi
// 0060a485  8bf9                 mov edi, ecx
// 0060a487  8b770c               mov esi, dword ptr [edi + 0xc]
// 0060a48a  81c6b0000000         add esi, 0xb0
// 0060a490  807e0400             cmp byte ptr [esi + 4], 0
// 0060a494  740e                 je 0x60a4a4
// 0060a496  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060a499  8b460c               mov eax, dword ptr [esi + 0xc]
// 0060a49c  ffd0                 call eax
// 0060a49e  d91e                 fstp dword ptr [esi]
// 0060a4a0  c6460400             mov byte ptr [esi + 4], 0
// 0060a4a4  d906                 fld dword ptr [esi]
// 0060a4a6  8b7708               mov esi, dword ptr [edi + 8]
// 0060a4a9  81c6b0000000         add esi, 0xb0
// 0060a4af  d95c2408             fstp dword ptr [esp + 8]
// 0060a4b3  807e0400             cmp byte ptr [esi + 4], 0
// 0060a4b7  740e                 je 0x60a4c7
// 0060a4b9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060a4bc  8b560c               mov edx, dword ptr [esi + 0xc]
// 0060a4bf  ffd2                 call edx
// 0060a4c1  d91e                 fstp dword ptr [esi]
// 0060a4c3  c6460400             mov byte ptr [esi + 4], 0
// 0060a4c7  d906                 fld dword ptr [esi]
// 0060a4c9  5f                   pop edi
// 0060a4ca  d9542408             fst dword ptr [esp + 8]
// 0060a4ce  5e                   pop esi
// 0060a4cf  d81c24               fcomp dword ptr [esp]
// 0060a4d2  dfe0                 fnstsw ax
// 0060a4d4  f6c441               test ah, 0x41
// 0060a4d7  8d0424               lea eax, [esp]
// 0060a4da  7404                 je 0x60a4e0
// 0060a4dc  8d442404             lea eax, [esp + 4]
// 0060a4e0  d900                 fld dword ptr [eax]
// 0060a4e2  83c408               add esp, 8
// 0060a4e5  c3                   ret 

struct CachedFloat {
    float value;
    char valid;
    char pad[3];
    void* obj;
    float (__stdcall *fn)();
};

struct Primitive {
    char pad[0xb0];
    CachedFloat cached;
};

struct RotatePJoint {
    char pad[8];
    Primitive* holePrim;
    Primitive* axlePrim;
    float getAngle();
};

float RotatePJoint::getAngle() {
    float a;
    float b;
    CachedFloat* c;
    c = &axlePrim->cached;
    if (c->valid) {
        c->value = c->fn();
        c->valid = 0;
    }
    a = c->value;
    c = &holePrim->cached;
    if (c->valid) {
        c->value = c->fn();
        c->valid = 0;
    }
    b = c->value;
    if (a < b) return a;
    return b;
}
