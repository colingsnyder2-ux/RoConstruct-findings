// roc 2012-06 009cf980  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cf980
//
// 009cf980  83ec18               sub esp, 0x18
// 009cf983  53                   push ebx
// 009cf984  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009cf988  55                   push ebp
// 009cf989  56                   push esi
// 009cf98a  57                   push edi
// 009cf98b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 009cf98f  57                   push edi
// 009cf990  8d442434             lea eax, [esp + 0x34]
// 009cf994  50                   push eax
// 009cf995  6a00                 push 0
// 009cf997  53                   push ebx
// 009cf998  8bf1                 mov esi, ecx
// 009cf99a  e8f1fdffff           call 0x9cf790
// 009cf99f  6a00                 push 0
// 009cf9a1  57                   push edi
// 009cf9a2  53                   push ebx
// 009cf9a3  8d4c2424             lea ecx, [esp + 0x24]
// 009cf9a7  51                   push ecx
// 009cf9a8  8bce                 mov ecx, esi
// 009cf9aa  e841fcffff           call 0x9cf5f0
// 009cf9af  8b28                 mov ebp, dword ptr [eax]
// 009cf9b1  8b5004               mov edx, dword ptr [eax + 4]
// 009cf9b4  57                   push edi
// 009cf9b5  8d442434             lea eax, [esp + 0x34]
// 009cf9b9  50                   push eax
// 009cf9ba  68ff7f0000           push 0x7fff
// 009cf9bf  53                   push ebx
// 009cf9c0  8bce                 mov ecx, esi
// 009cf9c2  8954242c             mov dword ptr [esp + 0x2c], edx
// 009cf9c6  e8c5fdffff           call 0x9cf790
// 009cf9cb  6a00                 push 0
// 009cf9cd  57                   push edi
// 009cf9ce  53                   push ebx
// 009cf9cf  8d4c242c             lea ecx, [esp + 0x2c]
// 009cf9d3  51                   push ecx
// 009cf9d4  8bce                 mov ecx, esi
// 009cf9d6  e815fcffff           call 0x9cf5f0
// 009cf9db  8b08                 mov ecx, dword ptr [eax]
// 009cf9dd  3be9                 cmp ebp, ecx
// 009cf9df  8b5004               mov edx, dword ptr [eax + 4]
// 009cf9e2  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cf9e6  89542414             mov dword ptr [esp + 0x14], edx
// 009cf9ea  7d5a                 jge 0x9cfa46
// 009cf9ec  eb06                 jmp 0x9cf9f4
// 009cf9ee  8bff                 mov edi, edi
// 009cf9f0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cf9f4  57                   push edi
// 009cf9f5  8d442434             lea eax, [esp + 0x34]
// 009cf9f9  50                   push eax
// 009cf9fa  8d0429               lea eax, [ecx + ebp]
// 009cf9fd  99                   cdq 
// 009cf9fe  2bc2                 sub eax, edx
// 009cfa00  d1f8                 sar eax, 1
// 009cfa02  50                   push eax
// 009cfa03  53                   push ebx
// 009cfa04  8bce                 mov ecx, esi
// 009cfa06  e885fdffff           call 0x9cf790
// 009cfa0b  6a00                 push 0
// 009cfa0d  57                   push edi
// 009cfa0e  53                   push ebx
// 009cfa0f  8d4c242c             lea ecx, [esp + 0x2c]
// 009cfa13  51                   push ecx
// 009cfa14  8bce                 mov ecx, esi
// 009cfa16  e8d5fbffff           call 0x9cf5f0
// 009cfa1b  8b08                 mov ecx, dword ptr [eax]
// 009cfa1d  8b5004               mov edx, dword ptr [eax + 4]
// 009cfa20  3bd1                 cmp edx, ecx
// 009cfa22  7e12                 jle 0x9cfa36
// 009cfa24  3be9                 cmp ebp, ecx
// 009cfa26  7506                 jne 0x9cfa2e
// 009cfa28  3954241c             cmp dword ptr [esp + 0x1c], edx
// 009cfa2c  7418                 je 0x9cfa46
// 009cfa2e  8be9                 mov ebp, ecx
// 009cfa30  8954241c             mov dword ptr [esp + 0x1c], edx
// 009cfa34  eb0a                 jmp 0x9cfa40
// 009cfa36  7d0e                 jge 0x9cfa46
// 009cfa38  894c2410             mov dword ptr [esp + 0x10], ecx
// 009cfa3c  89542414             mov dword ptr [esp + 0x14], edx
// 009cfa40  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 009cfa44  7caa                 jl 0x9cf9f0
// 009cfa46  5f                   pop edi
// 009cfa47  5e                   pop esi
// 009cfa48  5d                   pop ebp
// 009cfa49  5b                   pop ebx
// 009cfa4a  83c418               add esp, 0x18
// 009cfa4d  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
