// from server: 100% by king_originala
// roc 2008-06 005edb80  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edb80
//
// 005edb80  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005edb83  8b01                 mov eax, dword ptr [ecx]
// 005edb85  8b542404             mov edx, dword ptr [esp + 4]
// 005edb89  8b4008               mov eax, dword ptr [eax + 8]
// 005edb8c  56                   push esi
// 005edb8d  57                   push edi
// 005edb8e  52                   push edx
// 005edb8f  ffd0                 call eax
// 005edb91  6820b19700           push 0x97b120
// 005edb96  6890d65e00           push 0x5ed690
// 005edb9b  8bf0                 mov esi, eax
// 005edb9d  e88e97f6ff           call 0x557330
// 005edba2  83c408               add esp, 8
// 005edba5  e886faffff           call 0x5ed630
// 005edbaa  8bf8                 mov edi, eax
// 005edbac  85f6                 test esi, esi
// 005edbae  7d07                 jge 0x5edbb7
// 005edbb0  5f                   pop edi
// 005edbb1  33c0                 xor eax, eax
// 005edbb3  5e                   pop esi
// 005edbb4  c20400               ret 4
// 005edbb7  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 005edbbd  2b8fac000000         sub ecx, dword ptr [edi + 0xac]
// 005edbc3  c1f902               sar ecx, 2
// 005edbc6  3bf1                 cmp esi, ecx
// 005edbc8  73e6                 jae 0x5edbb0
// 005edbca  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 005edbd0  2b97ac000000         sub edx, dword ptr [edi + 0xac]
// 005edbd6  c1fa02               sar edx, 2
// 005edbd9  3bf2                 cmp esi, edx
// 005edbdb  7206                 jb 0x5edbe3
// 005edbdd  ff1590288000         call dword ptr [0x802890]
// 005edbe3  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 005edbe9  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005edbec  5f                   pop edi
// 005edbed  5e                   pop esi
// 005edbee  c20400               ret 4

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual int get(void* object);
};

struct EnumDescriptor {
    unsigned char padding[172];
    void** first;
    void** volatile last;
};

extern "C" void __cdecl initialize(void (__cdecl* callback)(), void* storage);
extern "C" void __cdecl callback();
extern "C" EnumDescriptor* __cdecl descriptor();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern unsigned char storage;

struct Property {
    unsigned char padding[28];
    Accessor* accessor;

    void* get(void* object);
};

void* Property::get(void* object)
{
    int value = accessor->get(object);
    initialize(callback, &storage);
    EnumDescriptor* desc = descriptor();

    if (value < 0)
        return 0;

    if (static_cast<unsigned int>(value) >=
        static_cast<unsigned int>(desc->last - desc->first))
        return 0;

    if (static_cast<unsigned int>(value) >=
        static_cast<unsigned int>(desc->last - desc->first))
        _invalid_parameter_noinfo();

    return desc->first[value];
}
