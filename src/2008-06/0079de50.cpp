// from server: 100% by auto
// roc 2008-06 0079de50  unit: CXTPTabPaintManager::CColorSetWinXP  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079de50
//
// 0079de50  55                   push ebp
// 0079de51  56                   push esi
// 0079de52  8bf1                 mov esi, ecx
// 0079de54  57                   push edi
// 0079de55  8dbe14020000         lea edi, [esi + 0x214]
// 0079de5b  8bcf                 mov ecx, edi
// 0079de5d  e8cea5f7ff           call 0x718430
// 0079de62  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079de66  85c0                 test eax, eax
// 0079de68  7436                 je 0x79dea0
// 0079de6a  8b6960               mov ebp, dword ptr [ecx + 0x60]
// 0079de6d  394d04               cmp dword ptr [ebp + 4], ecx
// 0079de70  752e                 jne 0x79dea0
// 0079de72  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079de76  85c0                 test eax, eax
// 0079de78  7403                 je 0x79de7d
// 0079de7a  8b4004               mov eax, dword ptr [eax + 4]
// 0079de7d  6a00                 push 0
// 0079de7f  8d542418             lea edx, [esp + 0x18]
// 0079de83  52                   push edx
// 0079de84  33d2                 xor edx, edx
// 0079de86  394d08               cmp dword ptr [ebp + 8], ecx
// 0079de89  8bcf                 mov ecx, edi
// 0079de8b  0f94c2               sete dl
// 0079de8e  83c205               add edx, 5
// 0079de91  52                   push edx
// 0079de92  6a01                 push 1
// 0079de94  50                   push eax
// 0079de95  e816a2f7ff           call 0x7180b0
// 0079de9a  5f                   pop edi
// 0079de9b  5e                   pop esi
// 0079de9c  5d                   pop ebp
// 0079de9d  c21800               ret 0x18
// 0079dea0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079dea4  51                   push ecx
// 0079dea5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079dea9  83ec10               sub esp, 0x10
// 0079deac  8bc4                 mov eax, esp
// 0079deae  8908                 mov dword ptr [eax], ecx
// 0079deb0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079deb4  895004               mov dword ptr [eax + 4], edx
// 0079deb7  8b542434             mov edx, dword ptr [esp + 0x34]
// 0079debb  894808               mov dword ptr [eax + 8], ecx
// 0079debe  89500c               mov dword ptr [eax + 0xc], edx
// 0079dec1  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079dec5  50                   push eax
// 0079dec6  8bce                 mov ecx, esi
// 0079dec8  e853e7ffff           call 0x79c620
// 0079decd  5f                   pop edi
// 0079dece  5e                   pop esi
// 0079decf  5d                   pop ebp
// 0079ded0  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
