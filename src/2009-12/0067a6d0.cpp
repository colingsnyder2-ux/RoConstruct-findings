// roc 2009-12 0067a6d0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a6d0
//
// 0067a6d0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a6d4  56                   push esi
// 0067a6d5  50                   push eax
// 0067a6d6  83ec1c               sub esp, 0x1c
// 0067a6d9  8bf1                 mov esi, ecx
// 0067a6db  8bcc                 mov ecx, esp
// 0067a6dd  89642428             mov dword ptr [esp + 0x28], esp
// 0067a6e1  6868ce9a00           push 0x9ace68
// 0067a6e6  ff15f4b69800         call dword ptr [0x98b6f4]
// 0067a6ec  8bce                 mov ecx, esi
// 0067a6ee  e8cdfeffff           call 0x67a5c0
// 0067a6f3  c706c4fd9c00         mov dword ptr [esi], 0x9cfdc4
// 0067a6f9  8bc6                 mov eax, esi
// 0067a6fb  5e                   pop esi
// 0067a6fc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("SnapSelection",p){}