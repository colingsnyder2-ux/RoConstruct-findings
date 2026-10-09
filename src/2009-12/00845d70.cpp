// roc 2009-12 00845d70  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845d70
//
// 00845d70  83ec14               sub esp, 0x14
// 00845d73  8b442420             mov eax, dword ptr [esp + 0x20]
// 00845d77  890c24               mov dword ptr [esp], ecx
// 00845d7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00845d7e  3bc8                 cmp ecx, eax
// 00845d80  0f8dd0000000         jge 0x845e56
// 00845d86  53                   push ebx
// 00845d87  55                   push ebp
// 00845d88  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00845d8c  56                   push esi
// 00845d8d  8bf1                 mov esi, ecx
// 00845d8f  c1e606               shl esi, 6
// 00845d92  03742424             add esi, dword ptr [esp + 0x24]
// 00845d96  2bc1                 sub eax, ecx
// 00845d98  57                   push edi
// 00845d99  8944242c             mov dword ptr [esp + 0x2c], eax
// 00845d9d  8d4900               lea ecx, [ecx]
// 00845da0  837c243800           cmp dword ptr [esp + 0x38], 0
// 00845da5  8b06                 mov eax, dword ptr [esi]
// 00845da7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00845daa  8b7e04               mov edi, dword ptr [esi + 4]
// 00845dad  8b5e08               mov ebx, dword ptr [esi + 8]
// 00845db0  89442414             mov dword ptr [esp + 0x14], eax
// 00845db4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00845db8  7444                 je 0x845dfe
// 00845dba  8b442448             mov eax, dword ptr [esp + 0x48]
// 00845dbe  8b542440             mov edx, dword ptr [esp + 0x40]
// 00845dc2  8d0c10               lea ecx, [eax + edx]
// 00845dc5  51                   push ecx
// 00845dc6  53                   push ebx
// 00845dc7  50                   push eax
// 00845dc8  8bd3                 mov edx, ebx
// 00845dca  2bd5                 sub edx, ebp
// 00845dcc  52                   push edx
// 00845dcd  8d4610               lea eax, [esi + 0x10]
// 00845dd0  50                   push eax
// 00845dd1  ff1538ca9800         call dword ptr [0x98ca38]
// 00845dd7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00845ddb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00845dde  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 00845de8  755a                 jne 0x845e44
// 00845dea  8b442414             mov eax, dword ptr [esp + 0x14]
// 00845dee  2bc3                 sub eax, ebx
// 00845df0  03c5                 add eax, ebp
// 00845df2  99                   cdq 
// 00845df3  2bc2                 sub eax, edx
// 00845df5  d1f8                 sar eax, 1
// 00845df7  6a00                 push 0
// 00845df9  f7d8                 neg eax
// 00845dfb  50                   push eax
// 00845dfc  eb3f                 jmp 0x845e3d
// 00845dfe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00845e02  8d042f               lea eax, [edi + ebp]
// 00845e05  50                   push eax
// 00845e06  8b442448             mov eax, dword ptr [esp + 0x48]
// 00845e0a  8d1408               lea edx, [eax + ecx]
// 00845e0d  52                   push edx
// 00845e0e  57                   push edi
// 00845e0f  50                   push eax
// 00845e10  8d4610               lea eax, [esi + 0x10]
// 00845e13  50                   push eax
// 00845e14  ff1538ca9800         call dword ptr [0x98ca38]
// 00845e1a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00845e1e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00845e21  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 00845e2b  7517                 jne 0x845e44
// 00845e2d  8bc7                 mov eax, edi
// 00845e2f  2b442420             sub eax, dword ptr [esp + 0x20]
// 00845e33  03c5                 add eax, ebp
// 00845e35  99                   cdq 
// 00845e36  2bc2                 sub eax, edx
// 00845e38  d1f8                 sar eax, 1
// 00845e3a  50                   push eax
// 00845e3b  6a00                 push 0
// 00845e3d  56                   push esi
// 00845e3e  ff156ccc9800         call dword ptr [0x98cc6c]
// 00845e44  83c640               add esi, 0x40
// 00845e47  836c242c01           sub dword ptr [esp + 0x2c], 1
// 00845e4c  0f854effffff         jne 0x845da0
// 00845e52  5f                   pop edi
// 00845e53  5e                   pop esi
// 00845e54  5d                   pop ebp
// 00845e55  5b                   pop ebx
// 00845e56  83c414               add esp, 0x14
// 00845e59  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
