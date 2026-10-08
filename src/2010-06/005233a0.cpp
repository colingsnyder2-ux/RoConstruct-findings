// from server: 100% by auto
// roc 2010-06 005233a0  unit: RBX::MeshGen  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005233a0
//
// 005233a0  6aff                 push -1
// 005233a2  6850e19800           push 0x98e150
// 005233a7  64a100000000         mov eax, dword ptr fs:[0]
// 005233ad  50                   push eax
// 005233ae  64892500000000       mov dword ptr fs:[0], esp
// 005233b5  83ec08               sub esp, 8
// 005233b8  56                   push esi
// 005233b9  8bf1                 mov esi, ecx
// 005233bb  89742404             mov dword ptr [esp + 4], esi
// 005233bf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005233c7  c70600000000         mov dword ptr [esi], 0
// 005233cd  6a08                 push 8
// 005233cf  6806140000           push 0x1406
// 005233d4  51                   push ecx
// 005233d5  8bcc                 mov ecx, esp
// 005233d7  c70100000000         mov dword ptr [ecx], 0
// 005233dd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005233e1  89642414             mov dword ptr [esp + 0x14], esp
// 005233e5  50                   push eax
// 005233e6  c644242401           mov byte ptr [esp + 0x24], 1
// 005233eb  e83039f6ff           call 0x486d20
// 005233f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005233f4  8b4804               mov ecx, dword ptr [eax + 4]
// 005233f7  8b00                 mov eax, dword ptr [eax]
// 005233f9  51                   push ecx
// 005233fa  50                   push eax
// 005233fb  8bce                 mov ecx, esi
// 005233fd  e80e91f7ff           call 0x49c510
// 00523402  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523406  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052340e  85c0                 test eax, eax
// 00523410  7427                 je 0x523439
// 00523412  83c004               add eax, 4
// 00523415  50                   push eax
// 00523416  ff157ca39e00         call dword ptr [0x9ea37c]
// 0052341c  85c0                 test eax, eax
// 0052341e  7519                 jne 0x523439
// 00523420  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00523424  e8f706f6ff           call 0x483b20
// 00523429  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052342d  85c9                 test ecx, ecx
// 0052342f  7408                 je 0x523439
// 00523431  8b11                 mov edx, dword ptr [ecx]
// 00523433  8b02                 mov eax, dword ptr [edx]
// 00523435  6a01                 push 1
// 00523437  ffd0                 call eax
// 00523439  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052343d  8bc6                 mov eax, esi
// 0052343f  64890d00000000       mov dword ptr fs:[0], ecx
// 00523446  5e                   pop esi
// 00523447  83c414               add esp, 0x14
// 0052344a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\IFSModel.cpp (function ??$?0VVector2@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector2@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/IFSModel.cpp
