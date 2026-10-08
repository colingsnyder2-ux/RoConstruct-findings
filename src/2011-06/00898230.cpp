// roc 2011-06 00898230  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00898230
//
// 00898230  56                   push esi
// 00898231  8bf1                 mov esi, ecx
// 00898233  57                   push edi
// 00898234  8dbe78040000         lea edi, [esi + 0x478]
// 0089823a  8bcf                 mov ecx, edi
// 0089823c  e88f50feff           call 0x87d2d0
// 00898241  85c0                 test eax, eax
// 00898243  7540                 jne 0x898285
// 00898245  8b442428             mov eax, dword ptr [esp + 0x28]
// 00898249  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089824d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00898251  50                   push eax
// 00898252  51                   push ecx
// 00898253  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00898257  52                   push edx
// 00898258  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089825c  83ec10               sub esp, 0x10
// 0089825f  8bc4                 mov eax, esp
// 00898261  8908                 mov dword ptr [eax], ecx
// 00898263  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00898267  895004               mov dword ptr [eax + 4], edx
// 0089826a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089826e  894808               mov dword ptr [eax + 8], ecx
// 00898271  89500c               mov dword ptr [eax + 0xc], edx
// 00898274  8b442428             mov eax, dword ptr [esp + 0x28]
// 00898278  50                   push eax
// 00898279  8bce                 mov ecx, esi
// 0089827b  e800ecfeff           call 0x886e80
// 00898280  5f                   pop edi
// 00898281  5e                   pop esi
// 00898282  c22000               ret 0x20
// 00898285  837c242000           cmp dword ptr [esp + 0x20], 0
// 0089828a  7507                 jne 0x898293
// 0089828c  b904000000           mov ecx, 4
// 00898291  eb18                 jmp 0x8982ab
// 00898293  837c242800           cmp dword ptr [esp + 0x28], 0
// 00898298  7407                 je 0x8982a1
// 0089829a  b903000000           mov ecx, 3
// 0089829f  eb0a                 jmp 0x8982ab
// 008982a1  33c9                 xor ecx, ecx
// 008982a3  394c2424             cmp dword ptr [esp + 0x24], ecx
// 008982a7  0f95c1               setne cl
// 008982aa  41                   inc ecx
// 008982ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008982af  836c241002           sub dword ptr [esp + 0x10], 2
// 008982b4  ba01000000           mov edx, 1
// 008982b9  01542414             add dword ptr [esp + 0x14], edx
// 008982bd  29542418             sub dword ptr [esp + 0x18], edx
// 008982c1  2954241c             sub dword ptr [esp + 0x1c], edx
// 008982c5  85c0                 test eax, eax
// 008982c7  7403                 je 0x8982cc
// 008982c9  8b4004               mov eax, dword ptr [eax + 4]
// 008982cc  6a00                 push 0
// 008982ce  8d742414             lea esi, [esp + 0x14]
// 008982d2  56                   push esi
// 008982d3  51                   push ecx
// 008982d4  52                   push edx
// 008982d5  50                   push eax
// 008982d6  8bcf                 mov ecx, edi
// 008982d8  e8234dfeff           call 0x87d000
// 008982dd  5f                   pop edi
// 008982de  5e                   pop esi
// 008982df  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
