// from server: 100% by king_originala
// roc 2008-06 0060c120  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c120
//
// 0060c120  8b442408             mov eax, dword ptr [esp + 8]
// 0060c124  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0060c128  57                   push edi
// 0060c129  8bf9                 mov edi, ecx
// 0060c12b  7205                 jb 0x60c132
// 0060c12d  8b4004               mov eax, dword ptr [eax + 4]
// 0060c130  eb03                 jmp 0x60c135
// 0060c132  83c004               add eax, 4
// 0060c135  56                   push esi
// 0060c136  8b7720               mov esi, dword ptr [edi + 0x20]
// 0060c139  8d4c2410             lea ecx, [esp + 0x10]
// 0060c13d  51                   push ecx
// 0060c13e  50                   push eax
// 0060c13f  e84c81f4ff           call 0x554290
// 0060c144  83c404               add esp, 4
// 0060c147  50                   push eax
// 0060c148  8bce                 mov ecx, esi
// 0060c14a  e8b111feff           call 0x5ed300
// 0060c14f  5e                   pop esi
// 0060c150  84c0                 test al, al
// 0060c152  7422                 je 0x60c176
// 0060c154  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060c158  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0060c15b  8954240c             mov dword ptr [esp + 0xc], edx
// 0060c15f  8b01                 mov eax, dword ptr [ecx]
// 0060c161  8b400c               mov eax, dword ptr [eax + 0xc]
// 0060c164  8d54240c             lea edx, [esp + 0xc]
// 0060c168  52                   push edx
// 0060c169  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0060c16d  52                   push edx
// 0060c16e  ffd0                 call eax
// 0060c170  b001                 mov al, 1
// 0060c172  5f                   pop edi
// 0060c173  c20800               ret 8
// 0060c176  32c0                 xor al, al
// 0060c178  5f                   pop edi
// 0060c179  c20800               ret 8

struct String {
    unsigned int pad;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Name;
extern const Name& __cdecl getName(const char*);

struct EnumDescriptor {
    bool lookup(const Name&, int&);
};

enum Value {
    ValueZero = 0
};

struct Property {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const Value&);
};

struct S {
    char padding[0x1c];
    Property* property;
    EnumDescriptor* enumeration;

    bool setString(void*, const String&);
};

bool S::setString(void* object, const String& text)
{
    const char* characters =
        text.capacity >= 16 ? text.storage.pointer : text.storage.buffer;
    EnumDescriptor* descriptor = enumeration;
    int value;
    if (descriptor->lookup(getName(characters), value)) {
        reinterpret_cast<volatile int&>(value) = value;
        property->set(object, reinterpret_cast<const Value&>(value));
        return true;
    }
    return false;
}
