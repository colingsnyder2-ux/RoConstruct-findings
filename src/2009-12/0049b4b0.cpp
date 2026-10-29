// roc 2009-12 0049b4b0  unit: Ogre::RbxMeshPartAdapter  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049b4b0
//
// 0049b4b0  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 0049b4b6  f30f11411c           movss dword ptr [ecx + 0x1c], xmm0
// 0049b4bb  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEXM@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2
struct S{char pad[0x1c]; void f(float v);};
void S::f(float v){*(float*)((char*)this+0x1c)=v;}