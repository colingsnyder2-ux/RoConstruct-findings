// roc 2009-06 0060d1d0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060d1d0
//
// 0060d1d0  8b442404             mov eax, dword ptr [esp + 4]
// 0060d1d4  56                   push esi
// 0060d1d5  50                   push eax
// 0060d1d6  83ec1c               sub esp, 0x1c
// 0060d1d9  8bf1                 mov esi, ecx
// 0060d1db  8bcc                 mov ecx, esp
// 0060d1dd  89642428             mov dword ptr [esp + 0x28], esp
// 0060d1e1  68d4898b00           push 0x8b89d4
// 0060d1e6  ff15b4e48900         call dword ptr [0x89e4b4]
// 0060d1ec  8bce                 mov ecx, esi
// 0060d1ee  e82dffffff           call 0x60d120
// 0060d1f3  c706ec858d00         mov dword ptr [esi], 0x8d85ec
// 0060d1f9  8bc6                 mov eax, esi
// 0060d1fb  5e                   pop esi
// 0060d1fc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("Group",p){}