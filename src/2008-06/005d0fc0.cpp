// from server: 100% by king_originala
// roc 2008-06 005d0fc0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0fc0
//
// 005d0fc0  6aff                 push -1
// 005d0fc2  6811577d00           push 0x7d5711
// 005d0fc7  64a100000000         mov eax, dword ptr fs:[0]
// 005d0fcd  50                   push eax
// 005d0fce  64892500000000       mov dword ptr fs:[0], esp
// 005d0fd5  83ec20               sub esp, 0x20
// 005d0fd8  56                   push esi
// 005d0fd9  8bf1                 mov esi, ecx
// 005d0fdb  89742404             mov dword ptr [esp + 4], esi
// 005d0fdf  e89cf9ffff           call 0x5d0980
// 005d0fe4  684ca78300           push 0x83a74c
// 005d0fe9  8d4c240c             lea ecx, [esp + 0xc]
// 005d0fed  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005d0ff5  c70654b48300         mov dword ptr [esi], 0x83b454
// 005d0ffb  c7461048b48300       mov dword ptr [esi + 0x10], 0x83b448
// 005d1002  c7461440b48300       mov dword ptr [esi + 0x14], 0x83b440
// 005d1009  c7462038b48300       mov dword ptr [esi + 0x20], 0x83b438
// 005d1010  c7462428b48300       mov dword ptr [esi + 0x24], 0x83b428
// 005d1017  c7464418b48300       mov dword ptr [esi + 0x44], 0x83b418
// 005d101e  c7466408b48300       mov dword ptr [esi + 0x64], 0x83b408
// 005d1025  c78684000000f8b38300 mov dword ptr [esi + 0x84], 0x83b3f8
// 005d102f  c786a4000000e8b38300 mov dword ptr [esi + 0xa4], 0x83b3e8
// 005d1039  c786c4000000d8b38300 mov dword ptr [esi + 0xc4], 0x83b3d8
// 005d1043  c78630010000d0b38300 mov dword ptr [esi + 0x130], 0x83b3d0
// 005d104d  ff1558248000         call dword ptr [0x802458]
// 005d1053  8d442408             lea eax, [esp + 8]
// 005d1057  50                   push eax
// 005d1058  8bce                 mov ecx, esi
// 005d105a  c644243001           mov byte ptr [esp + 0x30], 1
// 005d105f  e82c9ff8ff           call 0x55af90
// 005d1064  8d4c2408             lea ecx, [esp + 8]
// 005d1068  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d106d  ff1568248000         call dword ptr [0x802468]
// 005d1073  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d1077  8bc6                 mov eax, esi
// 005d1079  5e                   pop esi
// 005d107a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1081  83c42c               add esp, 0x2c
// 005d1084  c3                   ret 

struct String {
    unsigned char data[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Base {
    unsigned int data[0x134 / 4];

    Base();
    ~Base();
    void setName(const String&);
};

struct Service : Base {
    Service();
};

Service::Service()
{
    data[0x00 / 4] = 0x83b454;
    data[0x10 / 4] = 0x83b448;
    data[0x14 / 4] = 0x83b440;
    data[0x20 / 4] = 0x83b438;
    data[0x24 / 4] = 0x83b428;
    data[0x44 / 4] = 0x83b418;
    data[0x64 / 4] = 0x83b408;
    data[0x84 / 4] = 0x83b3f8;
    data[0xa4 / 4] = 0x83b3e8;
    data[0xc4 / 4] = 0x83b3d8;
    data[0x130 / 4] = 0x83b3d0;

    String name("StarterPack");
    setName(name);
}
