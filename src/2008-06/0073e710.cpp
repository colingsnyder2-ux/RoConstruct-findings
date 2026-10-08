// from server: 100% by auto
// roc 2008-06 0073e710  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073e710
//
// 0073e710  56                   push esi
// 0073e711  8bf1                 mov esi, ecx
// 0073e713  57                   push edi
// 0073e714  8dbe78040000         lea edi, [esi + 0x478]
// 0073e71a  8bcf                 mov ecx, edi
// 0073e71c  e80f9dfdff           call 0x718430
// 0073e721  85c0                 test eax, eax
// 0073e723  7540                 jne 0x73e765
// 0073e725  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073e729  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073e72d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073e731  50                   push eax
// 0073e732  51                   push ecx
// 0073e733  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073e737  52                   push edx
// 0073e738  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073e73c  83ec10               sub esp, 0x10
// 0073e73f  8bc4                 mov eax, esp
// 0073e741  8908                 mov dword ptr [eax], ecx
// 0073e743  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073e747  895004               mov dword ptr [eax + 4], edx
// 0073e74a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073e74e  894808               mov dword ptr [eax + 8], ecx
// 0073e751  89500c               mov dword ptr [eax + 0xc], edx
// 0073e754  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073e758  50                   push eax
// 0073e759  8bce                 mov ecx, esi
// 0073e75b  e8104effff           call 0x733570
// 0073e760  5f                   pop edi
// 0073e761  5e                   pop esi
// 0073e762  c22000               ret 0x20
// 0073e765  837c242000           cmp dword ptr [esp + 0x20], 0
// 0073e76a  7507                 jne 0x73e773
// 0073e76c  b904000000           mov ecx, 4
// 0073e771  eb18                 jmp 0x73e78b
// 0073e773  837c242800           cmp dword ptr [esp + 0x28], 0
// 0073e778  7407                 je 0x73e781
// 0073e77a  b903000000           mov ecx, 3
// 0073e77f  eb0a                 jmp 0x73e78b
// 0073e781  33c9                 xor ecx, ecx
// 0073e783  394c2424             cmp dword ptr [esp + 0x24], ecx
// 0073e787  0f95c1               setne cl
// 0073e78a  41                   inc ecx
// 0073e78b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073e78f  836c241002           sub dword ptr [esp + 0x10], 2
// 0073e794  ba01000000           mov edx, 1
// 0073e799  01542414             add dword ptr [esp + 0x14], edx
// 0073e79d  29542418             sub dword ptr [esp + 0x18], edx
// 0073e7a1  2954241c             sub dword ptr [esp + 0x1c], edx
// 0073e7a5  85c0                 test eax, eax
// 0073e7a7  7403                 je 0x73e7ac
// 0073e7a9  8b4004               mov eax, dword ptr [eax + 4]
// 0073e7ac  6a00                 push 0
// 0073e7ae  8d742414             lea esi, [esp + 0x14]
// 0073e7b2  56                   push esi
// 0073e7b3  51                   push ecx
// 0073e7b4  52                   push edx
// 0073e7b5  50                   push eax
// 0073e7b6  8bcf                 mov ecx, edi
// 0073e7b8  e8f398fdff           call 0x7180b0
// 0073e7bd  5f                   pop edi
// 0073e7be  5e                   pop esi
// 0073e7bf  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
