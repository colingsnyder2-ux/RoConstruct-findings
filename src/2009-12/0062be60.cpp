// roc 2009-12 0062be60  unit: seg_00620000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062be60
//
// 0062be60  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 0062be66  f30f11819c000000     movss dword ptr [ecx + 0x9c], xmm0
// 0062be6e  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0x9c]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0x9c)=v;}