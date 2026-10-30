// roc 2011-06 00606c30  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00606c30
//
// 00606c30  8b442404             mov eax, dword ptr [esp + 4]
// 00606c34  56                   push esi
// 00606c35  50                   push eax
// 00606c36  83ec1c               sub esp, 0x1c
// 00606c39  8bf1                 mov esi, ecx
// 00606c3b  8bcc                 mov ecx, esp
// 00606c3d  89642428             mov dword ptr [esp + 0x28], esp
// 00606c41  68d810a700           push 0xa710d8
// 00606c46  ff15c404a400         call dword ptr [0xa404c4]
// 00606c4c  8bce                 mov ecx, esi
// 00606c4e  e82dffffff           call 0x606b80
// 00606c53  c7063c32a900         mov dword ptr [esi], 0xa9323c
// 00606c59  8bc6                 mov eax, esi
// 00606c5b  5e                   pop esi
// 00606c5c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("Group",p){}