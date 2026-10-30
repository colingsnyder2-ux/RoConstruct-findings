// roc 2012-06 009cfa50  unit: CXTPControls  size: 462 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cfa50
//
// 009cfa50  83ec20               sub esp, 0x20
// 009cfa53  f644242c20           test byte ptr [esp + 0x2c], 0x20
// 009cfa58  53                   push ebx
// 009cfa59  55                   push ebp
// 009cfa5a  56                   push esi
// 009cfa5b  57                   push edi
// 009cfa5c  8bf1                 mov esi, ecx
// 009cfa5e  0f85ce000000         jne 0x9cfb32
// 009cfa64  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 009cfa68  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 009cfa6c  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009cfa70  53                   push ebx
// 009cfa71  8d442440             lea eax, [esp + 0x40]
// 009cfa75  50                   push eax
// 009cfa76  57                   push edi
// 009cfa77  55                   push ebp
// 009cfa78  897c2448             mov dword ptr [esp + 0x48], edi
// 009cfa7c  e80ffdffff           call 0x9cf790
// 009cfa81  53                   push ebx
// 009cfa82  8d4c2440             lea ecx, [esp + 0x40]
// 009cfa86  51                   push ecx
// 009cfa87  6a00                 push 0
// 009cfa89  55                   push ebp
// 009cfa8a  8bce                 mov ecx, esi
// 009cfa8c  89442444             mov dword ptr [esp + 0x44], eax
// 009cfa90  c744245000000000     mov dword ptr [esp + 0x50], 0
// 009cfa98  e8f3fcffff           call 0x9cf790
// 009cfa9d  3b442434             cmp eax, dword ptr [esp + 0x34]
// 009cfaa1  7462                 je 0x9cfb05
// 009cfaa3  85ff                 test edi, edi
// 009cfaa5  7e5e                 jle 0x9cfb05
// 009cfaa7  eb07                 jmp 0x9cfab0
// 009cfaa9  8da42400000000       lea esp, [esp]
// 009cfab0  8b542440             mov edx, dword ptr [esp + 0x40]
// 009cfab4  8b442438             mov eax, dword ptr [esp + 0x38]
// 009cfab8  03c2                 add eax, edx
// 009cfaba  99                   cdq 
// 009cfabb  2bc2                 sub eax, edx
// 009cfabd  53                   push ebx
// 009cfabe  8bf8                 mov edi, eax
// 009cfac0  8d4c2440             lea ecx, [esp + 0x40]
// 009cfac4  51                   push ecx
// 009cfac5  d1ff                 sar edi, 1
// 009cfac7  57                   push edi
// 009cfac8  55                   push ebp
// 009cfac9  8bce                 mov ecx, esi
// 009cfacb  e8c0fcffff           call 0x9cf790
// 009cfad0  3b442434             cmp eax, dword ptr [esp + 0x34]
// 009cfad4  7506                 jne 0x9cfadc
// 009cfad6  897c2438             mov dword ptr [esp + 0x38], edi
// 009cfada  eb0a                 jmp 0x9cfae6
// 009cfadc  397c2440             cmp dword ptr [esp + 0x40], edi
// 009cfae0  7410                 je 0x9cfaf2
// 009cfae2  897c2440             mov dword ptr [esp + 0x40], edi
// 009cfae6  8b542438             mov edx, dword ptr [esp + 0x38]
// 009cfaea  39542440             cmp dword ptr [esp + 0x40], edx
// 009cfaee  7cc0                 jl 0x9cfab0
// 009cfaf0  eb13                 jmp 0x9cfb05
// 009cfaf2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009cfaf6  53                   push ebx
// 009cfaf7  8d442440             lea eax, [esp + 0x40]
// 009cfafb  50                   push eax
// 009cfafc  51                   push ecx
// 009cfafd  55                   push ebp
// 009cfafe  8bce                 mov ecx, esi
// 009cfb00  e88bfcffff           call 0x9cf790
// 009cfb05  6a00                 push 0
// 009cfb07  53                   push ebx
// 009cfb08  55                   push ebp
// 009cfb09  8d542424             lea edx, [esp + 0x24]
// 009cfb0d  52                   push edx
// 009cfb0e  8bce                 mov ecx, esi
// 009cfb10  e8dbfaffff           call 0x9cf5f0
// 009cfb15  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009cfb19  53                   push ebx
// 009cfb1a  8d442440             lea eax, [esp + 0x40]
// 009cfb1e  50                   push eax
// 009cfb1f  51                   push ecx
// 009cfb20  55                   push ebp
// 009cfb21  8bce                 mov ecx, esi
// 009cfb23  e868fcffff           call 0x9cf790
// 009cfb28  5f                   pop edi
// 009cfb29  5e                   pop esi
// 009cfb2a  5d                   pop ebp
// 009cfb2b  5b                   pop ebx
// 009cfb2c  83c420               add esp, 0x20
// 009cfb2f  c21000               ret 0x10
// 009cfb32  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 009cfb36  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009cfb3a  57                   push edi
// 009cfb3b  8d542440             lea edx, [esp + 0x40]
// 009cfb3f  52                   push edx
// 009cfb40  6a00                 push 0
// 009cfb42  53                   push ebx
// 009cfb43  e848fcffff           call 0x9cf790
// 009cfb48  6a00                 push 0
// 009cfb4a  57                   push edi
// 009cfb4b  53                   push ebx
// 009cfb4c  8d442424             lea eax, [esp + 0x24]
// 009cfb50  50                   push eax
// 009cfb51  8bce                 mov ecx, esi
// 009cfb53  e898faffff           call 0x9cf5f0
// 009cfb58  8b4804               mov ecx, dword ptr [eax + 4]
// 009cfb5b  8b28                 mov ebp, dword ptr [eax]
// 009cfb5d  57                   push edi
// 009cfb5e  8d542440             lea edx, [esp + 0x40]
// 009cfb62  52                   push edx
// 009cfb63  68ff7f0000           push 0x7fff
// 009cfb68  894c2428             mov dword ptr [esp + 0x28], ecx
// 009cfb6c  53                   push ebx
// 009cfb6d  8bce                 mov ecx, esi
// 009cfb6f  e81cfcffff           call 0x9cf790
// 009cfb74  6a00                 push 0
// 009cfb76  57                   push edi
// 009cfb77  53                   push ebx
// 009cfb78  8d44242c             lea eax, [esp + 0x2c]
// 009cfb7c  50                   push eax
// 009cfb7d  8bce                 mov ecx, esi
// 009cfb7f  e86cfaffff           call 0x9cf5f0
// 009cfb84  8b08                 mov ecx, dword ptr [eax]
// 009cfb86  3be9                 cmp ebp, ecx
// 009cfb88  8b5004               mov edx, dword ptr [eax + 4]
// 009cfb8b  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cfb8f  89542414             mov dword ptr [esp + 0x14], edx
// 009cfb93  7d7f                 jge 0x9cfc14
// 009cfb95  57                   push edi
// 009cfb96  8d442440             lea eax, [esp + 0x40]
// 009cfb9a  50                   push eax
// 009cfb9b  8d0429               lea eax, [ecx + ebp]
// 009cfb9e  99                   cdq 
// 009cfb9f  2bc2                 sub eax, edx
// 009cfba1  d1f8                 sar eax, 1
// 009cfba3  50                   push eax
// 009cfba4  53                   push ebx
// 009cfba5  8bce                 mov ecx, esi
// 009cfba7  e8e4fbffff           call 0x9cf790
// 009cfbac  6a00                 push 0
// 009cfbae  57                   push edi
// 009cfbaf  53                   push ebx
// 009cfbb0  8d4c242c             lea ecx, [esp + 0x2c]
// 009cfbb4  51                   push ecx
// 009cfbb5  8bce                 mov ecx, esi
// 009cfbb7  e834faffff           call 0x9cf5f0
// 009cfbbc  8b10                 mov edx, dword ptr [eax]
// 009cfbbe  8b4804               mov ecx, dword ptr [eax + 4]
// 009cfbc1  89542428             mov dword ptr [esp + 0x28], edx
// 009cfbc5  8b542438             mov edx, dword ptr [esp + 0x38]
// 009cfbc9  3bd1                 cmp edx, ecx
// 009cfbcb  7d19                 jge 0x9cfbe6
// 009cfbcd  8b08                 mov ecx, dword ptr [eax]
// 009cfbcf  8b5004               mov edx, dword ptr [eax + 4]
// 009cfbd2  3be9                 cmp ebp, ecx
// 009cfbd4  7506                 jne 0x9cfbdc
// 009cfbd6  3954241c             cmp dword ptr [esp + 0x1c], edx
// 009cfbda  7425                 je 0x9cfc01
// 009cfbdc  8bc2                 mov eax, edx
// 009cfbde  8be9                 mov ebp, ecx
// 009cfbe0  8944241c             mov dword ptr [esp + 0x1c], eax
// 009cfbe4  eb0f                 jmp 0x9cfbf5
// 009cfbe6  7e2c                 jle 0x9cfc14
// 009cfbe8  8b08                 mov ecx, dword ptr [eax]
// 009cfbea  8b5004               mov edx, dword ptr [eax + 4]
// 009cfbed  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cfbf1  89542414             mov dword ptr [esp + 0x14], edx
// 009cfbf5  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 009cfbf9  7d19                 jge 0x9cfc14
// 009cfbfb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cfbff  eb94                 jmp 0x9cfb95
// 009cfc01  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cfc05  57                   push edi
// 009cfc06  8d442440             lea eax, [esp + 0x40]
// 009cfc0a  50                   push eax
// 009cfc0b  51                   push ecx
// 009cfc0c  53                   push ebx
// 009cfc0d  8bce                 mov ecx, esi
// 009cfc0f  e87cfbffff           call 0x9cf790
// 009cfc14  5f                   pop edi
// 009cfc15  5e                   pop esi
// 009cfc16  5d                   pop ebp
// 009cfc17  5b                   pop ebx
// 009cfc18  83c420               add esp, 0x20
// 009cfc1b  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizeFloatableBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HKABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
