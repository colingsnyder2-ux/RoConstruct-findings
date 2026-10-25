// from server: 100% by colin
// roc 2008-06 0049f210  unit: RBX::Network::Client  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f210
//
// 0049f210  6aff                 push -1
// 0049f212  6873777c00           push 0x7c7773
// 0049f217  64a100000000         mov eax, dword ptr fs:[0]
// 0049f21d  50                   push eax
// 0049f21e  64892500000000       mov dword ptr fs:[0], esp
// 0049f225  83ec2c               sub esp, 0x2c
// 0049f228  56                   push esi
// 0049f229  8bf1                 mov esi, ecx
// 0049f22b  833e00               cmp dword ptr [esi], 0
// 0049f22e  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0049f236  7514                 jne 0x49f24c
// 0049f238  8d4c2408             lea ecx, [esp + 8]
// 0049f23c  e8afacf6ff           call 0x409ef0
// 0049f241  50                   push eax
// 0049f242  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0049f247  e8b4b2f6ff           call 0x40a500
// 0049f24c  83ec1c               sub esp, 0x1c
// 0049f24f  8d44247c             lea eax, [esp + 0x7c]
// 0049f253  8bcc                 mov ecx, esp
// 0049f255  89642420             mov dword ptr [esp + 0x20], esp
// 0049f259  50                   push eax
// 0049f25a  ff155c248000         call dword ptr [0x80245c]
// 0049f260  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0049f264  51                   push ecx
// 0049f265  83ec1c               sub esp, 0x1c
// 0049f268  8d54247c             lea edx, [esp + 0x7c]
// 0049f26c  8bcc                 mov ecx, esp
// 0049f26e  89a42498000000       mov dword ptr [esp + 0x98], esp
// 0049f275  52                   push edx
// 0049f276  c644247803           mov byte ptr [esp + 0x78], 3
// 0049f27b  ff155c248000         call dword ptr [0x80245c]
// 0049f281  8b06                 mov eax, dword ptr [esi]
// 0049f283  83c608               add esi, 8
// 0049f286  c644247401           mov byte ptr [esp + 0x74], 1
// 0049f28b  8b4004               mov eax, dword ptr [eax + 4]
// 0049f28e  56                   push esi
// 0049f28f  ffd0                 call eax
// 0049f291  83c440               add esp, 0x40
// 0049f294  8d4c2440             lea ecx, [esp + 0x40]
// 0049f298  c644243800           mov byte ptr [esp + 0x38], 0
// 0049f29d  ff1568248000         call dword ptr [0x802468]
// 0049f2a3  8d4c2460             lea ecx, [esp + 0x60]
// 0049f2a7  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0049f2af  ff1568248000         call dword ptr [0x802468]
// 0049f2b5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049f2b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f2c0  5e                   pop esi
// 0049f2c1  83c438               add esp, 0x38
// 0049f2c4  c23c00               ret 0x3c

// RBX::Network::Client  0049f210  ?f@S@@QAEXUString@@H0@Z
#include <string>

struct Error {
    char storage[40];
    Error();
    ~Error();
};

__declspec(noreturn) void __cdecl raiseError(const Error&);

typedef void (__cdecl *Callback)(void*, std::string, int, std::string);

struct CallbackTable {
    Callback unused;
    Callback invoke;
};

struct S {
    CallbackTable *table;
    unsigned int reserved;
    char context;

    void f(std::string first, int value, std::string second);
};

void S::f(std::string first, int value, std::string second) {
    if (!table)
        raiseError(Error());

    table->invoke(&context, first, value, second);
}