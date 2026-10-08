// roc 2009-06 0076af90  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076af90
//
// 0076af90  83ec14               sub esp, 0x14
// 0076af93  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076af97  890c24               mov dword ptr [esp], ecx
// 0076af9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076af9e  3bc8                 cmp ecx, eax
// 0076afa0  0f8dd0000000         jge 0x76b076
// 0076afa6  53                   push ebx
// 0076afa7  55                   push ebp
// 0076afa8  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0076afac  56                   push esi
// 0076afad  8bf1                 mov esi, ecx
// 0076afaf  c1e606               shl esi, 6
// 0076afb2  03742424             add esi, dword ptr [esp + 0x24]
// 0076afb6  2bc1                 sub eax, ecx
// 0076afb8  57                   push edi
// 0076afb9  8944242c             mov dword ptr [esp + 0x2c], eax
// 0076afbd  8d4900               lea ecx, [ecx]
// 0076afc0  837c243800           cmp dword ptr [esp + 0x38], 0
// 0076afc5  8b06                 mov eax, dword ptr [esi]
// 0076afc7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0076afca  8b7e04               mov edi, dword ptr [esi + 4]
// 0076afcd  8b5e08               mov ebx, dword ptr [esi + 8]
// 0076afd0  89442414             mov dword ptr [esp + 0x14], eax
// 0076afd4  894c2420             mov dword ptr [esp + 0x20], ecx
// 0076afd8  7444                 je 0x76b01e
// 0076afda  8b442448             mov eax, dword ptr [esp + 0x48]
// 0076afde  8b542440             mov edx, dword ptr [esp + 0x40]
// 0076afe2  8d0c10               lea ecx, [eax + edx]
// 0076afe5  51                   push ecx
// 0076afe6  53                   push ebx
// 0076afe7  50                   push eax
// 0076afe8  8bd3                 mov edx, ebx
// 0076afea  2bd5                 sub edx, ebp
// 0076afec  52                   push edx
// 0076afed  8d4610               lea eax, [esi + 0x10]
// 0076aff0  50                   push eax
// 0076aff1  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076aff7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076affb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0076affe  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 0076b008  755a                 jne 0x76b064
// 0076b00a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076b00e  2bc3                 sub eax, ebx
// 0076b010  03c5                 add eax, ebp
// 0076b012  99                   cdq 
// 0076b013  2bc2                 sub eax, edx
// 0076b015  d1f8                 sar eax, 1
// 0076b017  6a00                 push 0
// 0076b019  f7d8                 neg eax
// 0076b01b  50                   push eax
// 0076b01c  eb3f                 jmp 0x76b05d
// 0076b01e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0076b022  8d042f               lea eax, [edi + ebp]
// 0076b025  50                   push eax
// 0076b026  8b442448             mov eax, dword ptr [esp + 0x48]
// 0076b02a  8d1408               lea edx, [eax + ecx]
// 0076b02d  52                   push edx
// 0076b02e  57                   push edi
// 0076b02f  50                   push eax
// 0076b030  8d4610               lea eax, [esi + 0x10]
// 0076b033  50                   push eax
// 0076b034  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076b03a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076b03e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0076b041  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 0076b04b  7517                 jne 0x76b064
// 0076b04d  8bc7                 mov eax, edi
// 0076b04f  2b442420             sub eax, dword ptr [esp + 0x20]
// 0076b053  03c5                 add eax, ebp
// 0076b055  99                   cdq 
// 0076b056  2bc2                 sub eax, edx
// 0076b058  d1f8                 sar eax, 1
// 0076b05a  50                   push eax
// 0076b05b  6a00                 push 0
// 0076b05d  56                   push esi
// 0076b05e  ff15f8ed8900         call dword ptr [0x89edf8]
// 0076b064  83c640               add esi, 0x40
// 0076b067  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0076b06c  0f854effffff         jne 0x76afc0
// 0076b072  5f                   pop edi
// 0076b073  5e                   pop esi
// 0076b074  5d                   pop ebp
// 0076b075  5b                   pop ebx
// 0076b076  83c414               add esp, 0x14
// 0076b079  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
