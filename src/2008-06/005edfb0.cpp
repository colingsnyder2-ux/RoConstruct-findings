// from server: 100% by king_originala
// roc 2008-06 005edfb0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edfb0
//
// 005edfb0  56                   push esi
// 005edfb1  57                   push edi
// 005edfb2  6820b19700           push 0x97b120
// 005edfb7  6890d65e00           push 0x5ed690
// 005edfbc  8bf1                 mov esi, ecx
// 005edfbe  e86d93f6ff           call 0x557330
// 005edfc3  83c408               add esp, 8
// 005edfc6  e865f6ffff           call 0x5ed630
// 005edfcb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005edfcf  57                   push edi
// 005edfd0  8bc8                 mov ecx, eax
// 005edfd2  e879a4e5ff           call 0x448450
// 005edfd7  84c0                 test al, al
// 005edfd9  741f                 je 0x5edffa
// 005edfdb  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005edfde  8d542410             lea edx, [esp + 0x10]
// 005edfe2  52                   push edx
// 005edfe3  8b542410             mov edx, dword ptr [esp + 0x10]
// 005edfe7  897c2414             mov dword ptr [esp + 0x14], edi
// 005edfeb  8b01                 mov eax, dword ptr [ecx]
// 005edfed  8b400c               mov eax, dword ptr [eax + 0xc]
// 005edff0  52                   push edx
// 005edff1  ffd0                 call eax
// 005edff3  5f                   pop edi
// 005edff4  b001                 mov al, 1
// 005edff6  5e                   pop esi
// 005edff7  c20800               ret 8
// 005edffa  5f                   pop edi
// 005edffb  32c0                 xor al, al
// 005edffd  5e                   pop esi
// 005edffe  c20800               ret 8

extern char descriptorData;
extern void __cdecl initializeDescriptor();
extern void __cdecl registerDescriptor(void (__cdecl *)(), void *);

struct EnumDescriptor {
    bool contains(int value);
};

extern EnumDescriptor * __cdecl getEnumDescriptor();

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *object, const int *value);
};

struct S {
    char padding[28];
    Setter *setter;
    bool f(void *object, int value);
};

bool S::f(void *object, int value)
{
    registerDescriptor(initializeDescriptor, &descriptorData);
    EnumDescriptor *descriptor = getEnumDescriptor();
    if (descriptor->contains(value)) {
        int converted = value;
        setter->set(object, &converted);
        return true;
    }
    return false;
}
