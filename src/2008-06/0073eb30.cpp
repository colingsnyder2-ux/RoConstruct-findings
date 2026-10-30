// from server: 100% by auto
// roc 2008-06 0073eb30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073eb30
//
// 0073eb30  837c242000           cmp dword ptr [esp + 0x20], 0
// 0073eb35  56                   push esi
// 0073eb36  7553                 jne 0x73eb8b
// 0073eb38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073eb3c  83f802               cmp eax, 2
// 0073eb3f  7405                 je 0x73eb46
// 0073eb41  83f803               cmp eax, 3
// 0073eb44  7526                 jne 0x73eb6c
// 0073eb46  837c243405           cmp dword ptr [esp + 0x34], 5
// 0073eb4b  7415                 je 0x73eb62
// 0073eb4d  33c0                 xor eax, eax
// 0073eb4f  39442428             cmp dword ptr [esp + 0x28], eax
// 0073eb53  0f95c0               setne al
// 0073eb56  8d44001f             lea eax, [eax + eax + 0x1f]
// 0073eb5a  50                   push eax
// 0073eb5b  6a20                 push 0x20
// 0073eb5d  e981000000           jmp 0x73ebe3
// 0073eb62  b829000000           mov eax, 0x29
// 0073eb67  50                   push eax
// 0073eb68  6a20                 push 0x20
// 0073eb6a  eb77                 jmp 0x73ebe3
// 0073eb6c  837c242800           cmp dword ptr [esp + 0x28], 0
// 0073eb71  0f8496000000         je 0x73ec0d
// 0073eb77  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073eb7b  83ea05               sub edx, 5
// 0073eb7e  f7da                 neg edx
// 0073eb80  1bd2                 sbb edx, edx
// 0073eb82  83e225               and edx, 0x25
// 0073eb85  4a                   dec edx
// 0073eb86  52                   push edx
// 0073eb87  6a3a                 push 0x3a
// 0073eb89  eb58                 jmp 0x73ebe3
// 0073eb8b  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0073eb90  7406                 je 0x73eb98
// 0073eb92  6a1e                 push 0x1e
// 0073eb94  6a2b                 push 0x2b
// 0073eb96  eb4b                 jmp 0x73ebe3
// 0073eb98  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073eb9c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073eba0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073eba4  83fa02               cmp edx, 2
// 0073eba7  750e                 jne 0x73ebb7
// 0073eba9  85f6                 test esi, esi
// 0073ebab  751c                 jne 0x73ebc9
// 0073ebad  85c0                 test eax, eax
// 0073ebaf  751c                 jne 0x73ebcd
// 0073ebb1  6a33                 push 0x33
// 0073ebb3  6a25                 push 0x25
// 0073ebb5  eb2c                 jmp 0x73ebe3
// 0073ebb7  85d2                 test edx, edx
// 0073ebb9  7412                 je 0x73ebcd
// 0073ebbb  85f6                 test esi, esi
// 0073ebbd  750a                 jne 0x73ebc9
// 0073ebbf  85c0                 test eax, eax
// 0073ebc1  750a                 jne 0x73ebcd
// 0073ebc3  6a24                 push 0x24
// 0073ebc5  6a25                 push 0x25
// 0073ebc7  eb1a                 jmp 0x73ebe3
// 0073ebc9  85c0                 test eax, eax
// 0073ebcb  7412                 je 0x73ebdf
// 0073ebcd  83f802               cmp eax, 2
// 0073ebd0  740d                 je 0x73ebdf
// 0073ebd2  83f803               cmp eax, 3
// 0073ebd5  7408                 je 0x73ebdf
// 0073ebd7  85f6                 test esi, esi
// 0073ebd9  7436                 je 0x73ec11
// 0073ebdb  85c0                 test eax, eax
// 0073ebdd  7436                 je 0x73ec15
// 0073ebdf  6a21                 push 0x21
// 0073ebe1  6a32                 push 0x32
// 0073ebe3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073ebe7  83ec10               sub esp, 0x10
// 0073ebea  8bc4                 mov eax, esp
// 0073ebec  8910                 mov dword ptr [eax], edx
// 0073ebee  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073ebf2  895004               mov dword ptr [eax + 4], edx
// 0073ebf5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073ebf9  895008               mov dword ptr [eax + 8], edx
// 0073ebfc  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073ec00  89500c               mov dword ptr [eax + 0xc], edx
// 0073ec03  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073ec07  50                   push eax
// 0073ec08  e8c304f7ff           call 0x6af0d0
// 0073ec0d  5e                   pop esi
// 0073ec0e  c23000               ret 0x30
// 0073ec11  85c0                 test eax, eax
// 0073ec13  74f8                 je 0x73ec0d
// 0073ec15  6a1f                 push 0x1f
// 0073ec17  6a20                 push 0x20
// 0073ec19  ebc8                 jmp 0x73ebe3
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawRectangle@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
