// roc 2010-06 005e3410  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e3410
//
// 005e3410  8b442404             mov eax, dword ptr [esp + 4]
// 005e3414  56                   push esi
// 005e3415  50                   push eax
// 005e3416  83ec1c               sub esp, 0x1c
// 005e3419  8bf1                 mov esi, ecx
// 005e341b  8bcc                 mov ecx, esp
// 005e341d  89642428             mov dword ptr [esp + 0x28], esp
// 005e3421  689cdda000           push 0xa0dd9c
// 005e3426  ff1510a49e00         call dword ptr [0x9ea410]
// 005e342c  8bce                 mov ecx, esi
// 005e342e  e8cdfeffff           call 0x5e3300
// 005e3433  c70674e4a200         mov dword ptr [esi], 0xa2e474
// 005e3439  8bc6                 mov eax, esi
// 005e343b  5e                   pop esi
// 005e343c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("SnapSelection",p){}