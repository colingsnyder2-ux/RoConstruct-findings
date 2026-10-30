// roc 2009-12 007fce80  unit: CXTPEdit  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fce80
//
// 007fce80  837c240400           cmp dword ptr [esp + 4], 0
// 007fce85  57                   push edi
// 007fce86  8bf9                 mov edi, ecx
// 007fce88  745b                 je 0x7fcee5
// 007fce8a  833d88adb90000       cmp dword ptr [0xb9ad88], 0
// 007fce91  0f85a9000000         jne 0x7fcf40
// 007fce97  56                   push esi
// 007fce98  e8816cffff           call 0x7f3b1e
// 007fce9d  8b7008               mov esi, dword ptr [eax + 8]
// 007fcea0  ff1524b29800         call dword ptr [0x98b224]
// 007fcea6  50                   push eax
// 007fcea7  56                   push esi
// 007fcea8  68e0bc7f00           push 0x7fbce0
// 007fcead  6a04                 push 4
// 007fceaf  ff15d0ca9800         call dword ptr [0x98cad0]
// 007fceb5  68709a7f00           push 0x7f9a70
// 007fceba  b910bbb900           mov ecx, 0xb9bb10
// 007fcebf  a388adb900           mov dword ptr [0xb9ad88], eax
// 007fcec4  e873951200           call 0x92643c
// 007fcec9  5e                   pop esi
// 007fceca  85c0                 test eax, eax
// 007fcecc  7505                 jne 0x7fced3
// 007fcece  e8396cffff           call 0x7f3b0c
// 007fced3  57                   push edi
// 007fced4  8bc8                 mov ecx, eax
// 007fced6  e8b53f0700           call 0x870e90
// 007fcedb  893d8cadb900         mov dword ptr [0xb9ad8c], edi
// 007fcee1  5f                   pop edi
// 007fcee2  c20400               ret 4
// 007fcee5  a188adb900           mov eax, dword ptr [0xb9ad88]
// 007fceea  85c0                 test eax, eax
// 007fceec  7449                 je 0x7fcf37
// 007fceee  393d8cadb900         cmp dword ptr [0xb9ad8c], edi
// 007fcef4  7541                 jne 0x7fcf37
// 007fcef6  50                   push eax
// 007fcef7  ff15ccca9800         call dword ptr [0x98cacc]
// 007fcefd  68709a7f00           push 0x7f9a70
// 007fcf02  b910bbb900           mov ecx, 0xb9bb10
// 007fcf07  e830951200           call 0x92643c
// 007fcf0c  85c0                 test eax, eax
// 007fcf0e  7505                 jne 0x7fcf15
// 007fcf10  e8f76bffff           call 0x7f3b0c
// 007fcf15  8b0d8cadb900         mov ecx, dword ptr [0xb9ad8c]
// 007fcf1b  51                   push ecx
// 007fcf1c  8bc8                 mov ecx, eax
// 007fcf1e  e8ad3f0700           call 0x870ed0
// 007fcf23  c70588adb90000000000 mov dword ptr [0xb9ad88], 0
// 007fcf2d  c7058cadb90000000000 mov dword ptr [0xb9ad8c], 0
// 007fcf37  6a00                 push 0
// 007fcf39  8bcf                 mov ecx, edi
// 007fcf3b  e840edffff           call 0x7fbc80
// 007fcf40  5f                   pop edi
// 007fcf41  c20400               ret 4
// copied from an identical function in another client (function ?SetupMessageHook@CXTPControlComboBoxAutoCompleteWnd@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp