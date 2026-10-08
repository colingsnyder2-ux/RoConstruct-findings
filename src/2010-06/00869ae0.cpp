// roc 2010-06 00869ae0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00869ae0
//
// 00869ae0  53                   push ebx
// 00869ae1  55                   push ebp
// 00869ae2  56                   push esi
// 00869ae3  57                   push edi
// 00869ae4  8bf1                 mov esi, ecx
// 00869ae6  e885240300           call 0x89bf70
// 00869aeb  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 00869af2  8b3d04ba9e00         mov edi, dword ptr [0x9eba04]
// 00869af8  740b                 je 0x869b05
// 00869afa  6a05                 push 5
// 00869afc  ffd7                 call edi
// 00869afe  894678               mov dword ptr [esi + 0x78], eax
// 00869b01  6a08                 push 8
// 00869b03  eb02                 jmp 0x869b07
// 00869b05  6a15                 push 0x15
// 00869b07  ffd7                 call edi
// 00869b09  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00869b0f  e80ca0f7ff           call 0x7e3b20
// 00869b14  d905e026a100         fld dword ptr [0xa126e0]
// 00869b1a  51                   push ecx
// 00869b1b  d91c24               fstp dword ptr [esp]
// 00869b1e  68cd000000           push 0xcd
// 00869b23  6a05                 push 5
// 00869b25  8be8                 mov ebp, eax
// 00869b27  8d5e04               lea ebx, [esi + 4]
// 00869b2a  ffd7                 call edi
// 00869b2c  50                   push eax
// 00869b2d  6a0f                 push 0xf
// 00869b2f  ffd7                 call edi
// 00869b31  50                   push eax
// 00869b32  8bcd                 mov ecx, ebp
// 00869b34  e8c796f7ff           call 0x7e3200
// 00869b39  50                   push eax
// 00869b3a  6a0f                 push 0xf
// 00869b3c  ffd7                 call edi
// 00869b3e  50                   push eax
// 00869b3f  8bcb                 mov ecx, ebx
// 00869b41  e8ca94f7ff           call 0x7e3010
// 00869b46  6a15                 push 0x15
// 00869b48  ffd7                 call edi
// 00869b4a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00869b50  33c0                 xor eax, eax
// 00869b52  898618020000         mov dword ptr [esi + 0x218], eax
// 00869b58  898614020000         mov dword ptr [esi + 0x214], eax
// 00869b5e  e8bd9ff7ff           call 0x7e3b20
// 00869b63  8bc8                 mov ecx, eax
// 00869b65  e8669df7ff           call 0x7e38d0
// 00869b6a  b901000000           mov ecx, 1
// 00869b6f  2bc1                 sub eax, ecx
// 00869b71  7443                 je 0x869bb6
// 00869b73  2bc1                 sub eax, ecx
// 00869b75  743f                 je 0x869bb6
// 00869b77  2bc1                 sub eax, ecx
// 00869b79  7566                 jne 0x869be1
// 00869b7b  d905e026a100         fld dword ptr [0xa126e0]
// 00869b81  51                   push ecx
// 00869b82  d91c24               fstp dword ptr [esp]
// 00869b85  b8919b9c00           mov eax, 0x9c9b91
// 00869b8a  68f3f3f700           push 0xf7f3f3
// 00869b8f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 00869b99  898648010000         mov dword ptr [esi + 0x148], eax
// 00869b9f  898654010000         mov dword ptr [esi + 0x154], eax
// 00869ba5  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 00869baf  68d7d7e500           push 0xe5d7d7
// 00869bb4  eb14                 jmp 0x869bca
// 00869bb6  d905e026a100         fld dword ptr [0xa126e0]
// 00869bbc  51                   push ecx
// 00869bbd  d91c24               fstp dword ptr [esp]
// 00869bc0  68f4f1e700           push 0xe7f1f4
// 00869bc5  68e5e5d700           push 0xd7e5e5
// 00869bca  898e18020000         mov dword ptr [esi + 0x218], ecx
// 00869bd0  8bcb                 mov ecx, ebx
// 00869bd2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 00869bdc  e82f94f7ff           call 0x7e3010
// 00869be1  53                   push ebx
// 00869be2  8d4e24               lea ecx, [esi + 0x24]
// 00869be5  e84694f7ff           call 0x7e3030
// 00869bea  5f                   pop edi
// 00869beb  5e                   pop esi
// 00869bec  5d                   pop ebp
// 00869bed  5b                   pop ebx
// 00869bee  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
