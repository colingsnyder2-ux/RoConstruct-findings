// roc 2007-08 0071b090  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b090
//
// 0071b090  83ec10               sub esp, 0x10
// 0071b093  56                   push esi
// 0071b094  8bf1                 mov esi, ecx
// 0071b096  57                   push edi
// 0071b097  8d8e08020000         lea ecx, [esi + 0x208]
// 0071b09d  e86e3bf8ff           call 0x69ec10
// 0071b0a2  85c0                 test eax, eax
// 0071b0a4  0f84b9000000         je 0x71b163
// 0071b0aa  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0071b0b0  8b742430             mov esi, dword ptr [esp + 0x30]
// 0071b0b4  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0071b0ba  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0071b0be  8b11                 mov edx, dword ptr [ecx]
// 0071b0c0  8b520c               mov edx, dword ptr [edx + 0xc]
// 0071b0c3  56                   push esi
// 0071b0c4  83ec10               sub esp, 0x10
// 0071b0c7  8bc4                 mov eax, esp
// 0071b0c9  8938                 mov dword ptr [eax], edi
// 0071b0cb  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0071b0cf  897804               mov dword ptr [eax + 4], edi
// 0071b0d2  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0071b0d6  897808               mov dword ptr [eax + 8], edi
// 0071b0d9  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0071b0dd  89780c               mov dword ptr [eax + 0xc], edi
// 0071b0e0  8d44241c             lea eax, [esp + 0x1c]
// 0071b0e4  50                   push eax
// 0071b0e5  ffd2                 call edx
// 0071b0e7  8b06                 mov eax, dword ptr [esi]
// 0071b0e9  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071b0ec  8bce                 mov ecx, esi
// 0071b0ee  ffd2                 call edx
// 0071b0f0  83f803               cmp eax, 3
// 0071b0f3  776e                 ja 0x71b163
// 0071b0f5  ff24856cb17100       jmp dword ptr [eax*4 + 0x71b16c]
// 0071b0fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071b100  8d48ff               lea ecx, [eax - 1]
// 0071b103  51                   push ecx
// 0071b104  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071b108  8d5101               lea edx, [ecx + 1]
// 0071b10b  52                   push edx
// 0071b10c  83c0fe               add eax, -2
// 0071b10f  50                   push eax
// 0071b110  51                   push ecx
// 0071b111  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071b115  e85ad70100           call 0x738874
// 0071b11a  5f                   pop edi
// 0071b11b  5e                   pop esi
// 0071b11c  83c410               add esp, 0x10
// 0071b11f  c21800               ret 0x18
// 0071b122  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071b126  8d4801               lea ecx, [eax + 1]
// 0071b129  51                   push ecx
// 0071b12a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071b12e  8d5101               lea edx, [ecx + 1]
// 0071b131  52                   push edx
// 0071b132  50                   push eax
// 0071b133  51                   push ecx
// 0071b134  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071b138  e837d70100           call 0x738874
// 0071b13d  5f                   pop edi
// 0071b13e  5e                   pop esi
// 0071b13f  83c410               add esp, 0x10
// 0071b142  c21800               ret 0x18
// 0071b145  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071b149  8d4801               lea ecx, [eax + 1]
// 0071b14c  51                   push ecx
// 0071b14d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071b151  8d51ff               lea edx, [ecx - 1]
// 0071b154  52                   push edx
// 0071b155  83c1fe               add ecx, -2
// 0071b158  50                   push eax
// 0071b159  51                   push ecx
// 0071b15a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071b15e  e811d70100           call 0x738874
// 0071b163  5f                   pop edi
// 0071b164  5e                   pop esi
// 0071b165  83c410               add esp, 0x10
// 0071b168  c21800               ret 0x18
// 0071b16b  90                   nop 
// 0071b16c  22b1710022b1         and dh, byte ptr [ecx - 0x4eddff8f]
// 0071b172  7100                 jno 0x71b174
// 0071b174  fc                   cld 
// 0071b175  b071                 mov al, 0x71
// 0071b177  0045b1               add byte ptr [ebp - 0x4f], al
// 0071b17a  7100                 jno 0x71b17c
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
