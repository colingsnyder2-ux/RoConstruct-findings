// roc 2009-12 00490340  unit: Ogre::RbxSubEntity  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490340
//
// 00490340  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 00490346  f30f118168010000     movss dword ptr [ecx + 0x168], xmm0
// 0049034e  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0x168]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0x168)=v;}