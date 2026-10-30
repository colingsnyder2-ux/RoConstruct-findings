// roc 2011-06 008f23e0  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f23e0
//
// 008f23e0  6aff                 push -1
// 008f23e2  6878eaa000           push 0xa0ea78
// 008f23e7  64a100000000         mov eax, dword ptr fs:[0]
// 008f23ed  50                   push eax
// 008f23ee  56                   push esi
// 008f23ef  a12058c900           mov eax, dword ptr [0xc95820]
// 008f23f4  33c4                 xor eax, esp
// 008f23f6  50                   push eax
// 008f23f7  8d442408             lea eax, [esp + 8]
// 008f23fb  64a300000000         mov dword ptr fs:[0], eax
// 008f2401  8bf1                 mov esi, ecx
// 008f2403  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f2407  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f240b  50                   push eax
// 008f240c  83ec24               sub esp, 0x24
// 008f240f  8bcc                 mov ecx, esp
// 008f2411  89642450             mov dword ptr [esp + 0x50], esp
// 008f2415  6a01                 push 1
// 008f2417  52                   push edx
// 008f2418  e84309f3ff           call 0x822d60
// 008f241d  8b442448             mov eax, dword ptr [esp + 0x48]
// 008f2421  83ec24               sub esp, 0x24
// 008f2424  8bcc                 mov ecx, esp
// 008f2426  89642470             mov dword ptr [esp + 0x70], esp
// 008f242a  6a01                 push 1
// 008f242c  50                   push eax
// 008f242d  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008f2435  e82609f3ff           call 0x822d60
// 008f243a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008f243e  8b06                 mov eax, dword ptr [esi]
// 008f2440  8b542464             mov edx, dword ptr [esp + 0x64]
// 008f2444  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 008f244a  51                   push ecx
// 008f244b  52                   push edx
// 008f244c  8bce                 mov ecx, esi
// 008f244e  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008f2456  ffd0                 call eax
// 008f2458  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f245c  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2463  59                   pop ecx
// 008f2464  5e                   pop esi
// 008f2465  83c40c               add esp, 0xc
// 008f2468  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PAUHICON__@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp