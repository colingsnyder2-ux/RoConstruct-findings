// from server: 100% by colin
// roc 2008-06 005ede90  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ede90
//
// 005ede90  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ede93  8b01                 mov eax, dword ptr [ecx]
// 005ede95  8b542404             mov edx, dword ptr [esp + 4]
// 005ede99  8b4008               mov eax, dword ptr [eax + 8]
// 005ede9c  56                   push esi
// 005ede9d  57                   push edi
// 005ede9e  52                   push edx
// 005ede9f  ffd0                 call eax
// 005edea1  681cb19700           push 0x97b11c
// 005edea6  6820d65e00           push 0x5ed620
// 005edeab  8bf8                 mov edi, eax
// 005edead  e87e94f6ff           call 0x557330
// 005edeb2  83c408               add esp, 8
// 005edeb5  e806f7ffff           call 0x5ed5c0
// 005edeba  8bf0                 mov esi, eax
// 005edebc  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 005edec2  2b8edc000000         sub ecx, dword ptr [esi + 0xdc]
// 005edec8  c1f902               sar ecx, 2
// 005edecb  3bf9                 cmp edi, ecx
// 005edecd  7327                 jae 0x5edef6
// 005edecf  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 005eded5  2b96dc000000         sub edx, dword ptr [esi + 0xdc]
// 005ededb  c1fa02               sar edx, 2
// 005edede  3bfa                 cmp edi, edx
// 005edee0  7206                 jb 0x5edee8
// 005edee2  ff1590288000         call dword ptr [0x802890]
// 005edee8  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005edeee  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005edef1  5f                   pop edi
// 005edef2  5e                   pop esi
// 005edef3  c20400               ret 4
// 005edef6  5f                   pop edi
// 005edef7  83c8ff               or eax, 0xffffffff
// 005edefa  5e                   pop esi
// 005edefb  c20400               ret 4

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual unsigned int get(void*);
};

struct EnumTable {
    unsigned char storage[220];
    int* first;
    int* volatile last;
};

extern unsigned char registrationState;
extern void __cdecl initialize();
extern void __cdecl registerInitializer(void (__cdecl*)(), void*);
extern EnumTable* __cdecl getEnumTable();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Descriptor {
    unsigned char storage[28];
    Accessor* accessor;

    int get(void*);
};

int Descriptor::get(void* object)
{
    unsigned int index = accessor->get(object);
    registerInitializer(initialize, &registrationState);
    EnumTable* table = getEnumTable();

    if (index < static_cast<unsigned int>(table->last - table->first)) {
        if (index >= static_cast<unsigned int>(table->last - table->first))
            _invalid_parameter_noinfo();
        return table->first[index];
    }
    return -1;
}
