// roc 2012-06 00a18b60  unit: UtagACCEL::?$CArray  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18b60
//
// 00a18b60  56                   push esi
// 00a18b61  8bf1                 mov esi, ecx
// 00a18b63  837e1000             cmp dword ptr [esi + 0x10], 0
// 00a18b67  57                   push edi
// 00a18b68  7537                 jne 0xa18ba1
// 00a18b6a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a18b6d  6a10                 push 0x10
// 00a18b6f  50                   push eax
// 00a18b70  8d4e14               lea ecx, [esi + 0x14]
// 00a18b73  51                   push ecx
// 00a18b74  e8f9a0f6ff           call 0x982c72
// 00a18b79  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a18b7c  8bd1                 mov edx, ecx
// 00a18b7e  83c004               add eax, 4
// 00a18b81  c1e204               shl edx, 4
// 00a18b84  83c1ff               add ecx, -1
// 00a18b87  8d4410f0             lea eax, [eax + edx - 0x10]
// 00a18b8b  7814                 js 0xa18ba1
// 00a18b8d  8d4900               lea ecx, [ecx]
// 00a18b90  8b5610               mov edx, dword ptr [esi + 0x10]
// 00a18b93  895008               mov dword ptr [eax + 8], edx
// 00a18b96  894610               mov dword ptr [esi + 0x10], eax
// 00a18b99  49                   dec ecx
// 00a18b9a  83e810               sub eax, 0x10
// 00a18b9d  85c9                 test ecx, ecx
// 00a18b9f  7def                 jge 0xa18b90
// 00a18ba1  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00a18ba4  85ff                 test edi, edi
// 00a18ba6  7505                 jne 0xa18bad
// 00a18ba8  e81398f6ff           call 0x9823c0
// 00a18bad  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a18bb0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a18bb4  33c0                 xor eax, eax
// 00a18bb6  8907                 mov dword ptr [edi], eax
// 00a18bb8  894704               mov dword ptr [edi + 4], eax
// 00a18bbb  89470c               mov dword ptr [edi + 0xc], eax
// 00a18bbe  894f08               mov dword ptr [edi + 8], ecx
// 00a18bc1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a18bc4  8b4808               mov ecx, dword ptr [eax + 8]
// 00a18bc7  ff460c               inc dword ptr [esi + 0xc]
// 00a18bca  894e10               mov dword ptr [esi + 0x10], ecx
// 00a18bcd  8d4f04               lea ecx, [edi + 4]
// 00a18bd0  8917                 mov dword ptr [edi], edx
// 00a18bd2  ff158447b200         call dword ptr [0xb24784]
// 00a18bd8  8bc7                 mov eax, edi
// 00a18bda  5f                   pop edi
// 00a18bdb  5e                   pop esi
// 00a18bdc  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Common\XTPResourceImage.cpp (function ?NewAssoc@?$CMap@IIV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V12@@@IAEPAVCAssoc@1@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPResourceImage.cpp
