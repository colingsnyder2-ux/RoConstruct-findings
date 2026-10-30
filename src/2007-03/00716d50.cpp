// roc 2007-03 00716d50  unit: seg_00710000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00716d50
//
// 00716d50  8b442408             mov eax, dword ptr [esp + 8]
// 00716d54  56                   push esi
// 00716d55  57                   push edi
// 00716d56  8bf1                 mov esi, ecx
// 00716d58  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00716d5c  50                   push eax
// 00716d5d  51                   push ecx
// 00716d5e  8bce                 mov ecx, esi
// 00716d60  e8bb790000           call 0x71e720
// 00716d65  8b5620               mov edx, dword ptr [esi + 0x20]
// 00716d68  6a00                 push 0
// 00716d6a  6a00                 push 0
// 00716d6c  52                   push edx
// 00716d6d  8bf8                 mov edi, eax
// 00716d6f  ff1554ee7700         call dword ptr [0x77ee54]
// 00716d75  8bc7                 mov eax, edi
// 00716d77  5f                   pop edi
// 00716d78  5e                   pop esi
// 00716d79  c20800               ret 8
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectButton.cpp (function ?OnSetText@CXTPSkinObjectButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectButton.cpp
