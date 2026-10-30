// roc 2011-06 008f6950  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6950
//
// 008f6950  55                   push ebp
// 008f6951  56                   push esi
// 008f6952  8bf1                 mov esi, ecx
// 008f6954  57                   push edi
// 008f6955  8dbe14020000         lea edi, [esi + 0x214]
// 008f695b  8bcf                 mov ecx, edi
// 008f695d  e86e69f8ff           call 0x87d2d0
// 008f6962  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f6966  85c0                 test eax, eax
// 008f6968  7436                 je 0x8f69a0
// 008f696a  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 008f696d  394d04               cmp dword ptr [ebp + 4], ecx
// 008f6970  752e                 jne 0x8f69a0
// 008f6972  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f6976  85c0                 test eax, eax
// 008f6978  7403                 je 0x8f697d
// 008f697a  8b4004               mov eax, dword ptr [eax + 4]
// 008f697d  6a00                 push 0
// 008f697f  8d542418             lea edx, [esp + 0x18]
// 008f6983  52                   push edx
// 008f6984  33d2                 xor edx, edx
// 008f6986  394d08               cmp dword ptr [ebp + 8], ecx
// 008f6989  8bcf                 mov ecx, edi
// 008f698b  0f94c2               sete dl
// 008f698e  83c205               add edx, 5
// 008f6991  52                   push edx
// 008f6992  6a01                 push 1
// 008f6994  50                   push eax
// 008f6995  e86666f8ff           call 0x87d000
// 008f699a  5f                   pop edi
// 008f699b  5e                   pop esi
// 008f699c  5d                   pop ebp
// 008f699d  c21800               ret 0x18
// 008f69a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f69a4  51                   push ecx
// 008f69a5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f69a9  83ec10               sub esp, 0x10
// 008f69ac  8bc4                 mov eax, esp
// 008f69ae  8908                 mov dword ptr [eax], ecx
// 008f69b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f69b4  895004               mov dword ptr [eax + 4], edx
// 008f69b7  8b542434             mov edx, dword ptr [esp + 0x34]
// 008f69bb  894808               mov dword ptr [eax + 8], ecx
// 008f69be  89500c               mov dword ptr [eax + 0xc], edx
// 008f69c1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008f69c5  50                   push eax
// 008f69c6  8bce                 mov ecx, esi
// 008f69c8  e853e7ffff           call 0x8f5120
// 008f69cd  5f                   pop edi
// 008f69ce  5e                   pop esi
// 008f69cf  5d                   pop ebp
// 008f69d0  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
