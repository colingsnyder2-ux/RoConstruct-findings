// roc 2010-06 005e34f0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e34f0
//
// 005e34f0  8b442404             mov eax, dword ptr [esp + 4]
// 005e34f4  56                   push esi
// 005e34f5  50                   push eax
// 005e34f6  83ec1c               sub esp, 0x1c
// 005e34f9  8bf1                 mov esi, ecx
// 005e34fb  8bcc                 mov ecx, esp
// 005e34fd  89642428             mov dword ptr [esp + 0x28], esp
// 005e3501  689cf4a000           push 0xa0f49c
// 005e3506  ff1510a49e00         call dword ptr [0x9ea410]
// 005e350c  8bce                 mov ecx, esi
// 005e350e  e8edfdffff           call 0x5e3300
// 005e3513  c706c8e4a200         mov dword ptr [esi], 0xa2e4c8
// 005e3519  8bc6                 mov eax, esi
// 005e351b  5e                   pop esi
// 005e351c  c20400               ret 4
// copied from an identical function in another client (function ??0CutVerb@@QAE@H@Z)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <string>
struct B{virtual ~B(){}; B(std::string,int);};
struct CutVerb:B{CutVerb(int);};
CutVerb::CutVerb(int p):B("TrackCamera",p){}