// roc 2012-06 00a6ecb0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ecb0
//
// 00a6ecb0  55                   push ebp
// 00a6ecb1  56                   push esi
// 00a6ecb2  8bf1                 mov esi, ecx
// 00a6ecb4  57                   push edi
// 00a6ecb5  8dbe14020000         lea edi, [esi + 0x214]
// 00a6ecbb  8bcf                 mov ecx, edi
// 00a6ecbd  e8ae6bf8ff           call 0x9f5870
// 00a6ecc2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a6ecc6  85c0                 test eax, eax
// 00a6ecc8  7436                 je 0xa6ed00
// 00a6ecca  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 00a6eccd  394d04               cmp dword ptr [ebp + 4], ecx
// 00a6ecd0  752e                 jne 0xa6ed00
// 00a6ecd2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a6ecd6  85c0                 test eax, eax
// 00a6ecd8  7403                 je 0xa6ecdd
// 00a6ecda  8b4004               mov eax, dword ptr [eax + 4]
// 00a6ecdd  6a00                 push 0
// 00a6ecdf  8d542418             lea edx, [esp + 0x18]
// 00a6ece3  52                   push edx
// 00a6ece4  33d2                 xor edx, edx
// 00a6ece6  394d08               cmp dword ptr [ebp + 8], ecx
// 00a6ece9  8bcf                 mov ecx, edi
// 00a6eceb  0f94c2               sete dl
// 00a6ecee  83c205               add edx, 5
// 00a6ecf1  52                   push edx
// 00a6ecf2  6a01                 push 1
// 00a6ecf4  50                   push eax
// 00a6ecf5  e8a668f8ff           call 0x9f55a0
// 00a6ecfa  5f                   pop edi
// 00a6ecfb  5e                   pop esi
// 00a6ecfc  5d                   pop ebp
// 00a6ecfd  c21800               ret 0x18
// 00a6ed00  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6ed04  51                   push ecx
// 00a6ed05  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6ed09  83ec10               sub esp, 0x10
// 00a6ed0c  8bc4                 mov eax, esp
// 00a6ed0e  8908                 mov dword ptr [eax], ecx
// 00a6ed10  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a6ed14  895004               mov dword ptr [eax + 4], edx
// 00a6ed17  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a6ed1b  894808               mov dword ptr [eax + 8], ecx
// 00a6ed1e  89500c               mov dword ptr [eax + 0xc], edx
// 00a6ed21  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a6ed25  50                   push eax
// 00a6ed26  8bce                 mov ecx, esi
// 00a6ed28  e853e7ffff           call 0xa6d480
// 00a6ed2d  5f                   pop edi
// 00a6ed2e  5e                   pop esi
// 00a6ed2f  5d                   pop ebp
// 00a6ed30  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
