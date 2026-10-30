// roc 2007-08 0054fcb0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fcb0
//
// 0054fcb0  83ec10               sub esp, 0x10
// 0054fcb3  53                   push ebx
// 0054fcb4  55                   push ebp
// 0054fcb5  56                   push esi
// 0054fcb6  57                   push edi
// 0054fcb7  8bf9                 mov edi, ecx
// 0054fcb9  8b07                 mov eax, dword ptr [edi]
// 0054fcbb  ba01000000           mov edx, 1
// 0054fcc0  845024               test byte ptr [eax + 0x24], dl
// 0054fcc3  7511                 jne 0x54fcd6
// 0054fcc5  095024               or dword ptr [eax + 0x24], edx
// 0054fcc8  8b07                 mov eax, dword ptr [edi]
// 0054fcca  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fccd  83c014               add eax, 0x14
// 0054fcd0  894808               mov dword ptr [eax + 8], ecx
// 0054fcd3  89480c               mov dword ptr [eax + 0xc], ecx
// 0054fcd6  8b07                 mov eax, dword ptr [edi]
// 0054fcd8  8b7024               mov esi, dword ptr [eax + 0x24]
// 0054fcdb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0054fcdf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0054fce3  c1ee02               shr esi, 2
// 0054fce6  f7d6                 not esi
// 0054fce8  23f2                 and esi, edx
// 0054fcea  896c2410             mov dword ptr [esp + 0x10], ebp
// 0054fcee  03e9                 add ebp, ecx
// 0054fcf0  8d5820               lea ebx, [eax + 0x20]
// 0054fcf3  83ce04               or esi, 4
// 0054fcf6  83c01c               add eax, 0x1c
// 0054fcf9  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0054fcfd  895c2418             mov dword ptr [esp + 0x18], ebx
// 0054fd01  89442414             mov dword ptr [esp + 0x14], eax
// 0054fd05  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054fd09  8b02                 mov eax, dword ptr [edx]
// 0054fd0b  8b0b                 mov ecx, dword ptr [ebx]
// 0054fd0d  3bc1                 cmp eax, ecx
// 0054fd0f  7505                 jne 0x54fd16
// 0054fd11  83fe04               cmp esi, 4
// 0054fd14  7568                 jne 0x54fd7e
// 0054fd16  8b1f                 mov ebx, dword ptr [edi]
// 0054fd18  55                   push ebp
// 0054fd19  89442430             mov dword ptr [esp + 0x30], eax
// 0054fd1d  8d442414             lea eax, [esp + 0x14]
// 0054fd21  50                   push eax
// 0054fd22  51                   push ecx
// 0054fd23  8d4c2438             lea ecx, [esp + 0x38]
// 0054fd27  51                   push ecx
// 0054fd28  8bcb                 mov ecx, ebx
// 0054fd2a  e861cc0700           call 0x5cc990
// 0054fd2f  8b15a4a57b00         mov edx, dword ptr [0x7ba5a4]
// 0054fd35  52                   push edx
// 0054fd36  8bcb                 mov ecx, ebx
// 0054fd38  e8f3cc0700           call 0x5cca30
// 0054fd3d  8be8                 mov ebp, eax
// 0054fd3f  6a00                 push 0
// 0054fd41  8d442414             lea eax, [esp + 0x14]
// 0054fd45  50                   push eax
// 0054fd46  8d4c2434             lea ecx, [esp + 0x34]
// 0054fd4a  51                   push ecx
// 0054fd4b  8bcb                 mov ecx, ebx
// 0054fd4d  e86ecc0700           call 0x5cc9c0
// 0054fd52  55                   push ebp
// 0054fd53  e888cb0700           call 0x5cc8e0
// 0054fd58  8b542430             mov edx, dword ptr [esp + 0x30]
// 0054fd5c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054fd60  83c404               add esp, 4
// 0054fd63  3b2d84a57b00         cmp ebp, dword ptr [0x7ba584]
// 0054fd69  8911                 mov dword ptr [ecx], edx
// 0054fd6b  0f94c0               sete al
// 0054fd6e  84c0                 test al, al
// 0054fd70  0f8585000000         jne 0x54fdfb
// 0054fd76  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0054fd7a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054fd7e  83fe06               cmp esi, 6
// 0054fd81  750e                 jne 0x54fd91
// 0054fd83  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054fd87  8b02                 mov eax, dword ptr [edx]
// 0054fd89  3b03                 cmp eax, dword ptr [ebx]
// 0054fd8b  0f8481000000         je 0x54fe12
// 0054fd91  396c2410             cmp dword ptr [esp + 0x10], ebp
// 0054fd95  747b                 je 0x54fe12
// 0054fd97  83fe05               cmp esi, 5
// 0054fd9a  0f8565ffffff         jne 0x54fd05
// 0054fda0  8b07                 mov eax, dword ptr [edi]
// 0054fda2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054fda5  8b4014               mov eax, dword ptr [eax + 0x14]
// 0054fda8  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054fdac  51                   push ecx
// 0054fdad  50                   push eax
// 0054fdae  8bce                 mov ecx, esi
// 0054fdb0  ff150ce67700         call dword ptr [0x77e60c]
// 0054fdb6  85c0                 test eax, eax
// 0054fdb8  7404                 je 0x54fdbe
// 0054fdba  8bd0                 mov edx, eax
// 0054fdbc  eb07                 jmp 0x54fdc5
// 0054fdbe  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0054fdc1  f6da                 neg dl
// 0054fdc3  1bd2                 sbb edx, edx
// 0054fdc5  83faff               cmp edx, -1
// 0054fdc8  8b07                 mov eax, dword ptr [edi]
// 0054fdca  750d                 jne 0x54fdd9
// 0054fdcc  be04000000           mov esi, 4
// 0054fdd1  097024               or dword ptr [eax + 0x24], esi
// 0054fdd4  e92cffffff           jmp 0x54fd05
// 0054fdd9  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fddc  83c014               add eax, 0x14
// 0054fddf  894808               mov dword ptr [eax + 8], ecx
// 0054fde2  03ca                 add ecx, edx
// 0054fde4  89480c               mov dword ptr [eax + 0xc], ecx
// 0054fde7  8b0f                 mov ecx, dword ptr [edi]
// 0054fde9  33c0                 xor eax, eax
// 0054fdeb  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0054fdee  0f95c0               setne al
// 0054fdf1  83c005               add eax, 5
// 0054fdf4  8bf0                 mov esi, eax
// 0054fdf6  e90affffff           jmp 0x54fd05
// 0054fdfb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054fdff  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054fe03  7515                 jne 0x54fe1a
// 0054fe05  5f                   pop edi
// 0054fe06  5e                   pop esi
// 0054fe07  5d                   pop ebp
// 0054fe08  83c8ff               or eax, 0xffffffff
// 0054fe0b  5b                   pop ebx
// 0054fe0c  83c410               add esp, 0x10
// 0054fe0f  c20c00               ret 0xc
// 0054fe12  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054fe16  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054fe1a  5f                   pop edi
// 0054fe1b  5e                   pop esi
// 0054fe1c  5d                   pop ebp
// 0054fe1d  5b                   pop ebx
// 0054fe1e  83c410               add esp, 0x10
// 0054fe21  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp