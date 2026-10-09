// roc 2007-03 006819f0  unit: seg_00680000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006819f0
//
// 006819f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006819f4  8b542404             mov edx, dword ptr [esp + 4]
// 006819f8  56                   push esi
// 006819f9  8bf1                 mov esi, ecx
// 006819fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006819ff  50                   push eax
// 00681a00  51                   push ecx
// 00681a01  52                   push edx
// 00681a02  6a04                 push 4
// 00681a04  8bce                 mov ecx, esi
// 00681a06  e845feffff           call 0x681850
// 00681a0b  85c0                 test eax, eax
// 00681a0d  7508                 jne 0x681a17
// 00681a0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00681a13  5e                   pop esi
// 00681a14  c21000               ret 0x10
// 00681a17  8b4008               mov eax, dword ptr [eax + 8]
// 00681a1a  8d4c2410             lea ecx, [esp + 0x10]
// 00681a1e  51                   push ecx
// 00681a1f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00681a22  89442414             mov dword ptr [esp + 0x14], eax
// 00681a26  e8d5f1ffff           call 0x680c00
// 00681a2b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00681a2f  5e                   pop esi
// 00681a30  c21000               ret 0x10
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ?GetThemeColor@CXTPSkinManagerClass@@QAEKHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
