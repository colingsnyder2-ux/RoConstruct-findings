// roc 2011-06 00857580  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00857580
//
// 00857580  83ec20               sub esp, 0x20
// 00857583  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 00857588  53                   push ebx
// 00857589  55                   push ebp
// 0085758a  56                   push esi
// 0085758b  57                   push edi
// 0085758c  8bf1                 mov esi, ecx
// 0085758e  0f85ce000000         jne 0x857662
// 00857594  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00857598  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0085759c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008575a0  53                   push ebx
// 008575a1  8d442440             lea eax, [esp + 0x40]
// 008575a5  50                   push eax
// 008575a6  57                   push edi
// 008575a7  55                   push ebp
// 008575a8  897c2448             mov dword ptr [esp + 0x48], edi
// 008575ac  e80ffdffff           call 0x8572c0
// 008575b1  53                   push ebx
// 008575b2  8d4c2440             lea ecx, [esp + 0x40]
// 008575b6  51                   push ecx
// 008575b7  6a00                 push 0
// 008575b9  55                   push ebp
// 008575ba  8bce                 mov ecx, esi
// 008575bc  89442444             mov dword ptr [esp + 0x44], eax
// 008575c0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008575c8  e8f3fcffff           call 0x8572c0
// 008575cd  3b442434             cmp eax, dword ptr [esp + 0x34]
// 008575d1  7462                 je 0x857635
// 008575d3  85ff                 test edi, edi
// 008575d5  7e5e                 jle 0x857635
// 008575d7  eb07                 jmp 0x8575e0
// 008575d9  8da42400000000       lea esp, [esp]
// 008575e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 008575e4  8b442438             mov eax, dword ptr [esp + 0x38]
// 008575e8  03c2                 add eax, edx
// 008575ea  99                   cdq 
// 008575eb  2bc2                 sub eax, edx
// 008575ed  53                   push ebx
// 008575ee  8bf8                 mov edi, eax
// 008575f0  8d4c2440             lea ecx, [esp + 0x40]
// 008575f4  51                   push ecx
// 008575f5  d1ff                 sar edi, 1
// 008575f7  57                   push edi
// 008575f8  55                   push ebp
// 008575f9  8bce                 mov ecx, esi
// 008575fb  e8c0fcffff           call 0x8572c0
// 00857600  3b442434             cmp eax, dword ptr [esp + 0x34]
// 00857604  7506                 jne 0x85760c
// 00857606  897c2438             mov dword ptr [esp + 0x38], edi
// 0085760a  eb0a                 jmp 0x857616
// 0085760c  397c2440             cmp dword ptr [esp + 0x40], edi
// 00857610  7410                 je 0x857622
// 00857612  897c2440             mov dword ptr [esp + 0x40], edi
// 00857616  8b542438             mov edx, dword ptr [esp + 0x38]
// 0085761a  39542440             cmp dword ptr [esp + 0x40], edx
// 0085761e  7cc0                 jl 0x8575e0
// 00857620  eb13                 jmp 0x857635
// 00857622  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00857626  53                   push ebx
// 00857627  8d442440             lea eax, [esp + 0x40]
// 0085762b  50                   push eax
// 0085762c  51                   push ecx
// 0085762d  55                   push ebp
// 0085762e  8bce                 mov ecx, esi
// 00857630  e88bfcffff           call 0x8572c0
// 00857635  6a00                 push 0
// 00857637  53                   push ebx
// 00857638  55                   push ebp
// 00857639  8d542424             lea edx, [esp + 0x24]
// 0085763d  52                   push edx
// 0085763e  8bce                 mov ecx, esi
// 00857640  e8dbfaffff           call 0x857120
// 00857645  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00857649  53                   push ebx
// 0085764a  8d442440             lea eax, [esp + 0x40]
// 0085764e  50                   push eax
// 0085764f  51                   push ecx
// 00857650  55                   push ebp
// 00857651  8bce                 mov ecx, esi
// 00857653  e868fcffff           call 0x8572c0
// 00857658  5f                   pop edi
// 00857659  5e                   pop esi
// 0085765a  5d                   pop ebp
// 0085765b  5b                   pop ebx
// 0085765c  83c420               add esp, 0x20
// 0085765f  c21000               ret 0x10
// 00857662  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00857666  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0085766a  57                   push edi
// 0085766b  8d542440             lea edx, [esp + 0x40]
// 0085766f  52                   push edx
// 00857670  6a00                 push 0
// 00857672  53                   push ebx
// 00857673  e848fcffff           call 0x8572c0
// 00857678  6a00                 push 0
// 0085767a  57                   push edi
// 0085767b  53                   push ebx
// 0085767c  8d442424             lea eax, [esp + 0x24]
// 00857680  50                   push eax
// 00857681  8bce                 mov ecx, esi
// 00857683  e898faffff           call 0x857120
// 00857688  8b4804               mov ecx, dword ptr [eax + 4]
// 0085768b  8b28                 mov ebp, dword ptr [eax]
// 0085768d  57                   push edi
// 0085768e  8d542440             lea edx, [esp + 0x40]
// 00857692  52                   push edx
// 00857693  68ff7f0000           push 0x7fff
// 00857698  894c2428             mov dword ptr [esp + 0x28], ecx
// 0085769c  53                   push ebx
// 0085769d  8bce                 mov ecx, esi
// 0085769f  e81cfcffff           call 0x8572c0
// 008576a4  6a00                 push 0
// 008576a6  57                   push edi
// 008576a7  53                   push ebx
// 008576a8  8d44242c             lea eax, [esp + 0x2c]
// 008576ac  50                   push eax
// 008576ad  8bce                 mov ecx, esi
// 008576af  e86cfaffff           call 0x857120
// 008576b4  8b08                 mov ecx, dword ptr [eax]
// 008576b6  3be9                 cmp ebp, ecx
// 008576b8  8b5004               mov edx, dword ptr [eax + 4]
// 008576bb  894c2410             mov dword ptr [esp + 0x10], ecx
// 008576bf  89542414             mov dword ptr [esp + 0x14], edx
// 008576c3  7d7f                 jge 0x857744
// 008576c5  57                   push edi
// 008576c6  8d442440             lea eax, [esp + 0x40]
// 008576ca  50                   push eax
// 008576cb  8d0429               lea eax, [ecx + ebp]
// 008576ce  99                   cdq 
// 008576cf  2bc2                 sub eax, edx
// 008576d1  d1f8                 sar eax, 1
// 008576d3  50                   push eax
// 008576d4  53                   push ebx
// 008576d5  8bce                 mov ecx, esi
// 008576d7  e8e4fbffff           call 0x8572c0
// 008576dc  6a00                 push 0
// 008576de  57                   push edi
// 008576df  53                   push ebx
// 008576e0  8d4c242c             lea ecx, [esp + 0x2c]
// 008576e4  51                   push ecx
// 008576e5  8bce                 mov ecx, esi
// 008576e7  e834faffff           call 0x857120
// 008576ec  8b10                 mov edx, dword ptr [eax]
// 008576ee  8b4804               mov ecx, dword ptr [eax + 4]
// 008576f1  89542428             mov dword ptr [esp + 0x28], edx
// 008576f5  8b542438             mov edx, dword ptr [esp + 0x38]
// 008576f9  3bd1                 cmp edx, ecx
// 008576fb  7d19                 jge 0x857716
// 008576fd  8b08                 mov ecx, dword ptr [eax]
// 008576ff  8b5004               mov edx, dword ptr [eax + 4]
// 00857702  3be9                 cmp ebp, ecx
// 00857704  7506                 jne 0x85770c
// 00857706  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0085770a  7425                 je 0x857731
// 0085770c  8bc2                 mov eax, edx
// 0085770e  8be9                 mov ebp, ecx
// 00857710  8944241c             mov dword ptr [esp + 0x1c], eax
// 00857714  eb0f                 jmp 0x857725
// 00857716  7e2c                 jle 0x857744
// 00857718  8b08                 mov ecx, dword ptr [eax]
// 0085771a  8b5004               mov edx, dword ptr [eax + 4]
// 0085771d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00857721  89542414             mov dword ptr [esp + 0x14], edx
// 00857725  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00857729  7d19                 jge 0x857744
// 0085772b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085772f  eb94                 jmp 0x8576c5
// 00857731  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00857735  57                   push edi
// 00857736  8d442440             lea eax, [esp + 0x40]
// 0085773a  50                   push eax
// 0085773b  51                   push ecx
// 0085773c  53                   push ebx
// 0085773d  8bce                 mov ecx, esi
// 0085773f  e87cfbffff           call 0x8572c0
// 00857744  5f                   pop edi
// 00857745  5e                   pop esi
// 00857746  5d                   pop ebp
// 00857747  5b                   pop ebx
// 00857748  83c420               add esp, 0x20
// 0085774b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
