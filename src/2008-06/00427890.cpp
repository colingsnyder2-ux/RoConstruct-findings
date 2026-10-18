// from server: 97% by colin
// from server: 93% by king_originala
// roc 2008-06 00427890  unit: ThreadLogManager  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427890
//
// 00427890  6aff                 push -1
// 00427892  68d3ef7b00           push 0x7befd3
// 00427897  64a100000000         mov eax, dword ptr fs:[0]
// 0042789d  50                   push eax
// 0042789e  64892500000000       mov dword ptr fs:[0], esp
// 004278a5  83ec08               sub esp, 8
// 004278a8  56                   push esi
// 004278a9  33c0                 xor eax, eax
// 004278ab  89442408             mov dword ptr [esp + 8], eax
// 004278af  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004278b3  57                   push edi
// 004278b4  8bf9                 mov edi, ecx
// 004278b6  8b0dfcd09600         mov ecx, dword ptr [0x96d0fc]
// 004278bc  83c104               add ecx, 4
// 004278bf  89442418             mov dword ptr [esp + 0x18], eax
// 004278c3  8b01                 mov eax, dword ptr [ecx]
// 004278c5  8b5004               mov edx, dword ptr [eax + 4]
// 004278c8  56                   push esi
// 004278c9  ffd2                 call edx
// 004278cb  8d4c2408             lea ecx, [esp + 8]
// 004278cf  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004278d7  ff15043f8000         call dword ptr [0x803f04]
// 004278dd  8b4708               mov eax, dword ptr [edi + 8]
// 004278e0  50                   push eax
// 004278e1  8d4f0c               lea ecx, [edi + 0xc]
// 004278e4  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004278ec  ff1564248000         call dword ptr [0x802464]
// 004278f2  50                   push eax
// 004278f3  8d4c2410             lea ecx, [esp + 0x10]
// 004278f7  6814038100           push 0x810314
// 004278fc  51                   push ecx
// 004278fd  ff15dc3e8000         call dword ptr [0x803edc]
// 00427903  83c410               add esp, 0x10
// 00427906  8d4c2408             lea ecx, [esp + 8]
// 0042790a  ff15e03e8000         call dword ptr [0x803ee0]
// 00427910  50                   push eax
// 00427911  8bce                 mov ecx, esi
// 00427913  ff15f4238000         call dword ptr [0x8023f4]
// 00427919  83e804               sub eax, 4
// 0042791c  50                   push eax
// 0042791d  8bce                 mov ecx, esi
// 0042791f  ff15f8238000         call dword ptr [0x8023f8]
// 00427925  8d4c2408             lea ecx, [esp + 8]
// 00427929  ff15143f8000         call dword ptr [0x803f14]
// 0042792f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00427933  5f                   pop edi
// 00427934  8bc6                 mov eax, esi
// 00427936  5e                   pop esi
// 00427937  64890d00000000       mov dword ptr fs:[0], ecx
// 0042793e  83c414               add esp, 0x14
// 00427941  c20400               ret 4

struct String {
    char storage[28];
};

struct Buffer;
typedef void (__thiscall* BufferOperation)(Buffer*);

extern BufferOperation constructBuffer;
extern BufferOperation destroyBuffer;

struct Buffer {
    void* data;
    int active;

    Buffer();
    __declspec(dllimport) ~Buffer() throw();
};

__forceinline Buffer::Buffer() {
    data = 0;
}

struct Provider {
    virtual void unused();
    virtual void prepare(String*);
};

struct ProviderOwner {
    int reserved;
    Provider provider;
};

extern ProviderOwner* providerOwner;

typedef const char* (__thiscall* BufferText)(const Buffer*);
typedef const char* (__thiscall* StringText)(const String*);
typedef unsigned int (__thiscall* StringSize)(const String*);
typedef String& (__thiscall* StringInsert)(String*, unsigned int, const char*);
typedef void (__cdecl* BufferFormat)(Buffer*, const char*, ...);

extern BufferText bufferText;
extern StringText stringText;
extern StringSize stringSize;
extern StringInsert stringInsert;
extern BufferFormat formatBuffer;

struct Temporary : Buffer {
    Temporary(String* text);
    ~Temporary() throw();
};

__forceinline Temporary::Temporary(String* text) {
    providerOwner->provider.prepare(text);
    active = 1;
    constructBuffer(this);
}

__forceinline Temporary::~Temporary() throw() {
}

struct ThreadLogManager {
    int reserved[2];
    int number;
    String name;

    String& process(String& text);
};

String& ThreadLogManager::process(String& text) {
    Temporary buffer(&text);
    formatBuffer(&buffer, "_%s_%d", stringText(&name), number);
    stringInsert(&text, stringSize(&text) - 4, bufferText(&buffer));
    return text;
}
