// roc 2011-06 008c6f80  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6f80
//
// 008c6f80  53                   push ebx
// 008c6f81  55                   push ebp
// 008c6f82  56                   push esi
// 008c6f83  57                   push edi
// 008c6f84  8bf1                 mov esi, ecx
// 008c6f86  e845db0200           call 0x8f4ad0
// 008c6f8b  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 008c6f92  8b3d181ba400         mov edi, dword ptr [0xa41b18]
// 008c6f98  740b                 je 0x8c6fa5
// 008c6f9a  6a05                 push 5
// 008c6f9c  ffd7                 call edi
// 008c6f9e  894678               mov dword ptr [esi + 0x78], eax
// 008c6fa1  6a08                 push 8
// 008c6fa3  eb02                 jmp 0x8c6fa7
// 008c6fa5  6a15                 push 0x15
// 008c6fa7  ffd7                 call edi
// 008c6fa9  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008c6faf  e82ce4f7ff           call 0x8453e0
// 008c6fb4  d905685ba700         fld dword ptr [0xa75b68]
// 008c6fba  51                   push ecx
// 008c6fbb  d91c24               fstp dword ptr [esp]
// 008c6fbe  68cd000000           push 0xcd
// 008c6fc3  6a05                 push 5
// 008c6fc5  8be8                 mov ebp, eax
// 008c6fc7  8d5e04               lea ebx, [esi + 4]
// 008c6fca  ffd7                 call edi
// 008c6fcc  50                   push eax
// 008c6fcd  6a0f                 push 0xf
// 008c6fcf  ffd7                 call edi
// 008c6fd1  50                   push eax
// 008c6fd2  8bcd                 mov ecx, ebp
// 008c6fd4  e827dbf7ff           call 0x844b00
// 008c6fd9  50                   push eax
// 008c6fda  6a0f                 push 0xf
// 008c6fdc  ffd7                 call edi
// 008c6fde  50                   push eax
// 008c6fdf  8bcb                 mov ecx, ebx
// 008c6fe1  e82ad9f7ff           call 0x844910
// 008c6fe6  6a15                 push 0x15
// 008c6fe8  ffd7                 call edi
// 008c6fea  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008c6ff0  33c0                 xor eax, eax
// 008c6ff2  898618020000         mov dword ptr [esi + 0x218], eax
// 008c6ff8  898614020000         mov dword ptr [esi + 0x214], eax
// 008c6ffe  e8dde3f7ff           call 0x8453e0
// 008c7003  8bc8                 mov ecx, eax
// 008c7005  e8d6e1f7ff           call 0x8451e0
// 008c700a  b901000000           mov ecx, 1
// 008c700f  2bc1                 sub eax, ecx
// 008c7011  7443                 je 0x8c7056
// 008c7013  2bc1                 sub eax, ecx
// 008c7015  743f                 je 0x8c7056
// 008c7017  2bc1                 sub eax, ecx
// 008c7019  7566                 jne 0x8c7081
// 008c701b  d905685ba700         fld dword ptr [0xa75b68]
// 008c7021  51                   push ecx
// 008c7022  d91c24               fstp dword ptr [esp]
// 008c7025  b8919b9c00           mov eax, 0x9c9b91
// 008c702a  68f3f3f700           push 0xf7f3f3
// 008c702f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 008c7039  898648010000         mov dword ptr [esi + 0x148], eax
// 008c703f  898654010000         mov dword ptr [esi + 0x154], eax
// 008c7045  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 008c704f  68d7d7e500           push 0xe5d7d7
// 008c7054  eb14                 jmp 0x8c706a
// 008c7056  d905685ba700         fld dword ptr [0xa75b68]
// 008c705c  51                   push ecx
// 008c705d  d91c24               fstp dword ptr [esp]
// 008c7060  68f4f1e700           push 0xe7f1f4
// 008c7065  68e5e5d700           push 0xd7e5e5
// 008c706a  898e18020000         mov dword ptr [esi + 0x218], ecx
// 008c7070  8bcb                 mov ecx, ebx
// 008c7072  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008c707c  e88fd8f7ff           call 0x844910
// 008c7081  53                   push ebx
// 008c7082  8d4e24               lea ecx, [esi + 0x24]
// 008c7085  e8a6d8f7ff           call 0x844930
// 008c708a  5f                   pop edi
// 008c708b  5e                   pop esi
// 008c708c  5d                   pop ebp
// 008c708d  5b                   pop ebx
// 008c708e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
