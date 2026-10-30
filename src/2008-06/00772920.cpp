// from server: 100% by auto
// roc 2008-06 00772920  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772920
//
// 00772920  56                   push esi
// 00772921  8bf1                 mov esi, ecx
// 00772923  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00772929  85c0                 test eax, eax
// 0077292b  7416                 je 0x772943
// 0077292d  50                   push eax
// 0077292e  ff153c2d8000         call dword ptr [0x802d3c]
// 00772934  85c0                 test eax, eax
// 00772936  740b                 je 0x772943
// 00772938  8bce                 mov ecx, esi
// 0077293a  e88188f3ff           call 0x6ab1c0
// 0077293f  85c0                 test eax, eax
// 00772941  7416                 je 0x772959
// 00772943  8b442410             mov eax, dword ptr [esp + 0x10]
// 00772947  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077294b  8b542408             mov edx, dword ptr [esp + 8]
// 0077294f  50                   push eax
// 00772950  51                   push ecx
// 00772951  52                   push edx
// 00772952  8bce                 mov ecx, esi
// 00772954  e8a72efdff           call 0x745800
// 00772959  5e                   pop esi
// 0077295a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
