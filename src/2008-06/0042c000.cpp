// from server: 82% by colin
// from server: 81% by king_originala
// roc 2008-06 0042c000  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042c000
//
// 0042c000  6aff                 push -1
// 0042c002  68faf57b00           push 0x7bf5fa
// 0042c007  64a100000000         mov eax, dword ptr fs:[0]
// 0042c00d  50                   push eax
// 0042c00e  64892500000000       mov dword ptr fs:[0], esp
// 0042c015  83ec2c               sub esp, 0x2c
// 0042c018  55                   push ebp
// 0042c019  56                   push esi
// 0042c01a  57                   push edi
// 0042c01b  8bf1                 mov esi, ecx
// 0042c01d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0042c025  8b4630               mov eax, dword ptr [esi + 0x30]
// 0042c028  8b08                 mov ecx, dword ptr [eax]
// 0042c02a  8d54240c             lea edx, [esp + 0xc]
// 0042c02e  52                   push edx
// 0042c02f  50                   push eax
// 0042c030  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0042c033  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0042c03b  ffd0                 call eax
// 0042c03d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042c041  51                   push ecx
// 0042c042  8d4c2414             lea ecx, [esp + 0x14]
// 0042c046  ff15d83e8000         call dword ptr [0x803ed8]
// 0042c04c  8bc8                 mov ecx, eax
// 0042c04e  c644244001           mov byte ptr [esp + 0x40], 1
// 0042c053  ff15e03e8000         call dword ptr [0x803ee0]
// 0042c059  50                   push eax
// 0042c05a  8d4c2420             lea ecx, [esp + 0x20]
// 0042c05e  ff1558248000         call dword ptr [0x802458]
// 0042c064  8d4c2410             lea ecx, [esp + 0x10]
// 0042c068  c644244003           mov byte ptr [esp + 0x40], 3
// 0042c06d  ff15143f8000         call dword ptr [0x803f14]
// 0042c073  8b5620               mov edx, dword ptr [esi + 0x20]
// 0042c076  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0042c079  8d4c241c             lea ecx, [esp + 0x1c]
// 0042c07d  51                   push ecx
// 0042c07e  b8d0bc4200           mov eax, 0x42bcd0
// 0042c083  50                   push eax
// 0042c084  52                   push edx
// 0042c085  8bea                 mov ebp, edx
// 0042c087  8b6d00               mov ebp, dword ptr [ebp]
// 0042c08a  57                   push edi
// 0042c08b  55                   push ebp
// 0042c08c  8bf7                 mov esi, edi
// 0042c08e  8d542428             lea edx, [esp + 0x28]
// 0042c092  56                   push esi
// 0042c093  52                   push edx
// 0042c094  e827f7ffff           call 0x42b7c0
// 0042c099  83c41c               add esp, 0x1c
// 0042c09c  8d4c241c             lea ecx, [esp + 0x1c]
// 0042c0a0  c644244000           mov byte ptr [esp + 0x40], 0
// 0042c0a5  ff1568248000         call dword ptr [0x802468]
// 0042c0ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042c0af  50                   push eax
// 0042c0b0  ff1544298000         call dword ptr [0x802944]
// 0042c0b6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0042c0ba  5f                   pop edi
// 0042c0bb  5e                   pop esi
// 0042c0bc  b001                 mov al, 1
// 0042c0be  5d                   pop ebp
// 0042c0bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0042c0c6  83c438               add esp, 0x38
// 0042c0c9  c3                   ret 

typedef unsigned short WideChar;

extern "C" __declspec(dllimport) void __stdcall SysFreeString(WideChar*);

struct Conversion;
struct String;

extern Conversion* (__thiscall* conversionConstruct)(Conversion*, WideChar*);
extern const char* (__thiscall* conversionText)(Conversion*);
extern void (__thiscall* conversionDestroy)(Conversion*);
extern String* (__thiscall* stringConstruct)(String*, const char*);
extern void (__thiscall* stringDestroy)(String*);

struct Conversion {
    unsigned int storage[3];

    Conversion(WideChar*);
    ~Conversion();
    const char* text();
};

inline Conversion::Conversion(WideChar* value) {
    conversionConstruct(this, value);
}

inline Conversion::~Conversion() {
    conversionDestroy(this);
}

inline const char* Conversion::text() {
    return conversionText(this);
}

struct String {
    unsigned int storage[7];

    String(const char*);
    ~String();
};

inline String::String(const char* value) {
    stringConstruct(this, value);
}

inline String::~String() {
    stringDestroy(this);
}

struct WideString {
    WideChar* value;

    WideString();
    ~WideString();
};

inline WideString::WideString() : value(0) {}

inline WideString::~WideString() {
    SysFreeString(value);
}

struct Source;

struct SourceTable {
    void* entries[10];
    void (__stdcall* get)(Source*, WideChar**);
};

struct Source {
    SourceTable* table;
};

struct Node {
    unsigned int value;
};

struct Result {
    unsigned int storage[2];
};

extern void __cdecl callback();
extern Result* __cdecl invoke(
    Result*, void*, unsigned int, void*, Node*,
    void (__cdecl*)(), String*);

struct Holder {
    unsigned char reserved0[12];
    void* context;
    unsigned char reserved1[16];
    Node* node;
    unsigned char reserved2[12];
    Source* source;

    bool run();
};

bool Holder::run() {
    WideString value;
    source->table->get(source, &value.value);
    String text(Conversion(value.value).text());
    {
        Result result;
        invoke(&result, context, node->value, context, node, callback, &text);
    }
    return true;
}
