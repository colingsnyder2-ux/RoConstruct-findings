// roc 2009-12 00857e20  unit: CXTPTabClientWnd  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857e20
//
// 00857e20  83ec14               sub esp, 0x14
// 00857e23  56                   push esi
// 00857e24  57                   push edi
// 00857e25  8bf1                 mov esi, ecx
// 00857e27  33ff                 xor edi, edi
// 00857e29  e822e8ffff           call 0x856650
// 00857e2e  85c0                 test eax, eax
// 00857e30  7e56                 jle 0x857e88
// 00857e32  53                   push ebx
// 00857e33  57                   push edi
// 00857e34  8bce                 mov ecx, esi
// 00857e36  e805f7ffff           call 0x857540
// 00857e3b  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00857e42  8b5034               mov edx, dword ptr [eax + 0x34]
// 00857e45  7513                 jne 0x857e5a
// 00857e47  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00857e4a  8b5840               mov ebx, dword ptr [eax + 0x40]
// 00857e4d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00857e51  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00857e54  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00857e58  eb11                 jmp 0x857e6b
// 00857e5a  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00857e5d  89542410             mov dword ptr [esp + 0x10], edx
// 00857e61  8b5038               mov edx, dword ptr [eax + 0x38]
// 00857e64  894c2418             mov dword ptr [esp + 0x18], ecx
// 00857e68  8b4840               mov ecx, dword ptr [eax + 0x40]
// 00857e6b  2bca                 sub ecx, edx
// 00857e6d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00857e71  db44240c             fild dword ptr [esp + 0xc]
// 00857e75  8bce                 mov ecx, esi
// 00857e77  47                   inc edi
// 00857e78  dd9898000000         fstp qword ptr [eax + 0x98]
// 00857e7e  e8cde7ffff           call 0x856650
// 00857e83  3bf8                 cmp edi, eax
// 00857e85  7cac                 jl 0x857e33
// 00857e87  5b                   pop ebx
// 00857e88  5f                   pop edi
// 00857e89  5e                   pop esi
// 00857e8a  83c414               add esp, 0x14
// 00857e8d  c3                   ret 
// copied from an identical function in another client (function ?NormalizeWorkspaceSize@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp