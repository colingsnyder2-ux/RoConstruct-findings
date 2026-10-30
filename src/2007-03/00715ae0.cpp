// roc 2007-03 00715ae0  unit: seg_00710000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715ae0
//
// 00715ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00715ae4  83f826               cmp eax, 0x26
// 00715ae7  56                   push esi
// 00715ae8  8bf1                 mov esi, ecx
// 00715aea  740e                 je 0x715afa
// 00715aec  83f828               cmp eax, 0x28
// 00715aef  7409                 je 0x715afa
// 00715af1  e8dc8bf0ff           call 0x61e6d2
// 00715af6  5e                   pop esi
// 00715af7  c20800               ret 8
// 00715afa  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715afd  53                   push ebx
// 00715afe  57                   push edi
// 00715aff  8b3d50ee7700         mov edi, dword ptr [0x77ee50]
// 00715b05  6a00                 push 0
// 00715b07  6a00                 push 0
// 00715b09  6a0b                 push 0xb
// 00715b0b  50                   push eax
// 00715b0c  ffd7                 call edi
// 00715b0e  8bce                 mov ecx, esi
// 00715b10  e8bd8bf0ff           call 0x61e6d2
// 00715b15  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00715b18  51                   push ecx
// 00715b19  8bd8                 mov ebx, eax
// 00715b1b  ff1574ed7700         call dword ptr [0x77ed74]
// 00715b21  85c0                 test eax, eax
// 00715b23  741a                 je 0x715b3f
// 00715b25  8b5620               mov edx, dword ptr [esi + 0x20]
// 00715b28  6a00                 push 0
// 00715b2a  6a01                 push 1
// 00715b2c  6a0b                 push 0xb
// 00715b2e  52                   push edx
// 00715b2f  ffd7                 call edi
// 00715b31  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715b34  6a00                 push 0
// 00715b36  6a00                 push 0
// 00715b38  50                   push eax
// 00715b39  ff1554ee7700         call dword ptr [0x77ee54]
// 00715b3f  5f                   pop edi
// 00715b40  8bc3                 mov eax, ebx
// 00715b42  5b                   pop ebx
// 00715b43  5e                   pop esi
// 00715b44  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?OnKeyDown@CXTPSkinObjectMenu@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectMenu.cpp
