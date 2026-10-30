// roc 2009-12 00845340  unit: CXTPControls  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845340
//
// 00845340  51                   push ecx
// 00845341  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00845344  53                   push ebx
// 00845345  55                   push ebp
// 00845346  56                   push esi
// 00845347  57                   push edi
// 00845348  33ff                 xor edi, edi
// 0084534a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084534e  85c0                 test eax, eax
// 00845350  0f8e9d000000         jle 0x8453f3
// 00845356  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084535a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0084535e  8bff                 mov edi, edi
// 00845360  85ff                 test edi, edi
// 00845362  7c15                 jl 0x845379
// 00845364  3bf8                 cmp edi, eax
// 00845366  7d11                 jge 0x845379
// 00845368  3b792c               cmp edi, dword ptr [ecx + 0x2c]
// 0084536b  0f8d8c000000         jge 0x8453fd
// 00845371  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00845374  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00845377  eb02                 jmp 0x84537b
// 00845379  33f6                 xor esi, esi
// 0084537b  85ed                 test ebp, ebp
// 0084537d  7408                 je 0x845387
// 0084537f  39aefc000000         cmp dword ptr [esi + 0xfc], ebp
// 00845385  752a                 jne 0x8453b1
// 00845387  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084538c  7416                 je 0x8453a4
// 0084538e  8b16                 mov edx, dword ptr [esi]
// 00845390  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00845396  6a00                 push 0
// 00845398  8bce                 mov ecx, esi
// 0084539a  ffd0                 call eax
// 0084539c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008453a0  85c0                 test eax, eax
// 008453a2  740d                 je 0x8453b1
// 008453a4  83fbff               cmp ebx, -1
// 008453a7  7459                 je 0x845402
// 008453a9  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 008453af  7451                 je 0x845402
// 008453b1  837c242400           cmp dword ptr [esp + 0x24], 0
// 008453b6  742f                 je 0x8453e7
// 008453b8  8b16                 mov edx, dword ptr [esi]
// 008453ba  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008453c0  8bce                 mov ecx, esi
// 008453c2  ffd0                 call eax
// 008453c4  85c0                 test eax, eax
// 008453c6  741b                 je 0x8453e3
// 008453c8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008453cc  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008453d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008453d6  52                   push edx
// 008453d7  50                   push eax
// 008453d8  53                   push ebx
// 008453d9  55                   push ebp
// 008453da  e861ffffff           call 0x845340
// 008453df  85c0                 test eax, eax
// 008453e1  7512                 jne 0x8453f5
// 008453e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008453e7  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008453ea  47                   inc edi
// 008453eb  3bf8                 cmp edi, eax
// 008453ed  0f8c6dffffff         jl 0x845360
// 008453f3  33c0                 xor eax, eax
// 008453f5  5f                   pop edi
// 008453f6  5e                   pop esi
// 008453f7  5d                   pop ebp
// 008453f8  5b                   pop ebx
// 008453f9  59                   pop ecx
// 008453fa  c21000               ret 0x10
// 008453fd  e80ae7faff           call 0x7f3b0c
// 00845402  5f                   pop edi
// 00845403  8bc6                 mov eax, esi
// 00845405  5e                   pop esi
// 00845406  5d                   pop ebp
// 00845407  5b                   pop ebx
// 00845408  59                   pop ecx
// 00845409  c21000               ret 0x10
// copied from an identical function in another client (function ?FindControl@CXTPControls@@QBEPAVCXTPControl@@W4XTPControlType@@HHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp