// roc 2007-03 00497b30  unit: seg_00490000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497b30
//
// 00497b30  8b442404             mov eax, dword ptr [esp + 4]
// 00497b34  85c0                 test eax, eax
// 00497b36  56                   push esi
// 00497b37  8bf1                 mov esi, ecx
// 00497b39  7e6d                 jle 0x497ba8
// 00497b3b  8b0e                 mov ecx, dword ptr [esi]
// 00497b3d  57                   push edi
// 00497b3e  8d3c01               lea edi, [ecx + eax]
// 00497b41  85ff                 test edi, edi
// 00497b43  7e5a                 jle 0x497b9f
// 00497b45  8b5604               mov edx, dword ptr [esi + 4]
// 00497b48  83ea01               sub edx, 1
// 00497b4b  8d47ff               lea eax, [edi - 1]
// 00497b4e  83e2f8               and edx, 0xfffffff8
// 00497b51  83e0f8               and eax, 0xfffffff8
// 00497b54  3bd0                 cmp edx, eax
// 00497b56  7d47                 jge 0x497b9f
// 00497b58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00497b5b  03ff                 add edi, edi
// 00497b5d  53                   push ebx
// 00497b5e  8d4707               lea eax, [edi + 7]
// 00497b61  8d5e11               lea ebx, [esi + 0x11]
// 00497b64  c1f803               sar eax, 3
// 00497b67  3bcb                 cmp ecx, ebx
// 00497b69  7526                 jne 0x497b91
// 00497b6b  3d00010000           cmp eax, 0x100
// 00497b70  7e2c                 jle 0x497b9e
// 00497b72  50                   push eax
// 00497b73  e886731800           call 0x61eefe
// 00497b78  8b4e04               mov ecx, dword ptr [esi + 4]
// 00497b7b  83c107               add ecx, 7
// 00497b7e  c1f903               sar ecx, 3
// 00497b81  51                   push ecx
// 00497b82  53                   push ebx
// 00497b83  50                   push eax
// 00497b84  89460c               mov dword ptr [esi + 0xc], eax
// 00497b87  e856761800           call 0x61f1e2
// 00497b8c  83c410               add esp, 0x10
// 00497b8f  eb0d                 jmp 0x497b9e
// 00497b91  50                   push eax
// 00497b92  51                   push ecx
// 00497b93  e844761800           call 0x61f1dc
// 00497b98  83c408               add esp, 8
// 00497b9b  89460c               mov dword ptr [esi + 0xc], eax
// 00497b9e  5b                   pop ebx
// 00497b9f  3b7e04               cmp edi, dword ptr [esi + 4]
// 00497ba2  7e03                 jle 0x497ba7
// 00497ba4  897e04               mov dword ptr [esi + 4], edi
// 00497ba7  5f                   pop edi
// 00497ba8  5e                   pop esi
// 00497ba9  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ?AddBitsAndReallocate@BitStream@RakNet@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
