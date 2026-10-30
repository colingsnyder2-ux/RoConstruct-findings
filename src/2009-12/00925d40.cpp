// roc 2009-12 00925d40  unit: seg_00920000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00925d40
//
// 00925d40  55                   push ebp
// 00925d41  8bec                 mov ebp, esp
// 00925d43  83ec38               sub esp, 0x38
// 00925d46  33c0                 xor eax, eax
// 00925d48  8845ff               mov byte ptr [ebp - 1], al
// 00925d4b  8a4dfd               mov cl, byte ptr [ebp - 3]
// 00925d4e  884dfe               mov byte ptr [ebp - 2], cl
// 00925d51  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00925d54  8955f8               mov dword ptr [ebp - 8], edx
// 00925d57  8b4508               mov eax, dword ptr [ebp + 8]
// 00925d5a  8945f0               mov dword ptr [ebp - 0x10], eax
// 00925d5d  8a4dff               mov cl, byte ptr [ebp - 1]
// 00925d60  884dcb               mov byte ptr [ebp - 0x35], cl
// 00925d63  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00925d66  8955cc               mov dword ptr [ebp - 0x34], edx
// 00925d69  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00925d6c  50                   push eax
// 00925d6d  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 00925d70  51                   push ecx
// 00925d71  8b55f8               mov edx, dword ptr [ebp - 8]
// 00925d74  52                   push edx
// 00925d75  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00925d78  50                   push eax
// 00925d79  e842feffff           call 0x925bc0
// 00925d7e  83c410               add esp, 0x10
// 00925d81  8be5                 mov esp, ebp
// 00925d83  5d                   pop ebp
// 00925d84  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_uninitialized_move@PAHPAHV?$allocator@H@std@@@stdext@@YAPAHPAH00AAV?$allocator@H@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob1 /GS- /MT
// roc-lib: wildmagic-2-core Containment/WmlConvexHull2.cpp