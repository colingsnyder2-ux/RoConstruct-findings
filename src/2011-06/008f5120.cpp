// roc 2011-06 008f5120  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f5120
//
// 008f5120  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f5124  53                   push ebx
// 008f5125  55                   push ebp
// 008f5126  56                   push esi
// 008f5127  57                   push edi
// 008f5128  8b7860               mov edi, dword ptr [eax + 0x60]
// 008f512b  8bf1                 mov esi, ecx
// 008f512d  394704               cmp dword ptr [edi + 4], eax
// 008f5130  0f84ad000000         je 0x8f51e3
// 008f5136  8b07                 mov eax, dword ptr [edi]
// 008f5138  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f513b  8bcf                 mov ecx, edi
// 008f513d  ffd2                 call edx
// 008f513f  83f802               cmp eax, 2
// 008f5142  740d                 je 0x8f5151
// 008f5144  8b07                 mov eax, dword ptr [edi]
// 008f5146  8b5048               mov edx, dword ptr [eax + 0x48]
// 008f5149  8bcf                 mov ecx, edi
// 008f514b  ffd2                 call edx
// 008f514d  85c0                 test eax, eax
// 008f514f  7549                 jne 0x8f519a
// 008f5151  e88a02f5ff           call 0x8453e0
// 008f5156  6a14                 push 0x14
// 008f5158  8bc8                 mov ecx, eax
// 008f515a  e851faf4ff           call 0x844bb0
// 008f515f  8bf0                 mov esi, eax
// 008f5161  e87a02f5ff           call 0x8453e0
// 008f5166  6a10                 push 0x10
// 008f5168  8bc8                 mov ecx, eax
// 008f516a  e841faf4ff           call 0x844bb0
// 008f516f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f5173  8b542420             mov edx, dword ptr [esp + 0x20]
// 008f5177  56                   push esi
// 008f5178  50                   push eax
// 008f5179  8b442424             mov eax, dword ptr [esp + 0x24]
// 008f517d  2bc8                 sub ecx, eax
// 008f517f  83e904               sub ecx, 4
// 008f5182  51                   push ecx
// 008f5183  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f5187  6a02                 push 2
// 008f5189  83c002               add eax, 2
// 008f518c  50                   push eax
// 008f518d  52                   push edx
// 008f518e  e8697b0d00           call 0x9cccfc
// 008f5193  5f                   pop edi
// 008f5194  5e                   pop esi
// 008f5195  5d                   pop ebp
// 008f5196  5b                   pop ebx
// 008f5197  c21800               ret 0x18
// 008f519a  e84102f5ff           call 0x8453e0
// 008f519f  6a14                 push 0x14
// 008f51a1  8bc8                 mov ecx, eax
// 008f51a3  e808faf4ff           call 0x844bb0
// 008f51a8  8bf0                 mov esi, eax
// 008f51aa  e83102f5ff           call 0x8453e0
// 008f51af  6a10                 push 0x10
// 008f51b1  8bc8                 mov ecx, eax
// 008f51b3  e8f8f9f4ff           call 0x844bb0
// 008f51b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f51bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f51c0  56                   push esi
// 008f51c1  50                   push eax
// 008f51c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f51c6  2bc8                 sub ecx, eax
// 008f51c8  6a02                 push 2
// 008f51ca  83e904               sub ecx, 4
// 008f51cd  51                   push ecx
// 008f51ce  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f51d2  52                   push edx
// 008f51d3  83c002               add eax, 2
// 008f51d6  50                   push eax
// 008f51d7  e8207b0d00           call 0x9cccfc
// 008f51dc  5f                   pop edi
// 008f51dd  5e                   pop esi
// 008f51de  5d                   pop ebp
// 008f51df  5b                   pop ebx
// 008f51e0  c21800               ret 0x18
// 008f51e3  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008f51e9  83793400             cmp dword ptr [ecx + 0x34], 0
// 008f51ed  741d                 je 0x8f520c
// 008f51ef  8b16                 mov edx, dword ptr [esi]
// 008f51f1  50                   push eax
// 008f51f2  8b4224               mov eax, dword ptr [edx + 0x24]
// 008f51f5  8bce                 mov ecx, esi
// 008f51f7  ffd0                 call eax
// 008f51f9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008f51fd  50                   push eax
// 008f51fe  8d4c241c             lea ecx, [esp + 0x1c]
// 008f5202  51                   push ecx
// 008f5203  8bcf                 mov ecx, edi
// 008f5205  e8165cf1ff           call 0x80ae20
// 008f520a  eb5e                 jmp 0x8f526a
// 008f520c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008f5212  83f8ff               cmp eax, -1
// 008f5215  7508                 jne 0x8f521f
// 008f5217  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 008f521d  eb02                 jmp 0x8f5221
// 008f521f  8be8                 mov ebp, eax
// 008f5221  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 008f5227  83fbff               cmp ebx, -1
// 008f522a  7506                 jne 0x8f5232
// 008f522c  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 008f5232  8b17                 mov edx, dword ptr [edi]
// 008f5234  8b4248               mov eax, dword ptr [edx + 0x48]
// 008f5237  8bcf                 mov ecx, edi
// 008f5239  ffd0                 call eax
// 008f523b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f523f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f5243  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008f5247  50                   push eax
// 008f5248  55                   push ebp
// 008f5249  53                   push ebx
// 008f524a  83ec10               sub esp, 0x10
// 008f524d  8bc4                 mov eax, esp
// 008f524f  8908                 mov dword ptr [eax], ecx
// 008f5251  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f5255  895004               mov dword ptr [eax + 4], edx
// 008f5258  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f525c  894808               mov dword ptr [eax + 8], ecx
// 008f525f  57                   push edi
// 008f5260  8bce                 mov ecx, esi
// 008f5262  89500c               mov dword ptr [eax + 0xc], edx
// 008f5265  e886fbffff           call 0x8f4df0
// 008f526a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 008f5270  83f8ff               cmp eax, -1
// 008f5273  7508                 jne 0x8f527d
// 008f5275  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 008f527b  eb02                 jmp 0x8f527f
// 008f527d  8bc8                 mov ecx, eax
// 008f527f  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 008f5285  83f8ff               cmp eax, -1
// 008f5288  7506                 jne 0x8f5290
// 008f528a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 008f5290  51                   push ecx
// 008f5291  50                   push eax
// 008f5292  8d442420             lea eax, [esp + 0x20]
// 008f5296  50                   push eax
// 008f5297  8bcf                 mov ecx, edi
// 008f5299  e87c5bf1ff           call 0x80ae1a
// 008f529e  5f                   pop edi
// 008f529f  5e                   pop esi
// 008f52a0  5d                   pop ebp
// 008f52a1  5b                   pop ebx
// 008f52a2  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
