// roc 2009-12 00887ca0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887ca0
//
// 00887ca0  56                   push esi
// 00887ca1  8bf1                 mov esi, ecx
// 00887ca3  57                   push edi
// 00887ca4  8dbe78040000         lea edi, [esi + 0x478]
// 00887caa  8bcf                 mov ecx, edi
// 00887cac  e80f3ffeff           call 0x86bbc0
// 00887cb1  85c0                 test eax, eax
// 00887cb3  7540                 jne 0x887cf5
// 00887cb5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00887cb9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00887cbd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00887cc1  50                   push eax
// 00887cc2  51                   push ecx
// 00887cc3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00887cc7  52                   push edx
// 00887cc8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00887ccc  83ec10               sub esp, 0x10
// 00887ccf  8bc4                 mov eax, esp
// 00887cd1  8908                 mov dword ptr [eax], ecx
// 00887cd3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00887cd7  895004               mov dword ptr [eax + 4], edx
// 00887cda  8b542438             mov edx, dword ptr [esp + 0x38]
// 00887cde  894808               mov dword ptr [eax + 8], ecx
// 00887ce1  89500c               mov dword ptr [eax + 0xc], edx
// 00887ce4  8b442428             mov eax, dword ptr [esp + 0x28]
// 00887ce8  50                   push eax
// 00887ce9  8bce                 mov ecx, esi
// 00887ceb  e8904effff           call 0x87cb80
// 00887cf0  5f                   pop edi
// 00887cf1  5e                   pop esi
// 00887cf2  c22000               ret 0x20
// 00887cf5  837c242000           cmp dword ptr [esp + 0x20], 0
// 00887cfa  7507                 jne 0x887d03
// 00887cfc  b904000000           mov ecx, 4
// 00887d01  eb18                 jmp 0x887d1b
// 00887d03  837c242800           cmp dword ptr [esp + 0x28], 0
// 00887d08  7407                 je 0x887d11
// 00887d0a  b903000000           mov ecx, 3
// 00887d0f  eb0a                 jmp 0x887d1b
// 00887d11  33c9                 xor ecx, ecx
// 00887d13  394c2424             cmp dword ptr [esp + 0x24], ecx
// 00887d17  0f95c1               setne cl
// 00887d1a  41                   inc ecx
// 00887d1b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00887d1f  836c241002           sub dword ptr [esp + 0x10], 2
// 00887d24  ba01000000           mov edx, 1
// 00887d29  01542414             add dword ptr [esp + 0x14], edx
// 00887d2d  29542418             sub dword ptr [esp + 0x18], edx
// 00887d31  2954241c             sub dword ptr [esp + 0x1c], edx
// 00887d35  85c0                 test eax, eax
// 00887d37  7403                 je 0x887d3c
// 00887d39  8b4004               mov eax, dword ptr [eax + 4]
// 00887d3c  6a00                 push 0
// 00887d3e  8d742414             lea esi, [esp + 0x14]
// 00887d42  56                   push esi
// 00887d43  51                   push ecx
// 00887d44  52                   push edx
// 00887d45  50                   push eax
// 00887d46  8bcf                 mov ecx, edi
// 00887d48  e8f33afeff           call 0x86b840
// 00887d4d  5f                   pop edi
// 00887d4e  5e                   pop esi
// 00887d4f  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
