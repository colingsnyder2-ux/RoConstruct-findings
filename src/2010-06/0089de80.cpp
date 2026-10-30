// roc 2010-06 0089de80  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089de80
//
// 0089de80  56                   push esi
// 0089de81  8bf1                 mov esi, ecx
// 0089de83  e8e8e0ffff           call 0x89bf70
// 0089de88  e8935cf4ff           call 0x7e3b20
// 0089de8d  6a05                 push 5
// 0089de8f  8bc8                 mov ecx, eax
// 0089de91  e81a54f4ff           call 0x7e32b0
// 0089de96  894678               mov dword ptr [esi + 0x78], eax
// 0089de99  e8825cf4ff           call 0x7e3b20
// 0089de9e  6a08                 push 8
// 0089dea0  8bc8                 mov ecx, eax
// 0089dea2  e80954f4ff           call 0x7e32b0
// 0089dea7  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0089dead  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 0089deb7  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0089dec1  e85a5cf4ff           call 0x7e3b20
// 0089dec6  6a24                 push 0x24
// 0089dec8  8bc8                 mov ecx, eax
// 0089deca  e8e153f4ff           call 0x7e32b0
// 0089decf  898684000000         mov dword ptr [esi + 0x84], eax
// 0089ded5  e8465cf4ff           call 0x7e3b20
// 0089deda  6a21                 push 0x21
// 0089dedc  8bc8                 mov ecx, eax
// 0089dede  e8cd53f4ff           call 0x7e32b0
// 0089dee3  898690000000         mov dword ptr [esi + 0x90], eax
// 0089dee9  e8325cf4ff           call 0x7e3b20
// 0089deee  6a12                 push 0x12
// 0089def0  8bc8                 mov ecx, eax
// 0089def2  e8b953f4ff           call 0x7e32b0
// 0089def7  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0089defd  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0089df03  e8786afeff           call 0x884980
// 0089df08  85c0                 test eax, eax
// 0089df0a  7508                 jne 0x89df14
// 0089df0c  8bce                 mov ecx, esi
// 0089df0e  5e                   pop esi
// 0089df0f  e90cecffff           jmp 0x89cb20
// 0089df14  e8075cf4ff           call 0x7e3b20
// 0089df19  8bc8                 mov ecx, eax
// 0089df1b  e8b059f4ff           call 0x7e38d0
// 0089df20  85c0                 test eax, eax
// 0089df22  7e32                 jle 0x89df56
// 0089df24  83f802               cmp eax, 2
// 0089df27  7e16                 jle 0x89df3f
// 0089df29  83f803               cmp eax, 3
// 0089df2c  7528                 jne 0x89df56
// 0089df2e  c7869c000000f5f5f800 mov dword ptr [esi + 0x9c], 0xf8f5f5
// 0089df38  68eeeeee00           push 0xeeeeee
// 0089df3d  eb05                 jmp 0x89df44
// 0089df3f  68e4e2d500           push 0xd5e2e4
// 0089df44  8d4e04               lea ecx, [esi + 4]
// 0089df47  e8245bf4ff           call 0x7e3a70
// 0089df4c  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 0089df56  e8c55bf4ff           call 0x7e3b20
// 0089df5b  6a39                 push 0x39
// 0089df5d  8bc8                 mov ecx, eax
// 0089df5f  e84c53f4ff           call 0x7e32b0
// 0089df64  898654010000         mov dword ptr [esi + 0x154], eax
// 0089df6a  e8b15bf4ff           call 0x7e3b20
// 0089df6f  6a39                 push 0x39
// 0089df71  8bc8                 mov ecx, eax
// 0089df73  e83853f4ff           call 0x7e32b0
// 0089df78  894648               mov dword ptr [esi + 0x48], eax
// 0089df7b  5e                   pop esi
// 0089df7c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp