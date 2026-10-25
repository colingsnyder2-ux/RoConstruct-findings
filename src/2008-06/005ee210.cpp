// from server: 100% by king_originala
// roc 2008-06 005ee210  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee210
//
// 005ee210  51                   push ecx
// 005ee211  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ee214  8b01                 mov eax, dword ptr [ecx]
// 005ee216  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ee21a  8b4008               mov eax, dword ptr [eax + 8]
// 005ee21d  56                   push esi
// 005ee21e  52                   push edx
// 005ee21f  c744240800000000     mov dword ptr [esp + 8], 0
// 005ee227  ffd0                 call eax
// 005ee229  681cb19700           push 0x97b11c
// 005ee22e  6820d65e00           push 0x5ed620
// 005ee233  89442418             mov dword ptr [esp + 0x18], eax
// 005ee237  e8f490f6ff           call 0x557330
// 005ee23c  83c408               add esp, 8
// 005ee23f  e87cf3ffff           call 0x5ed5c0
// 005ee244  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ee248  8d4c2410             lea ecx, [esp + 0x10]
// 005ee24c  51                   push ecx
// 005ee24d  56                   push esi
// 005ee24e  8bc8                 mov ecx, eax
// 005ee250  e80ba1e5ff           call 0x448360
// 005ee255  8bc6                 mov eax, esi
// 005ee257  5e                   pop esi
// 005ee258  59                   pop ecx
// 005ee259  c20800               ret 8

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual int get(int value);
};

struct EnumDescriptor {
    void convert(void* result, const int* value);
};

extern void __cdecl registerEnum(void (__cdecl* initializer)(), int* flag);
extern EnumDescriptor* __cdecl getEnumDescriptor();

struct S {
    char padding[28];
    Getter* getter;

    void* convert(void* result, int value);
};

void* S::convert(void* result, int value)
{
    volatile int state = 0;
    value = getter->get(value);
    registerEnum(
        reinterpret_cast<void (__cdecl*)()>(0x5ed620),
        reinterpret_cast<int*>(0x97b11c));
    EnumDescriptor* descriptor = getEnumDescriptor();
    descriptor->convert(result, &value);
    return result;
}
