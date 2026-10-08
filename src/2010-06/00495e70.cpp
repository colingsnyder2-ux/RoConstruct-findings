// roc 2010-06 00495e70  unit: seg_00490000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00495e70
//
// 00495e70  56                   push esi
// 00495e71  8bf1                 mov esi, ecx
// 00495e73  e8c8fbffff           call 0x495a40
// 00495e78  8b8e84040000         mov ecx, dword ptr [esi + 0x484]
// 00495e7e  85c9                 test ecx, ecx
// 00495e80  7408                 je 0x495e8a
// 00495e82  8b01                 mov eax, dword ptr [ecx]
// 00495e84  8b5004               mov edx, dword ptr [eax + 4]
// 00495e87  56                   push esi
// 00495e88  ffd2                 call edx
// 00495e8a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00495e8e  83e801               sub eax, 1
// 00495e91  741c                 je 0x495eaf
// 00495e93  83e801               sub eax, 1
// 00495e96  7410                 je 0x495ea8
// 00495e98  83e802               sub eax, 2
// 00495e9b  7404                 je 0x495ea1
// 00495e9d  33c0                 xor eax, eax
// 00495e9f  eb13                 jmp 0x495eb4
// 00495ea1  b805140000           mov eax, 0x1405
// 00495ea6  eb0c                 jmp 0x495eb4
// 00495ea8  b803140000           mov eax, 0x1403
// 00495ead  eb05                 jmp 0x495eb4
// 00495eaf  b801140000           mov eax, 0x1401
// 00495eb4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00495eb8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00495ebc  51                   push ecx
// 00495ebd  50                   push eax
// 00495ebe  8b442410             mov eax, dword ptr [esp + 0x10]
// 00495ec2  52                   push edx
// 00495ec3  e8a8aeffff           call 0x490d70
// 00495ec8  50                   push eax
// 00495ec9  ff15e0ab9e00         call dword ptr [0x9eabe0]
// 00495ecf  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00495ed5  85c9                 test ecx, ecx
// 00495ed7  7416                 je 0x495eef
// 00495ed9  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00495ee0  8b01                 mov eax, dword ptr [ecx]
// 00495ee2  8b5014               mov edx, dword ptr [eax + 0x14]
// 00495ee5  56                   push esi
// 00495ee6  ffd2                 call edx
// 00495ee8  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00495eef  5e                   pop esi
// 00495ef0  c21000               ret 0x10
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?internalSendIndices@RenderDevice@G3D@@AAEXW4Primitive@12@IHPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
