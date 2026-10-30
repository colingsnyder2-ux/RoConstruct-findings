// roc 2009-06 008111a0  unit: CXTPRibbonGroup  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008111a0
//
// 008111a0  83ec10               sub esp, 0x10
// 008111a3  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 008111a9  8b08                 mov ecx, dword ptr [eax]
// 008111ab  55                   push ebp
// 008111ac  56                   push esi
// 008111ad  57                   push edi
// 008111ae  8b7804               mov edi, dword ptr [eax + 4]
// 008111b1  33ed                 xor ebp, ebp
// 008111b3  33d2                 xor edx, edx
// 008111b5  33f6                 xor esi, esi
// 008111b7  897c2410             mov dword ptr [esp + 0x10], edi
// 008111bb  896c240c             mov dword ptr [esp + 0xc], ebp
// 008111bf  85ff                 test edi, edi
// 008111c1  0f8e89000000         jle 0x811250
// 008111c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008111cb  53                   push ebx
// 008111cc  83c130               add ecx, 0x30
// 008111cf  eb04                 jmp 0x8111d5
// 008111d1  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008111d5  833900               cmp dword ptr [ecx], 0
// 008111d8  8b79f4               mov edi, dword ptr [ecx - 0xc]
// 008111db  8b59f0               mov ebx, dword ptr [ecx - 0x10]
// 008111de  c741fc00000000       mov dword ptr [ecx - 4], 0
// 008111e5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008111e9  740b                 je 0x8111f6
// 008111eb  85f6                 test esi, esi
// 008111ed  7e07                 jle 0x8111f6
// 008111ef  bf01000000           mov edi, 1
// 008111f4  eb02                 jmp 0x8111f8
// 008111f6  33ff                 xor edi, edi
// 008111f8  83790400             cmp dword ptr [ecx + 4], 0
// 008111fc  7414                 je 0x811212
// 008111fe  85f6                 test esi, esi
// 00811200  7e10                 jle 0x811212
// 00811202  837c242800           cmp dword ptr [esp + 0x28], 0
// 00811207  742a                 je 0x811233
// 00811209  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 0081120c  03ea                 add ebp, edx
// 0081120e  3be8                 cmp ebp, eax
// 00811210  7d2e                 jge 0x811240
// 00811212  85ff                 test edi, edi
// 00811214  7403                 je 0x811219
// 00811216  83c203               add edx, 3
// 00811219  03d3                 add edx, ebx
// 0081121b  46                   inc esi
// 0081121c  83c144               add ecx, 0x44
// 0081121f  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00811223  7cac                 jl 0x8111d1
// 00811225  8b442410             mov eax, dword ptr [esp + 0x10]
// 00811229  5b                   pop ebx
// 0081122a  5f                   pop edi
// 0081122b  5e                   pop esi
// 0081122c  5d                   pop ebp
// 0081122d  83c410               add esp, 0x10
// 00811230  c20800               ret 8
// 00811233  85ed                 test ebp, ebp
// 00811235  75db                 jne 0x811212
// 00811237  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 0081123a  03ea                 add ebp, edx
// 0081123c  3be8                 cmp ebp, eax
// 0081123e  7cd2                 jl 0x811212
// 00811240  bf01000000           mov edi, 1
// 00811245  017c2410             add dword ptr [esp + 0x10], edi
// 00811249  8bd3                 mov edx, ebx
// 0081124b  8979fc               mov dword ptr [ecx - 4], edi
// 0081124e  ebcb                 jmp 0x81121b
// 00811250  5f                   pop edi
// 00811251  5e                   pop esi
// 00811252  8bc5                 mov eax, ebp
// 00811254  5d                   pop ebp
// 00811255  83c410               add esp, 0x10
// 00811258  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_WrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
