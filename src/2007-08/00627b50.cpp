// roc 2007-08 00627b50  unit: RBX::CollisionStage  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627b50
//
// 00627b50  6aff                 push -1
// 00627b52  68c9d37500           push 0x75d3c9
// 00627b57  64a100000000         mov eax, dword ptr fs:[0]
// 00627b5d  50                   push eax
// 00627b5e  64892500000000       mov dword ptr fs:[0], esp
// 00627b65  83ec08               sub esp, 8
// 00627b68  53                   push ebx
// 00627b69  56                   push esi
// 00627b6a  57                   push edi
// 00627b6b  8bf1                 mov esi, ecx
// 00627b6d  6a38                 push 0x38
// 00627b6f  89742410             mov dword ptr [esp + 0x10], esi
// 00627b73  e87e830000           call 0x62fef6
// 00627b78  83c404               add esp, 4
// 00627b7b  89442410             mov dword ptr [esp + 0x10], eax
// 00627b7f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00627b83  33ff                 xor edi, edi
// 00627b85  3bc7                 cmp eax, edi
// 00627b87  897c241c             mov dword ptr [esp + 0x1c], edi
// 00627b8b  740b                 je 0x627b98
// 00627b8d  53                   push ebx
// 00627b8e  56                   push esi
// 00627b8f  8bc8                 mov ecx, eax
// 00627b91  e8cac0fdff           call 0x603c60
// 00627b96  eb02                 jmp 0x627b9a
// 00627b98  33c0                 xor eax, eax
// 00627b9a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00627b9e  894e04               mov dword ptr [esi + 4], ecx
// 00627ba1  894608               mov dword ptr [esi + 8], eax
// 00627ba4  895e0c               mov dword ptr [esi + 0xc], ebx
// 00627ba7  c706744b7c00         mov dword ptr [esi], 0x7c4b74
// 00627bad  897e10               mov dword ptr [esi + 0x10], edi
// 00627bb0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00627bb8  897e18               mov dword ptr [esi + 0x18], edi
// 00627bbb  897e1c               mov dword ptr [esi + 0x1c], edi
// 00627bbe  897e14               mov dword ptr [esi + 0x14], edi
// 00627bc1  6840000200           push 0x20040
// 00627bc6  c644242002           mov byte ptr [esp + 0x20], 2
// 00627bcb  e826830000           call 0x62fef6
// 00627bd0  83c404               add esp, 4
// 00627bd3  89442428             mov dword ptr [esp + 0x28], eax
// 00627bd7  3bc7                 cmp eax, edi
// 00627bd9  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00627bde  7411                 je 0x627bf1
// 00627be0  68904b7c00           push 0x7c4b90
// 00627be5  8bc8                 mov ecx, eax
// 00627be7  e874a0f6ff           call 0x591c60
// 00627bec  894620               mov dword ptr [esi + 0x20], eax
// 00627bef  eb03                 jmp 0x627bf4
// 00627bf1  897e20               mov dword ptr [esi + 0x20], edi
// 00627bf4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00627bf8  5f                   pop edi
// 00627bf9  8bc6                 mov eax, esi
// 00627bfb  5e                   pop esi
// 00627bfc  5b                   pop ebx
// 00627bfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00627c04  83c414               add esp, 0x14
// 00627c07  c20800               ret 8
// library rbxgs/v8world\CollisionStage.cpp (function ??0CollisionStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/CollisionStage.cpp
