// from server: 100% by king_originala
// roc 2008-06 00569920  unit: RBX::StandardOut  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569920
//
// 00569920  64a100000000         mov eax, dword ptr fs:[0]
// 00569926  6aff                 push -1
// 00569928  6848f97c00           push 0x7cf948
// 0056992d  50                   push eax
// 0056992e  64892500000000       mov dword ptr fs:[0], esp
// 00569935  81ec88010000         sub esp, 0x188
// 0056993b  80bc249801000000     cmp byte ptr [esp + 0x198], 0
// 00569943  56                   push esi
// 00569944  8bf1                 mov esi, ecx
// 00569946  0f85d5000000         jne 0x569a21
// 0056994c  57                   push edi
// 0056994d  ff15d8228000         call dword ptr [0x8022d8]
// 00569953  6a00                 push 0
// 00569955  6800010000           push 0x100
// 0056995a  8bf8                 mov edi, eax
// 0056995c  8d842498000000       lea eax, [esp + 0x98]
// 00569963  50                   push eax
// 00569964  6800080000           push 0x800
// 00569969  57                   push edi
// 0056996a  6a00                 push 0
// 0056996c  6800100000           push 0x1000
// 00569971  ff1578228000         call dword ptr [0x802278]
// 00569977  85c0                 test eax, eax
// 00569979  754e                 jne 0x5699c9
// 0056997b  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0056997f  7205                 jb 0x569986
// 00569981  8b7604               mov esi, dword ptr [esi + 4]
// 00569984  eb03                 jmp 0x569989
// 00569986  83c604               add esi, 4
// 00569989  8b8c24a4010000       mov ecx, dword ptr [esp + 0x1a4]
// 00569990  57                   push edi
// 00569991  51                   push ecx
// 00569992  56                   push esi
// 00569993  8d542464             lea edx, [esp + 0x64]
// 00569997  6854f58200           push 0x82f554
// 0056999c  52                   push edx
// 0056999d  e86e01faff           call 0x509b10
// 005699a2  83c414               add esp, 0x14
// 005699a5  50                   push eax
// 005699a6  8d4c240c             lea ecx, [esp + 0xc]
// 005699aa  c784249c01000000000000 mov dword ptr [esp + 0x19c], 0
// 005699b5  e89603eaff           call 0x409d50
// 005699ba  68c81b8d00           push 0x8d1bc8
// 005699bf  8d44240c             lea eax, [esp + 0xc]
// 005699c3  50                   push eax
// 005699c4  e8c37b1300           call 0x6a158c
// 005699c9  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005699cd  7205                 jb 0x5699d4
// 005699cf  8b7604               mov esi, dword ptr [esi + 4]
// 005699d2  eb03                 jmp 0x5699d7
// 005699d4  83c604               add esi, 4
// 005699d7  8b9424a4010000       mov edx, dword ptr [esp + 0x1a4]
// 005699de  8d8c2490000000       lea ecx, [esp + 0x90]
// 005699e5  51                   push ecx
// 005699e6  52                   push edx
// 005699e7  56                   push esi
// 005699e8  8d842480000000       lea eax, [esp + 0x80]
// 005699ef  6848f58200           push 0x82f548
// 005699f4  50                   push eax
// 005699f5  e81601faff           call 0x509b10
// 005699fa  83c414               add esp, 0x14
// 005699fd  50                   push eax
// 005699fe  8d4c2434             lea ecx, [esp + 0x34]
// 00569a02  c784249c01000001000000 mov dword ptr [esp + 0x19c], 1
// 00569a0d  e83e03eaff           call 0x409d50
// 00569a12  68c81b8d00           push 0x8d1bc8
// 00569a17  8d4c2434             lea ecx, [esp + 0x34]
// 00569a1b  51                   push ecx
// 00569a1c  e86b7b1300           call 0x6a158c
// 00569a21  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 00569a28  5e                   pop esi
// 00569a29  64890d00000000       mov dword ptr fs:[0], ecx
// 00569a30  81c494010000         add esp, 0x194
// 00569a36  c20800               ret 8

typedef unsigned long DWORD;

extern "C" {
    extern DWORD (__stdcall *GetLastError)();
    extern DWORD (__stdcall *FormatMessageA)(
        DWORD, const void*, DWORD, DWORD, char*, DWORD, void*);
}

struct S {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~S();
    void check(bool, const char*);
};

struct Error {
    char storage[40];

    Error(const S&);
    Error(const Error&);
    ~Error();
};

extern S __cdecl format(const char*, ...);

void S::check(bool success, const char* message)
{
    if (!success) {
        char text[256];
        DWORD error = GetLastError();

        if (!FormatMessageA(0x1000, 0, error, 0x800,
                            text, 0x100, 0)) {
            throw Error(format("%s: %s, err=0x%X",
                               capacity >= 16 ? storage.pointer : storage.buffer,
                               message, error));
        }

        throw Error(format("%s: %s, %s",
                           capacity >= 16 ? storage.pointer : storage.buffer,
                           message, text));
    }
}
