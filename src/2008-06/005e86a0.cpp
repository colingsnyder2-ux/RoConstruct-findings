// from server: 100% by king_originala
// roc 2008-06 005e86a0  unit: RBX::Primitive  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e86a0
//
// 005e86a0  53                   push ebx
// 005e86a1  56                   push esi
// 005e86a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e86a6  8b06                 mov eax, dword ptr [esi]
// 005e86a8  8b500c               mov edx, dword ptr [eax + 0xc]
// 005e86ab  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005e86ae  57                   push edi
// 005e86af  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005e86b2  8bce                 mov ecx, esi
// 005e86b4  ffd2                 call edx
// 005e86b6  56                   push esi
// 005e86b7  85c0                 test eax, eax
// 005e86b9  7519                 jne 0x5e86d4
// 005e86bb  8d4b34               lea ecx, [ebx + 0x34]
// 005e86be  e84dffffff           call 0x5e8610
// 005e86c3  85ff                 test edi, edi
// 005e86c5  741e                 je 0x5e86e5
// 005e86c7  8d4f34               lea ecx, [edi + 0x34]
// 005e86ca  56                   push esi
// 005e86cb  e840ffffff           call 0x5e8610
// 005e86d0  5f                   pop edi
// 005e86d1  5e                   pop esi
// 005e86d2  5b                   pop ebx
// 005e86d3  c3                   ret 
// 005e86d4  8d4b18               lea ecx, [ebx + 0x18]
// 005e86d7  e834ffffff           call 0x5e8610
// 005e86dc  8d4f18               lea ecx, [edi + 0x18]
// 005e86df  56                   push esi
// 005e86e0  e82bffffff           call 0x5e8610
// 005e86e5  5f                   pop edi
// 005e86e6  5e                   pop esi
// 005e86e7  5b                   pop ebx
// 005e86e8  c3                   ret 

struct Primitive;

struct List {
    char data[0x1c];
    void remove(Primitive*);
};

struct Endpoint {
    char padding[0x18];
    List first;
    List second;
};

struct Primitive {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int query();

    char padding[8];
    Endpoint* a;
    Endpoint* b;
};

void f(Primitive* p)
{
    Endpoint* a = p->a;
    Endpoint* b = p->b;

    if (!p->query()) {
        a->second.remove(p);
        if (b)
            b->second.remove(p);
    } else {
        a->first.remove(p);
        b->first.remove(p);
    }
}
