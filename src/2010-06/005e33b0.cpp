// roc 2010-06 005e33b0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e33b0
//
// 005e33b0  8b442404             mov eax, dword ptr [esp + 4]
// 005e33b4  56                   push esi
// 005e33b5  50                   push eax
// 005e33b6  83ec1c               sub esp, 0x1c
// 005e33b9  8bf1                 mov esi, ecx
// 005e33bb  8bcc                 mov ecx, esp
// 005e33bd  89642428             mov dword ptr [esp + 0x28], esp
// 005e33c1  68e0dda000           push 0xa0dde0
// 005e33c6  ff1510a49e00         call dword ptr [0x9ea410]
// 005e33cc  8bce                 mov ecx, esi
// 005e33ce  e82dffffff           call 0x5e3300
// 005e33d3  c70644e4a200         mov dword ptr [esi], 0xa2e444
// 005e33d9  8bc6                 mov eax, esi
// 005e33db  5e                   pop esi
// 005e33dc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("Group",p){}