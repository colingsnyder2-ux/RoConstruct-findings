// roc 2009-12 008b59f0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b59f0
//
// 008b59f0  53                   push ebx
// 008b59f1  55                   push ebp
// 008b59f2  56                   push esi
// 008b59f3  57                   push edi
// 008b59f4  8bf1                 mov esi, ecx
// 008b59f6  e855170300           call 0x8e7150
// 008b59fb  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 008b5a02  8b3dd8ca9800         mov edi, dword ptr [0x98cad8]
// 008b5a08  740b                 je 0x8b5a15
// 008b5a0a  6a05                 push 5
// 008b5a0c  ffd7                 call edi
// 008b5a0e  894678               mov dword ptr [esi + 0x78], eax
// 008b5a11  6a08                 push 8
// 008b5a13  eb02                 jmp 0x8b5a17
// 008b5a15  6a15                 push 0x15
// 008b5a17  ffd7                 call edi
// 008b5a19  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008b5a1f  e8ac9ff7ff           call 0x82f9d0
// 008b5a24  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008b5a2a  51                   push ecx
// 008b5a2b  d91c24               fstp dword ptr [esp]
// 008b5a2e  68cd000000           push 0xcd
// 008b5a33  6a05                 push 5
// 008b5a35  8be8                 mov ebp, eax
// 008b5a37  8d5e04               lea ebx, [esi + 4]
// 008b5a3a  ffd7                 call edi
// 008b5a3c  50                   push eax
// 008b5a3d  6a0f                 push 0xf
// 008b5a3f  ffd7                 call edi
// 008b5a41  50                   push eax
// 008b5a42  8bcd                 mov ecx, ebp
// 008b5a44  e80796f7ff           call 0x82f050
// 008b5a49  50                   push eax
// 008b5a4a  6a0f                 push 0xf
// 008b5a4c  ffd7                 call edi
// 008b5a4e  50                   push eax
// 008b5a4f  8bcb                 mov ecx, ebx
// 008b5a51  e80a94f7ff           call 0x82ee60
// 008b5a56  6a15                 push 0x15
// 008b5a58  ffd7                 call edi
// 008b5a5a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008b5a60  33c0                 xor eax, eax
// 008b5a62  898618020000         mov dword ptr [esi + 0x218], eax
// 008b5a68  898614020000         mov dword ptr [esi + 0x214], eax
// 008b5a6e  e85d9ff7ff           call 0x82f9d0
// 008b5a73  8bc8                 mov ecx, eax
// 008b5a75  e8b69cf7ff           call 0x82f730
// 008b5a7a  b901000000           mov ecx, 1
// 008b5a7f  2bc1                 sub eax, ecx
// 008b5a81  7443                 je 0x8b5ac6
// 008b5a83  2bc1                 sub eax, ecx
// 008b5a85  743f                 je 0x8b5ac6
// 008b5a87  2bc1                 sub eax, ecx
// 008b5a89  7566                 jne 0x8b5af1
// 008b5a8b  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008b5a91  51                   push ecx
// 008b5a92  d91c24               fstp dword ptr [esp]
// 008b5a95  b8919b9c00           mov eax, 0x9c9b91
// 008b5a9a  68f3f3f700           push 0xf7f3f3
// 008b5a9f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 008b5aa9  898648010000         mov dword ptr [esi + 0x148], eax
// 008b5aaf  898654010000         mov dword ptr [esi + 0x154], eax
// 008b5ab5  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 008b5abf  68d7d7e500           push 0xe5d7d7
// 008b5ac4  eb14                 jmp 0x8b5ada
// 008b5ac6  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008b5acc  51                   push ecx
// 008b5acd  d91c24               fstp dword ptr [esp]
// 008b5ad0  68f4f1e700           push 0xe7f1f4
// 008b5ad5  68e5e5d700           push 0xd7e5e5
// 008b5ada  898e18020000         mov dword ptr [esi + 0x218], ecx
// 008b5ae0  8bcb                 mov ecx, ebx
// 008b5ae2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008b5aec  e86f93f7ff           call 0x82ee60
// 008b5af1  53                   push ebx
// 008b5af2  8d4e24               lea ecx, [esi + 0x24]
// 008b5af5  e88693f7ff           call 0x82ee80
// 008b5afa  5f                   pop edi
// 008b5afb  5e                   pop esi
// 008b5afc  5d                   pop ebp
// 008b5afd  5b                   pop ebx
// 008b5afe  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
