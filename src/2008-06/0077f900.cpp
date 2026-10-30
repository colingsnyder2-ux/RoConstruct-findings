// from server: 100% by auto
// roc 2008-06 0077f900  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077f900
//
// 0077f900  83ec10               sub esp, 0x10
// 0077f903  53                   push ebx
// 0077f904  55                   push ebp
// 0077f905  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0077f909  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0077f90c  56                   push esi
// 0077f90d  57                   push edi
// 0077f90e  33ff                 xor edi, edi
// 0077f910  33db                 xor ebx, ebx
// 0077f912  3bc7                 cmp eax, edi
// 0077f914  894c2418             mov dword ptr [esp + 0x18], ecx
// 0077f918  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0077f920  897c2414             mov dword ptr [esp + 0x14], edi
// 0077f924  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077f928  897c2424             mov dword ptr [esp + 0x24], edi
// 0077f92c  7e6d                 jle 0x77f99b
// 0077f92e  8bff                 mov edi, edi
// 0077f930  85ff                 test edi, edi
// 0077f932  7c0d                 jl 0x77f941
// 0077f934  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 0077f937  7d08                 jge 0x77f941
// 0077f939  8b4558               mov eax, dword ptr [ebp + 0x58]
// 0077f93c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0077f93f  eb02                 jmp 0x77f943
// 0077f941  33f6                 xor esi, esi
// 0077f943  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0077f946  397104               cmp dword ptr [ecx + 4], esi
// 0077f949  7504                 jne 0x77f94f
// 0077f94b  89742424             mov dword ptr [esp + 0x24], esi
// 0077f94f  8bce                 mov ecx, esi
// 0077f951  e88ae5f8ff           call 0x70dee0
// 0077f956  85c0                 test eax, eax
// 0077f958  7419                 je 0x77f973
// 0077f95a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077f95e  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 0077f964  8b01                 mov eax, dword ptr [ecx]
// 0077f966  8b542428             mov edx, dword ptr [esp + 0x28]
// 0077f96a  8b4018               mov eax, dword ptr [eax + 0x18]
// 0077f96d  56                   push esi
// 0077f96e  52                   push edx
// 0077f96f  ffd0                 call eax
// 0077f971  eb02                 jmp 0x77f975
// 0077f973  33c0                 xor eax, eax
// 0077f975  8d0c18               lea ecx, [eax + ebx]
// 0077f978  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 0077f97c  894620               mov dword ptr [esi + 0x20], eax
// 0077f97f  894624               mov dword ptr [esi + 0x24], eax
// 0077f982  7e0a                 jle 0x77f98e
// 0077f984  85db                 test ebx, ebx
// 0077f986  7406                 je 0x77f98e
// 0077f988  33db                 xor ebx, ebx
// 0077f98a  ff442410             inc dword ptr [esp + 0x10]
// 0077f98e  01442414             add dword ptr [esp + 0x14], eax
// 0077f992  47                   inc edi
// 0077f993  03d8                 add ebx, eax
// 0077f995  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0077f999  7c95                 jl 0x77f930
// 0077f99b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077f99f  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 0077f9a5  52                   push edx
// 0077f9a6  e865bdffff           call 0x77b710
// 0077f9ab  837c241001           cmp dword ptr [esp + 0x10], 1
// 0077f9b0  8bf0                 mov esi, eax
// 0077f9b2  7451                 je 0x77fa05
// 0077f9b4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077f9b8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077f9bc  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077f9c0  50                   push eax
// 0077f9c1  6a00                 push 0
// 0077f9c3  51                   push ecx
// 0077f9c4  55                   push ebp
// 0077f9c5  8bcf                 mov ecx, edi
// 0077f9c7  c7460400000000       mov dword ptr [esi + 4], 0
// 0077f9ce  c70600000000         mov dword ptr [esi], 0
// 0077f9d4  e807feffff           call 0x77f7e0
// 0077f9d9  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 0077f9e0  7523                 jne 0x77fa05
// 0077f9e2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077f9e6  85c0                 test eax, eax
// 0077f9e8  741b                 je 0x77fa05
// 0077f9ea  8b4064               mov eax, dword ptr [eax + 0x64]
// 0077f9ed  8b3e                 mov edi, dword ptr [esi]
// 0077f9ef  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 0077f9f2  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 0077f9f6  893cc6               mov dword ptr [esi + eax*8], edi
// 0077f9f9  8b7e04               mov edi, dword ptr [esi + 4]
// 0077f9fc  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 0077fa00  890e                 mov dword ptr [esi], ecx
// 0077fa02  895604               mov dword ptr [esi + 4], edx
// 0077fa05  5f                   pop edi
// 0077fa06  5e                   pop esi
// 0077fa07  5d                   pop ebp
// 0077fa08  5b                   pop ebx
// 0077fa09  83c410               add esp, 0x10
// 0077fa0c  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
