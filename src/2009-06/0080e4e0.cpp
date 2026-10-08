// roc 2009-06 0080e4e0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e4e0
//
// 0080e4e0  55                   push ebp
// 0080e4e1  56                   push esi
// 0080e4e2  8bf1                 mov esi, ecx
// 0080e4e4  57                   push edi
// 0080e4e5  8dbe14020000         lea edi, [esi + 0x214]
// 0080e4eb  8bcf                 mov ecx, edi
// 0080e4ed  e8ae26f8ff           call 0x790ba0
// 0080e4f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080e4f6  85c0                 test eax, eax
// 0080e4f8  7436                 je 0x80e530
// 0080e4fa  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 0080e4fd  394d04               cmp dword ptr [ebp + 4], ecx
// 0080e500  752e                 jne 0x80e530
// 0080e502  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080e506  85c0                 test eax, eax
// 0080e508  7403                 je 0x80e50d
// 0080e50a  8b4004               mov eax, dword ptr [eax + 4]
// 0080e50d  6a00                 push 0
// 0080e50f  8d542418             lea edx, [esp + 0x18]
// 0080e513  52                   push edx
// 0080e514  33d2                 xor edx, edx
// 0080e516  394d08               cmp dword ptr [ebp + 8], ecx
// 0080e519  8bcf                 mov ecx, edi
// 0080e51b  0f94c2               sete dl
// 0080e51e  83c205               add edx, 5
// 0080e521  52                   push edx
// 0080e522  6a01                 push 1
// 0080e524  50                   push eax
// 0080e525  e8f622f8ff           call 0x790820
// 0080e52a  5f                   pop edi
// 0080e52b  5e                   pop esi
// 0080e52c  5d                   pop ebp
// 0080e52d  c21800               ret 0x18
// 0080e530  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080e534  51                   push ecx
// 0080e535  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080e539  83ec10               sub esp, 0x10
// 0080e53c  8bc4                 mov eax, esp
// 0080e53e  8908                 mov dword ptr [eax], ecx
// 0080e540  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080e544  895004               mov dword ptr [eax + 4], edx
// 0080e547  8b542434             mov edx, dword ptr [esp + 0x34]
// 0080e54b  894808               mov dword ptr [eax + 8], ecx
// 0080e54e  89500c               mov dword ptr [eax + 0xc], edx
// 0080e551  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080e555  50                   push eax
// 0080e556  8bce                 mov ecx, esi
// 0080e558  e853e7ffff           call 0x80ccb0
// 0080e55d  5f                   pop edi
// 0080e55e  5e                   pop esi
// 0080e55f  5d                   pop ebp
// 0080e560  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
