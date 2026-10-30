// roc 2011-06 008f69e0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f69e0
//
// 008f69e0  56                   push esi
// 008f69e1  8bf1                 mov esi, ecx
// 008f69e3  e8e8e0ffff           call 0x8f4ad0
// 008f69e8  e8f3e9f4ff           call 0x8453e0
// 008f69ed  6a05                 push 5
// 008f69ef  8bc8                 mov ecx, eax
// 008f69f1  e8bae1f4ff           call 0x844bb0
// 008f69f6  894678               mov dword ptr [esi + 0x78], eax
// 008f69f9  e8e2e9f4ff           call 0x8453e0
// 008f69fe  6a08                 push 8
// 008f6a00  8bc8                 mov ecx, eax
// 008f6a02  e8a9e1f4ff           call 0x844bb0
// 008f6a07  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008f6a0d  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 008f6a17  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 008f6a21  e8bae9f4ff           call 0x8453e0
// 008f6a26  6a24                 push 0x24
// 008f6a28  8bc8                 mov ecx, eax
// 008f6a2a  e881e1f4ff           call 0x844bb0
// 008f6a2f  898684000000         mov dword ptr [esi + 0x84], eax
// 008f6a35  e8a6e9f4ff           call 0x8453e0
// 008f6a3a  6a21                 push 0x21
// 008f6a3c  8bc8                 mov ecx, eax
// 008f6a3e  e86de1f4ff           call 0x844bb0
// 008f6a43  898690000000         mov dword ptr [esi + 0x90], eax
// 008f6a49  e892e9f4ff           call 0x8453e0
// 008f6a4e  6a12                 push 0x12
// 008f6a50  8bc8                 mov ecx, eax
// 008f6a52  e859e1f4ff           call 0x844bb0
// 008f6a57  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008f6a5d  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008f6a63  e828eefdff           call 0x8d5890
// 008f6a68  85c0                 test eax, eax
// 008f6a6a  7508                 jne 0x8f6a74
// 008f6a6c  8bce                 mov ecx, esi
// 008f6a6e  5e                   pop esi
// 008f6a6f  e90cecffff           jmp 0x8f5680
// 008f6a74  e867e9f4ff           call 0x8453e0
// 008f6a79  8bc8                 mov ecx, eax
// 008f6a7b  e860e7f4ff           call 0x8451e0
// 008f6a80  85c0                 test eax, eax
// 008f6a82  7e32                 jle 0x8f6ab6
// 008f6a84  83f802               cmp eax, 2
// 008f6a87  7e16                 jle 0x8f6a9f
// 008f6a89  83f803               cmp eax, 3
// 008f6a8c  7528                 jne 0x8f6ab6
// 008f6a8e  c7869c000000f5f5f800 mov dword ptr [esi + 0x9c], 0xf8f5f5
// 008f6a98  68eeeeee00           push 0xeeeeee
// 008f6a9d  eb05                 jmp 0x8f6aa4
// 008f6a9f  68e4e2d500           push 0xd5e2e4
// 008f6aa4  8d4e04               lea ecx, [esi + 4]
// 008f6aa7  e884e8f4ff           call 0x845330
// 008f6aac  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 008f6ab6  e825e9f4ff           call 0x8453e0
// 008f6abb  6a39                 push 0x39
// 008f6abd  8bc8                 mov ecx, eax
// 008f6abf  e8ece0f4ff           call 0x844bb0
// 008f6ac4  898654010000         mov dword ptr [esi + 0x154], eax
// 008f6aca  e811e9f4ff           call 0x8453e0
// 008f6acf  6a39                 push 0x39
// 008f6ad1  8bc8                 mov ecx, eax
// 008f6ad3  e8d8e0f4ff           call 0x844bb0
// 008f6ad8  894648               mov dword ptr [esi + 0x48], eax
// 008f6adb  5e                   pop esi
// 008f6adc  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp