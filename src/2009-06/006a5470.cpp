// roc 2009-06 006a5470  unit: RBX::VMouse::?$EventDesc  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a5470
//
// 006a5470  55                   push ebp
// 006a5471  8bec                 mov ebp, esp
// 006a5473  6aff                 push -1
// 006a5475  6800fa8600           push 0x86fa00
// 006a547a  64a100000000         mov eax, dword ptr fs:[0]
// 006a5480  50                   push eax
// 006a5481  64892500000000       mov dword ptr fs:[0], esp
// 006a5488  83ec08               sub esp, 8
// 006a548b  53                   push ebx
// 006a548c  56                   push esi
// 006a548d  8bf1                 mov esi, ecx
// 006a548f  8b560c               mov edx, dword ptr [esi + 0xc]
// 006a5492  57                   push edi
// 006a5493  8965f0               mov dword ptr [ebp - 0x10], esp
// 006a5496  85d2                 test edx, edx
// 006a5498  7504                 jne 0x6a549e
// 006a549a  33c9                 xor ecx, ecx
// 006a549c  eb0a                 jmp 0x6a54a8
// 006a549e  8b4614               mov eax, dword ptr [esi + 0x14]
// 006a54a1  2bc2                 sub eax, edx
// 006a54a3  c1f802               sar eax, 2
// 006a54a6  8bc8                 mov ecx, eax
// 006a54a8  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006a54ab  85ff                 test edi, edi
// 006a54ad  0f84de010000         je 0x6a5691
// 006a54b3  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 006a54b6  8bc3                 mov eax, ebx
// 006a54b8  2bc2                 sub eax, edx
// 006a54ba  c1f802               sar eax, 2
// 006a54bd  baffffff3f           mov edx, 0x3fffffff
// 006a54c2  2bd0                 sub edx, eax
// 006a54c4  3bd7                 cmp edx, edi
// 006a54c6  7305                 jae 0x6a54cd
// 006a54c8  e893aedeff           call 0x490360
// 006a54cd  8d1438               lea edx, [eax + edi]
// 006a54d0  3bca                 cmp ecx, edx
// 006a54d2  0f83f9000000         jae 0x6a55d1
// 006a54d8  8bc1                 mov eax, ecx
// 006a54da  d1e8                 shr eax, 1
// 006a54dc  bbffffff3f           mov ebx, 0x3fffffff
// 006a54e1  2bd8                 sub ebx, eax
// 006a54e3  3bd9                 cmp ebx, ecx
// 006a54e5  730c                 jae 0x6a54f3
// 006a54e7  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 006a54ee  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006a54f1  eb05                 jmp 0x6a54f8
// 006a54f3  03c8                 add ecx, eax
// 006a54f5  894dec               mov dword ptr [ebp - 0x14], ecx
// 006a54f8  3bca                 cmp ecx, edx
// 006a54fa  7305                 jae 0x6a5501
// 006a54fc  8955ec               mov dword ptr [ebp - 0x14], edx
// 006a54ff  8bca                 mov ecx, edx
// 006a5501  6a00                 push 0
// 006a5503  51                   push ecx
// 006a5504  e8f734f5ff           call 0x5f8a00
// 006a5509  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 006a550c  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 006a550f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006a5512  83c408               add esp, 8
// 006a5515  51                   push ecx
// 006a5516  c1fb02               sar ebx, 2
// 006a5519  57                   push edi
// 006a551a  8d1498               lea edx, [eax + ebx*4]
// 006a551d  52                   push edx
// 006a551e  8bce                 mov ecx, esi
// 006a5520  894510               mov dword ptr [ebp + 0x10], eax
// 006a5523  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006a552a  e851b3d9ff           call 0x440880
// 006a552f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a5532  c6451400             mov byte ptr [ebp + 0x14], 0
// 006a5536  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a5539  52                   push edx
// 006a553a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a553d  52                   push edx
// 006a553e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006a5541  8d4e08               lea ecx, [esi + 8]
// 006a5544  51                   push ecx
// 006a5545  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006a5548  51                   push ecx
// 006a5549  52                   push edx
// 006a554a  50                   push eax
// 006a554b  e830060000           call 0x6a5b80
// 006a5550  8b4610               mov eax, dword ptr [esi + 0x10]
// 006a5553  83c418               add esp, 0x18
// 006a5556  c6451400             mov byte ptr [ebp + 0x14], 0
// 006a555a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a555d  52                   push edx
// 006a555e  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006a5561  52                   push edx
// 006a5562  8d0c3b               lea ecx, [ebx + edi]
// 006a5565  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 006a5568  8d5608               lea edx, [esi + 8]
// 006a556b  52                   push edx
// 006a556c  8d0c8b               lea ecx, [ebx + ecx*4]
// 006a556f  51                   push ecx
// 006a5570  50                   push eax
// 006a5571  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006a5574  50                   push eax
// 006a5575  e806060000           call 0x6a5b80
// 006a557a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a557d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006a5580  2bc8                 sub ecx, eax
// 006a5582  c1f902               sar ecx, 2
// 006a5585  83c418               add esp, 0x18
// 006a5588  03f9                 add edi, ecx
// 006a558a  85c0                 test eax, eax
// 006a558c  7409                 je 0x6a5597
// 006a558e  50                   push eax
// 006a558f  e89e340700           call 0x718a32
// 006a5594  83c404               add esp, 4
// 006a5597  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006a559a  8d0493               lea eax, [ebx + edx*4]
// 006a559d  8d0cbb               lea ecx, [ebx + edi*4]
// 006a55a0  894614               mov dword ptr [esi + 0x14], eax
// 006a55a3  894e10               mov dword ptr [esi + 0x10], ecx
// 006a55a6  895e0c               mov dword ptr [esi + 0xc], ebx
// 006a55a9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a55ac  64890d00000000       mov dword ptr fs:[0], ecx
// 006a55b3  5f                   pop edi
// 006a55b4  5e                   pop esi
// 006a55b5  5b                   pop ebx
// 006a55b6  8be5                 mov esp, ebp
// 006a55b8  5d                   pop ebp
// 006a55b9  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
