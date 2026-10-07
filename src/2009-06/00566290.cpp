// roc 2009-06 00566290  unit: RBX::RbxG3D::RenderScene  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566290
//
// 00566290  6aff                 push -1
// 00566292  6840f78500           push 0x85f740
// 00566297  64a100000000         mov eax, dword ptr fs:[0]
// 0056629d  50                   push eax
// 0056629e  64892500000000       mov dword ptr fs:[0], esp
// 005662a5  83ec08               sub esp, 8
// 005662a8  56                   push esi
// 005662a9  8bf1                 mov esi, ecx
// 005662ab  89742404             mov dword ptr [esp + 4], esi
// 005662af  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005662b7  c70600000000         mov dword ptr [esi], 0
// 005662bd  6a0c                 push 0xc
// 005662bf  6806140000           push 0x1406
// 005662c4  51                   push ecx
// 005662c5  8bcc                 mov ecx, esp
// 005662c7  c70100000000         mov dword ptr [ecx], 0
// 005662cd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005662d1  89642414             mov dword ptr [esp + 0x14], esp
// 005662d5  50                   push eax
// 005662d6  c644242401           mov byte ptr [esp + 0x24], 1
// 005662db  e88095f3ff           call 0x49f860
// 005662e0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005662e4  8b4804               mov ecx, dword ptr [eax + 4]
// 005662e7  8b00                 mov eax, dword ptr [eax]
// 005662e9  51                   push ecx
// 005662ea  50                   push eax
// 005662eb  8bce                 mov ecx, esi
// 005662ed  e81ed1f4ff           call 0x4b3410
// 005662f2  8b442420             mov eax, dword ptr [esp + 0x20]
// 005662f6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005662fe  85c0                 test eax, eax
// 00566300  7427                 je 0x566329
// 00566302  83c004               add eax, 4
// 00566305  50                   push eax
// 00566306  ff15a4e18900         call dword ptr [0x89e1a4]
// 0056630c  85c0                 test eax, eax
// 0056630e  7519                 jne 0x566329
// 00566310  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00566314  e867eaedff           call 0x444d80
// 00566319  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056631d  85c9                 test ecx, ecx
// 0056631f  7408                 je 0x566329
// 00566321  8b11                 mov edx, dword ptr [ecx]
// 00566323  8b02                 mov eax, dword ptr [edx]
// 00566325  6a01                 push 1
// 00566327  ffd0                 call eax
// 00566329  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056632d  8bc6                 mov eax, esi
// 0056632f  64890d00000000       mov dword ptr fs:[0], ecx
// 00566336  5e                   pop esi
// 00566337  83c414               add esp, 0x14
// 0056633a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??$?0VVector3@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector3@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
