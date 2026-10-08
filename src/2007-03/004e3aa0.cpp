// roc 2007-03 004e3aa0  unit: seg_004e0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3aa0
//
// 004e3aa0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e3aa3  56                   push esi
// 004e3aa4  8db198000000         lea esi, [ecx + 0x98]
// 004e3aaa  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e3aad  33c0                 xor eax, eax
// 004e3aaf  85c9                 test ecx, ecx
// 004e3ab1  57                   push edi
// 004e3ab2  7e1a                 jle 0x4e3ace
// 004e3ab4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e3ab8  8b3a                 mov edi, dword ptr [edx]
// 004e3aba  8b16                 mov edx, dword ptr [esi]
// 004e3abc  8d642400             lea esp, [esp]
// 004e3ac0  393a                 cmp dword ptr [edx], edi
// 004e3ac2  740d                 je 0x4e3ad1
// 004e3ac4  83c001               add eax, 1
// 004e3ac7  83c204               add edx, 4
// 004e3aca  3bc1                 cmp eax, ecx
// 004e3acc  7cf2                 jl 0x4e3ac0
// 004e3ace  83c8ff               or eax, 0xffffffff
// 004e3ad1  8b0e                 mov ecx, dword ptr [esi]
// 004e3ad3  8b5604               mov edx, dword ptr [esi + 4]
// 004e3ad6  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 004e3ada  52                   push edx
// 004e3adb  8d0c81               lea ecx, [ecx + eax*4]
// 004e3ade  e8ad15f9ff           call 0x475090
// 004e3ae3  8b4604               mov eax, dword ptr [esi + 4]
// 004e3ae6  6a01                 push 1
// 004e3ae8  83e801               sub eax, 1
// 004e3aeb  50                   push eax
// 004e3aec  8bce                 mov ecx, esi
// 004e3aee  e89df6ffff           call 0x4e3190
// 004e3af3  5f                   pop edi
// 004e3af4  5e                   pop esi
// 004e3af5  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?removeFromScene@SceneManager@Render@RBX@@IAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
