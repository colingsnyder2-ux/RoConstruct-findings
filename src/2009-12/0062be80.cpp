// roc 2009-12 0062be80  unit: seg_00620000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062be80
//
// 0062be80  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 0062be86  f30f1181a0000000     movss dword ptr [ecx + 0xa0], xmm0
// 0062be8e  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0xa0]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0xa0)=v;}