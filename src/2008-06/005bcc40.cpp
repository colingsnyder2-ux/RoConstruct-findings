// from server: 100% by king_originala
// roc 2008-06 005bcc40  unit: RBX::Stats::I::?$TypedStatsItem  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bcc40
//
// 005bcc40  6aff                 push -1
// 005bcc42  68b13d7d00           push 0x7d3db1
// 005bcc47  64a100000000         mov eax, dword ptr fs:[0]
// 005bcc4d  50                   push eax
// 005bcc4e  64892500000000       mov dword ptr fs:[0], esp
// 005bcc55  83ec20               sub esp, 0x20
// 005bcc58  55                   push ebp
// 005bcc59  56                   push esi
// 005bcc5a  8bf1                 mov esi, ecx
// 005bcc5c  57                   push edi
// 005bcc5d  8974240c             mov dword ptr [esp + 0xc], esi
// 005bcc61  e87a1feaff           call 0x45ebe0
// 005bcc66  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005bcc6a  8dbe5c010000         lea edi, [esi + 0x15c]
// 005bcc70  8dae60010000         lea ebp, [esi + 0x160]
// 005bcc76  6848878100           push 0x818748
// 005bcc7b  8d4c2414             lea ecx, [esp + 0x14]
// 005bcc7f  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005bcc87  c70654808300         mov dword ptr [esi], 0x838054
// 005bcc8d  c7461044808300       mov dword ptr [esi + 0x10], 0x838044
// 005bcc94  c746143c808300       mov dword ptr [esi + 0x14], 0x83803c
// 005bcc9b  c7462034808300       mov dword ptr [esi + 0x20], 0x838034
// 005bcca2  c7462424808300       mov dword ptr [esi + 0x24], 0x838024
// 005bcca9  c7464414808300       mov dword ptr [esi + 0x44], 0x838014
// 005bccb0  c7466404808300       mov dword ptr [esi + 0x64], 0x838004
// 005bccb7  c78684000000f47f8300 mov dword ptr [esi + 0x84], 0x837ff4
// 005bccc1  c786a4000000e47f8300 mov dword ptr [esi + 0xa4], 0x837fe4
// 005bcccb  c786c4000000d47f8300 mov dword ptr [esi + 0xc4], 0x837fd4
// 005bccd5  898658010000         mov dword ptr [esi + 0x158], eax
// 005bccdb  c70700000000         mov dword ptr [edi], 0
// 005bcce1  c7450000000000       mov dword ptr [ebp], 0
// 005bcce8  ff1558248000         call dword ptr [0x802458]
// 005bccee  8d4c2410             lea ecx, [esp + 0x10]
// 005bccf2  51                   push ecx
// 005bccf3  8bce                 mov ecx, esi
// 005bccf5  c644243801           mov byte ptr [esp + 0x38], 1
// 005bccfa  e891e2f9ff           call 0x55af90
// 005bccff  8d4c2410             lea ecx, [esp + 0x10]
// 005bcd03  c644243400           mov byte ptr [esp + 0x34], 0
// 005bcd08  ff1568248000         call dword ptr [0x802468]
// 005bcd0e  57                   push edi
// 005bcd0f  68c87f8300           push 0x837fc8
// 005bcd14  8bce                 mov ecx, esi
// 005bcd16  e8a5d00000           call 0x5c9dc0
// 005bcd1b  55                   push ebp
// 005bcd1c  68c47f8300           push 0x837fc4
// 005bcd21  8bce                 mov ecx, esi
// 005bcd23  e898d00000           call 0x5c9dc0
// 005bcd28  8d9664010000         lea edx, [esi + 0x164]
// 005bcd2e  52                   push edx
// 005bcd2f  68b87f8300           push 0x837fb8
// 005bcd34  8bce                 mov ecx, esi
// 005bcd36  e815fdffff           call 0x5bca50
// 005bcd3b  8d8668010000         lea eax, [esi + 0x168]
// 005bcd41  50                   push eax
// 005bcd42  68ac7f8300           push 0x837fac
// 005bcd47  8bce                 mov ecx, esi
// 005bcd49  e802fdffff           call 0x5bca50
// 005bcd4e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bcd52  5f                   pop edi
// 005bcd53  8bc6                 mov eax, esi
// 005bcd55  5e                   pop esi
// 005bcd56  5d                   pop ebp
// 005bcd57  64890d00000000       mov dword ptr fs:[0], ecx
// 005bcd5e  83c42c               add esp, 0x2c
// 005bcd61  c20400               ret 4

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

struct Base {
    unsigned int words[0x158 / 4];

    Base();
    ~Base();
    void setName(const String&);
    void bindInteger(const char*, unsigned int*);
    void bindValue(const char*, unsigned int*);
};

struct Item : Base {
    void* source;
    unsigned int current;
    unsigned int unused;
    unsigned int sounds;
    unsigned int unusedSounds;

    Item(void*);
};

Item::Item(void* argument)
{
    words[0x00 / 4] = 0x838054;
    words[0x10 / 4] = 0x838044;
    words[0x14 / 4] = 0x83803c;
    words[0x20 / 4] = 0x838034;
    words[0x24 / 4] = 0x838024;
    words[0x44 / 4] = 0x838014;
    words[0x64 / 4] = 0x838004;
    words[0x84 / 4] = 0x837ff4;
    words[0xa4 / 4] = 0x837fe4;
    words[0xc4 / 4] = 0x837fd4;

    source = argument;
    current = 0;
    unused = 0;

    {
        String name((const char*)0x818748);
        setName(name);
    }

    bindInteger((const char*)0x837fc8, &current);
    bindInteger((const char*)0x837fc4, &unused);
    bindValue((const char*)0x837fb8, &sounds);
    bindValue((const char*)0x837fac, &unusedSounds);
}
