// from server: 100% by king_originala
// roc 2008-06 005eebd0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eebd0
//
// 005eebd0  51                   push ecx
// 005eebd1  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005eebd4  8b01                 mov eax, dword ptr [ecx]
// 005eebd6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005eebda  8b4008               mov eax, dword ptr [eax + 8]
// 005eebdd  56                   push esi
// 005eebde  52                   push edx
// 005eebdf  c744240800000000     mov dword ptr [esp + 8], 0
// 005eebe7  ffd0                 call eax
// 005eebe9  6820b19700           push 0x97b120
// 005eebee  6890d65e00           push 0x5ed690
// 005eebf3  89442418             mov dword ptr [esp + 0x18], eax
// 005eebf7  e83487f6ff           call 0x557330
// 005eebfc  83c408               add esp, 8
// 005eebff  e82ceaffff           call 0x5ed630
// 005eec04  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005eec08  8d4c2410             lea ecx, [esp + 0x10]
// 005eec0c  51                   push ecx
// 005eec0d  56                   push esi
// 005eec0e  8bc8                 mov ecx, eax
// 005eec10  e84b97e5ff           call 0x448360
// 005eec15  8bc6                 mov eax, esi
// 005eec17  5e                   pop esi
// 005eec18  59                   pop ecx
// 005eec19  c20800               ret 8

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual int get(void* object);
};

struct EnumDescriptor {
    void convert(void* output, const int* value);
};

extern "C" void __cdecl initialize(void (__cdecl* callback)(), void* storage);
extern "C" void __cdecl callback();
extern "C" EnumDescriptor* __cdecl descriptor();
extern unsigned char storage;

struct Property {
    unsigned char padding[28];
    Accessor* accessor;

    void* get(void* output, int object);
};

void* Property::get(void* output, int object)
{
    volatile int initial = 0;
    object = accessor->get(reinterpret_cast<void*>(object));
    initialize(callback, &storage);
    EnumDescriptor* desc = descriptor();
    desc->convert(output, &object);
    return output;
}
