// roc 2010-06 0054b1b0  unit: RBX::AggregateChunk  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b1b0
//
// 0054b1b0  8b442408             mov eax, dword ptr [esp + 8]
// 0054b1b4  83ec0c               sub esp, 0xc
// 0054b1b7  56                   push esi
// 0054b1b8  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054b1bc  3bf0                 cmp esi, eax
// 0054b1be  0f84b6000000         je 0x54b27a
// 0054b1c4  53                   push ebx
// 0054b1c5  8d5e04               lea ebx, [esi + 4]
// 0054b1c8  3bd8                 cmp ebx, eax
// 0054b1ca  0f84a9000000         je 0x54b279
// 0054b1d0  8d43fc               lea eax, [ebx - 4]
// 0054b1d3  8944240c             mov dword ptr [esp + 0xc], eax
// 0054b1d7  b804000000           mov eax, 4
// 0054b1dc  55                   push ebp
// 0054b1dd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0054b1e1  2bc6                 sub eax, esi
// 0054b1e3  57                   push edi
// 0054b1e4  89442418             mov dword ptr [esp + 0x18], eax
// 0054b1e8  8b0b                 mov ecx, dword ptr [ebx]
// 0054b1ea  8d542410             lea edx, [esp + 0x10]
// 0054b1ee  56                   push esi
// 0054b1ef  52                   push edx
// 0054b1f0  8bfb                 mov edi, ebx
// 0054b1f2  894c2418             mov dword ptr [esp + 0x18], ecx
// 0054b1f6  ffd5                 call ebp
// 0054b1f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054b1fc  83c408               add esp, 8
// 0054b1ff  84c0                 test al, al
// 0054b201  742d                 je 0x54b230
// 0054b203  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054b207  03c1                 add eax, ecx
// 0054b209  c1f802               sar eax, 2
// 0054b20c  85c0                 test eax, eax
// 0054b20e  7e18                 jle 0x54b228
// 0054b210  03c0                 add eax, eax
// 0054b212  03c0                 add eax, eax
// 0054b214  50                   push eax
// 0054b215  8bd3                 mov edx, ebx
// 0054b217  56                   push esi
// 0054b218  2bd0                 sub edx, eax
// 0054b21a  50                   push eax
// 0054b21b  83c204               add edx, 4
// 0054b21e  52                   push edx
// 0054b21f  ff1580a89e00         call dword ptr [0x9ea880]
// 0054b225  83c410               add esp, 0x10
// 0054b228  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054b22c  8906                 mov dword ptr [esi], eax
// 0054b22e  eb35                 jmp 0x54b265
// 0054b230  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054b234  51                   push ecx
// 0054b235  8d542414             lea edx, [esp + 0x14]
// 0054b239  52                   push edx
// 0054b23a  ffd5                 call ebp
// 0054b23c  83c408               add esp, 8
// 0054b23f  84c0                 test al, al
// 0054b241  7418                 je 0x54b25b
// 0054b243  8b06                 mov eax, dword ptr [esi]
// 0054b245  8907                 mov dword ptr [edi], eax
// 0054b247  8bfe                 mov edi, esi
// 0054b249  83ee04               sub esi, 4
// 0054b24c  8d4c2410             lea ecx, [esp + 0x10]
// 0054b250  56                   push esi
// 0054b251  51                   push ecx
// 0054b252  ffd5                 call ebp
// 0054b254  83c408               add esp, 8
// 0054b257  84c0                 test al, al
// 0054b259  75e8                 jne 0x54b243
// 0054b25b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054b25f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0054b263  8917                 mov dword ptr [edi], edx
// 0054b265  8344241404           add dword ptr [esp + 0x14], 4
// 0054b26a  83c304               add ebx, 4
// 0054b26d  3b5c2424             cmp ebx, dword ptr [esp + 0x24]
// 0054b271  0f8571ffffff         jne 0x54b1e8
// 0054b277  5f                   pop edi
// 0054b278  5d                   pop ebp
// 0054b279  5b                   pop ebx
// 0054b27a  5e                   pop esi
// 0054b27b  83c40c               add esp, 0xc
// 0054b27e  c3                   ret 
// library openrbx-client/Rendering\RenderLib\RenderSurface.cpp (function ??$_Insertion_sort1@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@ZPAV123@@std@@YAXPAPAVRenderSurface@Render@RBX@@0P6A_NABQAV123@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderSurface.cpp
