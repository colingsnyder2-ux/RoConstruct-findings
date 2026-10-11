// from server: 100% by tester
// roc 2008-06 00685480  unit: Ogre::RbxSubEntity::RbxSubEntityShadowRenderable  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685480
//
// 00685480  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00685483  8b01                 mov eax, dword ptr [ecx]
// 00685485  8b5044               mov edx, dword ptr [eax + 0x44]
// 00685488  ffe2                 jmp edx

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
};

struct Outer {
    char pad[0x6c];
    Inner* field_6c;
    void f();
};

void Outer::f() {
    Inner* p = field_6c;
    p->v17();
}
