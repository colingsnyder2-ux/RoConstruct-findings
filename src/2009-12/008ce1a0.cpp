// roc 2009-12 008ce1a0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce1a0
//
// 008ce1a0  83ec08               sub esp, 8
// 008ce1a3  56                   push esi
// 008ce1a4  8bf1                 mov esi, ecx
// 008ce1a6  837e0802             cmp dword ptr [esi + 8], 2
// 008ce1aa  7551                 jne 0x8ce1fd
// 008ce1ac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce1af  8b01                 mov eax, dword ptr [ecx]
// 008ce1b1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce1b4  ffd2                 call edx
// 008ce1b6  85c0                 test eax, eax
// 008ce1b8  742d                 je 0x8ce1e7
// 008ce1ba  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008ce1bd  8b01                 mov eax, dword ptr [ecx]
// 008ce1bf  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ce1c2  ffd2                 call edx
// 008ce1c4  83f802               cmp eax, 2
// 008ce1c7  741e                 je 0x8ce1e7
// 008ce1c9  8b06                 mov eax, dword ptr [esi]
// 008ce1cb  8b5008               mov edx, dword ptr [eax + 8]
// 008ce1ce  8d4c2404             lea ecx, [esp + 4]
// 008ce1d2  51                   push ecx
// 008ce1d3  8bce                 mov ecx, esi
// 008ce1d5  ffd2                 call edx
// 008ce1d7  8b4804               mov ecx, dword ptr [eax + 4]
// 008ce1da  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ce1de  2908                 sub dword ptr [eax], ecx
// 008ce1e0  5e                   pop esi
// 008ce1e1  83c408               add esp, 8
// 008ce1e4  c20400               ret 4
// 008ce1e7  8b16                 mov edx, dword ptr [esi]
// 008ce1e9  8b5208               mov edx, dword ptr [edx + 8]
// 008ce1ec  8d442404             lea eax, [esp + 4]
// 008ce1f0  50                   push eax
// 008ce1f1  8bce                 mov ecx, esi
// 008ce1f3  ffd2                 call edx
// 008ce1f5  8b08                 mov ecx, dword ptr [eax]
// 008ce1f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ce1fb  2908                 sub dword ptr [eax], ecx
// 008ce1fd  5e                   pop esi
// 008ce1fe  83c408               add esp, 8
// 008ce201  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?AdjustWidth@CNavigateButtonArrow@CXTPTabManager@@MAEXAAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
