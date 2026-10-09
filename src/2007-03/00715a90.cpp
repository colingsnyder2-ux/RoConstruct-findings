// roc 2007-03 00715a90  unit: seg_00710000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715a90
//
// 00715a90  53                   push ebx
// 00715a91  56                   push esi
// 00715a92  57                   push edi
// 00715a93  8b3d50ee7700         mov edi, dword ptr [0x77ee50]
// 00715a99  6a00                 push 0
// 00715a9b  6a00                 push 0
// 00715a9d  8bf1                 mov esi, ecx
// 00715a9f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715aa2  6a0b                 push 0xb
// 00715aa4  50                   push eax
// 00715aa5  ffd7                 call edi
// 00715aa7  8bce                 mov ecx, esi
// 00715aa9  e8248cf0ff           call 0x61e6d2
// 00715aae  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715ab1  6a00                 push 0
// 00715ab3  6a01                 push 1
// 00715ab5  6a0b                 push 0xb
// 00715ab7  51                   push ecx
// 00715ab8  8bd8                 mov ebx, eax
// 00715aba  ffd7                 call edi
// 00715abc  8b5620               mov edx, dword ptr [esi + 0x20]
// 00715abf  6a00                 push 0
// 00715ac1  6a00                 push 0
// 00715ac3  52                   push edx
// 00715ac4  ff1554ee7700         call dword ptr [0x77ee54]
// 00715aca  5f                   pop edi
// 00715acb  5e                   pop esi
// 00715acc  8bc3                 mov eax, ebx
// 00715ace  5b                   pop ebx
// 00715acf  c20800               ret 8
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?OnSelectItem@CXTPSkinObjectMenu@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectMenu.cpp
