// roc 2010-06 005e3520  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e3520
//
// 005e3520  8b442404             mov eax, dword ptr [esp + 4]
// 005e3524  56                   push esi
// 005e3525  50                   push eax
// 005e3526  83ec1c               sub esp, 0x1c
// 005e3529  8bf1                 mov esi, ecx
// 005e352b  8bcc                 mov ecx, esp
// 005e352d  89642428             mov dword ptr [esp + 0x28], esp
// 005e3531  688cf4a000           push 0xa0f48c
// 005e3536  ff1510a49e00         call dword ptr [0x9ea410]
// 005e353c  8bce                 mov ecx, esi
// 005e353e  e8bdfdffff           call 0x5e3300
// 005e3543  c706e0e4a200         mov dword ptr [esi], 0xa2e4e0
// 005e3549  8bc6                 mov eax, esi
// 005e354b  5e                   pop esi
// 005e354c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("FollowCamera",p){}