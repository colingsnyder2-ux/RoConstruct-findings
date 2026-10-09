// from server: 76% by colin
// roc 2007-08 00439770  unit: RBX::VSoundId::?$XItem  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00439770
//
// 00439770  6aff                 push -1
// 00439772  68f8797600           push 0x7679f8
// 00439777  64a100000000         mov eax, dword ptr fs:[0]
// 0043977d  50                   push eax
// 0043977e  51                   push ecx
// 0043977f  56                   push esi
// 00439780  a188518b00           mov eax, dword ptr [0x8b5188]
// 00439785  33c4                 xor eax, esp
// 00439787  50                   push eax
// 00439788  8d44240c             lea eax, [esp + 0xc]
// 0043978c  64a300000000         mov dword ptr fs:[0], eax
// 00439792  8bf1                 mov esi, ecx
// 00439794  89742408             mov dword ptr [esp + 8], esi
// 00439798  8d4e20               lea ecx, [esi + 0x20]
// 0043979b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004397a3  c7015cd57800         mov dword ptr [ecx], 0x78d55c
// 004397a9  e842e52900           call 0x6d7cf0
// 004397ae  8bce                 mov ecx, esi
// 004397b0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004397b8  e8dd6e1f00           call 0x63069a
// 004397bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004397c1  64890d00000000       mov dword ptr fs:[0], ecx
// 004397c8  59                   pop ecx
// 004397c9  5e                   pop esi
// 004397ca  83c410               add esp, 0x10
// 004397cd  c3                   ret 

struct Descriptor {
    void* vtable;
    Descriptor();
    ~Descriptor();
};

struct SoundId : Descriptor {
    char pad[0x1c];
    void* field20;
    SoundId();
    ~SoundId();
};

SoundId::SoundId()
{
    this->vtable = (void*)0x78d55c;
    this->field20 = 0;
    ((void (__thiscall*)(void*))0x6d7cf0)((char*)this + 0x20);
    ((void (__thiscall*)(SoundId*))0x63069a)(this);
}

SoundId::~SoundId()
{
}
