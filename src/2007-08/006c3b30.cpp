// roc 2007-08 006c3b30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c3b30
//
// 006c3b30  837c242000           cmp dword ptr [esp + 0x20], 0
// 006c3b35  56                   push esi
// 006c3b36  7555                 jne 0x6c3b8d
// 006c3b38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c3b3c  83f802               cmp eax, 2
// 006c3b3f  7405                 je 0x6c3b46
// 006c3b41  83f803               cmp eax, 3
// 006c3b44  7526                 jne 0x6c3b6c
// 006c3b46  837c243405           cmp dword ptr [esp + 0x34], 5
// 006c3b4b  7415                 je 0x6c3b62
// 006c3b4d  33c0                 xor eax, eax
// 006c3b4f  39442428             cmp dword ptr [esp + 0x28], eax
// 006c3b53  0f95c0               setne al
// 006c3b56  8d44001f             lea eax, [eax + eax + 0x1f]
// 006c3b5a  50                   push eax
// 006c3b5b  6a20                 push 0x20
// 006c3b5d  e983000000           jmp 0x6c3be5
// 006c3b62  b829000000           mov eax, 0x29
// 006c3b67  50                   push eax
// 006c3b68  6a20                 push 0x20
// 006c3b6a  eb79                 jmp 0x6c3be5
// 006c3b6c  837c242800           cmp dword ptr [esp + 0x28], 0
// 006c3b71  0f8498000000         je 0x6c3c0f
// 006c3b77  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c3b7b  83ea05               sub edx, 5
// 006c3b7e  f7da                 neg edx
// 006c3b80  1bd2                 sbb edx, edx
// 006c3b82  83e225               and edx, 0x25
// 006c3b85  83c2ff               add edx, -1
// 006c3b88  52                   push edx
// 006c3b89  6a3a                 push 0x3a
// 006c3b8b  eb58                 jmp 0x6c3be5
// 006c3b8d  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006c3b92  7406                 je 0x6c3b9a
// 006c3b94  6a1e                 push 0x1e
// 006c3b96  6a2b                 push 0x2b
// 006c3b98  eb4b                 jmp 0x6c3be5
// 006c3b9a  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c3b9e  83fa02               cmp edx, 2
// 006c3ba1  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c3ba5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006c3ba9  750e                 jne 0x6c3bb9
// 006c3bab  85f6                 test esi, esi
// 006c3bad  751c                 jne 0x6c3bcb
// 006c3baf  85c0                 test eax, eax
// 006c3bb1  751c                 jne 0x6c3bcf
// 006c3bb3  6a33                 push 0x33
// 006c3bb5  6a25                 push 0x25
// 006c3bb7  eb2c                 jmp 0x6c3be5
// 006c3bb9  85d2                 test edx, edx
// 006c3bbb  7412                 je 0x6c3bcf
// 006c3bbd  85f6                 test esi, esi
// 006c3bbf  750a                 jne 0x6c3bcb
// 006c3bc1  85c0                 test eax, eax
// 006c3bc3  750a                 jne 0x6c3bcf
// 006c3bc5  6a24                 push 0x24
// 006c3bc7  6a25                 push 0x25
// 006c3bc9  eb1a                 jmp 0x6c3be5
// 006c3bcb  85c0                 test eax, eax
// 006c3bcd  7412                 je 0x6c3be1
// 006c3bcf  83f802               cmp eax, 2
// 006c3bd2  740d                 je 0x6c3be1
// 006c3bd4  83f803               cmp eax, 3
// 006c3bd7  7408                 je 0x6c3be1
// 006c3bd9  85f6                 test esi, esi
// 006c3bdb  7436                 je 0x6c3c13
// 006c3bdd  85c0                 test eax, eax
// 006c3bdf  7436                 je 0x6c3c17
// 006c3be1  6a21                 push 0x21
// 006c3be3  6a32                 push 0x32
// 006c3be5  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c3be9  83ec10               sub esp, 0x10
// 006c3bec  8bc4                 mov eax, esp
// 006c3bee  8910                 mov dword ptr [eax], edx
// 006c3bf0  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c3bf4  895004               mov dword ptr [eax + 4], edx
// 006c3bf7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c3bfb  895008               mov dword ptr [eax + 8], edx
// 006c3bfe  8b542430             mov edx, dword ptr [esp + 0x30]
// 006c3c02  89500c               mov dword ptr [eax + 0xc], edx
// 006c3c05  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c3c09  50                   push eax
// 006c3c0a  e8d1a0f7ff           call 0x63dce0
// 006c3c0f  5e                   pop esi
// 006c3c10  c23000               ret 0x30
// 006c3c13  85c0                 test eax, eax
// 006c3c15  74f8                 je 0x6c3c0f
// 006c3c17  6a1f                 push 0x1f
// 006c3c19  6a20                 push 0x20
// 006c3c1b  ebc8                 jmp 0x6c3be5
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawRectangle@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
