// roc 2012-06 009cfc20  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cfc20
//
// 009cfc20  83ec14               sub esp, 0x14
// 009cfc23  8b442420             mov eax, dword ptr [esp + 0x20]
// 009cfc27  890c24               mov dword ptr [esp], ecx
// 009cfc2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009cfc2e  3bc8                 cmp ecx, eax
// 009cfc30  0f8dd0000000         jge 0x9cfd06
// 009cfc36  53                   push ebx
// 009cfc37  55                   push ebp
// 009cfc38  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 009cfc3c  56                   push esi
// 009cfc3d  8bf1                 mov esi, ecx
// 009cfc3f  c1e606               shl esi, 6
// 009cfc42  03742424             add esi, dword ptr [esp + 0x24]
// 009cfc46  2bc1                 sub eax, ecx
// 009cfc48  57                   push edi
// 009cfc49  8944242c             mov dword ptr [esp + 0x2c], eax
// 009cfc4d  8d4900               lea ecx, [ecx]
// 009cfc50  837c243800           cmp dword ptr [esp + 0x38], 0
// 009cfc55  8b06                 mov eax, dword ptr [esi]
// 009cfc57  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009cfc5a  8b7e04               mov edi, dword ptr [esi + 4]
// 009cfc5d  8b5e08               mov ebx, dword ptr [esi + 8]
// 009cfc60  89442414             mov dword ptr [esp + 0x14], eax
// 009cfc64  894c2420             mov dword ptr [esp + 0x20], ecx
// 009cfc68  7444                 je 0x9cfcae
// 009cfc6a  8b442448             mov eax, dword ptr [esp + 0x48]
// 009cfc6e  8b542440             mov edx, dword ptr [esp + 0x40]
// 009cfc72  8d0c10               lea ecx, [eax + edx]
// 009cfc75  51                   push ecx
// 009cfc76  53                   push ebx
// 009cfc77  50                   push eax
// 009cfc78  8bd3                 mov edx, ebx
// 009cfc7a  2bd5                 sub edx, ebp
// 009cfc7c  52                   push edx
// 009cfc7d  8d4610               lea eax, [esi + 0x10]
// 009cfc80  50                   push eax
// 009cfc81  ff156c3bb200         call dword ptr [0xb23b6c]
// 009cfc87  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cfc8b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009cfc8e  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 009cfc98  755a                 jne 0x9cfcf4
// 009cfc9a  8b442414             mov eax, dword ptr [esp + 0x14]
// 009cfc9e  2bc3                 sub eax, ebx
// 009cfca0  03c5                 add eax, ebp
// 009cfca2  99                   cdq 
// 009cfca3  2bc2                 sub eax, edx
// 009cfca5  d1f8                 sar eax, 1
// 009cfca7  6a00                 push 0
// 009cfca9  f7d8                 neg eax
// 009cfcab  50                   push eax
// 009cfcac  eb3f                 jmp 0x9cfced
// 009cfcae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009cfcb2  8d042f               lea eax, [edi + ebp]
// 009cfcb5  50                   push eax
// 009cfcb6  8b442448             mov eax, dword ptr [esp + 0x48]
// 009cfcba  8d1408               lea edx, [eax + ecx]
// 009cfcbd  52                   push edx
// 009cfcbe  57                   push edi
// 009cfcbf  50                   push eax
// 009cfcc0  8d4610               lea eax, [esi + 0x10]
// 009cfcc3  50                   push eax
// 009cfcc4  ff156c3bb200         call dword ptr [0xb23b6c]
// 009cfcca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009cfcce  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009cfcd1  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 009cfcdb  7517                 jne 0x9cfcf4
// 009cfcdd  8bc7                 mov eax, edi
// 009cfcdf  2b442420             sub eax, dword ptr [esp + 0x20]
// 009cfce3  03c5                 add eax, ebp
// 009cfce5  99                   cdq 
// 009cfce6  2bc2                 sub eax, edx
// 009cfce8  d1f8                 sar eax, 1
// 009cfcea  50                   push eax
// 009cfceb  6a00                 push 0
// 009cfced  56                   push esi
// 009cfcee  ff15f43ab200         call dword ptr [0xb23af4]
// 009cfcf4  83c640               add esi, 0x40
// 009cfcf7  836c242c01           sub dword ptr [esp + 0x2c], 1
// 009cfcfc  0f854effffff         jne 0x9cfc50
// 009cfd02  5f                   pop edi
// 009cfd03  5e                   pop esi
// 009cfd04  5d                   pop ebp
// 009cfd05  5b                   pop ebx
// 009cfd06  83c414               add esp, 0x14
// 009cfd09  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
