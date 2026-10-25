// from server: 100% by king_originala
// roc 2008-06 0063dd50  unit: VAuthoringSettings::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063dd50
//
// 0063dd50  8b442408             mov eax, dword ptr [esp + 8]
// 0063dd54  8a08                 mov cl, byte ptr [eax]
// 0063dd56  56                   push esi
// 0063dd57  8b742408             mov esi, dword ptr [esp + 8]
// 0063dd5b  6a00                 push 0
// 0063dd5d  6850dd9200           push 0x92dd50
// 0063dd62  687c909200           push 0x92907c
// 0063dd67  6a00                 push 0
// 0063dd69  56                   push esi
// 0063dd6a  884c2420             mov byte ptr [esp + 0x20], cl
// 0063dd6e  e8533a0600           call 0x6a17c6
// 0063dd73  83c414               add esp, 0x14
// 0063dd76  85c0                 test eax, eax
// 0063dd78  740e                 je 0x63dd88
// 0063dd7a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0063dd7e  52                   push edx
// 0063dd7f  8bc8                 mov ecx, eax
// 0063dd81  e83a00f6ff           call 0x59ddc0
// 0063dd86  5e                   pop esi
// 0063dd87  c3                   ret 
// 0063dd88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063dd8c  50                   push eax
// 0063dd8d  8bce                 mov ecx, esi
// 0063dd8f  e81c010000           call 0x63deb0
// 0063dd94  5e                   pop esi
// 0063dd95  c3                   ret 

extern char instanceType;
extern char partType;

extern "C" void* __cdecl castObject(
    void* object, int offset, void* sourceType, void* targetType, int isReference);

struct Instance
{
    void setValue(bool value);
};

struct Part
{
    void setValue(bool value);
};

void __cdecl setValue(Instance* instance, const bool& value)
{
    bool newValue = value;
    Part* part = static_cast<Part*>(
        castObject(instance, 0, &instanceType, &partType, 0));

    if (part)
        part->setValue(newValue);
    else
        instance->setValue(newValue);
}
