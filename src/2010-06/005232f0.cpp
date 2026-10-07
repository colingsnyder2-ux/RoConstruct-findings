// roc 2010-06 005232f0  unit: RBX::MeshGen  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005232f0
//
// 005232f0  6aff                 push -1
// 005232f2  6850e19800           push 0x98e150
// 005232f7  64a100000000         mov eax, dword ptr fs:[0]
// 005232fd  50                   push eax
// 005232fe  64892500000000       mov dword ptr fs:[0], esp
// 00523305  83ec08               sub esp, 8
// 00523308  56                   push esi
// 00523309  8bf1                 mov esi, ecx
// 0052330b  89742404             mov dword ptr [esp + 4], esi
// 0052330f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00523317  c70600000000         mov dword ptr [esi], 0
// 0052331d  6a0c                 push 0xc
// 0052331f  6806140000           push 0x1406
// 00523324  51                   push ecx
// 00523325  8bcc                 mov ecx, esp
// 00523327  c70100000000         mov dword ptr [ecx], 0
// 0052332d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00523331  89642414             mov dword ptr [esp + 0x14], esp
// 00523335  50                   push eax
// 00523336  c644242401           mov byte ptr [esp + 0x24], 1
// 0052333b  e8e039f6ff           call 0x486d20
// 00523340  8b442428             mov eax, dword ptr [esp + 0x28]
// 00523344  8b4804               mov ecx, dword ptr [eax + 4]
// 00523347  8b00                 mov eax, dword ptr [eax]
// 00523349  51                   push ecx
// 0052334a  50                   push eax
// 0052334b  8bce                 mov ecx, esi
// 0052334d  e8be91f7ff           call 0x49c510
// 00523352  8b442420             mov eax, dword ptr [esp + 0x20]
// 00523356  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052335e  85c0                 test eax, eax
// 00523360  7427                 je 0x523389
// 00523362  83c004               add eax, 4
// 00523365  50                   push eax
// 00523366  ff157ca39e00         call dword ptr [0x9ea37c]
// 0052336c  85c0                 test eax, eax
// 0052336e  7519                 jne 0x523389
// 00523370  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00523374  e8a707f6ff           call 0x483b20
// 00523379  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052337d  85c9                 test ecx, ecx
// 0052337f  7408                 je 0x523389
// 00523381  8b11                 mov edx, dword ptr [ecx]
// 00523383  8b02                 mov eax, dword ptr [edx]
// 00523385  6a01                 push 1
// 00523387  ffd0                 call eax
// 00523389  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052338d  8bc6                 mov eax, esi
// 0052338f  64890d00000000       mov dword ptr fs:[0], ecx
// 00523396  5e                   pop esi
// 00523397  83c414               add esp, 0x14
// 0052339a  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??$?0VVector3@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector3@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
