// roc 2007-03 0069fd60  unit: seg_00690000  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069fd60
//
// 0069fd60  53                   push ebx
// 0069fd61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0069fd65  56                   push esi
// 0069fd66  57                   push edi
// 0069fd67  33ff                 xor edi, edi
// 0069fd69  3bdf                 cmp ebx, edi
// 0069fd6b  8bf1                 mov esi, ecx
// 0069fd6d  7d05                 jge 0x69fd74
// 0069fd6f  e83ae6f7ff           call 0x61e3ae
// 0069fd74  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069fd78  3bc7                 cmp eax, edi
// 0069fd7a  7c03                 jl 0x69fd7f
// 0069fd7c  894610               mov dword ptr [esi + 0x10], eax
// 0069fd7f  3bdf                 cmp ebx, edi
// 0069fd81  751f                 jne 0x69fda2
// 0069fd83  8b4604               mov eax, dword ptr [esi + 4]
// 0069fd86  3bc7                 cmp eax, edi
// 0069fd88  740c                 je 0x69fd96
// 0069fd8a  50                   push eax
// 0069fd8b  e824e6f7ff           call 0x61e3b4
// 0069fd90  83c404               add esp, 4
// 0069fd93  897e04               mov dword ptr [esi + 4], edi
// 0069fd96  897e0c               mov dword ptr [esi + 0xc], edi
// 0069fd99  897e08               mov dword ptr [esi + 8], edi
// 0069fd9c  5f                   pop edi
// 0069fd9d  5e                   pop esi
// 0069fd9e  5b                   pop ebx
// 0069fd9f  c20800               ret 8
// 0069fda2  8b5604               mov edx, dword ptr [esi + 4]
// 0069fda5  3bd7                 cmp edx, edi
// 0069fda7  55                   push ebp
// 0069fda8  7535                 jne 0x69fddf
// 0069fdaa  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0069fdad  3bdd                 cmp ebx, ebp
// 0069fdaf  7e02                 jle 0x69fdb3
// 0069fdb1  8beb                 mov ebp, ebx
// 0069fdb3  8d7c6d00             lea edi, [ebp + ebp*2]
// 0069fdb7  03ff                 add edi, edi
// 0069fdb9  03ff                 add edi, edi
// 0069fdbb  03ff                 add edi, edi
// 0069fdbd  57                   push edi
// 0069fdbe  e8fde5f7ff           call 0x61e3c0
// 0069fdc3  57                   push edi
// 0069fdc4  6a00                 push 0
// 0069fdc6  50                   push eax
// 0069fdc7  894604               mov dword ptr [esi + 4], eax
// 0069fdca  e84df2f7ff           call 0x61f01c
// 0069fdcf  83c410               add esp, 0x10
// 0069fdd2  896e0c               mov dword ptr [esi + 0xc], ebp
// 0069fdd5  5d                   pop ebp
// 0069fdd6  5f                   pop edi
// 0069fdd7  895e08               mov dword ptr [esi + 8], ebx
// 0069fdda  5e                   pop esi
// 0069fddb  5b                   pop ebx
// 0069fddc  c20800               ret 8
// 0069fddf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0069fde2  3bd9                 cmp ebx, ecx
// 0069fde4  7f33                 jg 0x69fe19
// 0069fde6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069fde9  3bd9                 cmp ebx, ecx
// 0069fdeb  0f8ece000000         jle 0x69febf
// 0069fdf1  8bc3                 mov eax, ebx
// 0069fdf3  2bc1                 sub eax, ecx
// 0069fdf5  8d0440               lea eax, [eax + eax*2]
// 0069fdf8  03c0                 add eax, eax
// 0069fdfa  03c0                 add eax, eax
// 0069fdfc  03c0                 add eax, eax
// 0069fdfe  50                   push eax
// 0069fdff  8d0c49               lea ecx, [ecx + ecx*2]
// 0069fe02  8d14ca               lea edx, [edx + ecx*8]
// 0069fe05  57                   push edi
// 0069fe06  52                   push edx
// 0069fe07  e810f2f7ff           call 0x61f01c
// 0069fe0c  83c40c               add esp, 0xc
// 0069fe0f  5d                   pop ebp
// 0069fe10  5f                   pop edi
// 0069fe11  895e08               mov dword ptr [esi + 8], ebx
// 0069fe14  5e                   pop esi
// 0069fe15  5b                   pop ebx
// 0069fe16  c20800               ret 8
// 0069fe19  8b4610               mov eax, dword ptr [esi + 0x10]
// 0069fe1c  3bc7                 cmp eax, edi
// 0069fe1e  7524                 jne 0x69fe44
// 0069fe20  8b4608               mov eax, dword ptr [esi + 8]
// 0069fe23  99                   cdq 
// 0069fe24  83e207               and edx, 7
// 0069fe27  03c2                 add eax, edx
// 0069fe29  c1f803               sar eax, 3
// 0069fe2c  83f804               cmp eax, 4
// 0069fe2f  7d07                 jge 0x69fe38
// 0069fe31  b804000000           mov eax, 4
// 0069fe36  eb0c                 jmp 0x69fe44
// 0069fe38  3d00040000           cmp eax, 0x400
// 0069fe3d  7e05                 jle 0x69fe44
// 0069fe3f  b800040000           mov eax, 0x400
// 0069fe44  8d3c01               lea edi, [ecx + eax]
// 0069fe47  3bdf                 cmp ebx, edi
// 0069fe49  7d06                 jge 0x69fe51
// 0069fe4b  897c2414             mov dword ptr [esp + 0x14], edi
// 0069fe4f  eb06                 jmp 0x69fe57
// 0069fe51  895c2414             mov dword ptr [esp + 0x14], ebx
// 0069fe55  8bfb                 mov edi, ebx
// 0069fe57  3bf9                 cmp edi, ecx
// 0069fe59  7d05                 jge 0x69fe60
// 0069fe5b  e84ee5f7ff           call 0x61e3ae
// 0069fe60  8d3c7f               lea edi, [edi + edi*2]
// 0069fe63  03ff                 add edi, edi
// 0069fe65  03ff                 add edi, edi
// 0069fe67  03ff                 add edi, edi
// 0069fe69  57                   push edi
// 0069fe6a  e851e5f7ff           call 0x61e3c0
// 0069fe6f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0069fe72  8be8                 mov ebp, eax
// 0069fe74  8b4608               mov eax, dword ptr [esi + 8]
// 0069fe77  8d0440               lea eax, [eax + eax*2]
// 0069fe7a  03c0                 add eax, eax
// 0069fe7c  03c0                 add eax, eax
// 0069fe7e  03c0                 add eax, eax
// 0069fe80  50                   push eax
// 0069fe81  51                   push ecx
// 0069fe82  57                   push edi
// 0069fe83  55                   push ebp
// 0069fe84  e8071ad6ff           call 0x401890
// 0069fe89  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069fe8c  8bc3                 mov eax, ebx
// 0069fe8e  2bc1                 sub eax, ecx
// 0069fe90  8d1440               lea edx, [eax + eax*2]
// 0069fe93  03d2                 add edx, edx
// 0069fe95  03d2                 add edx, edx
// 0069fe97  03d2                 add edx, edx
// 0069fe99  52                   push edx
// 0069fe9a  8d0449               lea eax, [ecx + ecx*2]
// 0069fe9d  8d4cc500             lea ecx, [ebp + eax*8]
// 0069fea1  6a00                 push 0
// 0069fea3  51                   push ecx
// 0069fea4  e873f1f7ff           call 0x61f01c
// 0069fea9  8b5604               mov edx, dword ptr [esi + 4]
// 0069feac  52                   push edx
// 0069fead  e802e5f7ff           call 0x61e3b4
// 0069feb2  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069feb6  83c424               add esp, 0x24
// 0069feb9  896e04               mov dword ptr [esi + 4], ebp
// 0069febc  89460c               mov dword ptr [esi + 0xc], eax
// 0069febf  5d                   pop ebp
// 0069fec0  5f                   pop edi
// 0069fec1  895e08               mov dword ptr [esi + 8], ebx
// 0069fec4  5e                   pop esi
// 0069fec5  5b                   pop ebx
// 0069fec6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?SetSize@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
