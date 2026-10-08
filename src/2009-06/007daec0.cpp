// roc 2009-06 007daec0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007daec0
//
// 007daec0  53                   push ebx
// 007daec1  55                   push ebp
// 007daec2  56                   push esi
// 007daec3  57                   push edi
// 007daec4  8bf1                 mov esi, ecx
// 007daec6  e895170300           call 0x80c660
// 007daecb  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 007daed2  8b3de4ee8900         mov edi, dword ptr [0x89eee4]
// 007daed8  740b                 je 0x7daee5
// 007daeda  6a05                 push 5
// 007daedc  ffd7                 call edi
// 007daede  894678               mov dword ptr [esi + 0x78], eax
// 007daee1  6a08                 push 8
// 007daee3  eb02                 jmp 0x7daee7
// 007daee5  6a15                 push 0x15
// 007daee7  ffd7                 call edi
// 007daee9  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 007daeef  e82c9cf7ff           call 0x754b20
// 007daef4  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007daefa  51                   push ecx
// 007daefb  d91c24               fstp dword ptr [esp]
// 007daefe  68cd000000           push 0xcd
// 007daf03  6a05                 push 5
// 007daf05  8be8                 mov ebp, eax
// 007daf07  8d5e04               lea ebx, [esi + 4]
// 007daf0a  ffd7                 call edi
// 007daf0c  50                   push eax
// 007daf0d  6a0f                 push 0xf
// 007daf0f  ffd7                 call edi
// 007daf11  50                   push eax
// 007daf12  8bcd                 mov ecx, ebp
// 007daf14  e8d792f7ff           call 0x7541f0
// 007daf19  50                   push eax
// 007daf1a  6a0f                 push 0xf
// 007daf1c  ffd7                 call edi
// 007daf1e  50                   push eax
// 007daf1f  8bcb                 mov ecx, ebx
// 007daf21  e8da90f7ff           call 0x754000
// 007daf26  6a15                 push 0x15
// 007daf28  ffd7                 call edi
// 007daf2a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 007daf30  33c0                 xor eax, eax
// 007daf32  898618020000         mov dword ptr [esi + 0x218], eax
// 007daf38  898614020000         mov dword ptr [esi + 0x214], eax
// 007daf3e  e8dd9bf7ff           call 0x754b20
// 007daf43  8bc8                 mov ecx, eax
// 007daf45  e88699f7ff           call 0x7548d0
// 007daf4a  b901000000           mov ecx, 1
// 007daf4f  2bc1                 sub eax, ecx
// 007daf51  7443                 je 0x7daf96
// 007daf53  2bc1                 sub eax, ecx
// 007daf55  743f                 je 0x7daf96
// 007daf57  2bc1                 sub eax, ecx
// 007daf59  7566                 jne 0x7dafc1
// 007daf5b  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007daf61  51                   push ecx
// 007daf62  d91c24               fstp dword ptr [esp]
// 007daf65  b8919b9c00           mov eax, 0x9c9b91
// 007daf6a  68f3f3f700           push 0xf7f3f3
// 007daf6f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 007daf79  898648010000         mov dword ptr [esi + 0x148], eax
// 007daf7f  898654010000         mov dword ptr [esi + 0x154], eax
// 007daf85  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 007daf8f  68d7d7e500           push 0xe5d7d7
// 007daf94  eb14                 jmp 0x7dafaa
// 007daf96  d9054cad8b00         fld dword ptr [0x8bad4c]
// 007daf9c  51                   push ecx
// 007daf9d  d91c24               fstp dword ptr [esp]
// 007dafa0  68f4f1e700           push 0xe7f1f4
// 007dafa5  68e5e5d700           push 0xd7e5e5
// 007dafaa  898e18020000         mov dword ptr [esi + 0x218], ecx
// 007dafb0  8bcb                 mov ecx, ebx
// 007dafb2  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 007dafbc  e83f90f7ff           call 0x754000
// 007dafc1  53                   push ebx
// 007dafc2  8d4e24               lea ecx, [esi + 0x24]
// 007dafc5  e85690f7ff           call 0x754020
// 007dafca  5f                   pop edi
// 007dafcb  5e                   pop esi
// 007dafcc  5d                   pop ebp
// 007dafcd  5b                   pop ebx
// 007dafce  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
