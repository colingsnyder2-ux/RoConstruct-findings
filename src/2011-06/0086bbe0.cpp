// roc 2011-06 0086bbe0  unit: CXTThemeManager  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bbe0
//
// 0086bbe0  83ec08               sub esp, 8
// 0086bbe3  56                   push esi
// 0086bbe4  57                   push edi
// 0086bbe5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0086bbe9  8bf1                 mov esi, ecx
// 0086bbeb  397e20               cmp dword ptr [esi + 0x20], edi
// 0086bbee  7447                 je 0x86bc37
// 0086bbf0  897e20               mov dword ptr [esi + 0x20], edi
// 0086bbf3  e8b8b3fdff           call 0x846fb0
// 0086bbf8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086bbfb  f7d8                 neg eax
// 0086bbfd  1bc0                 sbb eax, eax
// 0086bbff  89442408             mov dword ptr [esp + 8], eax
// 0086bc03  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086bc0b  742a                 je 0x86bc37
// 0086bc0d  83c604               add esi, 4
// 0086bc10  8d442414             lea eax, [esp + 0x14]
// 0086bc14  50                   push eax
// 0086bc15  8d4c2410             lea ecx, [esp + 0x10]
// 0086bc19  51                   push ecx
// 0086bc1a  8d542410             lea edx, [esp + 0x10]
// 0086bc1e  52                   push edx
// 0086bc1f  8bce                 mov ecx, esi
// 0086bc21  e8a80e1600           call 0x9ccace
// 0086bc26  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086bc2a  57                   push edi
// 0086bc2b  e890feffff           call 0x86bac0
// 0086bc30  837c240800           cmp dword ptr [esp + 8], 0
// 0086bc35  75d9                 jne 0x86bc10
// 0086bc37  5f                   pop edi
// 0086bc38  5e                   pop esi
// 0086bc39  83c408               add esp, 8
// 0086bc3c  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTThemeManager@@QAEXW4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp