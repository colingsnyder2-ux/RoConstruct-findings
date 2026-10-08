// roc 2012-06 00a10810  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10810
//
// 00a10810  56                   push esi
// 00a10811  8bf1                 mov esi, ecx
// 00a10813  57                   push edi
// 00a10814  8dbe78040000         lea edi, [esi + 0x478]
// 00a1081a  8bcf                 mov ecx, edi
// 00a1081c  e84f50feff           call 0x9f5870
// 00a10821  85c0                 test eax, eax
// 00a10823  7540                 jne 0xa10865
// 00a10825  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a10829  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a1082d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a10831  50                   push eax
// 00a10832  51                   push ecx
// 00a10833  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a10837  52                   push edx
// 00a10838  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a1083c  83ec10               sub esp, 0x10
// 00a1083f  8bc4                 mov eax, esp
// 00a10841  8908                 mov dword ptr [eax], ecx
// 00a10843  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a10847  895004               mov dword ptr [eax + 4], edx
// 00a1084a  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a1084e  894808               mov dword ptr [eax + 8], ecx
// 00a10851  89500c               mov dword ptr [eax + 0xc], edx
// 00a10854  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a10858  50                   push eax
// 00a10859  8bce                 mov ecx, esi
// 00a1085b  e8e0ebfeff           call 0x9ff440
// 00a10860  5f                   pop edi
// 00a10861  5e                   pop esi
// 00a10862  c22000               ret 0x20
// 00a10865  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a1086a  7507                 jne 0xa10873
// 00a1086c  b904000000           mov ecx, 4
// 00a10871  eb18                 jmp 0xa1088b
// 00a10873  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a10878  7407                 je 0xa10881
// 00a1087a  b903000000           mov ecx, 3
// 00a1087f  eb0a                 jmp 0xa1088b
// 00a10881  33c9                 xor ecx, ecx
// 00a10883  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00a10887  0f95c1               setne cl
// 00a1088a  41                   inc ecx
// 00a1088b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a1088f  836c241002           sub dword ptr [esp + 0x10], 2
// 00a10894  ba01000000           mov edx, 1
// 00a10899  01542414             add dword ptr [esp + 0x14], edx
// 00a1089d  29542418             sub dword ptr [esp + 0x18], edx
// 00a108a1  2954241c             sub dword ptr [esp + 0x1c], edx
// 00a108a5  85c0                 test eax, eax
// 00a108a7  7403                 je 0xa108ac
// 00a108a9  8b4004               mov eax, dword ptr [eax + 4]
// 00a108ac  6a00                 push 0
// 00a108ae  8d742414             lea esi, [esp + 0x14]
// 00a108b2  56                   push esi
// 00a108b3  51                   push ecx
// 00a108b4  52                   push edx
// 00a108b5  50                   push eax
// 00a108b6  8bcf                 mov ecx, edi
// 00a108b8  e8e34cfeff           call 0x9f55a0
// 00a108bd  5f                   pop edi
// 00a108be  5e                   pop esi
// 00a108bf  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
