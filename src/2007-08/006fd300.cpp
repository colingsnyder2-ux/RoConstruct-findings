// from server: 100% by auto
// roc 2007-08 006fd300  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd300
//
// 006fd300  83ec08               sub esp, 8
// 006fd303  56                   push esi
// 006fd304  8bf1                 mov esi, ecx
// 006fd306  837e0802             cmp dword ptr [esi + 8], 2
// 006fd30a  7551                 jne 0x6fd35d
// 006fd30c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fd30f  8b01                 mov eax, dword ptr [ecx]
// 006fd311  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fd314  ffd2                 call edx
// 006fd316  85c0                 test eax, eax
// 006fd318  742d                 je 0x6fd347
// 006fd31a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fd31d  8b01                 mov eax, dword ptr [ecx]
// 006fd31f  8b5048               mov edx, dword ptr [eax + 0x48]
// 006fd322  ffd2                 call edx
// 006fd324  83f802               cmp eax, 2
// 006fd327  741e                 je 0x6fd347
// 006fd329  8b06                 mov eax, dword ptr [esi]
// 006fd32b  8b5008               mov edx, dword ptr [eax + 8]
// 006fd32e  8d4c2404             lea ecx, [esp + 4]
// 006fd332  51                   push ecx
// 006fd333  8bce                 mov ecx, esi
// 006fd335  ffd2                 call edx
// 006fd337  8b4804               mov ecx, dword ptr [eax + 4]
// 006fd33a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd33e  2908                 sub dword ptr [eax], ecx
// 006fd340  5e                   pop esi
// 006fd341  83c408               add esp, 8
// 006fd344  c20400               ret 4
// 006fd347  8b16                 mov edx, dword ptr [esi]
// 006fd349  8b5208               mov edx, dword ptr [edx + 8]
// 006fd34c  8d442404             lea eax, [esp + 4]
// 006fd350  50                   push eax
// 006fd351  8bce                 mov ecx, esi
// 006fd353  ffd2                 call edx
// 006fd355  8b08                 mov ecx, dword ptr [eax]
// 006fd357  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd35b  2908                 sub dword ptr [eax], ecx
// 006fd35d  5e                   pop esi
// 006fd35e  83c408               add esp, 8
// 006fd361  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
