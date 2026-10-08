// roc 2010-06 00886d10  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00886d10
//
// 00886d10  83ec10               sub esp, 0x10
// 00886d13  53                   push ebx
// 00886d14  55                   push ebp
// 00886d15  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00886d19  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00886d1c  56                   push esi
// 00886d1d  57                   push edi
// 00886d1e  33ff                 xor edi, edi
// 00886d20  33db                 xor ebx, ebx
// 00886d22  3bc7                 cmp eax, edi
// 00886d24  894c2418             mov dword ptr [esp + 0x18], ecx
// 00886d28  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00886d30  897c2414             mov dword ptr [esp + 0x14], edi
// 00886d34  8944241c             mov dword ptr [esp + 0x1c], eax
// 00886d38  897c2424             mov dword ptr [esp + 0x24], edi
// 00886d3c  7e6d                 jle 0x886dab
// 00886d3e  8bff                 mov edi, edi
// 00886d40  85ff                 test edi, edi
// 00886d42  7c0d                 jl 0x886d51
// 00886d44  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 00886d47  7d08                 jge 0x886d51
// 00886d49  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00886d4c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00886d4f  eb02                 jmp 0x886d53
// 00886d51  33f6                 xor esi, esi
// 00886d53  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00886d56  397104               cmp dword ptr [ecx + 4], esi
// 00886d59  7504                 jne 0x886d5f
// 00886d5b  89742424             mov dword ptr [esp + 0x24], esi
// 00886d5f  8bce                 mov ecx, esi
// 00886d61  e88ab4ffff           call 0x8821f0
// 00886d66  85c0                 test eax, eax
// 00886d68  7419                 je 0x886d83
// 00886d6a  8b542418             mov edx, dword ptr [esp + 0x18]
// 00886d6e  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 00886d74  8b01                 mov eax, dword ptr [ecx]
// 00886d76  8b542428             mov edx, dword ptr [esp + 0x28]
// 00886d7a  8b4018               mov eax, dword ptr [eax + 0x18]
// 00886d7d  56                   push esi
// 00886d7e  52                   push edx
// 00886d7f  ffd0                 call eax
// 00886d81  eb02                 jmp 0x886d85
// 00886d83  33c0                 xor eax, eax
// 00886d85  8d0c18               lea ecx, [eax + ebx]
// 00886d88  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 00886d8c  894620               mov dword ptr [esi + 0x20], eax
// 00886d8f  894624               mov dword ptr [esi + 0x24], eax
// 00886d92  7e0a                 jle 0x886d9e
// 00886d94  85db                 test ebx, ebx
// 00886d96  7406                 je 0x886d9e
// 00886d98  33db                 xor ebx, ebx
// 00886d9a  ff442410             inc dword ptr [esp + 0x10]
// 00886d9e  01442414             add dword ptr [esp + 0x14], eax
// 00886da2  47                   inc edi
// 00886da3  03d8                 add ebx, eax
// 00886da5  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00886da9  7c95                 jl 0x886d40
// 00886dab  8b542410             mov edx, dword ptr [esp + 0x10]
// 00886daf  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 00886db5  52                   push edx
// 00886db6  e835beffff           call 0x882bf0
// 00886dbb  837c241001           cmp dword ptr [esp + 0x10], 1
// 00886dc0  8bf0                 mov esi, eax
// 00886dc2  7451                 je 0x886e15
// 00886dc4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00886dc8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00886dcc  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00886dd0  50                   push eax
// 00886dd1  6a00                 push 0
// 00886dd3  51                   push ecx
// 00886dd4  55                   push ebp
// 00886dd5  8bcf                 mov ecx, edi
// 00886dd7  c7460400000000       mov dword ptr [esi + 4], 0
// 00886dde  c70600000000         mov dword ptr [esi], 0
// 00886de4  e807feffff           call 0x886bf0
// 00886de9  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 00886df0  7523                 jne 0x886e15
// 00886df2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00886df6  85c0                 test eax, eax
// 00886df8  741b                 je 0x886e15
// 00886dfa  8b4064               mov eax, dword ptr [eax + 0x64]
// 00886dfd  8b3e                 mov edi, dword ptr [esi]
// 00886dff  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 00886e02  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 00886e06  893cc6               mov dword ptr [esi + eax*8], edi
// 00886e09  8b7e04               mov edi, dword ptr [esi + 4]
// 00886e0c  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 00886e10  890e                 mov dword ptr [esi], ecx
// 00886e12  895604               mov dword ptr [esi + 4], edx
// 00886e15  5f                   pop edi
// 00886e16  5e                   pop esi
// 00886e17  5d                   pop ebp
// 00886e18  5b                   pop ebx
// 00886e19  83c410               add esp, 0x10
// 00886e1c  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
