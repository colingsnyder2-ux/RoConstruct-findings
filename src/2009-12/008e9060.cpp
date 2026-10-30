// roc 2009-12 008e9060  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9060
//
// 008e9060  56                   push esi
// 008e9061  8bf1                 mov esi, ecx
// 008e9063  e8e8e0ffff           call 0x8e7150
// 008e9068  e86369f4ff           call 0x82f9d0
// 008e906d  6a05                 push 5
// 008e906f  8bc8                 mov ecx, eax
// 008e9071  e88a60f4ff           call 0x82f100
// 008e9076  894678               mov dword ptr [esi + 0x78], eax
// 008e9079  e85269f4ff           call 0x82f9d0
// 008e907e  6a08                 push 8
// 008e9080  8bc8                 mov ecx, eax
// 008e9082  e87960f4ff           call 0x82f100
// 008e9087  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008e908d  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 008e9097  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 008e90a1  e82a69f4ff           call 0x82f9d0
// 008e90a6  6a24                 push 0x24
// 008e90a8  8bc8                 mov ecx, eax
// 008e90aa  e85160f4ff           call 0x82f100
// 008e90af  898684000000         mov dword ptr [esi + 0x84], eax
// 008e90b5  e81669f4ff           call 0x82f9d0
// 008e90ba  6a21                 push 0x21
// 008e90bc  8bc8                 mov ecx, eax
// 008e90be  e83d60f4ff           call 0x82f100
// 008e90c3  898690000000         mov dword ptr [esi + 0x90], eax
// 008e90c9  e80269f4ff           call 0x82f9d0
// 008e90ce  6a12                 push 0x12
// 008e90d0  8bc8                 mov ecx, eax
// 008e90d2  e82960f4ff           call 0x82f100
// 008e90d7  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e90dd  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008e90e3  e8d876feff           call 0x8d07c0
// 008e90e8  85c0                 test eax, eax
// 008e90ea  7508                 jne 0x8e90f4
// 008e90ec  8bce                 mov ecx, esi
// 008e90ee  5e                   pop esi
// 008e90ef  e90cecffff           jmp 0x8e7d00
// 008e90f4  e8d768f4ff           call 0x82f9d0
// 008e90f9  8bc8                 mov ecx, eax
// 008e90fb  e83066f4ff           call 0x82f730
// 008e9100  85c0                 test eax, eax
// 008e9102  7e32                 jle 0x8e9136
// 008e9104  83f802               cmp eax, 2
// 008e9107  7e16                 jle 0x8e911f
// 008e9109  83f803               cmp eax, 3
// 008e910c  7528                 jne 0x8e9136
// 008e910e  c7869c000000f5f5f800 mov dword ptr [esi + 0x9c], 0xf8f5f5
// 008e9118  68eeeeee00           push 0xeeeeee
// 008e911d  eb05                 jmp 0x8e9124
// 008e911f  68e4e2d500           push 0xd5e2e4
// 008e9124  8d4e04               lea ecx, [esi + 4]
// 008e9127  e8f467f4ff           call 0x82f920
// 008e912c  c7861802000001000000 mov dword ptr [esi + 0x218], 1
// 008e9136  e89568f4ff           call 0x82f9d0
// 008e913b  6a39                 push 0x39
// 008e913d  8bc8                 mov ecx, eax
// 008e913f  e8bc5ff4ff           call 0x82f100
// 008e9144  898654010000         mov dword ptr [esi + 0x154], eax
// 008e914a  e88168f4ff           call 0x82f9d0
// 008e914f  6a39                 push 0x39
// 008e9151  8bc8                 mov ecx, eax
// 008e9153  e8a85ff4ff           call 0x82f100
// 008e9158  894648               mov dword ptr [esi + 0x48], eax
// 008e915b  5e                   pop esi
// 008e915c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp