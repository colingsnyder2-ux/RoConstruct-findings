// from server: 100% by king_originala
// roc 2008-06 005ed890  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed890
//
// 005ed890  8b442408             mov eax, dword ptr [esp + 8]
// 005ed894  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ed898  53                   push ebx
// 005ed899  56                   push esi
// 005ed89a  8bd9                 mov ebx, ecx
// 005ed89c  7205                 jb 0x5ed8a3
// 005ed89e  8b7004               mov esi, dword ptr [eax + 4]
// 005ed8a1  eb03                 jmp 0x5ed8a6
// 005ed8a3  8d7004               lea esi, [eax + 4]
// 005ed8a6  57                   push edi
// 005ed8a7  681cb19700           push 0x97b11c
// 005ed8ac  6820d65e00           push 0x5ed620
// 005ed8b1  e87a9af6ff           call 0x557330
// 005ed8b6  83c408               add esp, 8
// 005ed8b9  e802fdffff           call 0x5ed5c0
// 005ed8be  8bf8                 mov edi, eax
// 005ed8c0  8d442414             lea eax, [esp + 0x14]
// 005ed8c4  50                   push eax
// 005ed8c5  56                   push esi
// 005ed8c6  e8c569f6ff           call 0x554290
// 005ed8cb  83c404               add esp, 4
// 005ed8ce  50                   push eax
// 005ed8cf  8bcf                 mov ecx, edi
// 005ed8d1  e82afaffff           call 0x5ed300
// 005ed8d6  5f                   pop edi
// 005ed8d7  84c0                 test al, al
// 005ed8d9  741b                 je 0x5ed8f6
// 005ed8db  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005ed8de  8b11                 mov edx, dword ptr [ecx]
// 005ed8e0  8b520c               mov edx, dword ptr [edx + 0xc]
// 005ed8e3  8d442410             lea eax, [esp + 0x10]
// 005ed8e7  50                   push eax
// 005ed8e8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ed8ec  50                   push eax
// 005ed8ed  ffd2                 call edx
// 005ed8ef  5e                   pop esi
// 005ed8f0  b001                 mov al, 1
// 005ed8f2  5b                   pop ebx
// 005ed8f3  c20800               ret 8
// 005ed8f6  5e                   pop esi
// 005ed8f7  32c0                 xor al, al
// 005ed8f9  5b                   pop ebx
// 005ed8fa  c20800               ret 8

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
