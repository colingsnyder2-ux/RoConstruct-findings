// roc 2009-06 0070e820  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070e820
//
// 0070e820  55                   push ebp
// 0070e821  8bec                 mov ebp, esp
// 0070e823  6aff                 push -1
// 0070e825  68203e8700           push 0x873e20
// 0070e82a  64a100000000         mov eax, dword ptr fs:[0]
// 0070e830  50                   push eax
// 0070e831  64892500000000       mov dword ptr fs:[0], esp
// 0070e838  83ec1c               sub esp, 0x1c
// 0070e83b  53                   push ebx
// 0070e83c  56                   push esi
// 0070e83d  8bf1                 mov esi, ecx
// 0070e83f  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0070e842  57                   push edi
// 0070e843  8965f0               mov dword ptr [ebp - 0x10], esp
// 0070e846  8975e0               mov dword ptr [ebp - 0x20], esi
// 0070e849  85db                 test ebx, ebx
// 0070e84b  7504                 jne 0x70e851
// 0070e84d  33c9                 xor ecx, ecx
// 0070e84f  eb0a                 jmp 0x70e85b
// 0070e851  8b4614               mov eax, dword ptr [esi + 0x14]
// 0070e854  2bc3                 sub eax, ebx
// 0070e856  c1f803               sar eax, 3
// 0070e859  8bc8                 mov ecx, eax
// 0070e85b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0070e85e  85ff                 test edi, edi
// 0070e860  0f8480020000         je 0x70eae6
// 0070e866  8b5610               mov edx, dword ptr [esi + 0x10]
// 0070e869  8bc2                 mov eax, edx
// 0070e86b  2bc3                 sub eax, ebx
// 0070e86d  c1f803               sar eax, 3
// 0070e870  bbffffff1f           mov ebx, 0x1fffffff
// 0070e875  2bd8                 sub ebx, eax
// 0070e877  3bdf                 cmp ebx, edi
// 0070e879  7305                 jae 0x70e880
// 0070e87b  e8e01ad8ff           call 0x490360
// 0070e880  8d1c38               lea ebx, [eax + edi]
// 0070e883  3bcb                 cmp ecx, ebx
// 0070e885  0f8358010000         jae 0x70e9e3
// 0070e88b  8bc1                 mov eax, ecx
// 0070e88d  d1e8                 shr eax, 1
// 0070e88f  baffffff1f           mov edx, 0x1fffffff
// 0070e894  2bd0                 sub edx, eax
// 0070e896  3bd1                 cmp edx, ecx
// 0070e898  730c                 jae 0x70e8a6
// 0070e89a  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0070e8a1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0070e8a4  eb05                 jmp 0x70e8ab
// 0070e8a6  03c8                 add ecx, eax
// 0070e8a8  894dec               mov dword ptr [ebp - 0x14], ecx
// 0070e8ab  3bcb                 cmp ecx, ebx
// 0070e8ad  7305                 jae 0x70e8b4
// 0070e8af  895dec               mov dword ptr [ebp - 0x14], ebx
// 0070e8b2  8bcb                 mov ecx, ebx
// 0070e8b4  6a00                 push 0
// 0070e8b6  51                   push ecx
// 0070e8b7  e83466d7ff           call 0x484ef0
// 0070e8bc  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0070e8bf  2b5e0c               sub ebx, dword ptr [esi + 0xc]
// 0070e8c2  33c9                 xor ecx, ecx
// 0070e8c4  83c408               add esp, 8
// 0070e8c7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0070e8ca  894dfc               mov dword ptr [ebp - 4], ecx
// 0070e8cd  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0070e8d0  51                   push ecx
// 0070e8d1  c1fb03               sar ebx, 3
// 0070e8d4  57                   push edi
// 0070e8d5  8d14d8               lea edx, [eax + ebx*8]
// 0070e8d8  52                   push edx
// 0070e8d9  8bce                 mov ecx, esi
// 0070e8db  8945e8               mov dword ptr [ebp - 0x18], eax
// 0070e8de  895ddc               mov dword ptr [ebp - 0x24], ebx
// 0070e8e1  e87afeffff           call 0x70e760
// 0070e8e6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0070e8e9  c6451400             mov byte ptr [ebp + 0x14], 0
// 0070e8ed  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0070e8f0  52                   push edx
// 0070e8f1  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0070e8f4  52                   push edx
// 0070e8f5  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0070e8f8  8d4e08               lea ecx, [esi + 8]
// 0070e8fb  51                   push ecx
// 0070e8fc  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0070e8ff  51                   push ecx
// 0070e900  52                   push edx
// 0070e901  50                   push eax
// 0070e902  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 0070e909  e8f23ed2ff           call 0x432800
// 0070e90e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0070e911  8b4610               mov eax, dword ptr [esi + 0x10]
// 0070e914  83c418               add esp, 0x18
// 0070e917  c6451400             mov byte ptr [ebp + 0x14], 0
// 0070e91b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0070e91e  52                   push edx
// 0070e91f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0070e922  03df                 add ebx, edi
// 0070e924  52                   push edx
// 0070e925  8d0cd9               lea ecx, [ecx + ebx*8]
// 0070e928  8d5e08               lea ebx, [esi + 8]
// 0070e92b  53                   push ebx
// 0070e92c  51                   push ecx
// 0070e92d  50                   push eax
// 0070e92e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0070e931  50                   push eax
// 0070e932  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 0070e939  e8c23ed2ff           call 0x432800
// 0070e93e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0070e941  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0070e944  2bc8                 sub ecx, eax
// 0070e946  c1f903               sar ecx, 3
// 0070e949  83c418               add esp, 0x18
// 0070e94c  03f9                 add edi, ecx
// 0070e94e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0070e955  85c0                 test eax, eax
// 0070e957  741b                 je 0x70e974
// 0070e959  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0070e95c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0070e95f  52                   push edx
// 0070e960  53                   push ebx
// 0070e961  51                   push ecx
// 0070e962  50                   push eax
// 0070e963  e83883f2ff           call 0x636ca0
// 0070e968  8b560c               mov edx, dword ptr [esi + 0xc]
// 0070e96b  52                   push edx
// 0070e96c  e8c1a00000           call 0x718a32
// 0070e971  83c414               add esp, 0x14
// 0070e974  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0070e977  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0070e97a  8d14c8               lea edx, [eax + ecx*8]
// 0070e97d  8d0cf8               lea ecx, [eax + edi*8]
// 0070e980  895614               mov dword ptr [esi + 0x14], edx
// 0070e983  894e10               mov dword ptr [esi + 0x10], ecx
// 0070e986  89460c               mov dword ptr [esi + 0xc], eax
// 0070e989  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0070e98c  64890d00000000       mov dword ptr fs:[0], ecx
// 0070e993  5f                   pop edi
// 0070e994  5e                   pop esi
// 0070e995  5b                   pop ebx
// 0070e996  8be5                 mov esp, ebp
// 0070e998  5d                   pop ebp
// 0070e999  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Insert_n@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@2@IABV?$shared_ptr@Voption_description@program_options@boost@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
