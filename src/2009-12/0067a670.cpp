// roc 2009-12 0067a670  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a670
//
// 0067a670  8b442404             mov eax, dword ptr [esp + 4]
// 0067a674  56                   push esi
// 0067a675  50                   push eax
// 0067a676  83ec1c               sub esp, 0x1c
// 0067a679  8bf1                 mov esi, ecx
// 0067a67b  8bcc                 mov ecx, esp
// 0067a67d  89642428             mov dword ptr [esp + 0x28], esp
// 0067a681  68acce9a00           push 0x9aceac
// 0067a686  ff15f4b69800         call dword ptr [0x98b6f4]
// 0067a68c  8bce                 mov ecx, esi
// 0067a68e  e82dffffff           call 0x67a5c0
// 0067a693  c70694fd9c00         mov dword ptr [esi], 0x9cfd94
// 0067a699  8bc6                 mov eax, esi
// 0067a69b  5e                   pop esi
// 0067a69c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("Group",p){}