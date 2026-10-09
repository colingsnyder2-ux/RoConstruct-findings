// roc 2007-03 006ce440  unit: seg_006c0000  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce440
//
// 006ce440  53                   push ebx
// 006ce441  55                   push ebp
// 006ce442  56                   push esi
// 006ce443  57                   push edi
// 006ce444  8bf1                 mov esi, ecx
// 006ce446  e8c5de0300           call 0x70c310
// 006ce44b  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 006ce452  8b3d38ef7700         mov edi, dword ptr [0x77ef38]
// 006ce458  740b                 je 0x6ce465
// 006ce45a  6a05                 push 5
// 006ce45c  ffd7                 call edi
// 006ce45e  894678               mov dword ptr [esi + 0x78], eax
// 006ce461  6a08                 push 8
// 006ce463  eb02                 jmp 0x6ce467
// 006ce465  6a15                 push 0x15
// 006ce467  ffd7                 call edi
// 006ce469  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006ce46f  e82c6bf8ff           call 0x654fa0
// 006ce474  d9058c727900         fld dword ptr [0x79728c]
// 006ce47a  51                   push ecx
// 006ce47b  d91c24               fstp dword ptr [esp]
// 006ce47e  68cd000000           push 0xcd
// 006ce483  6a05                 push 5
// 006ce485  8be8                 mov ebp, eax
// 006ce487  8d5e04               lea ebx, [esi + 4]
// 006ce48a  ffd7                 call edi
// 006ce48c  50                   push eax
// 006ce48d  6a0f                 push 0xf
// 006ce48f  ffd7                 call edi
// 006ce491  50                   push eax
// 006ce492  8bcd                 mov ecx, ebp
// 006ce494  e87762f8ff           call 0x654710
// 006ce499  50                   push eax
// 006ce49a  6a0f                 push 0xf
// 006ce49c  ffd7                 call edi
// 006ce49e  50                   push eax
// 006ce49f  8bcb                 mov ecx, ebx
// 006ce4a1  e88a60f8ff           call 0x654530
// 006ce4a6  6a15                 push 0x15
// 006ce4a8  ffd7                 call edi
// 006ce4aa  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006ce4b0  33c0                 xor eax, eax
// 006ce4b2  898618020000         mov dword ptr [esi + 0x218], eax
// 006ce4b8  898614020000         mov dword ptr [esi + 0x214], eax
// 006ce4be  e8dd6af8ff           call 0x654fa0
// 006ce4c3  8bc8                 mov ecx, eax
// 006ce4c5  e8a668f8ff           call 0x654d70
// 006ce4ca  b901000000           mov ecx, 1
// 006ce4cf  2bc1                 sub eax, ecx
// 006ce4d1  7443                 je 0x6ce516
// 006ce4d3  2bc1                 sub eax, ecx
// 006ce4d5  743f                 je 0x6ce516
// 006ce4d7  2bc1                 sub eax, ecx
// 006ce4d9  7566                 jne 0x6ce541
// 006ce4db  d9058c727900         fld dword ptr [0x79728c]
// 006ce4e1  51                   push ecx
// 006ce4e2  d91c24               fstp dword ptr [esp]
// 006ce4e5  b8919b9c00           mov eax, 0x9c9b91
// 006ce4ea  68f3f3f700           push 0xf7f3f3
// 006ce4ef  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 006ce4f9  898648010000         mov dword ptr [esi + 0x148], eax
// 006ce4ff  898654010000         mov dword ptr [esi + 0x154], eax
// 006ce505  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 006ce50f  68d7d7e500           push 0xe5d7d7
// 006ce514  eb14                 jmp 0x6ce52a
// 006ce516  d9058c727900         fld dword ptr [0x79728c]
// 006ce51c  51                   push ecx
// 006ce51d  d91c24               fstp dword ptr [esp]
// 006ce520  68f4f1e700           push 0xe7f1f4
// 006ce525  68e5e5d700           push 0xd7e5e5
// 006ce52a  898e18020000         mov dword ptr [esi + 0x218], ecx
// 006ce530  8bcb                 mov ecx, ebx
// 006ce532  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 006ce53c  e8ef5ff8ff           call 0x654530
// 006ce541  53                   push ebx
// 006ce542  8d4e24               lea ecx, [esi + 0x24]
// 006ce545  e80660f8ff           call 0x654550
// 006ce54a  5f                   pop edi
// 006ce54b  5e                   pop esi
// 006ce54c  5d                   pop ebp
// 006ce54d  5b                   pop ebx
// 006ce54e  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
