// roc 2009-06 007f7fc0  unit: CXTPTabPaintManager  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f7fc0
//
// 007f7fc0  83ec10               sub esp, 0x10
// 007f7fc3  53                   push ebx
// 007f7fc4  55                   push ebp
// 007f7fc5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007f7fc9  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 007f7fcc  56                   push esi
// 007f7fcd  57                   push edi
// 007f7fce  33ff                 xor edi, edi
// 007f7fd0  33db                 xor ebx, ebx
// 007f7fd2  3bc7                 cmp eax, edi
// 007f7fd4  894c2418             mov dword ptr [esp + 0x18], ecx
// 007f7fd8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007f7fe0  897c2414             mov dword ptr [esp + 0x14], edi
// 007f7fe4  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f7fe8  897c2424             mov dword ptr [esp + 0x24], edi
// 007f7fec  7e6d                 jle 0x7f805b
// 007f7fee  8bff                 mov edi, edi
// 007f7ff0  85ff                 test edi, edi
// 007f7ff2  7c0d                 jl 0x7f8001
// 007f7ff4  3b7d5c               cmp edi, dword ptr [ebp + 0x5c]
// 007f7ff7  7d08                 jge 0x7f8001
// 007f7ff9  8b4558               mov eax, dword ptr [ebp + 0x58]
// 007f7ffc  8b34b8               mov esi, dword ptr [eax + edi*4]
// 007f7fff  eb02                 jmp 0x7f8003
// 007f8001  33f6                 xor esi, esi
// 007f8003  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007f8006  397104               cmp dword ptr [ecx + 4], esi
// 007f8009  7504                 jne 0x7f800f
// 007f800b  89742424             mov dword ptr [esp + 0x24], esi
// 007f800f  8bce                 mov ecx, esi
// 007f8011  e82ae1eaff           call 0x6a6140
// 007f8016  85c0                 test eax, eax
// 007f8018  7419                 je 0x7f8033
// 007f801a  8b542418             mov edx, dword ptr [esp + 0x18]
// 007f801e  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 007f8024  8b01                 mov eax, dword ptr [ecx]
// 007f8026  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f802a  8b4018               mov eax, dword ptr [eax + 0x18]
// 007f802d  56                   push esi
// 007f802e  52                   push edx
// 007f802f  ffd0                 call eax
// 007f8031  eb02                 jmp 0x7f8035
// 007f8033  33c0                 xor eax, eax
// 007f8035  8d0c18               lea ecx, [eax + ebx]
// 007f8038  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 007f803c  894620               mov dword ptr [esi + 0x20], eax
// 007f803f  894624               mov dword ptr [esi + 0x24], eax
// 007f8042  7e0a                 jle 0x7f804e
// 007f8044  85db                 test ebx, ebx
// 007f8046  7406                 je 0x7f804e
// 007f8048  33db                 xor ebx, ebx
// 007f804a  ff442410             inc dword ptr [esp + 0x10]
// 007f804e  01442414             add dword ptr [esp + 0x14], eax
// 007f8052  47                   inc edi
// 007f8053  03d8                 add ebx, eax
// 007f8055  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 007f8059  7c95                 jl 0x7f7ff0
// 007f805b  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f805f  8b8d88000000         mov ecx, dword ptr [ebp + 0x88]
// 007f8065  52                   push edx
// 007f8066  e8f5bdffff           call 0x7f3e60
// 007f806b  837c241001           cmp dword ptr [esp + 0x10], 1
// 007f8070  8bf0                 mov esi, eax
// 007f8072  7451                 je 0x7f80c5
// 007f8074  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f8078  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f807c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007f8080  50                   push eax
// 007f8081  6a00                 push 0
// 007f8083  51                   push ecx
// 007f8084  55                   push ebp
// 007f8085  8bcf                 mov ecx, edi
// 007f8087  c7460400000000       mov dword ptr [esi + 4], 0
// 007f808e  c70600000000         mov dword ptr [esi], 0
// 007f8094  e807feffff           call 0x7f7ea0
// 007f8099  83bfa400000000       cmp dword ptr [edi + 0xa4], 0
// 007f80a0  7523                 jne 0x7f80c5
// 007f80a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f80a6  85c0                 test eax, eax
// 007f80a8  741b                 je 0x7f80c5
// 007f80aa  8b4064               mov eax, dword ptr [eax + 0x64]
// 007f80ad  8b3e                 mov edi, dword ptr [esi]
// 007f80af  8b0cc6               mov ecx, dword ptr [esi + eax*8]
// 007f80b2  8b54c604             mov edx, dword ptr [esi + eax*8 + 4]
// 007f80b6  893cc6               mov dword ptr [esi + eax*8], edi
// 007f80b9  8b7e04               mov edi, dword ptr [esi + 4]
// 007f80bc  897cc604             mov dword ptr [esi + eax*8 + 4], edi
// 007f80c0  890e                 mov dword ptr [esi], ecx
// 007f80c2  895604               mov dword ptr [esi + 4], edx
// 007f80c5  5f                   pop edi
// 007f80c6  5e                   pop esi
// 007f80c7  5d                   pop ebp
// 007f80c8  5b                   pop ebx
// 007f80c9  83c410               add esp, 0x10
// 007f80cc  c20c00               ret 0xc
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?CreateMultiRowIndexer@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
