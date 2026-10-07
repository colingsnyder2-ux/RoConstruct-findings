// roc 2007-08 0067af30  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067af30
//
// 0067af30  83ec20               sub esp, 0x20
// 0067af33  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 0067af38  53                   push ebx
// 0067af39  55                   push ebp
// 0067af3a  56                   push esi
// 0067af3b  57                   push edi
// 0067af3c  8bf1                 mov esi, ecx
// 0067af3e  0f85ce000000         jne 0x67b012
// 0067af44  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0067af48  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0067af4c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0067af50  53                   push ebx
// 0067af51  8d442440             lea eax, [esp + 0x40]
// 0067af55  50                   push eax
// 0067af56  57                   push edi
// 0067af57  55                   push ebp
// 0067af58  897c2448             mov dword ptr [esp + 0x48], edi
// 0067af5c  e8fffcffff           call 0x67ac60
// 0067af61  53                   push ebx
// 0067af62  8d4c2440             lea ecx, [esp + 0x40]
// 0067af66  51                   push ecx
// 0067af67  6a00                 push 0
// 0067af69  55                   push ebp
// 0067af6a  8bce                 mov ecx, esi
// 0067af6c  89442444             mov dword ptr [esp + 0x44], eax
// 0067af70  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0067af78  e8e3fcffff           call 0x67ac60
// 0067af7d  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0067af81  7462                 je 0x67afe5
// 0067af83  85ff                 test edi, edi
// 0067af85  7e5e                 jle 0x67afe5
// 0067af87  eb07                 jmp 0x67af90
// 0067af89  8da42400000000       lea esp, [esp]
// 0067af90  8b542440             mov edx, dword ptr [esp + 0x40]
// 0067af94  8b442438             mov eax, dword ptr [esp + 0x38]
// 0067af98  03c2                 add eax, edx
// 0067af9a  99                   cdq 
// 0067af9b  2bc2                 sub eax, edx
// 0067af9d  53                   push ebx
// 0067af9e  8bf8                 mov edi, eax
// 0067afa0  8d4c2440             lea ecx, [esp + 0x40]
// 0067afa4  51                   push ecx
// 0067afa5  d1ff                 sar edi, 1
// 0067afa7  57                   push edi
// 0067afa8  55                   push ebp
// 0067afa9  8bce                 mov ecx, esi
// 0067afab  e8b0fcffff           call 0x67ac60
// 0067afb0  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0067afb4  7506                 jne 0x67afbc
// 0067afb6  897c2438             mov dword ptr [esp + 0x38], edi
// 0067afba  eb0a                 jmp 0x67afc6
// 0067afbc  397c2440             cmp dword ptr [esp + 0x40], edi
// 0067afc0  7410                 je 0x67afd2
// 0067afc2  897c2440             mov dword ptr [esp + 0x40], edi
// 0067afc6  8b542438             mov edx, dword ptr [esp + 0x38]
// 0067afca  39542440             cmp dword ptr [esp + 0x40], edx
// 0067afce  7cc0                 jl 0x67af90
// 0067afd0  eb13                 jmp 0x67afe5
// 0067afd2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0067afd6  53                   push ebx
// 0067afd7  8d442440             lea eax, [esp + 0x40]
// 0067afdb  50                   push eax
// 0067afdc  51                   push ecx
// 0067afdd  55                   push ebp
// 0067afde  8bce                 mov ecx, esi
// 0067afe0  e87bfcffff           call 0x67ac60
// 0067afe5  6a00                 push 0
// 0067afe7  53                   push ebx
// 0067afe8  55                   push ebp
// 0067afe9  8d542424             lea edx, [esp + 0x24]
// 0067afed  52                   push edx
// 0067afee  8bce                 mov ecx, esi
// 0067aff0  e8cbfaffff           call 0x67aac0
// 0067aff5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067aff9  53                   push ebx
// 0067affa  8d442440             lea eax, [esp + 0x40]
// 0067affe  50                   push eax
// 0067afff  51                   push ecx
// 0067b000  55                   push ebp
// 0067b001  8bce                 mov ecx, esi
// 0067b003  e858fcffff           call 0x67ac60
// 0067b008  5f                   pop edi
// 0067b009  5e                   pop esi
// 0067b00a  5d                   pop ebp
// 0067b00b  5b                   pop ebx
// 0067b00c  83c420               add esp, 0x20
// 0067b00f  c21000               ret 0x10
// 0067b012  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0067b016  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0067b01a  57                   push edi
// 0067b01b  8d542440             lea edx, [esp + 0x40]
// 0067b01f  52                   push edx
// 0067b020  6a00                 push 0
// 0067b022  53                   push ebx
// 0067b023  e838fcffff           call 0x67ac60
// 0067b028  6a00                 push 0
// 0067b02a  57                   push edi
// 0067b02b  53                   push ebx
// 0067b02c  8d442424             lea eax, [esp + 0x24]
// 0067b030  50                   push eax
// 0067b031  8bce                 mov ecx, esi
// 0067b033  e888faffff           call 0x67aac0
// 0067b038  8b4804               mov ecx, dword ptr [eax + 4]
// 0067b03b  8b28                 mov ebp, dword ptr [eax]
// 0067b03d  57                   push edi
// 0067b03e  8d542440             lea edx, [esp + 0x40]
// 0067b042  52                   push edx
// 0067b043  68ff7f0000           push 0x7fff
// 0067b048  894c2428             mov dword ptr [esp + 0x28], ecx
// 0067b04c  53                   push ebx
// 0067b04d  8bce                 mov ecx, esi
// 0067b04f  e80cfcffff           call 0x67ac60
// 0067b054  6a00                 push 0
// 0067b056  57                   push edi
// 0067b057  53                   push ebx
// 0067b058  8d44242c             lea eax, [esp + 0x2c]
// 0067b05c  50                   push eax
// 0067b05d  8bce                 mov ecx, esi
// 0067b05f  e85cfaffff           call 0x67aac0
// 0067b064  8b08                 mov ecx, dword ptr [eax]
// 0067b066  3be9                 cmp ebp, ecx
// 0067b068  8b5004               mov edx, dword ptr [eax + 4]
// 0067b06b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067b06f  89542414             mov dword ptr [esp + 0x14], edx
// 0067b073  7d7f                 jge 0x67b0f4
// 0067b075  57                   push edi
// 0067b076  8d442440             lea eax, [esp + 0x40]
// 0067b07a  50                   push eax
// 0067b07b  8d0429               lea eax, [ecx + ebp]
// 0067b07e  99                   cdq 
// 0067b07f  2bc2                 sub eax, edx
// 0067b081  d1f8                 sar eax, 1
// 0067b083  50                   push eax
// 0067b084  53                   push ebx
// 0067b085  8bce                 mov ecx, esi
// 0067b087  e8d4fbffff           call 0x67ac60
// 0067b08c  6a00                 push 0
// 0067b08e  57                   push edi
// 0067b08f  53                   push ebx
// 0067b090  8d4c242c             lea ecx, [esp + 0x2c]
// 0067b094  51                   push ecx
// 0067b095  8bce                 mov ecx, esi
// 0067b097  e824faffff           call 0x67aac0
// 0067b09c  8b10                 mov edx, dword ptr [eax]
// 0067b09e  8b4804               mov ecx, dword ptr [eax + 4]
// 0067b0a1  89542428             mov dword ptr [esp + 0x28], edx
// 0067b0a5  8b542438             mov edx, dword ptr [esp + 0x38]
// 0067b0a9  3bd1                 cmp edx, ecx
// 0067b0ab  7d19                 jge 0x67b0c6
// 0067b0ad  8b08                 mov ecx, dword ptr [eax]
// 0067b0af  3be9                 cmp ebp, ecx
// 0067b0b1  8b5004               mov edx, dword ptr [eax + 4]
// 0067b0b4  7506                 jne 0x67b0bc
// 0067b0b6  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0067b0ba  7425                 je 0x67b0e1
// 0067b0bc  8bc2                 mov eax, edx
// 0067b0be  8be9                 mov ebp, ecx
// 0067b0c0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067b0c4  eb0f                 jmp 0x67b0d5
// 0067b0c6  7e2c                 jle 0x67b0f4
// 0067b0c8  8b08                 mov ecx, dword ptr [eax]
// 0067b0ca  8b5004               mov edx, dword ptr [eax + 4]
// 0067b0cd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0067b0d1  89542414             mov dword ptr [esp + 0x14], edx
// 0067b0d5  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0067b0d9  7d19                 jge 0x67b0f4
// 0067b0db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067b0df  eb94                 jmp 0x67b075
// 0067b0e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067b0e5  57                   push edi
// 0067b0e6  8d442440             lea eax, [esp + 0x40]
// 0067b0ea  50                   push eax
// 0067b0eb  51                   push ecx
// 0067b0ec  53                   push ebx
// 0067b0ed  8bce                 mov ecx, esi
// 0067b0ef  e86cfbffff           call 0x67ac60
// 0067b0f4  5f                   pop edi
// 0067b0f5  5e                   pop esi
// 0067b0f6  5d                   pop ebp
// 0067b0f7  5b                   pop ebx
// 0067b0f8  83c420               add esp, 0x20
// 0067b0fb  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
