// roc 2009-12 008d2b60  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d2b60
//
// 008d2b60  83ec10               sub esp, 0x10
// 008d2b63  53                   push ebx
// 008d2b64  55                   push ebp
// 008d2b65  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008d2b69  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008d2b6c  56                   push esi
// 008d2b6d  57                   push edi
// 008d2b6e  33ff                 xor edi, edi
// 008d2b70  33db                 xor ebx, ebx
// 008d2b72  3bc7                 cmp eax, edi
// 008d2b74  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d2b78  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008d2b80  897c2414             mov dword ptr [esp + 0x14], edi
// 008d2b84  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d2b88  897c2424             mov dword ptr [esp + 0x24], edi
// 008d2b8c  7e6d                 jle 0x8d2bfb
// 008d2b8e  8bff                 mov edi, edi
// 008d2b90  85ff                 test edi, edi
// 008d2b92  7c0d                 jl 0x8d2ba1
// 008d2b94  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 008d2b97  7d08                 jge 0x8d2ba1
// 008d2b99  8b4558               mov eax, dword ptr [ebp + 0x58]
// 008d2b9c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008d2b9f  eb02                 jmp 0x8d2ba3
// 008d2ba1  33f6                 xor esi, esi
// 008d2ba3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d2ba6  397104               cmp dword ptr [ecx + 4], esi
// 008d2ba9  7504                 jne 0x8d2baf
// 008d2bab  89742424             mov dword ptr [esp + 0x24], esi
// 008d2baf  8bce                 mov ecx, esi
// 008d2bb1  e83a08eaff           call 0x7733f0
// 008d2bb6  85c0                 test eax, eax
// 008d2bb8  7419                 je 0x8d2bd3
// 008d2bba  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d2bbe  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008d2bc4  8b01                 mov eax, dword ptr [ecx]
// 008d2bc6  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d2bca  8b4018               mov eax, dword ptr [eax + 0x18]
// 008d2bcd  56                   push esi
// 008d2bce  52                   push edx
// 008d2bcf  ffd0                 call eax
// 008d2bd1  eb02                 jmp 0x8d2bd5
// 008d2bd3  33c0                 xor eax, eax
// 008d2bd5  8d0c18               lea ecx, [eax + ebx]
// 008d2bd8  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 008d2bdc  894620               mov dword ptr [esi + 0x20], eax
// 008d2bdf  894624               mov dword ptr [esi + 0x24], eax
// 008d2be2  7e0a                 jle 0x8d2bee
// 008d2be4  85db                 test ebx, ebx
// 008d2be6  7406                 je 0x8d2bee
// 008d2be8  33db                 xor ebx, ebx
// 008d2bea  ff442410             inc dword ptr [esp + 0x10]
// 008d2bee  01442414             add dword ptr [esp + 0x14], eax
// 008d2bf2  47                   inc edi
// 008d2bf3  03d8                 add ebx, eax
// 008d2bf5  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008d2bf9  7c95                 jl 0x8d2b90
// 008d2bfb  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d2bff  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 008d2c05  52                   push edx
// 008d2c06  e805beffff           call 0x8cea10
// 008d2c0b  837c241001           cmp dword ptr [esp + 0x10], 1
// 008d2c10  8bf0                 mov esi, eax
// 008d2c12  7451                 je 0x8d2c65
// 008d2c14  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d2c18  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d2c1c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008d2c20  50                   push eax
// 008d2c21  6a00                 push 0
// 008d2c23  51                   push ecx
// 008d2c24  55                   push ebp
// 008d2c25  8bcf                 mov ecx, edi
// 008d2c27  c7460400000000       mov dword ptr [esi + 4], 0
// 008d2c2e  c70600000000         mov dword ptr [esi], 0
// 008d2c34  e807feffff           call 0x8d2a40
// 008d2c39  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 008d2c40  7523                 jne 0x8d2c65
// 008d2c42  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d2c46  85c0                 test eax, eax
// 008d2c48  741b                 je 0x8d2c65
// 008d2c4a  8b4064               mov eax, dword ptr [eax + 0x64]
// 008d2c4d  8b3e                 mov edi, dword ptr [esi]
// 008d2c4f  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 008d2c52  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 008d2c56  893cc6               mov dword ptr [esi + eax*8], edi
// 008d2c59  8b7e04               mov edi, dword ptr [esi + 4]
// 008d2c5c  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 008d2c60  890e                 mov dword ptr [esi], ecx
// 008d2c62  895604               mov dword ptr [esi + 4], edx
// 008d2c65  5f                   pop edi
// 008d2c66  5e                   pop esi
// 008d2c67  5d                   pop ebp
// 008d2c68  5b                   pop ebx
// 008d2c69  83c410               add esp, 0x10
// 008d2c6c  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
