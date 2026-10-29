// roc 2009-12 0067a7e0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a7e0
//
// 0067a7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a7e4  56                   push esi
// 0067a7e5  50                   push eax
// 0067a7e6  83ec1c               sub esp, 0x1c
// 0067a7e9  8bf1                 mov esi, ecx
// 0067a7eb  8bcc                 mov ecx, esp
// 0067a7ed  89642428             mov dword ptr [esp + 0x28], esp
// 0067a7f1  6864e59a00           push 0x9ae564
// 0067a7f6  ff15f4b69800         call dword ptr [0x98b6f4]
// 0067a7fc  8bce                 mov ecx, esi
// 0067a7fe  e8bdfdffff           call 0x67a5c0
// 0067a803  c70630fe9c00         mov dword ptr [esi], 0x9cfe30
// 0067a809  8bc6                 mov eax, esi
// 0067a80b  5e                   pop esi
// 0067a80c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("FollowCamera",p){}