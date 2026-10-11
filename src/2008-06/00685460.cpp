// from server: 100% by tester
// roc 2008-06 00685460  unit: Ogre::RbxSubEntity::RbxSubEntityShadowRenderable  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685460
//
// 00685460  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00685463  8b01                 mov eax, dword ptr [ecx]
// 00685465  8b5014               mov edx, dword ptr [eax + 0x14]
// 00685468  ffe2                 jmp edx

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};

struct Outer {
    char pad[0x6c];
    Inner* field_6c;
    void f();
};

void Outer::f() {
    Inner* p = field_6c;
    p->v5();
}
