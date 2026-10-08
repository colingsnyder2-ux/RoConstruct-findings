// roc 2010-06 0083a260  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083a260
//
// 0083a260  56                   push esi
// 0083a261  57                   push edi
// 0083a262  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083a266  8bf1                 mov esi, ecx
// 0083a268  83ff03               cmp edi, 3
// 0083a26b  7405                 je 0x83a272
// 0083a26d  83ff02               cmp edi, 2
// 0083a270  753c                 jne 0x83a2ae
// 0083a272  8d8e6c040000         lea ecx, [esi + 0x46c]
// 0083a278  e84359feff           call 0x81fbc0
// 0083a27d  85c0                 test eax, eax
// 0083a27f  742d                 je 0x83a2ae
// 0083a281  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083a285  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083a289  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083a28d  50                   push eax
// 0083a28e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083a292  51                   push ecx
// 0083a293  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083a297  52                   push edx
// 0083a298  50                   push eax
// 0083a299  57                   push edi
// 0083a29a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083a29e  51                   push ecx
// 0083a29f  57                   push edi
// 0083a2a0  8bce                 mov ecx, esi
// 0083a2a2  e89961f7ff           call 0x7b0440
// 0083a2a7  8bc7                 mov eax, edi
// 0083a2a9  5f                   pop edi
// 0083a2aa  5e                   pop esi
// 0083a2ab  c21c00               ret 0x1c
// 0083a2ae  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083a2b2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083a2b6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083a2ba  52                   push edx
// 0083a2bb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083a2bf  50                   push eax
// 0083a2c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083a2c4  51                   push ecx
// 0083a2c5  52                   push edx
// 0083a2c6  57                   push edi
// 0083a2c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0083a2cb  50                   push eax
// 0083a2cc  57                   push edi
// 0083a2cd  8bce                 mov ecx, esi
// 0083a2cf  e89cfefeff           call 0x82a170
// 0083a2d4  8bc7                 mov eax, edi
// 0083a2d6  5f                   pop edi
// 0083a2d7  5e                   pop esi
// 0083a2d8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
