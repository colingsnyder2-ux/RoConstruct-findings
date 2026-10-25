// from server: 100% by king_originala
// roc 2008-06 004ea3e0  unit: RBX::ViewNew::Texture  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea3e0
//
// 004ea3e0  6aff                 push -1
// 004ea3e2  6816a87c00           push 0x7ca816
// 004ea3e7  64a100000000         mov eax, dword ptr fs:[0]
// 004ea3ed  50                   push eax
// 004ea3ee  64892500000000       mov dword ptr fs:[0], esp
// 004ea3f5  51                   push ecx
// 004ea3f6  56                   push esi
// 004ea3f7  8bf1                 mov esi, ecx
// 004ea3f9  8d86d8000000         lea eax, [esi + 0xd8]
// 004ea3ff  89742404             mov dword ptr [esp + 4], esi
// 004ea403  c706946f8200         mov dword ptr [esi], 0x826f94
// 004ea409  c700886f8200         mov dword ptr [eax], 0x826f88
// 004ea40f  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 004ea415  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004ea41d  85c9                 test ecx, ecx
// 004ea41f  740c                 je 0x4ea42d
// 004ea421  50                   push eax
// 004ea422  81c1a0010000         add ecx, 0x1a0
// 004ea428  e853b60f00           call 0x5e5a80
// 004ea42d  8d8edc000000         lea ecx, [esi + 0xdc]
// 004ea433  c644241000           mov byte ptr [esp + 0x10], 0
// 004ea438  e873b00a00           call 0x5954b0
// 004ea43d  8bce                 mov ecx, esi
// 004ea43f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ea447  e804deffff           call 0x4e8250
// 004ea44c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea450  5e                   pop esi
// 004ea451  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea458  83c410               add esp, 0x10
// 004ea45b  c3                   ret 

struct Observer {
    virtual void notify();
};

struct Registry {
    void remove(Observer*);
};

struct Owner {
    char padding[0x1a0];
    Registry registry;
};

struct Base {
    virtual ~Base();
    char padding0[0xb8];
    Owner* owner;
    char padding1[0x18];
};

struct Reference {
    ~Reference();
};

struct Texture : Base, Observer {
    Reference reference;
    virtual ~Texture();
};

Texture::~Texture()
{
    if (owner)
        owner->registry.remove(this);
}
