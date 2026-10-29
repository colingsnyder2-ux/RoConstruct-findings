// roc 2011-06 00606c60  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00606c60
//
// 00606c60  8b442404             mov eax, dword ptr [esp + 4]
// 00606c64  56                   push esi
// 00606c65  50                   push eax
// 00606c66  83ec1c               sub esp, 0x1c
// 00606c69  8bf1                 mov esi, ecx
// 00606c6b  8bcc                 mov ecx, esp
// 00606c6d  89642428             mov dword ptr [esp + 0x28], esp
// 00606c71  68a410a700           push 0xa710a4
// 00606c76  ff15c404a400         call dword ptr [0xa404c4]
// 00606c7c  8bce                 mov ecx, esi
// 00606c7e  e8fdfeffff           call 0x606b80
// 00606c83  c7065c32a900         mov dword ptr [esi], 0xa9325c
// 00606c89  8bc6                 mov eax, esi
// 00606c8b  5e                   pop esi
// 00606c8c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("WeldSelection",p){}