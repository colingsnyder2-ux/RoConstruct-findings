// from server: 53% by colin
// from server: 50% by king_originala
// roc 2008-06 004a0c90  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0c90
//
// 004a0c90  6aff                 push -1
// 004a0c92  68dc797c00           push 0x7c79dc
// 004a0c97  64a100000000         mov eax, dword ptr fs:[0]
// 004a0c9d  50                   push eax
// 004a0c9e  64892500000000       mov dword ptr fs:[0], esp
// 004a0ca5  83ec4c               sub esp, 0x4c
// 004a0ca8  53                   push ebx
// 004a0ca9  55                   push ebp
// 004a0caa  56                   push esi
// 004a0cab  57                   push edi
// 004a0cac  8bf1                 mov esi, ecx
// 004a0cae  56                   push esi
// 004a0caf  8d4c241c             lea ecx, [esp + 0x1c]
// 004a0cb3  c744246801000000     mov dword ptr [esp + 0x68], 1
// 004a0cbb  e8a09a0c00           call 0x56a760
// 004a0cc0  83ec1c               sub esp, 0x1c
// 004a0cc3  8d8424ac000000       lea eax, [esp + 0xac]
// 004a0cca  8bcc                 mov ecx, esp
// 004a0ccc  89642430             mov dword ptr [esp + 0x30], esp
// 004a0cd0  b302                 mov bl, 2
// 004a0cd2  50                   push eax
// 004a0cd3  889c2484000000       mov byte ptr [esp + 0x84], bl
// 004a0cda  ff155c248000         call dword ptr [0x80245c]
// 004a0ce0  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004a0ce7  51                   push ecx
// 004a0ce8  83ec1c               sub esp, 0x1c
// 004a0ceb  8d9424ac000000       lea edx, [esp + 0xac]
// 004a0cf2  8bcc                 mov ecx, esp
// 004a0cf4  89a424c8000000       mov dword ptr [esp + 0xc8], esp
// 004a0cfb  52                   push edx
// 004a0cfc  c68424a400000003     mov byte ptr [esp + 0xa4], 3
// 004a0d04  ff155c248000         call dword ptr [0x80245c]
// 004a0d0a  8d4c245c             lea ecx, [esp + 0x5c]
// 004a0d0e  889c24a0000000       mov byte ptr [esp + 0xa0], bl
// 004a0d15  e896e2ffff           call 0x49efb0
// 004a0d1a  c644241000           mov byte ptr [esp + 0x10], 0
// 004a0d1f  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a0d23  8b36                 mov esi, dword ptr [esi]
// 004a0d25  8b7e58               mov edi, dword ptr [esi + 0x58]
// 004a0d28  83ec40               sub esp, 0x40
// 004a0d2b  89642454             mov dword ptr [esp + 0x54], esp
// 004a0d2f  8bdc                 mov ebx, esp
// 004a0d31  8be8                 mov ebp, eax
// 004a0d33  8d442450             lea eax, [esp + 0x50]
// 004a0d37  50                   push eax
// 004a0d38  8d4c2464             lea ecx, [esp + 0x64]
// 004a0d3c  51                   push ecx
// 004a0d3d  83ec1c               sub esp, 0x1c
// 004a0d40  8bd4                 mov edx, esp
// 004a0d42  89642478             mov dword ptr [esp + 0x78], esp
// 004a0d46  52                   push edx
// 004a0d47  8d4e08               lea ecx, [esi + 8]
// 004a0d4a  c68424cc00000005     mov byte ptr [esp + 0xcc], 5
// 004a0d52  83c704               add edi, 4
// 004a0d55  e856060d00           call 0x5713b0
// 004a0d5a  83ec1c               sub esp, 0x1c
// 004a0d5d  8bc4                 mov eax, esp
// 004a0d5f  89a42494000000       mov dword ptr [esp + 0x94], esp
// 004a0d66  50                   push eax
// 004a0d67  8d4d08               lea ecx, [ebp + 8]
// 004a0d6a  e841060d00           call 0x5713b0
// 004a0d6f  8bcb                 mov ecx, ebx
// 004a0d71  e82afbfeff           call 0x4908a0
// 004a0d76  83ec40               sub esp, 0x40
// 004a0d79  89a42494000000       mov dword ptr [esp + 0x94], esp
// 004a0d80  8bdc                 mov ebx, esp
// 004a0d82  8d8c2490000000       lea ecx, [esp + 0x90]
// 004a0d89  51                   push ecx
// 004a0d8a  8d9424a4000000       lea edx, [esp + 0xa4]
// 004a0d91  52                   push edx
// 004a0d92  83ec1c               sub esp, 0x1c
// 004a0d95  8bc4                 mov eax, esp
// 004a0d97  89a424b8000000       mov dword ptr [esp + 0xb8], esp
// 004a0d9e  50                   push eax
// 004a0d9f  8d4e08               lea ecx, [esi + 8]
// 004a0da2  e809060d00           call 0x5713b0
// 004a0da7  83ec1c               sub esp, 0x1c
// 004a0daa  8bcc                 mov ecx, esp
// 004a0dac  89a424d4000000       mov dword ptr [esp + 0xd4], esp
// 004a0db3  51                   push ecx
// 004a0db4  8bcd                 mov ecx, ebp
// 004a0db6  83c108               add ecx, 8
// 004a0db9  e8c2050d00           call 0x571380
// 004a0dbe  8bcb                 mov ecx, ebx
// 004a0dc0  e8dbfafeff           call 0x4908a0
// 004a0dc5  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 004a0dcc  56                   push esi
// 004a0dcd  8bcf                 mov ecx, edi
// 004a0dcf  e88cfaffff           call 0x4a0860
// 004a0dd4  32db                 xor bl, bl
// 004a0dd6  385c2410             cmp byte ptr [esp + 0x10], bl
// 004a0dda  7404                 je 0x4a0de0
// 004a0ddc  885c2410             mov byte ptr [esp + 0x10], bl
// 004a0de0  8d4c2440             lea ecx, [esp + 0x40]
// 004a0de4  c644246406           mov byte ptr [esp + 0x64], 6
// 004a0de9  ff1568248000         call dword ptr [0x802468]
// 004a0def  8d4c2420             lea ecx, [esp + 0x20]
// 004a0df3  c644246402           mov byte ptr [esp + 0x64], 2
// 004a0df8  ff1568248000         call dword ptr [0x802468]
// 004a0dfe  8d4c2418             lea ecx, [esp + 0x18]
// 004a0e02  c644246401           mov byte ptr [esp + 0x64], 1
// 004a0e07  e844980c00           call 0x56a650
// 004a0e0c  8d4c2470             lea ecx, [esp + 0x70]
// 004a0e10  885c2464             mov byte ptr [esp + 0x64], bl
// 004a0e14  ff1568248000         call dword ptr [0x802468]
// 004a0e1a  8d8c2490000000       lea ecx, [esp + 0x90]
// 004a0e21  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 004a0e29  ff1568248000         call dword ptr [0x802468]
// 004a0e2f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004a0e33  5f                   pop edi
// 004a0e34  8bc6                 mov eax, esi
// 004a0e36  5e                   pop esi
// 004a0e37  5d                   pop ebp
// 004a0e38  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0e3f  5b                   pop ebx
// 004a0e40  83c458               add esp, 0x58
// 004a0e43  c24000               ret 0x40

struct String;

extern String* (__thiscall* stringCopy)(String*, const String&);
extern void (__thiscall* stringDestroy)(String*);

struct String
{
    unsigned char data[28];

    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    stringCopy(this, other);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Names
{
    String first();
    String second();
};

struct Arguments
{
    String first;
    int value;
    String second;

    Arguments(String, int, String);
    __declspec(dllimport) ~Arguments() throw();
};

struct Operation
{
    unsigned char data[64];

    Operation(String, String, Arguments*, bool*);
};

struct Service
{
    void invoke(void*, Operation, Operation);
};

struct ServiceHolder
{
    unsigned int reserved;
    Service service;
};

struct Object
{
    unsigned int reserved[2];
    Names names;
    unsigned char padding[79];
    ServiceHolder* service;
};

struct S;

struct Guard
{
    Object* object;
    void* control;

    Guard(S*);
    ~Guard();
};

struct S
{
    Object* object;

    void* func_004a0c90(void*, String, int, String);
};

void* S::func_004a0c90(void* result, String a, int value, String b)
{
    Guard guard(this);
    Arguments arguments(a, value, b);
    bool active = false;

    Object* source = object;
    Service* service = &source->service->service;
    Object* destination = guard.object;

    service->invoke(
        result,
        Operation(destination->names.second(), source->names.first(),
                  &arguments, &active),
        Operation(destination->names.first(), source->names.first(),
                  &arguments, &active));

    if (active)
        active = false;

    return result;
}
