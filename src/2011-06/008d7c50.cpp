// roc 2011-06 008d7c50  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d7c50
//
// 008d7c50  83ec10               sub esp, 0x10
// 008d7c53  53                   push ebx
// 008d7c54  55                   push ebp
// 008d7c55  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008d7c59  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 008d7c5c  56                   push esi
// 008d7c5d  57                   push edi
// 008d7c5e  33ff                 xor edi, edi
// 008d7c60  33db                 xor ebx, ebx
// 008d7c62  3bc7                 cmp eax, edi
// 008d7c64  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d7c68  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008d7c70  897c2414             mov dword ptr [esp + 0x14], edi
// 008d7c74  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d7c78  897c2424             mov dword ptr [esp + 0x24], edi
// 008d7c7c  7e6d                 jle 0x8d7ceb
// 008d7c7e  8bff                 mov edi, edi
// 008d7c80  85ff                 test edi, edi
// 008d7c82  7c0d                 jl 0x8d7c91
// 008d7c84  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 008d7c87  7d08                 jge 0x8d7c91
// 008d7c89  8b4558               mov eax, dword ptr [ebp + 0x58]
// 008d7c8c  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008d7c8f  eb02                 jmp 0x8d7c93
// 008d7c91  33f6                 xor esi, esi
// 008d7c93  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008d7c96  397104               cmp dword ptr [ecx + 4], esi
// 008d7c99  7504                 jne 0x8d7c9f
// 008d7c9b  89742424             mov dword ptr [esp + 0x24], esi
// 008d7c9f  8bce                 mov ecx, esi
// 008d7ca1  e87a9cb7ff           call 0x451920
// 008d7ca6  85c0                 test eax, eax
// 008d7ca8  7419                 je 0x8d7cc3
// 008d7caa  8b542418             mov edx, dword ptr [esp + 0x18]
// 008d7cae  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 008d7cb4  8b01                 mov eax, dword ptr [ecx]
// 008d7cb6  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d7cba  8b4018               mov eax, dword ptr [eax + 0x18]
// 008d7cbd  56                   push esi
// 008d7cbe  52                   push edx
// 008d7cbf  ffd0                 call eax
// 008d7cc1  eb02                 jmp 0x8d7cc5
// 008d7cc3  33c0                 xor eax, eax
// 008d7cc5  8d0c18               lea ecx, [eax + ebx]
// 008d7cc8  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 008d7ccc  894620               mov dword ptr [esi + 0x20], eax
// 008d7ccf  894624               mov dword ptr [esi + 0x24], eax
// 008d7cd2  7e0a                 jle 0x8d7cde
// 008d7cd4  85db                 test ebx, ebx
// 008d7cd6  7406                 je 0x8d7cde
// 008d7cd8  33db                 xor ebx, ebx
// 008d7cda  ff442410             inc dword ptr [esp + 0x10]
// 008d7cde  01442414             add dword ptr [esp + 0x14], eax
// 008d7ce2  47                   inc edi
// 008d7ce3  03d8                 add ebx, eax
// 008d7ce5  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008d7ce9  7c95                 jl 0x8d7c80
// 008d7ceb  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d7cef  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 008d7cf5  52                   push edx
// 008d7cf6  e805beffff           call 0x8d3b00
// 008d7cfb  837c241001           cmp dword ptr [esp + 0x10], 1
// 008d7d00  8bf0                 mov esi, eax
// 008d7d02  7451                 je 0x8d7d55
// 008d7d04  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d7d08  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d7d0c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008d7d10  50                   push eax
// 008d7d11  6a00                 push 0
// 008d7d13  51                   push ecx
// 008d7d14  55                   push ebp
// 008d7d15  8bcf                 mov ecx, edi
// 008d7d17  c7460400000000       mov dword ptr [esi + 4], 0
// 008d7d1e  c70600000000         mov dword ptr [esi], 0
// 008d7d24  e807feffff           call 0x8d7b30
// 008d7d29  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 008d7d30  7523                 jne 0x8d7d55
// 008d7d32  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d7d36  85c0                 test eax, eax
// 008d7d38  741b                 je 0x8d7d55
// 008d7d3a  8b4064               mov eax, dword ptr [eax + 0x64]
// 008d7d3d  8b3e                 mov edi, dword ptr [esi]
// 008d7d3f  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 008d7d42  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 008d7d46  893cc6               mov dword ptr [esi + eax*8], edi
// 008d7d49  8b7e04               mov edi, dword ptr [esi + 4]
// 008d7d4c  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 008d7d50  890e                 mov dword ptr [esi], ecx
// 008d7d52  895604               mov dword ptr [esi + 4], edx
// 008d7d55  5f                   pop edi
// 008d7d56  5e                   pop esi
// 008d7d57  5d                   pop ebp
// 008d7d58  5b                   pop ebx
// 008d7d59  83c410               add esp, 0x10
// 008d7d5c  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
