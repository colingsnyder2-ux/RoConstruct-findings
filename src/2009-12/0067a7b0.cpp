// roc 2009-12 0067a7b0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a7b0
//
// 0067a7b0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a7b4  56                   push esi
// 0067a7b5  50                   push eax
// 0067a7b6  83ec1c               sub esp, 0x1c
// 0067a7b9  8bf1                 mov esi, ecx
// 0067a7bb  8bcc                 mov ecx, esp
// 0067a7bd  89642428             mov dword ptr [esp + 0x28], esp
// 0067a7c1  6874e59a00           push 0x9ae574
// 0067a7c6  ff15f4b69800         call dword ptr [0x98b6f4]
// 0067a7cc  8bce                 mov ecx, esi
// 0067a7ce  e8edfdffff           call 0x67a5c0
// 0067a7d3  c70618fe9c00         mov dword ptr [esi], 0x9cfe18
// 0067a7d9  8bc6                 mov eax, esi
// 0067a7db  5e                   pop esi
// 0067a7dc  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("TrackCamera",p){}