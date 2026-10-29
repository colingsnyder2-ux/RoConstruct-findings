// roc 2009-06 0060d310  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060d310
//
// 0060d310  8b442404             mov eax, dword ptr [esp + 4]
// 0060d314  56                   push esi
// 0060d315  50                   push eax
// 0060d316  83ec1c               sub esp, 0x1c
// 0060d319  8bf1                 mov esi, ecx
// 0060d31b  8bcc                 mov ecx, esp
// 0060d31d  89642428             mov dword ptr [esp + 0x28], esp
// 0060d321  687ca08b00           push 0x8ba07c
// 0060d326  ff15b4e48900         call dword ptr [0x89e4b4]
// 0060d32c  8bce                 mov ecx, esi
// 0060d32e  e8edfdffff           call 0x60d120
// 0060d333  c70670868d00         mov dword ptr [esi], 0x8d8670
// 0060d339  8bc6                 mov eax, esi
// 0060d33b  5e                   pop esi
// 0060d33c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("TrackCamera",p){}