// roc 2009-06 0060d200  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060d200
//
// 0060d200  8b442404             mov eax, dword ptr [esp + 4]
// 0060d204  56                   push esi
// 0060d205  50                   push eax
// 0060d206  83ec1c               sub esp, 0x1c
// 0060d209  8bf1                 mov esi, ecx
// 0060d20b  8bcc                 mov ecx, esp
// 0060d20d  89642428             mov dword ptr [esp + 0x28], esp
// 0060d211  68a0898b00           push 0x8b89a0
// 0060d216  ff15b4e48900         call dword ptr [0x89e4b4]
// 0060d21c  8bce                 mov ecx, esi
// 0060d21e  e8fdfeffff           call 0x60d120
// 0060d223  c70604868d00         mov dword ptr [esi], 0x8d8604
// 0060d229  8bc6                 mov eax, esi
// 0060d22b  5e                   pop esi
// 0060d22c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("WeldSelection",p){}