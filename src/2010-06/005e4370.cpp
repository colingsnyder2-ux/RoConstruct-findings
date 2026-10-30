// roc 2010-06 005e4370  unit: RBX::DuplicateSelectionVerb  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e4370
//
// 005e4370  64a100000000         mov eax, dword ptr fs:[0]
// 005e4376  6aff                 push -1
// 005e4378  68799d9800           push 0x989d79
// 005e437d  50                   push eax
// 005e437e  64892500000000       mov dword ptr fs:[0], esp
// 005e4385  56                   push esi
// 005e4386  8bf1                 mov esi, ecx
// 005e4388  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e438c  50                   push eax
// 005e438d  83ec1c               sub esp, 0x1c
// 005e4390  8d54243c             lea edx, [esp + 0x3c]
// 005e4394  8bcc                 mov ecx, esp
// 005e4396  89642438             mov dword ptr [esp + 0x38], esp
// 005e439a  52                   push edx
// 005e439b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005e43a3  ff150ca49e00         call dword ptr [0x9ea40c]
// 005e43a9  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e43ad  50                   push eax
// 005e43ae  8bce                 mov ecx, esi
// 005e43b0  e8fbfaffff           call 0x5e3eb0
// 005e43b5  8d4c241c             lea ecx, [esp + 0x1c]
// 005e43b9  c706b0e4a200         mov dword ptr [esi], 0xa2e4b0
// 005e43bf  c6462400             mov byte ptr [esi + 0x24], 0
// 005e43c3  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005e43cb  ff1500a49e00         call dword ptr [0x9ea400]
// 005e43d1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e43d5  8bc6                 mov eax, esi
// 005e43d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005e43de  5e                   pop esi
// 005e43df  83c40c               add esp, 0xc
// 005e43e2  c22400               ret 0x24
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