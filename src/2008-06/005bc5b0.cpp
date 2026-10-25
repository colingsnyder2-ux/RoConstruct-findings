// from server: 100% by sophus
// roc 2008-06 005bc5b0  unit: RBX::Soundscape::SoundService  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc5b0
//
// 005bc5b0  83b96c01000000       cmp dword ptr [ecx + 0x16c], 0
// 005bc5b7  56                   push esi
// 005bc5b8  7433                 je 0x5bc5ed
// 005bc5ba  f6816501000001       test byte ptr [ecx + 0x165], 1
// 005bc5c1  742a                 je 0x5bc5ed
// 005bc5c3  83b93c01000000       cmp dword ptr [ecx + 0x13c], 0
// 005bc5ca  7421                 je 0x5bc5ed
// 005bc5cc  51                   push ecx
// 005bc5cd  8db130010000         lea esi, [ecx + 0x130]
// 005bc5d3  e8e88beaff           call 0x4651c0
// 005bc5d8  83c404               add esp, 4
// 005bc5db  85c0                 test eax, eax
// 005bc5dd  742d                 je 0x5bc60c
// 005bc5df  56                   push esi
// 005bc5e0  8d8830010000         lea ecx, [eax + 0x130]
// 005bc5e6  e8b552e6ff           call 0x4218a0
// 005bc5eb  5e                   pop esi
// 005bc5ec  c3                   ret 
// 005bc5ed  51                   push ecx
// 005bc5ee  8db130010000         lea esi, [ecx + 0x130]
// 005bc5f4  e8c78beaff           call 0x4651c0
// 005bc5f9  83c404               add esp, 4
// 005bc5fc  85c0                 test eax, eax
// 005bc5fe  740c                 je 0x5bc60c
// 005bc600  56                   push esi
// 005bc601  8d8830010000         lea ecx, [eax + 0x130]
// 005bc607  e874940200           call 0x5e5a80
// 005bc60c  5e                   pop esi
// 005bc60d  c3                   ret 

struct PadBase
{
    char pad[0x130];
};

struct SoundChannel
{
    void* vtable;
    int field_04;
    int field_08;
    void* field_0c;
    void method1(SoundChannel* other);
    void method2(SoundChannel* other);
};

struct SoundService : PadBase, SoundChannel
{
    char pad2[0x25];
    unsigned char field_165;
    char pad3[6];
    void* field_16c;

    void f();
};

SoundService* getProvider(SoundService* service);

void SoundService::f()
{
    if (this->field_16c != 0 && (this->field_165 & 1) != 0 && this->field_0c != 0)
    {
        SoundChannel* self = this;
        SoundService* provider = getProvider(this);
        if (provider)
            provider->method1(self);
    }
    else
    {
        SoundChannel* self = this;
        SoundService* provider = getProvider(this);
        if (provider)
            provider->method2(self);
    }
}
