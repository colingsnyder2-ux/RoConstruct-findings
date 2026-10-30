// roc 2007-03 0070e0f0  unit: seg_00700000  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070e0f0
//
// 0070e0f0  56                   push esi
// 0070e0f1  8bf1                 mov esi, ecx
// 0070e0f3  e818e2ffff           call 0x70c310
// 0070e0f8  e8a36ef4ff           call 0x654fa0
// 0070e0fd  6a05                 push 5
// 0070e0ff  8bc8                 mov ecx, eax
// 0070e101  e8aa66f4ff           call 0x6547b0
// 0070e106  894678               mov dword ptr [esi + 0x78], eax
// 0070e109  e8926ef4ff           call 0x654fa0
// 0070e10e  6a08                 push 8
// 0070e110  8bc8                 mov ecx, eax
// 0070e112  e89966f4ff           call 0x6547b0
// 0070e117  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0070e11d  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0070e127  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0070e131  e86a6ef4ff           call 0x654fa0
// 0070e136  6a24                 push 0x24
// 0070e138  8bc8                 mov ecx, eax
// 0070e13a  e87166f4ff           call 0x6547b0
// 0070e13f  898684000000         mov dword ptr [esi + 0x84], eax
// 0070e145  e8566ef4ff           call 0x654fa0
// 0070e14a  6a21                 push 0x21
// 0070e14c  8bc8                 mov ecx, eax
// 0070e14e  e85d66f4ff           call 0x6547b0
// 0070e153  898690000000         mov dword ptr [esi + 0x90], eax
// 0070e159  e8426ef4ff           call 0x654fa0
// 0070e15e  6a12                 push 0x12
// 0070e160  8bc8                 mov ecx, eax
// 0070e162  e84966f4ff           call 0x6547b0
// 0070e167  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0070e16d  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0070e173  e8489afdff           call 0x6e7bc0
// 0070e178  85c0                 test eax, eax
// 0070e17a  7508                 jne 0x70e184
// 0070e17c  8bce                 mov ecx, esi
// 0070e17e  5e                   pop esi
// 0070e17f  e90cedffff           jmp 0x70ce90
// 0070e184  e8176ef4ff           call 0x654fa0
// 0070e189  8bc8                 mov ecx, eax
// 0070e18b  e8e06bf4ff           call 0x654d70
// 0070e190  85c0                 test eax, eax
// 0070e192  7e32                 jle 0x70e1c6
// 0070e194  83f802               cmp eax, 2
// 0070e197  7e16                 jle 0x70e1af
// 0070e199  83f803               cmp eax, 3
// 0070e19c  7528                 jne 0x70e1c6
// 0070e19e  c7869c000000f5f5f800 mov dword ptr [esi + 0x9c], 0xf8f5f5
// 0070e1a8  68eeeeee00           push 0xeeeeee
// 0070e1ad  eb05                 jmp 0x70e1b4
// 0070e1af  68e4e2d500           push 0xd5e2e4
// 0070e1b4  8d4e04               lea ecx, [esi + 4]
// 0070e1b7  e8546df4ff           call 0x654f10
// 0070e1bc  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 0070e1c6  e8d56df4ff           call 0x654fa0
// 0070e1cb  6a39                 push 0x39
// 0070e1cd  8bc8                 mov ecx, eax
// 0070e1cf  e8dc65f4ff           call 0x6547b0
// 0070e1d4  898654010000         mov dword ptr [esi + 0x154], eax
// 0070e1da  e8c16df4ff           call 0x654fa0
// 0070e1df  6a39                 push 0x39
// 0070e1e1  8bc8                 mov ecx, eax
// 0070e1e3  e8c865f4ff           call 0x6547b0
// 0070e1e8  894648               mov dword ptr [esi + 0x48], eax
// 0070e1eb  5e                   pop esi
// 0070e1ec  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp