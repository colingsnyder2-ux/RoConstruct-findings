// from server: 100% by tester
// roc 2008-06 005ee010  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee010
//
// 005ee010  8b442408             mov eax, dword ptr [esp + 8]
// 005ee014  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ee018  53                   push ebx
// 005ee019  56                   push esi
// 005ee01a  8bd9                 mov ebx, ecx
// 005ee01c  7205                 jb 0x5ee023
// 005ee01e  8b7004               mov esi, dword ptr [eax + 4]
// 005ee021  eb03                 jmp 0x5ee026
// 005ee023  8d7004               lea esi, [eax + 4]
// 005ee026  57                   push edi
// 005ee027  6820b19700           push 0x97b120
// 005ee02c  6890d65e00           push 0x5ed690
// 005ee031  e8fa92f6ff           call 0x557330
// 005ee036  83c408               add esp, 8
// 005ee039  e8f2f5ffff           call 0x5ed630
// 005ee03e  8bf8                 mov edi, eax
// 005ee040  8d442414             lea eax, [esp + 0x14]
// 005ee044  50                   push eax
// 005ee045  56                   push esi
// 005ee046  e84562f6ff           call 0x554290
// 005ee04b  83c404               add esp, 4
// 005ee04e  50                   push eax
// 005ee04f  8bcf                 mov ecx, edi
// 005ee051  e8aaf2ffff           call 0x5ed300
// 005ee056  5f                   pop edi
// 005ee057  84c0                 test al, al
// 005ee059  741b                 je 0x5ee076
// 005ee05b  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005ee05e  8b11                 mov edx, dword ptr [ecx]
// 005ee060  8b520c               mov edx, dword ptr [edx + 0xc]
// 005ee063  8d442410             lea eax, [esp + 0x10]
// 005ee067  50                   push eax
// 005ee068  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ee06c  50                   push eax
// 005ee06d  ffd2                 call edx
// 005ee06f  5e                   pop esi
// 005ee070  b001                 mov al, 1
// 005ee072  5b                   pop ebx
// 005ee073  c20800               ret 8
// 005ee076  5e                   pop esi
// 005ee077  32c0                 xor al, al
// 005ee079  5b                   pop ebx
// 005ee07a  c20800               ret 8

struct Text {
    unsigned int reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
};

struct EnumTable {
    bool lookup(unsigned int key, int* value);
};

struct Setter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void* instance, const int* value) = 0;
};

extern unsigned char registrationState;
extern void __cdecl initialize();
extern void __cdecl registerInitializer(void (__cdecl* callback)(), void* state);
extern EnumTable* __cdecl getEnumTable();
extern unsigned int __cdecl stringKey(const char* text);

struct Descriptor {
    unsigned char padding[28];
    Setter* setter;

    bool setString(void* instance, const Text& text);
};

bool Descriptor::setString(void* instance, const Text& text)
{
    const char* characters =
        text.capacity >= 16 ? text.pointer : text.buffer;

    registerInitializer(initialize, &registrationState);
    EnumTable* table = getEnumTable();

    int value;
    if (table->lookup(stringKey(characters), &value)) {
        setter->set(instance, &value);
        return true;
    }
    return false;
}
