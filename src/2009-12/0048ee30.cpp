// roc 2009-12 0048ee30  unit: RBX::TextureProxyBase  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0048ee30
//
// 0048ee30  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 0048ee36  f30f114110           movss dword ptr [ecx + 0x10], xmm0
// 0048ee3b  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0x10]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0x10)=v;}