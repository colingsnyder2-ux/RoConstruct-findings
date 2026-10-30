// roc 2009-06 0080e570  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e570
//
// 0080e570  56                   push esi
// 0080e571  8bf1                 mov esi, ecx
// 0080e573  e8e8e0ffff           call 0x80c660
// 0080e578  e8a365f4ff           call 0x754b20
// 0080e57d  6a05                 push 5
// 0080e57f  8bc8                 mov ecx, eax
// 0080e581  e81a5df4ff           call 0x7542a0
// 0080e586  894678               mov dword ptr [esi + 0x78], eax
// 0080e589  e89265f4ff           call 0x754b20
// 0080e58e  6a08                 push 8
// 0080e590  8bc8                 mov ecx, eax
// 0080e592  e8095df4ff           call 0x7542a0
// 0080e597  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0080e59d  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0080e5a7  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0080e5b1  e86a65f4ff           call 0x754b20
// 0080e5b6  6a24                 push 0x24
// 0080e5b8  8bc8                 mov ecx, eax
// 0080e5ba  e8e15cf4ff           call 0x7542a0
// 0080e5bf  898684000000         mov dword ptr [esi + 0x84], eax
// 0080e5c5  e85665f4ff           call 0x754b20
// 0080e5ca  6a21                 push 0x21
// 0080e5cc  8bc8                 mov ecx, eax
// 0080e5ce  e8cd5cf4ff           call 0x7542a0
// 0080e5d3  898690000000         mov dword ptr [esi + 0x90], eax
// 0080e5d9  e84265f4ff           call 0x754b20
// 0080e5de  6a12                 push 0x12
// 0080e5e0  8bc8                 mov ecx, eax
// 0080e5e2  e8b95cf4ff           call 0x7542a0
// 0080e5e7  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0080e5ed  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0080e5f3  e8f875feff           call 0x7f5bf0
// 0080e5f8  85c0                 test eax, eax
// 0080e5fa  7508                 jne 0x80e604
// 0080e5fc  8bce                 mov ecx, esi
// 0080e5fe  5e                   pop esi
// 0080e5ff  e90cecffff           jmp 0x80d210
// 0080e604  e81765f4ff           call 0x754b20
// 0080e609  8bc8                 mov ecx, eax
// 0080e60b  e8c062f4ff           call 0x7548d0
// 0080e610  85c0                 test eax, eax
// 0080e612  7e32                 jle 0x80e646
// 0080e614  83f802               cmp eax, 2
// 0080e617  7e16                 jle 0x80e62f
// 0080e619  83f803               cmp eax, 3
// 0080e61c  7528                 jne 0x80e646
// 0080e61e  c7869c000000f5f5f800 mov dword ptr [esi + 0x9c], 0xf8f5f5
// 0080e628  68eeeeee00           push 0xeeeeee
// 0080e62d  eb05                 jmp 0x80e634
// 0080e62f  68e4e2d500           push 0xd5e2e4
// 0080e634  8d4e04               lea ecx, [esi + 4]
// 0080e637  e83464f4ff           call 0x754a70
// 0080e63c  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 0080e646  e8d564f4ff           call 0x754b20
// 0080e64b  6a39                 push 0x39
// 0080e64d  8bc8                 mov ecx, eax
// 0080e64f  e84c5cf4ff           call 0x7542a0
// 0080e654  898654010000         mov dword ptr [esi + 0x154], eax
// 0080e65a  e8c164f4ff           call 0x754b20
// 0080e65f  6a39                 push 0x39
// 0080e661  8bc8                 mov ecx, eax
// 0080e663  e8385cf4ff           call 0x7542a0
// 0080e668  894648               mov dword ptr [esi + 0x48], eax
// 0080e66b  5e                   pop esi
// 0080e66c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp