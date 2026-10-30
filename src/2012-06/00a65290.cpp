// roc 2012-06 00a65290  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65290
//
// 00a65290  83ec10               sub esp, 0x10
// 00a65293  53                   push ebx
// 00a65294  55                   push ebp
// 00a65295  56                   push esi
// 00a65296  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a6529a  8b06                 mov eax, dword ptr [esi]
// 00a6529c  57                   push edi
// 00a6529d  8b7e08               mov edi, dword ptr [esi + 8]
// 00a652a0  2bf8                 sub edi, eax
// 00a652a2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a652a6  89442410             mov dword ptr [esp + 0x10], eax
// 00a652aa  85ff                 test edi, edi
// 00a652ac  0f8ef1000000         jle 0xa653a3
// 00a652b2  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a652b5  8bc8                 mov ecx, eax
// 00a652b7  2b4e04               sub ecx, dword ptr [esi + 4]
// 00a652ba  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a652be  85c9                 test ecx, ecx
// 00a652c0  0f8edd000000         jle 0xa653a3
// 00a652c6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00a652ca  8b13                 mov edx, dword ptr [ebx]
// 00a652cc  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a652cf  2bca                 sub ecx, edx
// 00a652d1  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a652d5  85c9                 test ecx, ecx
// 00a652d7  0f8ec6000000         jle 0xa653a3
// 00a652dd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00a652e0  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00a652e3  8bca                 mov ecx, edx
// 00a652e5  2bcd                 sub ecx, ebp
// 00a652e7  85c9                 test ecx, ecx
// 00a652e9  0f8eb4000000         jle 0xa653a3
// 00a652ef  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00a652f3  837d2400             cmp dword ptr [ebp + 0x24], 0
// 00a652f7  7434                 je 0xa6532d
// 00a652f9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a652fd  85c0                 test eax, eax
// 00a652ff  7504                 jne 0xa65305
// 00a65301  33c9                 xor ecx, ecx
// 00a65303  eb03                 jmp 0xa65308
// 00a65305  8b4804               mov ecx, dword ptr [eax + 4]
// 00a65308  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a6530c  85c0                 test eax, eax
// 00a6530e  7403                 je 0xa65313
// 00a65310  8b4004               mov eax, dword ptr [eax + 4]
// 00a65313  53                   push ebx
// 00a65314  51                   push ecx
// 00a65315  56                   push esi
// 00a65316  50                   push eax
// 00a65317  e82494f3ff           call 0x99e740
// 00a6531c  8bc8                 mov ecx, eax
// 00a6531e  e81d38f3ff           call 0x998b40
// 00a65323  5f                   pop edi
// 00a65324  5e                   pop esi
// 00a65325  5d                   pop ebp
// 00a65326  5b                   pop ebx
// 00a65327  83c410               add esp, 0x10
// 00a6532a  c21000               ret 0x10
// 00a6532d  397c2428             cmp dword ptr [esp + 0x28], edi
// 00a65331  7537                 jne 0xa6536a
// 00a65333  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00a65337  7531                 jne 0xa6536a
// 00a65339  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00a6533c  8b13                 mov edx, dword ptr [ebx]
// 00a6533e  8b7604               mov esi, dword ptr [esi + 4]
// 00a65341  682000cc00           push 0xcc0020
// 00a65346  51                   push ecx
// 00a65347  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a6534b  52                   push edx
// 00a6534c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a65350  51                   push ecx
// 00a65351  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a65355  2bc6                 sub eax, esi
// 00a65357  50                   push eax
// 00a65358  57                   push edi
// 00a65359  56                   push esi
// 00a6535a  52                   push edx
// 00a6535b  e8d004a3ff           call 0x495830
// 00a65360  5f                   pop edi
// 00a65361  5e                   pop esi
// 00a65362  5d                   pop ebp
// 00a65363  5b                   pop ebx
// 00a65364  83c410               add esp, 0x10
// 00a65367  c21000               ret 0x10
// 00a6536a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00a6536d  8b7604               mov esi, dword ptr [esi + 4]
// 00a65370  682000cc00           push 0xcc0020
// 00a65375  2bd1                 sub edx, ecx
// 00a65377  52                   push edx
// 00a65378  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a6537c  52                   push edx
// 00a6537d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a65381  51                   push ecx
// 00a65382  8b0b                 mov ecx, dword ptr [ebx]
// 00a65384  51                   push ecx
// 00a65385  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a65389  52                   push edx
// 00a6538a  2bc6                 sub eax, esi
// 00a6538c  50                   push eax
// 00a6538d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a65391  57                   push edi
// 00a65392  56                   push esi
// 00a65393  50                   push eax
// 00a65394  e8c72ff2ff           call 0x988360
// 00a65399  5f                   pop edi
// 00a6539a  5e                   pop esi
// 00a6539b  5d                   pop ebp
// 00a6539c  5b                   pop ebx
// 00a6539d  83c410               add esp, 0x10
// 00a653a0  c21000               ret 0x10
// 00a653a3  5f                   pop edi
// 00a653a4  5e                   pop esi
// 00a653a5  5d                   pop ebp
// 00a653a6  b801000000           mov eax, 1
// 00a653ab  5b                   pop ebx
// 00a653ac  83c410               add esp, 0x10
// 00a653af  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
