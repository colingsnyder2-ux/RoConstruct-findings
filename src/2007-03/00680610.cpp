// roc 2007-03 00680610  unit: seg_00680000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680610
//
// 00680610  56                   push esi
// 00680611  8d442408             lea eax, [esp + 8]
// 00680615  50                   push eax
// 00680616  8bf1                 mov esi, ecx
// 00680618  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068061c  51                   push ecx
// 0068061d  6a00                 push 0
// 0068061f  6a00                 push 0
// 00680621  68dce17c00           push 0x7ce1dc
// 00680626  e805710700           call 0x6f7730
// 0068062b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0068062e  83c404               add esp, 4
// 00680631  50                   push eax
// 00680632  e8a9f90700           call 0x6fffe0
// 00680637  8b442408             mov eax, dword ptr [esp + 8]
// 0068063b  5e                   pop esi
// 0068063c  c20400               ret 4
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ?GetThemeSysSize@CXTPSkinManager@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
