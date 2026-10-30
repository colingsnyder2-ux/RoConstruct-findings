// roc 2012-06 00a0f870  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0f870
//
// 00a0f870  56                   push esi
// 00a0f871  57                   push edi
// 00a0f872  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a0f876  8bf1                 mov esi, ecx
// 00a0f878  83ff03               cmp edi, 3
// 00a0f87b  7405                 je 0xa0f882
// 00a0f87d  83ff02               cmp edi, 2
// 00a0f880  753c                 jne 0xa0f8be
// 00a0f882  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00a0f888  e8e35ffeff           call 0x9f5870
// 00a0f88d  85c0                 test eax, eax
// 00a0f88f  742d                 je 0xa0f8be
// 00a0f891  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a0f895  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0f899  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0f89d  50                   push eax
// 00a0f89e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0f8a2  51                   push ecx
// 00a0f8a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0f8a7  52                   push edx
// 00a0f8a8  50                   push eax
// 00a0f8a9  57                   push edi
// 00a0f8aa  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a0f8ae  51                   push ecx
// 00a0f8af  57                   push edi
// 00a0f8b0  8bce                 mov ecx, esi
// 00a0f8b2  e889b2f7ff           call 0x98ab40
// 00a0f8b7  8bc7                 mov eax, edi
// 00a0f8b9  5f                   pop edi
// 00a0f8ba  5e                   pop esi
// 00a0f8bb  c21c00               ret 0x1c
// 00a0f8be  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0f8c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0f8c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0f8ca  52                   push edx
// 00a0f8cb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0f8cf  50                   push eax
// 00a0f8d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a0f8d4  51                   push ecx
// 00a0f8d5  52                   push edx
// 00a0f8d6  57                   push edi
// 00a0f8d7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a0f8db  50                   push eax
// 00a0f8dc  57                   push edi
// 00a0f8dd  8bce                 mov ecx, esi
// 00a0f8df  e8ecfefeff           call 0x9ff7d0
// 00a0f8e4  8bc7                 mov eax, edi
// 00a0f8e6  5f                   pop edi
// 00a0f8e7  5e                   pop esi
// 00a0f8e8  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawSpecialControl@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
