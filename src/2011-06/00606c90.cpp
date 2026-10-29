// roc 2011-06 00606c90  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00606c90
//
// 00606c90  8b442404             mov eax, dword ptr [esp + 4]
// 00606c94  56                   push esi
// 00606c95  50                   push eax
// 00606c96  83ec1c               sub esp, 0x1c
// 00606c99  8bf1                 mov esi, ecx
// 00606c9b  8bcc                 mov ecx, esp
// 00606c9d  89642428             mov dword ptr [esp + 0x28], esp
// 00606ca1  689410a700           push 0xa71094
// 00606ca6  ff15c404a400         call dword ptr [0xa404c4]
// 00606cac  8bce                 mov ecx, esi
// 00606cae  e8cdfeffff           call 0x606b80
// 00606cb3  c7067c32a900         mov dword ptr [esi], 0xa9327c
// 00606cb9  8bc6                 mov eax, esi
// 00606cbb  5e                   pop esi
// 00606cbc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("SnapSelection",p){}