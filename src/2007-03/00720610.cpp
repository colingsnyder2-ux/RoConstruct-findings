// roc 2007-03 00720610  unit: seg_00720000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00720610
//
// 00720610  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00720614  56                   push esi
// 00720615  8bf1                 mov esi, ecx
// 00720617  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072061b  50                   push eax
// 0072061c  51                   push ecx
// 0072061d  8bce                 mov ecx, esi
// 0072061f  e8bcfeffff           call 0x7204e0
// 00720624  85c0                 test eax, eax
// 00720626  7507                 jne 0x72062f
// 00720628  8bce                 mov ecx, esi
// 0072062a  e8a3e0efff           call 0x61e6d2
// 0072062f  5e                   pop esi
// 00720630  c20c00               ret 0xc
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?OnNcMouseMove@CXTPSkinObjectFrame@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectFrame.cpp
