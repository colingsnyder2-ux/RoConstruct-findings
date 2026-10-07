// roc 2008-06 007626c0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007626c0
//
// 007626c0  53                   push ebx
// 007626c1  55                   push ebp
// 007626c2  56                   push esi
// 007626c3  57                   push edi
// 007626c4  8bf1                 mov esi, ecx
// 007626c6  e805990300           call 0x79bfd0
// 007626cb  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 007626d2  8b3d582b8000         mov edi, dword ptr [0x802b58]
// 007626d8  740b                 je 0x7626e5
// 007626da  6a05                 push 5
// 007626dc  ffd7                 call edi
// 007626de  894678               mov dword ptr [esi + 0x78], eax
// 007626e1  6a08                 push 8
// 007626e3  eb02                 jmp 0x7626e7
// 007626e5  6a15                 push 0x15
// 007626e7  ffd7                 call edi
// 007626e9  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 007626ef  e84cd6f7ff           call 0x6dfd40
// 007626f4  d905ac9b8100         fld dword ptr [0x819bac]
// 007626fa  51                   push ecx
// 007626fb  d91c24               fstp dword ptr [esp]
// 007626fe  68cd000000           push 0xcd
// 00762703  6a05                 push 5
// 00762705  8be8                 mov ebp, eax
// 00762707  8d5e04               lea ebx, [esi + 4]
// 0076270a  ffd7                 call edi
// 0076270c  50                   push eax
// 0076270d  6a0f                 push 0xf
// 0076270f  ffd7                 call edi
// 00762711  50                   push eax
// 00762712  8bcd                 mov ecx, ebp
// 00762714  e857cdf7ff           call 0x6df470
// 00762719  50                   push eax
// 0076271a  6a0f                 push 0xf
// 0076271c  ffd7                 call edi
// 0076271e  50                   push eax
// 0076271f  8bcb                 mov ecx, ebx
// 00762721  e85acbf7ff           call 0x6df280
// 00762726  6a15                 push 0x15
// 00762728  ffd7                 call edi
// 0076272a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00762730  33c0                 xor eax, eax
// 00762732  898618020000         mov dword ptr [esi + 0x218], eax
// 00762738  898614020000         mov dword ptr [esi + 0x214], eax
// 0076273e  e8fdd5f7ff           call 0x6dfd40
// 00762743  8bc8                 mov ecx, eax
// 00762745  e8f6d3f7ff           call 0x6dfb40
// 0076274a  b901000000           mov ecx, 1
// 0076274f  2bc1                 sub eax, ecx
// 00762751  7443                 je 0x762796
// 00762753  2bc1                 sub eax, ecx
// 00762755  743f                 je 0x762796
// 00762757  2bc1                 sub eax, ecx
// 00762759  7566                 jne 0x7627c1
// 0076275b  d905ac9b8100         fld dword ptr [0x819bac]
// 00762761  51                   push ecx
// 00762762  d91c24               fstp dword ptr [esp]
// 00762765  b8919b9c00           mov eax, 0x9c9b91
// 0076276a  68f3f3f700           push 0xf7f3f3
// 0076276f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 00762779  898648010000         mov dword ptr [esi + 0x148], eax
// 0076277f  898654010000         mov dword ptr [esi + 0x154], eax
// 00762785  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 0076278f  68d7d7e500           push 0xe5d7d7
// 00762794  eb14                 jmp 0x7627aa
// 00762796  d905ac9b8100         fld dword ptr [0x819bac]
// 0076279c  51                   push ecx
// 0076279d  d91c24               fstp dword ptr [esp]
// 007627a0  68f4f1e700           push 0xe7f1f4
// 007627a5  68e5e5d700           push 0xd7e5e5
// 007627aa  898e18020000         mov dword ptr [esi + 0x218], ecx
// 007627b0  8bcb                 mov ecx, ebx
// 007627b2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 007627bc  e8bfcaf7ff           call 0x6df280
// 007627c1  53                   push ebx
// 007627c2  8d4e24               lea ecx, [esi + 0x24]
// 007627c5  e8d6caf7ff           call 0x6df2a0
// 007627ca  5f                   pop edi
// 007627cb  5e                   pop esi
// 007627cc  5d                   pop ebp
// 007627cd  5b                   pop ebx
// 007627ce  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
