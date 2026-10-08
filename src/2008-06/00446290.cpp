// roc 2008-06 00446290  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446290
//
// 00446290  55                   push ebp
// 00446291  8bec                 mov ebp, esp
// 00446293  6aff                 push -1
// 00446295  68500e7c00           push 0x7c0e50
// 0044629a  64a100000000         mov eax, dword ptr fs:[0]
// 004462a0  50                   push eax
// 004462a1  64892500000000       mov dword ptr fs:[0], esp
// 004462a8  83ec0c               sub esp, 0xc
// 004462ab  53                   push ebx
// 004462ac  56                   push esi
// 004462ad  8bf1                 mov esi, ecx
// 004462af  8b560c               mov edx, dword ptr [esi + 0xc]
// 004462b2  57                   push edi
// 004462b3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004462b6  85d2                 test edx, edx
// 004462b8  7504                 jne 0x4462be
// 004462ba  33c9                 xor ecx, ecx
// 004462bc  eb0a                 jmp 0x4462c8
// 004462be  8b4614               mov eax, dword ptr [esi + 0x14]
// 004462c1  2bc2                 sub eax, edx
// 004462c3  c1f802               sar eax, 2
// 004462c6  8bc8                 mov ecx, eax
// 004462c8  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004462cb  85db                 test ebx, ebx
// 004462cd  0f84c3010000         je 0x446496
// 004462d3  8b7e10               mov edi, dword ptr [esi + 0x10]
// 004462d6  8bc7                 mov eax, edi
// 004462d8  2bc2                 sub eax, edx
// 004462da  c1f802               sar eax, 2
// 004462dd  baffffff3f           mov edx, 0x3fffffff
// 004462e2  2bd0                 sub edx, eax
// 004462e4  3bd3                 cmp edx, ebx
// 004462e6  7305                 jae 0x4462ed
// 004462e8  e8530a0800           call 0x4c6d40
// 004462ed  8d1418               lea edx, [eax + ebx]
// 004462f0  3bca                 cmp ecx, edx
// 004462f2  0f83de000000         jae 0x4463d6
// 004462f8  8bc1                 mov eax, ecx
// 004462fa  d1e8                 shr eax, 1
// 004462fc  bfffffff3f           mov edi, 0x3fffffff
// 00446301  2bf8                 sub edi, eax
// 00446303  3bf9                 cmp edi, ecx
// 00446305  730c                 jae 0x446313
// 00446307  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0044630e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00446311  eb05                 jmp 0x446318
// 00446313  03c8                 add ecx, eax
// 00446315  894dec               mov dword ptr [ebp - 0x14], ecx
// 00446318  3bca                 cmp ecx, edx
// 0044631a  7305                 jae 0x446321
// 0044631c  8955ec               mov dword ptr [ebp - 0x14], edx
// 0044631f  8bca                 mov ecx, edx
// 00446321  6a00                 push 0
// 00446323  51                   push ecx
// 00446324  e827a8fdff           call 0x420b50
// 00446329  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0044632c  c645e800             mov byte ptr [ebp - 0x18], 0
// 00446330  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00446333  52                   push edx
// 00446334  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00446337  52                   push edx
// 00446338  8d7e08               lea edi, [esi + 8]
// 0044633b  57                   push edi
// 0044633c  50                   push eax
// 0044633d  894510               mov dword ptr [ebp + 0x10], eax
// 00446340  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446343  50                   push eax
// 00446344  51                   push ecx
// 00446345  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0044634c  e8df121700           call 0x5b7630
// 00446351  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00446354  83c420               add esp, 0x20
// 00446357  51                   push ecx
// 00446358  53                   push ebx
// 00446359  50                   push eax
// 0044635a  8bce                 mov ecx, esi
// 0044635c  e81f951200           call 0x56f880
// 00446361  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00446364  c6451400             mov byte ptr [ebp + 0x14], 0
// 00446368  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044636b  52                   push edx
// 0044636c  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0044636f  52                   push edx
// 00446370  57                   push edi
// 00446371  50                   push eax
// 00446372  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446375  51                   push ecx
// 00446376  50                   push eax
// 00446377  e8b4121700           call 0x5b7630
// 0044637c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0044637f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00446382  2bc8                 sub ecx, eax
// 00446384  c1f902               sar ecx, 2
// 00446387  83c418               add esp, 0x18
// 0044638a  03d9                 add ebx, ecx
// 0044638c  85c0                 test eax, eax
// 0044638e  7409                 je 0x446399
// 00446390  50                   push eax
// 00446391  e8e4a22500           call 0x6a067a
// 00446396  83c404               add esp, 4
// 00446399  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0044639c  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0044639f  8d0c90               lea ecx, [eax + edx*4]
// 004463a2  8d1498               lea edx, [eax + ebx*4]
// 004463a5  894e14               mov dword ptr [esi + 0x14], ecx
// 004463a8  895610               mov dword ptr [esi + 0x10], edx
// 004463ab  89460c               mov dword ptr [esi + 0xc], eax
// 004463ae  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004463b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004463b8  5f                   pop edi
// 004463b9  5e                   pop esi
// 004463ba  5b                   pop ebx
// 004463bb  8be5                 mov esp, ebp
// 004463bd  5d                   pop ebp
// 004463be  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
