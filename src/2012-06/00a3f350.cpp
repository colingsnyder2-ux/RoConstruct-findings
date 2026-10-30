// roc 2012-06 00a3f350  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f350
//
// 00a3f350  53                   push ebx
// 00a3f351  55                   push ebp
// 00a3f352  56                   push esi
// 00a3f353  57                   push edi
// 00a3f354  8bf1                 mov esi, ecx
// 00a3f356  e8d5da0200           call 0xa6ce30
// 00a3f35b  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 00a3f362  8b3dd83cb200         mov edi, dword ptr [0xb23cd8]
// 00a3f368  740b                 je 0xa3f375
// 00a3f36a  6a05                 push 5
// 00a3f36c  ffd7                 call edi
// 00a3f36e  894678               mov dword ptr [esi + 0x78], eax
// 00a3f371  6a08                 push 8
// 00a3f373  eb02                 jmp 0xa3f377
// 00a3f375  6a15                 push 0x15
// 00a3f377  ffd7                 call edi
// 00a3f379  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a3f37f  e8dce4f7ff           call 0x9bd860
// 00a3f384  d9057027b600         fld dword ptr [0xb62770]
// 00a3f38a  51                   push ecx
// 00a3f38b  d91c24               fstp dword ptr [esp]
// 00a3f38e  68cd000000           push 0xcd
// 00a3f393  6a05                 push 5
// 00a3f395  8be8                 mov ebp, eax
// 00a3f397  8d5e04               lea ebx, [esi + 4]
// 00a3f39a  ffd7                 call edi
// 00a3f39c  50                   push eax
// 00a3f39d  6a0f                 push 0xf
// 00a3f39f  ffd7                 call edi
// 00a3f3a1  50                   push eax
// 00a3f3a2  8bcd                 mov ecx, ebp
// 00a3f3a4  e887dbf7ff           call 0x9bcf30
// 00a3f3a9  50                   push eax
// 00a3f3aa  6a0f                 push 0xf
// 00a3f3ac  ffd7                 call edi
// 00a3f3ae  50                   push eax
// 00a3f3af  8bcb                 mov ecx, ebx
// 00a3f3b1  e88ad9f7ff           call 0x9bcd40
// 00a3f3b6  6a15                 push 0x15
// 00a3f3b8  ffd7                 call edi
// 00a3f3ba  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a3f3c0  33c0                 xor eax, eax
// 00a3f3c2  898618020000         mov dword ptr [esi + 0x218], eax
// 00a3f3c8  898614020000         mov dword ptr [esi + 0x214], eax
// 00a3f3ce  e88de4f7ff           call 0x9bd860
// 00a3f3d3  8bc8                 mov ecx, eax
// 00a3f3d5  e836e2f7ff           call 0x9bd610
// 00a3f3da  b901000000           mov ecx, 1
// 00a3f3df  2bc1                 sub eax, ecx
// 00a3f3e1  7443                 je 0xa3f426
// 00a3f3e3  2bc1                 sub eax, ecx
// 00a3f3e5  743f                 je 0xa3f426
// 00a3f3e7  2bc1                 sub eax, ecx
// 00a3f3e9  7566                 jne 0xa3f451
// 00a3f3eb  d9057027b600         fld dword ptr [0xb62770]
// 00a3f3f1  51                   push ecx
// 00a3f3f2  d91c24               fstp dword ptr [esp]
// 00a3f3f5  b8919b9c00           mov eax, 0x9c9b91
// 00a3f3fa  68f3f3f700           push 0xf7f3f3
// 00a3f3ff  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 00a3f409  898648010000         mov dword ptr [esi + 0x148], eax
// 00a3f40f  898654010000         mov dword ptr [esi + 0x154], eax
// 00a3f415  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 00a3f41f  68d7d7e500           push 0xe5d7d7
// 00a3f424  eb14                 jmp 0xa3f43a
// 00a3f426  d9057027b600         fld dword ptr [0xb62770]
// 00a3f42c  51                   push ecx
// 00a3f42d  d91c24               fstp dword ptr [esp]
// 00a3f430  68f4f1e700           push 0xe7f1f4
// 00a3f435  68e5e5d700           push 0xd7e5e5
// 00a3f43a  898e18020000         mov dword ptr [esi + 0x218], ecx
// 00a3f440  8bcb                 mov ecx, ebx
// 00a3f442  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 00a3f44c  e8efd8f7ff           call 0x9bcd40
// 00a3f451  53                   push ebx
// 00a3f452  8d4e24               lea ecx, [esi + 0x24]
// 00a3f455  e806d9f7ff           call 0x9bcd60
// 00a3f45a  5f                   pop edi
// 00a3f45b  5e                   pop esi
// 00a3f45c  5d                   pop ebp
// 00a3f45d  5b                   pop ebx
// 00a3f45e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
