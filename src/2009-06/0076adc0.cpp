// roc 2009-06 0076adc0  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076adc0
//
// 0076adc0  83ec20               sub esp, 0x20
// 0076adc3  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 0076adc8  53                   push ebx
// 0076adc9  55                   push ebp
// 0076adca  56                   push esi
// 0076adcb  57                   push edi
// 0076adcc  8bf1                 mov esi, ecx
// 0076adce  0f85ce000000         jne 0x76aea2
// 0076add4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0076add8  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0076addc  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0076ade0  53                   push ebx
// 0076ade1  8d442440             lea eax, [esp + 0x40]
// 0076ade5  50                   push eax
// 0076ade6  57                   push edi
// 0076ade7  55                   push ebp
// 0076ade8  897c2448             mov dword ptr [esp + 0x48], edi
// 0076adec  e80ffdffff           call 0x76ab00
// 0076adf1  53                   push ebx
// 0076adf2  8d4c2440             lea ecx, [esp + 0x40]
// 0076adf6  51                   push ecx
// 0076adf7  6a00                 push 0
// 0076adf9  55                   push ebp
// 0076adfa  8bce                 mov ecx, esi
// 0076adfc  89442444             mov dword ptr [esp + 0x44], eax
// 0076ae00  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0076ae08  e8f3fcffff           call 0x76ab00
// 0076ae0d  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0076ae11  7462                 je 0x76ae75
// 0076ae13  85ff                 test edi, edi
// 0076ae15  7e5e                 jle 0x76ae75
// 0076ae17  eb07                 jmp 0x76ae20
// 0076ae19  8da42400000000       lea esp, [esp]
// 0076ae20  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076ae24  8b442438             mov eax, dword ptr [esp + 0x38]
// 0076ae28  03c2                 add eax, edx
// 0076ae2a  99                   cdq 
// 0076ae2b  2bc2                 sub eax, edx
// 0076ae2d  53                   push ebx
// 0076ae2e  8bf8                 mov edi, eax
// 0076ae30  8d4c2440             lea ecx, [esp + 0x40]
// 0076ae34  51                   push ecx
// 0076ae35  d1ff                 sar edi, 1
// 0076ae37  57                   push edi
// 0076ae38  55                   push ebp
// 0076ae39  8bce                 mov ecx, esi
// 0076ae3b  e8c0fcffff           call 0x76ab00
// 0076ae40  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0076ae44  7506                 jne 0x76ae4c
// 0076ae46  897c2438             mov dword ptr [esp + 0x38], edi
// 0076ae4a  eb0a                 jmp 0x76ae56
// 0076ae4c  397c2440             cmp dword ptr [esp + 0x40], edi
// 0076ae50  7410                 je 0x76ae62
// 0076ae52  897c2440             mov dword ptr [esp + 0x40], edi
// 0076ae56  8b542438             mov edx, dword ptr [esp + 0x38]
// 0076ae5a  39542440             cmp dword ptr [esp + 0x40], edx
// 0076ae5e  7cc0                 jl 0x76ae20
// 0076ae60  eb13                 jmp 0x76ae75
// 0076ae62  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0076ae66  53                   push ebx
// 0076ae67  8d442440             lea eax, [esp + 0x40]
// 0076ae6b  50                   push eax
// 0076ae6c  51                   push ecx
// 0076ae6d  55                   push ebp
// 0076ae6e  8bce                 mov ecx, esi
// 0076ae70  e88bfcffff           call 0x76ab00
// 0076ae75  6a00                 push 0
// 0076ae77  53                   push ebx
// 0076ae78  55                   push ebp
// 0076ae79  8d542424             lea edx, [esp + 0x24]
// 0076ae7d  52                   push edx
// 0076ae7e  8bce                 mov ecx, esi
// 0076ae80  e8dbfaffff           call 0x76a960
// 0076ae85  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076ae89  53                   push ebx
// 0076ae8a  8d442440             lea eax, [esp + 0x40]
// 0076ae8e  50                   push eax
// 0076ae8f  51                   push ecx
// 0076ae90  55                   push ebp
// 0076ae91  8bce                 mov ecx, esi
// 0076ae93  e868fcffff           call 0x76ab00
// 0076ae98  5f                   pop edi
// 0076ae99  5e                   pop esi
// 0076ae9a  5d                   pop ebp
// 0076ae9b  5b                   pop ebx
// 0076ae9c  83c420               add esp, 0x20
// 0076ae9f  c21000               ret 0x10
// 0076aea2  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0076aea6  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0076aeaa  57                   push edi
// 0076aeab  8d542440             lea edx, [esp + 0x40]
// 0076aeaf  52                   push edx
// 0076aeb0  6a00                 push 0
// 0076aeb2  53                   push ebx
// 0076aeb3  e848fcffff           call 0x76ab00
// 0076aeb8  6a00                 push 0
// 0076aeba  57                   push edi
// 0076aebb  53                   push ebx
// 0076aebc  8d442424             lea eax, [esp + 0x24]
// 0076aec0  50                   push eax
// 0076aec1  8bce                 mov ecx, esi
// 0076aec3  e898faffff           call 0x76a960
// 0076aec8  8b4804               mov ecx, dword ptr [eax + 4]
// 0076aecb  8b28                 mov ebp, dword ptr [eax]
// 0076aecd  57                   push edi
// 0076aece  8d542440             lea edx, [esp + 0x40]
// 0076aed2  52                   push edx
// 0076aed3  68ff7f0000           push 0x7fff
// 0076aed8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0076aedc  53                   push ebx
// 0076aedd  8bce                 mov ecx, esi
// 0076aedf  e81cfcffff           call 0x76ab00
// 0076aee4  6a00                 push 0
// 0076aee6  57                   push edi
// 0076aee7  53                   push ebx
// 0076aee8  8d44242c             lea eax, [esp + 0x2c]
// 0076aeec  50                   push eax
// 0076aeed  8bce                 mov ecx, esi
// 0076aeef  e86cfaffff           call 0x76a960
// 0076aef4  8b08                 mov ecx, dword ptr [eax]
// 0076aef6  3be9                 cmp ebp, ecx
// 0076aef8  8b5004               mov edx, dword ptr [eax + 4]
// 0076aefb  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076aeff  89542414             mov dword ptr [esp + 0x14], edx
// 0076af03  7d7f                 jge 0x76af84
// 0076af05  57                   push edi
// 0076af06  8d442440             lea eax, [esp + 0x40]
// 0076af0a  50                   push eax
// 0076af0b  8d0429               lea eax, [ecx + ebp]
// 0076af0e  99                   cdq 
// 0076af0f  2bc2                 sub eax, edx
// 0076af11  d1f8                 sar eax, 1
// 0076af13  50                   push eax
// 0076af14  53                   push ebx
// 0076af15  8bce                 mov ecx, esi
// 0076af17  e8e4fbffff           call 0x76ab00
// 0076af1c  6a00                 push 0
// 0076af1e  57                   push edi
// 0076af1f  53                   push ebx
// 0076af20  8d4c242c             lea ecx, [esp + 0x2c]
// 0076af24  51                   push ecx
// 0076af25  8bce                 mov ecx, esi
// 0076af27  e834faffff           call 0x76a960
// 0076af2c  8b10                 mov edx, dword ptr [eax]
// 0076af2e  8b4804               mov ecx, dword ptr [eax + 4]
// 0076af31  89542428             mov dword ptr [esp + 0x28], edx
// 0076af35  8b542438             mov edx, dword ptr [esp + 0x38]
// 0076af39  3bd1                 cmp edx, ecx
// 0076af3b  7d19                 jge 0x76af56
// 0076af3d  8b08                 mov ecx, dword ptr [eax]
// 0076af3f  8b5004               mov edx, dword ptr [eax + 4]
// 0076af42  3be9                 cmp ebp, ecx
// 0076af44  7506                 jne 0x76af4c
// 0076af46  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0076af4a  7425                 je 0x76af71
// 0076af4c  8bc2                 mov eax, edx
// 0076af4e  8be9                 mov ebp, ecx
// 0076af50  8944241c             mov dword ptr [esp + 0x1c], eax
// 0076af54  eb0f                 jmp 0x76af65
// 0076af56  7e2c                 jle 0x76af84
// 0076af58  8b08                 mov ecx, dword ptr [eax]
// 0076af5a  8b5004               mov edx, dword ptr [eax + 4]
// 0076af5d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076af61  89542414             mov dword ptr [esp + 0x14], edx
// 0076af65  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0076af69  7d19                 jge 0x76af84
// 0076af6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076af6f  eb94                 jmp 0x76af05
// 0076af71  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076af75  57                   push edi
// 0076af76  8d442440             lea eax, [esp + 0x40]
// 0076af7a  50                   push eax
// 0076af7b  51                   push ecx
// 0076af7c  53                   push ebx
// 0076af7d  8bce                 mov ecx, esi
// 0076af7f  e87cfbffff           call 0x76ab00
// 0076af84  5f                   pop edi
// 0076af85  5e                   pop esi
// 0076af86  5d                   pop ebp
// 0076af87  5b                   pop ebx
// 0076af88  83c420               add esp, 0x20
// 0076af8b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
