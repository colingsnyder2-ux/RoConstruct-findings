// roc 2007-03 006f4a30  unit: seg_006f0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f4a30
//
// 006f4a30  817c240804800000     cmp dword ptr [esp + 8], 0x8004
// 006f4a38  755a                 jne 0x6f4a94
// 006f4a3a  837c241000           cmp dword ptr [esp + 0x10], 0
// 006f4a3f  7553                 jne 0x6f4a94
// 006f4a41  e88acdf8ff           call 0x6817d0
// 006f4a46  f6404002             test byte ptr [eax + 0x40], 2
// 006f4a4a  7448                 je 0x6f4a94
// 006f4a4c  e87fcdf8ff           call 0x6817d0
// 006f4a51  83780c00             cmp dword ptr [eax + 0xc], 0
// 006f4a55  743d                 je 0x6f4a94
// 006f4a57  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f4a5b  56                   push esi
// 006f4a5c  50                   push eax
// 006f4a5d  e86ecdf8ff           call 0x6817d0
// 006f4a62  8bc8                 mov ecx, eax
// 006f4a64  e827ffffff           call 0x6f4990
// 006f4a69  8bf0                 mov esi, eax
// 006f4a6b  85f6                 test esi, esi
// 006f4a6d  7424                 je 0x6f4a93
// 006f4a6f  8bce                 mov ecx, esi
// 006f4a71  e84e610400           call 0x73abc4
// 006f4a76  a90000f000           test eax, 0xf00000
// 006f4a7b  7416                 je 0x6f4a93
// 006f4a7d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f4a80  6a00                 push 0
// 006f4a82  68e8030000           push 0x3e8
// 006f4a87  68cd0a0000           push 0xacd
// 006f4a8c  51                   push ecx
// 006f4a8d  ff1544ed7700         call dword ptr [0x77ed44]
// 006f4a93  5e                   pop esi
// 006f4a94  c21c00               ret 0x1c
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObject.cpp (function ?WinEventProc@CXTPSkinManager@@KGXPAUHWINEVENTHOOK__@1@KPAUHWND__@@JJKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObject.cpp
