// roc 2009-12 005cc1e0  unit: RBX::AggregateChunk  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cc1e0
//
// 005cc1e0  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 005cc1e6  f30f11415c           movss dword ptr [ecx + 0x5c], xmm0
// 005cc1eb  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0x5c]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0x5c)=v;}