// roc 2010-06 0083b200  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083b200
//
// 0083b200  56                   push esi
// 0083b201  8bf1                 mov esi, ecx
// 0083b203  57                   push edi
// 0083b204  8dbe78040000         lea edi, [esi + 0x478]
// 0083b20a  8bcf                 mov ecx, edi
// 0083b20c  e8af49feff           call 0x81fbc0
// 0083b211  85c0                 test eax, eax
// 0083b213  7540                 jne 0x83b255
// 0083b215  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083b219  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083b21d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083b221  50                   push eax
// 0083b222  51                   push ecx
// 0083b223  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083b227  52                   push edx
// 0083b228  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083b22c  83ec10               sub esp, 0x10
// 0083b22f  8bc4                 mov eax, esp
// 0083b231  8908                 mov dword ptr [eax], ecx
// 0083b233  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0083b237  895004               mov dword ptr [eax + 4], edx
// 0083b23a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0083b23e  894808               mov dword ptr [eax + 8], ecx
// 0083b241  89500c               mov dword ptr [eax + 0xc], edx
// 0083b244  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083b248  50                   push eax
// 0083b249  8bce                 mov ecx, esi
// 0083b24b  e890ebfeff           call 0x829de0
// 0083b250  5f                   pop edi
// 0083b251  5e                   pop esi
// 0083b252  c22000               ret 0x20
// 0083b255  837c242000           cmp dword ptr [esp + 0x20], 0
// 0083b25a  7507                 jne 0x83b263
// 0083b25c  b904000000           mov ecx, 4
// 0083b261  eb18                 jmp 0x83b27b
// 0083b263  837c242800           cmp dword ptr [esp + 0x28], 0
// 0083b268  7407                 je 0x83b271
// 0083b26a  b903000000           mov ecx, 3
// 0083b26f  eb0a                 jmp 0x83b27b
// 0083b271  33c9                 xor ecx, ecx
// 0083b273  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0083b277  0f95c1               setne cl
// 0083b27a  41                   inc ecx
// 0083b27b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083b27f  836c241002           sub dword ptr [esp + 0x10], 2
// 0083b284  ba01000000           mov edx, 1
// 0083b289  01542414             add dword ptr [esp + 0x14], edx
// 0083b28d  29542418             sub dword ptr [esp + 0x18], edx
// 0083b291  2954241c             sub dword ptr [esp + 0x1c], edx
// 0083b295  85c0                 test eax, eax
// 0083b297  7403                 je 0x83b29c
// 0083b299  8b4004               mov eax, dword ptr [eax + 4]
// 0083b29c  6a00                 push 0
// 0083b29e  8d742414             lea esi, [esp + 0x14]
// 0083b2a2  56                   push esi
// 0083b2a3  51                   push ecx
// 0083b2a4  52                   push edx
// 0083b2a5  50                   push eax
// 0083b2a6  8bcf                 mov ecx, edi
// 0083b2a8  e89345feff           call 0x81f840
// 0083b2ad  5f                   pop edi
// 0083b2ae  5e                   pop esi
// 0083b2af  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
