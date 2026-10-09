// from server: 44% by colin
// roc 2007-08 005ac270  unit: RBX::World  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac270
//
// 005ac270  83ec0c               sub esp, 0xc
// 005ac273  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ac277  d900                 fld dword ptr [eax]
// 005ac279  8d4c2408             lea ecx, [esp + 8]
// 005ac27d  d9e1                 fabs 
// 005ac27f  d91424               fst dword ptr [esp]
// 005ac282  d94004               fld dword ptr [eax + 4]
// 005ac285  d9e1                 fabs 
// 005ac287  d9542404             fst dword ptr [esp + 4]
// 005ac28b  d94008               fld dword ptr [eax + 8]
// 005ac28e  d9e1                 fabs 
// 005ac290  d9542408             fst dword ptr [esp + 8]
// 005ac294  ded9                 fcompp 
// 005ac296  dfe0                 fnstsw ax
// 005ac298  f6c441               test ah, 0x41
// 005ac29b  7404                 je 0x5ac2a1
// 005ac29d  8d4c2404             lea ecx, [esp + 4]
// 005ac2a1  d819                 fcomp dword ptr [ecx]
// 005ac2a3  dfe0                 fnstsw ax
// 005ac2a5  f6c405               test ah, 5
// 005ac2a8  7a06                 jp 0x5ac2b0
// 005ac2aa  d901                 fld dword ptr [ecx]
// 005ac2ac  83c40c               add esp, 0xc
// 005ac2af  c3                   ret 
// 005ac2b0  8d0424               lea eax, [esp]
// 005ac2b3  d900                 fld dword ptr [eax]
// 005ac2b5  83c40c               add esp, 0xc
// 005ac2b8  c3                   ret 

struct World {
    float getMaxAbsComponent(const float* v) const;
};

float World::getMaxAbsComponent(const float* v) const {
    float a0 = v[0];
    float a1 = v[1];
    float a2 = v[2];
    float f0 = a0 < 0.0f ? -a0 : a0;
    float f1 = a1 < 0.0f ? -a1 : a1;
    float f2 = a2 < 0.0f ? -a2 : a2;
    const float* p = &f0;
    if (!(f2 > f1)) {
        p = &f1;
    }
    if (!(f0 > *p)) {
        return *p;
    }
    return f0;
}
