// from server: 100% by king_originala
// roc 2008-06 005e9280  unit: RBX::PhysicsService  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9280
//
// 005e9280  56                   push esi
// 005e9281  8bf1                 mov esi, ecx
// 005e9283  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 005e9289  8b01                 mov eax, dword ptr [ecx]
// 005e928b  8b5014               mov edx, dword ptr [eax + 0x14]
// 005e928e  57                   push edi
// 005e928f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e9293  57                   push edi
// 005e9294  ffd2                 call edx
// 005e9296  85ff                 test edi, edi
// 005e9298  740a                 je 0x5e92a4
// 005e929a  8b07                 mov eax, dword ptr [edi]
// 005e929c  8b10                 mov edx, dword ptr [eax]
// 005e929e  6a01                 push 1
// 005e92a0  8bcf                 mov ecx, edi
// 005e92a2  ffd2                 call edx
// 005e92a4  ff8ee8000000         dec dword ptr [esi + 0xe8]
// 005e92aa  5f                   pop edi
// 005e92ab  5e                   pop esi
// 005e92ac  c20400               ret 4

struct Item {
    virtual ~Item();
};

struct Container {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void remove(Item*);
};

struct S {
    char padding0[0x88];
    Container* container;
    char padding1[0x5c];
    int count;

    void remove(Item*);
};

void S::remove(Item* item)
{
    container->remove(item);
    if (item)
        delete item;
    --count;
}
