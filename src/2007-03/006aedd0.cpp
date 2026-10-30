// roc 2007-03 006aedd0  unit: seg_006a0000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006aedd0
//
// 006aedd0  837c242000           cmp dword ptr [esp + 0x20], 0
// 006aedd5  56                   push esi
// 006aedd6  7555                 jne 0x6aee2d
// 006aedd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006aeddc  83f802               cmp eax, 2
// 006aeddf  7405                 je 0x6aede6
// 006aede1  83f803               cmp eax, 3
// 006aede4  7526                 jne 0x6aee0c
// 006aede6  837c243405           cmp dword ptr [esp + 0x34], 5
// 006aedeb  7415                 je 0x6aee02
// 006aeded  33c0                 xor eax, eax
// 006aedef  39442428             cmp dword ptr [esp + 0x28], eax
// 006aedf3  0f95c0               setne al
// 006aedf6  8d44001f             lea eax, [eax + eax + 0x1f]
// 006aedfa  50                   push eax
// 006aedfb  6a20                 push 0x20
// 006aedfd  e983000000           jmp 0x6aee85
// 006aee02  b829000000           mov eax, 0x29
// 006aee07  50                   push eax
// 006aee08  6a20                 push 0x20
// 006aee0a  eb79                 jmp 0x6aee85
// 006aee0c  837c242800           cmp dword ptr [esp + 0x28], 0
// 006aee11  0f8498000000         je 0x6aeeaf
// 006aee17  8b542434             mov edx, dword ptr [esp + 0x34]
// 006aee1b  83ea05               sub edx, 5
// 006aee1e  f7da                 neg edx
// 006aee20  1bd2                 sbb edx, edx
// 006aee22  83e225               and edx, 0x25
// 006aee25  83c2ff               add edx, -1
// 006aee28  52                   push edx
// 006aee29  6a3a                 push 0x3a
// 006aee2b  eb58                 jmp 0x6aee85
// 006aee2d  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006aee32  7406                 je 0x6aee3a
// 006aee34  6a1e                 push 0x1e
// 006aee36  6a2b                 push 0x2b
// 006aee38  eb4b                 jmp 0x6aee85
// 006aee3a  8b542428             mov edx, dword ptr [esp + 0x28]
// 006aee3e  83fa02               cmp edx, 2
// 006aee41  8b442420             mov eax, dword ptr [esp + 0x20]
// 006aee45  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006aee49  750e                 jne 0x6aee59
// 006aee4b  85f6                 test esi, esi
// 006aee4d  751c                 jne 0x6aee6b
// 006aee4f  85c0                 test eax, eax
// 006aee51  751c                 jne 0x6aee6f
// 006aee53  6a33                 push 0x33
// 006aee55  6a25                 push 0x25
// 006aee57  eb2c                 jmp 0x6aee85
// 006aee59  85d2                 test edx, edx
// 006aee5b  7412                 je 0x6aee6f
// 006aee5d  85f6                 test esi, esi
// 006aee5f  750a                 jne 0x6aee6b
// 006aee61  85c0                 test eax, eax
// 006aee63  750a                 jne 0x6aee6f
// 006aee65  6a24                 push 0x24
// 006aee67  6a25                 push 0x25
// 006aee69  eb1a                 jmp 0x6aee85
// 006aee6b  85c0                 test eax, eax
// 006aee6d  7412                 je 0x6aee81
// 006aee6f  83f802               cmp eax, 2
// 006aee72  740d                 je 0x6aee81
// 006aee74  83f803               cmp eax, 3
// 006aee77  7408                 je 0x6aee81
// 006aee79  85f6                 test esi, esi
// 006aee7b  7436                 je 0x6aeeb3
// 006aee7d  85c0                 test eax, eax
// 006aee7f  7436                 je 0x6aeeb7
// 006aee81  6a21                 push 0x21
// 006aee83  6a32                 push 0x32
// 006aee85  8b542414             mov edx, dword ptr [esp + 0x14]
// 006aee89  83ec10               sub esp, 0x10
// 006aee8c  8bc4                 mov eax, esp
// 006aee8e  8910                 mov dword ptr [eax], edx
// 006aee90  8b542428             mov edx, dword ptr [esp + 0x28]
// 006aee94  895004               mov dword ptr [eax + 4], edx
// 006aee97  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006aee9b  895008               mov dword ptr [eax + 8], edx
// 006aee9e  8b542430             mov edx, dword ptr [esp + 0x30]
// 006aeea2  89500c               mov dword ptr [eax + 0xc], edx
// 006aeea5  8b442420             mov eax, dword ptr [esp + 0x20]
// 006aeea9  50                   push eax
// 006aeeaa  e81142f8ff           call 0x6330c0
// 006aeeaf  5e                   pop esi
// 006aeeb0  c23000               ret 0x30
// 006aeeb3  85c0                 test eax, eax
// 006aeeb5  74f8                 je 0x6aeeaf
// 006aeeb7  6a1f                 push 0x1f
// 006aeeb9  6a20                 push 0x20
// 006aeebb  ebc8                 jmp 0x6aee85
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawRectangle@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
