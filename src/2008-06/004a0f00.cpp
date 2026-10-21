// from server: 83% by EspClaude
// from server: 60% by colin
// roc 2008-06 004a0f00  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0f00
//
// 004a0f00  64a100000000         mov eax, dword ptr fs:[0]
// 004a0f06  6aff                 push -1
// 004a0f08  680b7a7c00           push 0x7c7a0b
// 004a0f0d  50                   push eax
// 004a0f0e  64892500000000       mov dword ptr fs:[0], esp
// 004a0f15  56                   push esi
// 004a0f16  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a0f1a  50                   push eax
// 004a0f1b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a0f23  e8f8a60c00           call 0x56b620
// 004a0f28  8bf0                 mov esi, eax
// 004a0f2a  85f6                 test esi, esi
// 004a0f2c  7444                 je 0x4a0f72
// 004a0f2e  83ec1c               sub esp, 0x1c
// 004a0f31  8d542454             lea edx, [esp + 0x54]
// 004a0f35  8bcc                 mov ecx, esp
// 004a0f37  89642430             mov dword ptr [esp + 0x30], esp
// 004a0f3b  52                   push edx
// 004a0f3c  ff155c248000         call dword ptr [0x80245c]
// 004a0f42  8b442450             mov eax, dword ptr [esp + 0x50]
// 004a0f46  50                   push eax
// 004a0f47  83ec1c               sub esp, 0x1c
// 004a0f4a  8d542454             lea edx, [esp + 0x54]
// 004a0f4e  8bcc                 mov ecx, esp
// 004a0f50  89642470             mov dword ptr [esp + 0x70], esp
// 004a0f54  52                   push edx
// 004a0f55  c644244c02           mov byte ptr [esp + 0x4c], 2
// 004a0f5a  ff155c248000         call dword ptr [0x80245c]
// 004a0f60  8d442450             lea eax, [esp + 0x50]
// 004a0f64  50                   push eax
// 004a0f65  8d4e10               lea ecx, [esi + 0x10]
// 004a0f68  c644244c01           mov byte ptr [esp + 0x4c], 1
// 004a0f6d  e81efdffff           call 0x4a0c90
// 004a0f72  8d4c2418             lea ecx, [esp + 0x18]
// 004a0f76  c644240c00           mov byte ptr [esp + 0xc], 0
// 004a0f7b  ff1568248000         call dword ptr [0x802468]
// 004a0f81  8d4c2438             lea ecx, [esp + 0x38]
// 004a0f85  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004a0f8d  ff1568248000         call dword ptr [0x802468]
// 004a0f93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a0f97  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0f9e  5e                   pop esi
// 004a0f9f  83c40c               add esp, 0xc
// 004a0fa2  c24000               ret 0x40

// from server: 58% by colin
// roc 2008-06 004a0f00  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0f00
//
// 004a0f00  64a100000000         mov eax, dword ptr fs:[0]
// 004a0f06  6aff                 push -1
// 004a0f08  680b7a7c00           push 0x7c7a0b
// 004a0f0d  50                   push eax
// 004a0f0e  64892500000000       mov dword ptr fs:[0], esp
// 004a0f15  56                   push esi
// 004a0f16  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a0f1a  50                   push eax
// 004a0f1b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a0f23  e8f8a60c00           call 0x56b620
// 004a0f28  8bf0                 mov esi, eax
// 004a0f2a  85f6                 test esi, esi
// 004a0f2c  7444                 je 0x4a0f72
// 004a0f2e  83ec1c               sub esp, 0x1c
// 004a0f31  8d542454             lea edx, [esp + 0x54]
// 004a0f35  8bcc                 mov ecx, esp
// 004a0f37  89642430             mov dword ptr [esp + 0x30], esp
// 004a0f3b  52                   push edx
// 004a0f3c  ff155c248000         call dword ptr [0x80245c]
// 004a0f42  8b442450             mov eax, dword ptr [esp + 0x50]
// 004a0f46  50                   push eax
// 004a0f47  83ec1c               sub esp, 0x1c
// 004a0f4a  8d542454             lea edx, [esp + 0x54]
#include <string>

struct Tag {};

struct Result {
    Result();
    int value;
};

struct Target {
    Result call(std::string a, int b, std::string c);
};

struct Holder {
    char pad[0x10];
    Target target;
};

struct BoundFuncDesc {
    Holder* lookup(int id);
    void execute(int id, std::string a, int b, std::string c);
};

void BoundFuncDesc::execute(int id, std::string a, int b, std::string c)
{
    Holder* h = lookup(id);
    if (h)
        h->target.call(a, b, c);
}
