// from server: 100% by auto
// roc 2008-06 0073d770  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073d770
//
// 0073d770  56                   push esi
// 0073d771  57                   push edi
// 0073d772  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073d776  8bf1                 mov esi, ecx
// 0073d778  83ff03               cmp edi, 3
// 0073d77b  7405                 je 0x73d782
// 0073d77d  83ff02               cmp edi, 2
// 0073d780  753c                 jne 0x73d7be
// 0073d782  8d8e6c040000         lea ecx, [esi + 0x46c]
// 0073d788  e8a3acfdff           call 0x718430
// 0073d78d  85c0                 test eax, eax
// 0073d78f  742d                 je 0x73d7be
// 0073d791  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073d795  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073d799  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073d79d  50                   push eax
// 0073d79e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073d7a2  51                   push ecx
// 0073d7a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073d7a7  52                   push edx
// 0073d7a8  50                   push eax
// 0073d7a9  57                   push edi
// 0073d7aa  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0073d7ae  51                   push ecx
// 0073d7af  57                   push edi
// 0073d7b0  8bce                 mov ecx, esi
// 0073d7b2  e8e93af7ff           call 0x6b12a0
// 0073d7b7  8bc7                 mov eax, edi
// 0073d7b9  5f                   pop edi
// 0073d7ba  5e                   pop esi
// 0073d7bb  c21c00               ret 0x1c
// 0073d7be  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073d7c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073d7c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073d7ca  52                   push edx
// 0073d7cb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073d7cf  50                   push eax
// 0073d7d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073d7d4  51                   push ecx
// 0073d7d5  52                   push edx
// 0073d7d6  57                   push edi
// 0073d7d7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0073d7db  50                   push eax
// 0073d7dc  57                   push edi
// 0073d7dd  8bce                 mov ecx, esi
// 0073d7df  e81c61ffff           call 0x733900
// 0073d7e4  8bc7                 mov eax, edi
// 0073d7e6  5f                   pop edi
// 0073d7e7  5e                   pop esi
// 0073d7e8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
