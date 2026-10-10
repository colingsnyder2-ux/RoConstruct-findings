// roc 2008-06 006fb7b0  unit: CXTPPropertyGrid  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb7b0
//
// 006fb7b0  83ec10               sub esp, 0x10
// 006fb7b3  53                   push ebx
// 006fb7b4  55                   push ebp
// 006fb7b5  8b6970               mov ebp, dword ptr [ecx + 0x70]
// 006fb7b8  56                   push esi
// 006fb7b9  57                   push edi
// 006fb7ba  6800e80000           push 0xe800
// 006fb7bf  83ec10               sub esp, 0x10
// 006fb7c2  8bc4                 mov eax, esp
// 006fb7c4  33d2                 xor edx, edx
// 006fb7c6  8910                 mov dword ptr [eax], edx
// 006fb7c8  33db                 xor ebx, ebx
// 006fb7ca  6800208050           push 0x50802000
// 006fb7cf  8d7170               lea esi, [ecx + 0x70]
// 006fb7d2  33ff                 xor edi, edi
// 006fb7d4  897804               mov dword ptr [eax + 4], edi
// 006fb7d7  895808               mov dword ptr [eax + 8], ebx
// 006fb7da  8bd3                 mov edx, ebx
// 006fb7dc  6800880000           push 0x8800
// 006fb7e1  89500c               mov dword ptr [eax + 0xc], edx
// 006fb7e4  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 006fb7ea  51                   push ecx
// 006fb7eb  8bce                 mov ecx, esi
// 006fb7ed  895c243c             mov dword ptr [esp + 0x3c], ebx
// 006fb7f1  ffd0                 call eax
// 006fb7f3  e848420200           call 0x71fa40
// 006fb7f8  8b10                 mov edx, dword ptr [eax]
// 006fb7fa  681c250000           push 0x251c
// 006fb7ff  8bc8                 mov ecx, eax
// 006fb801  8b4210               mov eax, dword ptr [edx + 0x10]
// 006fb804  56                   push esi
// 006fb805  ffd0                 call eax
// 006fb807  5f                   pop edi
// 006fb808  5e                   pop esi
// 006fb809  5d                   pop ebp
// 006fb80a  5b                   pop ebx
// 006fb80b  83c410               add esp, 0x10
// 006fb80e  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?CreateToolbar@CXTPPropertyGrid@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp
