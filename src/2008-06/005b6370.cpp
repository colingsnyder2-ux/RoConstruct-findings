// from server: 100% by king_originala
// roc 2008-06 005b6370  unit: RBX::PartTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6370
//
// 005b6370  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005b6373  85c0                 test eax, eax
// 005b6375  7414                 je 0x5b638b
// 005b6377  8b542404             mov edx, dword ptr [esp + 4]
// 005b637b  8d88cc010000         lea ecx, [eax + 0x1cc]
// 005b6381  8b01                 mov eax, dword ptr [ecx]
// 005b6383  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b6386  6a00                 push 0
// 005b6388  52                   push edx
// 005b6389  ffd0                 call eax
// 005b638b  c20400               ret 4

struct Target {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void invoke(void*, int);
};

struct Object {
    char padding[0x1cc];
    Target target;
};

struct PartTool {
    char padding[0x18];
    Object* volatile object;
    void invoke(void*);
};

void PartTool::invoke(void* argument)
{
    Object* p = object;
    if (p)
        p->target.invoke(argument, 0);
}
