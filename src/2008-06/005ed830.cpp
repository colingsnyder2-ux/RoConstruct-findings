// from server: 100% by colin
// roc 2008-06 005ed830  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed830
//
// 005ed830  56                   push esi
// 005ed831  57                   push edi
// 005ed832  681cb19700           push 0x97b11c
// 005ed837  6820d65e00           push 0x5ed620
// 005ed83c  8bf1                 mov esi, ecx
// 005ed83e  e8ed9af6ff           call 0x557330
// 005ed843  83c408               add esp, 8
// 005ed846  e875fdffff           call 0x5ed5c0
// 005ed84b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ed84f  57                   push edi
// 005ed850  8bc8                 mov ecx, eax
// 005ed852  e8f9abe5ff           call 0x448450
// 005ed857  84c0                 test al, al
// 005ed859  741f                 je 0x5ed87a
// 005ed85b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ed85e  8d542410             lea edx, [esp + 0x10]
// 005ed862  52                   push edx
// 005ed863  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ed867  897c2414             mov dword ptr [esp + 0x14], edi
// 005ed86b  8b01                 mov eax, dword ptr [ecx]
// 005ed86d  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ed870  52                   push edx
// 005ed871  ffd0                 call eax
// 005ed873  5f                   pop edi
// 005ed874  b001                 mov al, 1
// 005ed876  5e                   pop esi
// 005ed877  c20800               ret 8
// 005ed87a  5f                   pop edi
// 005ed87b  32c0                 xor al, al
// 005ed87d  5e                   pop esi
// 005ed87e  c20800               ret 8

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
