// roc 2009-12 0067b650  unit: RBX::DuplicateSelectionVerb  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067b650
//
// 0067b650  64a100000000         mov eax, dword ptr fs:[0]
// 0067b656  6aff                 push -1
// 0067b658  6819779300           push 0x937719
// 0067b65d  50                   push eax
// 0067b65e  64892500000000       mov dword ptr fs:[0], esp
// 0067b665  56                   push esi
// 0067b666  8bf1                 mov esi, ecx
// 0067b668  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067b66c  50                   push eax
// 0067b66d  83ec1c               sub esp, 0x1c
// 0067b670  8d54243c             lea edx, [esp + 0x3c]
// 0067b674  8bcc                 mov ecx, esp
// 0067b676  89642438             mov dword ptr [esp + 0x38], esp
// 0067b67a  52                   push edx
// 0067b67b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0067b683  ff15f0b69800         call dword ptr [0x98b6f0]
// 0067b689  8b442434             mov eax, dword ptr [esp + 0x34]
// 0067b68d  50                   push eax
// 0067b68e  8bce                 mov ecx, esi
// 0067b690  e8fbfaffff           call 0x67b190
// 0067b695  8d4c241c             lea ecx, [esp + 0x1c]
// 0067b699  c70600fe9c00         mov dword ptr [esi], 0x9cfe00
// 0067b69f  c6462400             mov byte ptr [esi + 0x24], 0
// 0067b6a3  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0067b6ab  ff15e4b69800         call dword ptr [0x98b6e4]
// 0067b6b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067b6b5  8bc6                 mov eax, esi
// 0067b6b7  64890d00000000       mov dword ptr fs:[0], ecx
// 0067b6be  5e                   pop esi
// 0067b6bf  83c40c               add esp, 0xc
// 0067b6c2  c22400               ret 0x24
// copied from an identical function in another client (function ??0DuplicateSelectionVerb@@QAE@PAX0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

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