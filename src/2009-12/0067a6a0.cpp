// roc 2009-12 0067a6a0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a6a0
//
// 0067a6a0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a6a4  56                   push esi
// 0067a6a5  50                   push eax
// 0067a6a6  83ec1c               sub esp, 0x1c
// 0067a6a9  8bf1                 mov esi, ecx
// 0067a6ab  8bcc                 mov ecx, esp
// 0067a6ad  89642428             mov dword ptr [esp + 0x28], esp
// 0067a6b1  6878ce9a00           push 0x9ace78
// 0067a6b6  ff15f4b69800         call dword ptr [0x98b6f4]
// 0067a6bc  8bce                 mov ecx, esi
// 0067a6be  e8fdfeffff           call 0x67a5c0
// 0067a6c3  c706acfd9c00         mov dword ptr [esi], 0x9cfdac
// 0067a6c9  8bc6                 mov eax, esi
// 0067a6cb  5e                   pop esi
// 0067a6cc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("WeldSelection",p){}