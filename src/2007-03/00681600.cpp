// roc 2007-03 00681600  unit: seg_00680000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00681600
//
// 00681600  56                   push esi
// 00681601  57                   push edi
// 00681602  ff1584d27700         call dword ptr [0x77d284]
// 00681608  68300a6800           push 0x680a30
// 0068160d  b9a41e8c00           mov ecx, 0x8c1ea4
// 00681612  8bf8                 mov edi, eax
// 00681614  e88b940b00           call 0x73aaa4
// 00681619  8bf0                 mov esi, eax
// 0068161b  85f6                 test esi, esi
// 0068161d  7505                 jne 0x681624
// 0068161f  e98acdf9ff           jmp 0x61e3ae
// 00681624  837e0400             cmp dword ptr [esi + 4], 0
// 00681628  7513                 jne 0x68163d
// 0068162a  57                   push edi
// 0068162b  6a00                 push 0
// 0068162d  68c0136800           push 0x6813c0
// 00681632  6a05                 push 5
// 00681634  ff15f0ee7700         call dword ptr [0x77eef0]
// 0068163a  894604               mov dword ptr [esi + 4], eax
// 0068163d  5f                   pop edi
// 0068163e  5e                   pop esi
// 0068163f  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManager.cpp (function ?EnableCurrentThread@CXTPSkinManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManager.cpp
