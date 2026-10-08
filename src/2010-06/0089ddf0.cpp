// roc 2010-06 0089ddf0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089ddf0
//
// 0089ddf0  55                   push ebp
// 0089ddf1  56                   push esi
// 0089ddf2  8bf1                 mov esi, ecx
// 0089ddf4  57                   push edi
// 0089ddf5  8dbe14020000         lea edi, [esi + 0x214]
// 0089ddfb  8bcf                 mov ecx, edi
// 0089ddfd  e8be1df8ff           call 0x81fbc0
// 0089de02  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089de06  85c0                 test eax, eax
// 0089de08  7436                 je 0x89de40
// 0089de0a  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 0089de0d  394d04               cmp dword ptr [ebp + 4], ecx
// 0089de10  752e                 jne 0x89de40
// 0089de12  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089de16  85c0                 test eax, eax
// 0089de18  7403                 je 0x89de1d
// 0089de1a  8b4004               mov eax, dword ptr [eax + 4]
// 0089de1d  6a00                 push 0
// 0089de1f  8d542418             lea edx, [esp + 0x18]
// 0089de23  52                   push edx
// 0089de24  33d2                 xor edx, edx
// 0089de26  394d08               cmp dword ptr [ebp + 8], ecx
// 0089de29  8bcf                 mov ecx, edi
// 0089de2b  0f94c2               sete dl
// 0089de2e  83c205               add edx, 5
// 0089de31  52                   push edx
// 0089de32  6a01                 push 1
// 0089de34  50                   push eax
// 0089de35  e8061af8ff           call 0x81f840
// 0089de3a  5f                   pop edi
// 0089de3b  5e                   pop esi
// 0089de3c  5d                   pop ebp
// 0089de3d  c21800               ret 0x18
// 0089de40  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089de44  51                   push ecx
// 0089de45  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089de49  83ec10               sub esp, 0x10
// 0089de4c  8bc4                 mov eax, esp
// 0089de4e  8908                 mov dword ptr [eax], ecx
// 0089de50  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089de54  895004               mov dword ptr [eax + 4], edx
// 0089de57  8b542434             mov edx, dword ptr [esp + 0x34]
// 0089de5b  894808               mov dword ptr [eax + 8], ecx
// 0089de5e  89500c               mov dword ptr [eax + 0xc], edx
// 0089de61  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089de65  50                   push eax
// 0089de66  8bce                 mov ecx, esi
// 0089de68  e853e7ffff           call 0x89c5c0
// 0089de6d  5f                   pop edi
// 0089de6e  5e                   pop esi
// 0089de6f  5d                   pop ebp
// 0089de70  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
