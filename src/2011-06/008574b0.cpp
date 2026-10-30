// roc 2011-06 008574b0  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008574b0
//
// 008574b0  83ec18               sub esp, 0x18
// 008574b3  53                   push ebx
// 008574b4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008574b8  55                   push ebp
// 008574b9  56                   push esi
// 008574ba  57                   push edi
// 008574bb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008574bf  57                   push edi
// 008574c0  8d442434             lea eax, [esp + 0x34]
// 008574c4  50                   push eax
// 008574c5  6a00                 push 0
// 008574c7  53                   push ebx
// 008574c8  8bf1                 mov esi, ecx
// 008574ca  e8f1fdffff           call 0x8572c0
// 008574cf  6a00                 push 0
// 008574d1  57                   push edi
// 008574d2  53                   push ebx
// 008574d3  8d4c2424             lea ecx, [esp + 0x24]
// 008574d7  51                   push ecx
// 008574d8  8bce                 mov ecx, esi
// 008574da  e841fcffff           call 0x857120
// 008574df  8b28                 mov ebp, dword ptr [eax]
// 008574e1  8b5004               mov edx, dword ptr [eax + 4]
// 008574e4  57                   push edi
// 008574e5  8d442434             lea eax, [esp + 0x34]
// 008574e9  50                   push eax
// 008574ea  68ff7f0000           push 0x7fff
// 008574ef  53                   push ebx
// 008574f0  8bce                 mov ecx, esi
// 008574f2  8954242c             mov dword ptr [esp + 0x2c], edx
// 008574f6  e8c5fdffff           call 0x8572c0
// 008574fb  6a00                 push 0
// 008574fd  57                   push edi
// 008574fe  53                   push ebx
// 008574ff  8d4c242c             lea ecx, [esp + 0x2c]
// 00857503  51                   push ecx
// 00857504  8bce                 mov ecx, esi
// 00857506  e815fcffff           call 0x857120
// 0085750b  8b08                 mov ecx, dword ptr [eax]
// 0085750d  3be9                 cmp ebp, ecx
// 0085750f  8b5004               mov edx, dword ptr [eax + 4]
// 00857512  894c2410             mov dword ptr [esp + 0x10], ecx
// 00857516  89542414             mov dword ptr [esp + 0x14], edx
// 0085751a  7d5a                 jge 0x857576
// 0085751c  eb06                 jmp 0x857524
// 0085751e  8bff                 mov edi, edi
// 00857520  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00857524  57                   push edi
// 00857525  8d442434             lea eax, [esp + 0x34]
// 00857529  50                   push eax
// 0085752a  8d0429               lea eax, [ecx + ebp]
// 0085752d  99                   cdq 
// 0085752e  2bc2                 sub eax, edx
// 00857530  d1f8                 sar eax, 1
// 00857532  50                   push eax
// 00857533  53                   push ebx
// 00857534  8bce                 mov ecx, esi
// 00857536  e885fdffff           call 0x8572c0
// 0085753b  6a00                 push 0
// 0085753d  57                   push edi
// 0085753e  53                   push ebx
// 0085753f  8d4c242c             lea ecx, [esp + 0x2c]
// 00857543  51                   push ecx
// 00857544  8bce                 mov ecx, esi
// 00857546  e8d5fbffff           call 0x857120
// 0085754b  8b08                 mov ecx, dword ptr [eax]
// 0085754d  8b5004               mov edx, dword ptr [eax + 4]
// 00857550  3bd1                 cmp edx, ecx
// 00857552  7e12                 jle 0x857566
// 00857554  3be9                 cmp ebp, ecx
// 00857556  7506                 jne 0x85755e
// 00857558  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0085755c  7418                 je 0x857576
// 0085755e  8be9                 mov ebp, ecx
// 00857560  8954241c             mov dword ptr [esp + 0x1c], edx
// 00857564  eb0a                 jmp 0x857570
// 00857566  7d0e                 jge 0x857576
// 00857568  894c2410             mov dword ptr [esp + 0x10], ecx
// 0085756c  89542414             mov dword ptr [esp + 0x14], edx
// 00857570  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 00857574  7caa                 jl 0x857520
// 00857576  5f                   pop edi
// 00857577  5e                   pop esi
// 00857578  5d                   pop ebp
// 00857579  5b                   pop ebx
// 0085757a  83c418               add esp, 0x18
// 0085757d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
