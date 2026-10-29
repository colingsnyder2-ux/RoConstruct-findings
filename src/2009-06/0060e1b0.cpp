// roc 2009-06 0060e1b0  unit: RBX::DuplicateSelectionVerb  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060e1b0
//
// 0060e1b0  64a100000000         mov eax, dword ptr fs:[0]
// 0060e1b6  6aff                 push -1
// 0060e1b8  68a9798600           push 0x8679a9
// 0060e1bd  50                   push eax
// 0060e1be  64892500000000       mov dword ptr fs:[0], esp
// 0060e1c5  56                   push esi
// 0060e1c6  8bf1                 mov esi, ecx
// 0060e1c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060e1cc  50                   push eax
// 0060e1cd  83ec1c               sub esp, 0x1c
// 0060e1d0  8d54243c             lea edx, [esp + 0x3c]
// 0060e1d4  8bcc                 mov ecx, esp
// 0060e1d6  89642438             mov dword ptr [esp + 0x38], esp
// 0060e1da  52                   push edx
// 0060e1db  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0060e1e3  ff15b8e48900         call dword ptr [0x89e4b8]
// 0060e1e9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060e1ed  50                   push eax
// 0060e1ee  8bce                 mov ecx, esi
// 0060e1f0  e8fbfaffff           call 0x60dcf0
// 0060e1f5  8d4c241c             lea ecx, [esp + 0x1c]
// 0060e1f9  c70658868d00         mov dword ptr [esi], 0x8d8658
// 0060e1ff  c6462400             mov byte ptr [esi + 0x24], 0
// 0060e203  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0060e20b  ff15c4e48900         call dword ptr [0x89e4c4]
// 0060e211  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060e215  8bc6                 mov eax, esi
// 0060e217  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e21e  5e                   pop esi
// 0060e21f  83c40c               add esp, 0xc
// 0060e222  c22400               ret 0x24
// copied from an identical function in another client (function ??0DuplicateSelectionVerb@@QAE@PAX0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct Base
{
    unsigned char storage[32];

    Base(void*, std::string, void*);
    virtual ~Base();
};

struct DuplicateSelectionVerb : Base
{
    bool flag;

    DuplicateSelectionVerb(void*, void*, std::string);
    virtual ~DuplicateSelectionVerb();
};

DuplicateSelectionVerb::DuplicateSelectionVerb(
    void* first, void* second, std::string text)
    : Base(first, text, second)
{
    flag = false;
}