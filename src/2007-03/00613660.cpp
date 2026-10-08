// roc 2007-03 00613660  unit: seg_00610000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613660
//
// 00613660  6aff                 push -1
// 00613662  68ded67500           push 0x75d6de
// 00613667  64a100000000         mov eax, dword ptr fs:[0]
// 0061366d  50                   push eax
// 0061366e  64892500000000       mov dword ptr fs:[0], esp
// 00613675  83ec08               sub esp, 8
// 00613678  55                   push ebp
// 00613679  56                   push esi
// 0061367a  57                   push edi
// 0061367b  8bf1                 mov esi, ecx
// 0061367d  6a1c                 push 0x1c
// 0061367f  89742410             mov dword ptr [esp + 0x10], esi
// 00613683  e880aa0000           call 0x61e108
// 00613688  83c404               add esp, 4
// 0061368b  89442410             mov dword ptr [esp + 0x10], eax
// 0061368f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00613693  33ed                 xor ebp, ebp
// 00613695  3bc5                 cmp eax, ebp
// 00613697  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0061369b  740b                 je 0x6136a8
// 0061369d  57                   push edi
// 0061369e  56                   push esi
// 0061369f  8bc8                 mov ecx, eax
// 006136a1  e8aa4ff9ff           call 0x5a8650
// 006136a6  eb02                 jmp 0x6136aa
// 006136a8  33c0                 xor eax, eax
// 006136aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006136ae  894e04               mov dword ptr [esi + 4], ecx
// 006136b1  894608               mov dword ptr [esi + 8], eax
// 006136b4  897e0c               mov dword ptr [esi + 0xc], edi
// 006136b7  c706fc1f7c00         mov dword ptr [esi], 0x7c1ffc
// 006136bd  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006136c5  896e14               mov dword ptr [esi + 0x14], ebp
// 006136c8  896e18               mov dword ptr [esi + 0x18], ebp
// 006136cb  896e10               mov dword ptr [esi + 0x10], ebp
// 006136ce  8d7e1c               lea edi, [esi + 0x1c]
// 006136d1  8bcf                 mov ecx, edi
// 006136d3  c644241c02           mov byte ptr [esp + 0x1c], 2
// 006136d8  e8539df9ff           call 0x5ad430
// 006136dd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006136e1  894704               mov dword ptr [edi + 4], eax
// 006136e4  c6401101             mov byte ptr [eax + 0x11], 1
// 006136e8  8b4704               mov eax, dword ptr [edi + 4]
// 006136eb  894004               mov dword ptr [eax + 4], eax
// 006136ee  8b4704               mov eax, dword ptr [edi + 4]
// 006136f1  8900                 mov dword ptr [eax], eax
// 006136f3  8b4704               mov eax, dword ptr [edi + 4]
// 006136f6  894008               mov dword ptr [eax + 8], eax
// 006136f9  896f08               mov dword ptr [edi + 8], ebp
// 006136fc  5f                   pop edi
// 006136fd  8bc6                 mov eax, esi
// 006136ff  5e                   pop esi
// 00613700  5d                   pop ebp
// 00613701  64890d00000000       mov dword ptr fs:[0], ecx
// 00613708  83c414               add esp, 0x14
// 0061370b  c20800               ret 8
// library rbxgs/v8world\SeparateStage.cpp (function ??0SeparateStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SeparateStage.cpp
