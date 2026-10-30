// roc 2007-03 0071e610  unit: seg_00710000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071e610
//
// 0071e610  56                   push esi
// 0071e611  6a37                 push 0x37
// 0071e613  ff15bced7700         call dword ptr [0x77edbc]
// 0071e619  8bf0                 mov esi, eax
// 0071e61b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071e61f  50                   push eax
// 0071e620  ff152ced7700         call dword ptr [0x77ed2c]
// 0071e626  85c0                 test eax, eax
// 0071e628  7502                 jne 0x71e62c
// 0071e62a  5e                   pop esi
// 0071e62b  c3                   ret 
// 0071e62c  8d4601               lea eax, [esi + 1]
// 0071e62f  5e                   pop esi
// 0071e630  c3                   ret 
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?CalcMenuBarHeight@@YAHPAUHWND__@@PAUHMENU__@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectFrame.cpp
