// from server: 60% by colin
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
#include <intrin.h>

typedef unsigned long DWORD;

struct String
{
    char storage[28];
    String(const String &);
    ~String();
};

extern "C" void *__stdcall sub_56B620(const String *);
extern "C" void __stdcall sub_4A0C90(void *, const String *);

struct BoundFuncDesc
{
    char pad[16];
    void construct(const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &);
};

void BoundFuncDesc::construct(const String &a1, const String &a2, const String &a3, const String &a4,
                              const String &a5, const String &a6, const String &a7, const String &a8,
                              const String &a9, const String &a10, const String &a11, const String &a12,
                              const String &a13, const String &a14, const String &a15, const String &a16)
{
    void *p = sub_56B620(&a1);
    if (p)
    {
        String tmp1(a2);
        _ReadWriteBarrier();
        String tmp2(a1);
        sub_4A0C90((char *)p + 16, &tmp2);
    }
}
