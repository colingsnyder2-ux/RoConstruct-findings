// roc 2009-06 007acde0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007acde0
//
// 007acde0  56                   push esi
// 007acde1  8bf1                 mov esi, ecx
// 007acde3  57                   push edi
// 007acde4  8dbe78040000         lea edi, [esi + 0x478]
// 007acdea  8bcf                 mov ecx, edi
// 007acdec  e8af3dfeff           call 0x790ba0
// 007acdf1  85c0                 test eax, eax
// 007acdf3  7540                 jne 0x7ace35
// 007acdf5  8b442428             mov eax, dword ptr [esp + 0x28]
// 007acdf9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007acdfd  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ace01  50                   push eax
// 007ace02  51                   push ecx
// 007ace03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ace07  52                   push edx
// 007ace08  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ace0c  83ec10               sub esp, 0x10
// 007ace0f  8bc4                 mov eax, esp
// 007ace11  8908                 mov dword ptr [eax], ecx
// 007ace13  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007ace17  895004               mov dword ptr [eax + 4], edx
// 007ace1a  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ace1e  894808               mov dword ptr [eax + 8], ecx
// 007ace21  89500c               mov dword ptr [eax + 0xc], edx
// 007ace24  8b442428             mov eax, dword ptr [esp + 0x28]
// 007ace28  50                   push eax
// 007ace29  8bce                 mov ecx, esi
// 007ace2b  e8104effff           call 0x7a1c40
// 007ace30  5f                   pop edi
// 007ace31  5e                   pop esi
// 007ace32  c22000               ret 0x20
// 007ace35  837c242000           cmp dword ptr [esp + 0x20], 0
// 007ace3a  7507                 jne 0x7ace43
// 007ace3c  b904000000           mov ecx, 4
// 007ace41  eb18                 jmp 0x7ace5b
// 007ace43  837c242800           cmp dword ptr [esp + 0x28], 0
// 007ace48  7407                 je 0x7ace51
// 007ace4a  b903000000           mov ecx, 3
// 007ace4f  eb0a                 jmp 0x7ace5b
// 007ace51  33c9                 xor ecx, ecx
// 007ace53  394c2424             cmp dword ptr [esp + 0x24], ecx
// 007ace57  0f95c1               setne cl
// 007ace5a  41                   inc ecx
// 007ace5b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007ace5f  836c241002           sub dword ptr [esp + 0x10], 2
// 007ace64  ba01000000           mov edx, 1
// 007ace69  01542414             add dword ptr [esp + 0x14], edx
// 007ace6d  29542418             sub dword ptr [esp + 0x18], edx
// 007ace71  2954241c             sub dword ptr [esp + 0x1c], edx
// 007ace75  85c0                 test eax, eax
// 007ace77  7403                 je 0x7ace7c
// 007ace79  8b4004               mov eax, dword ptr [eax + 4]
// 007ace7c  6a00                 push 0
// 007ace7e  8d742414             lea esi, [esp + 0x14]
// 007ace82  56                   push esi
// 007ace83  51                   push ecx
// 007ace84  52                   push edx
// 007ace85  50                   push eax
// 007ace86  8bcf                 mov ecx, edi
// 007ace88  e89339feff           call 0x790820
// 007ace8d  5f                   pop edi
// 007ace8e  5e                   pop esi
// 007ace8f  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlComboBoxButton@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
