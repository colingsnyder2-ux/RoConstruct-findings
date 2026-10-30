// roc 2010-06 005e33e0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e33e0
//
// 005e33e0  8b442404             mov eax, dword ptr [esp + 4]
// 005e33e4  56                   push esi
// 005e33e5  50                   push eax
// 005e33e6  83ec1c               sub esp, 0x1c
// 005e33e9  8bf1                 mov esi, ecx
// 005e33eb  8bcc                 mov ecx, esp
// 005e33ed  89642428             mov dword ptr [esp + 0x28], esp
// 005e33f1  68acdda000           push 0xa0ddac
// 005e33f6  ff1510a49e00         call dword ptr [0x9ea410]
// 005e33fc  8bce                 mov ecx, esi
// 005e33fe  e8fdfeffff           call 0x5e3300
// 005e3403  c7065ce4a200         mov dword ptr [esi], 0xa2e45c
// 005e3409  8bc6                 mov eax, esi
// 005e340b  5e                   pop esi
// 005e340c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("WeldSelection",p){}