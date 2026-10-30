// roc 2009-12 00490080  unit: Ogre::RbxSubEntity::RbxSubEntityShadowRenderable  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490080
//
// 00490080  8b8984000000         mov ecx, dword ptr [ecx + 0x84]
// 00490086  8b01                 mov eax, dword ptr [ecx]
// 00490088  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0049008b  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// from server: 100% by colin
// roc-flags: /O2 /Ob2 /Oy /GF- /GS- /EHsc /MD
struct B{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();}; struct S{char pad[0x84]; B* p; void f();};
void S::f(){p->v19();}