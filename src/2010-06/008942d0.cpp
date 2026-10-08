// roc 2010-06 008942d0  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008942d0
//
// 008942d0  83ec10               sub esp, 0x10
// 008942d3  53                   push ebx
// 008942d4  55                   push ebp
// 008942d5  56                   push esi
// 008942d6  8b742424             mov esi, dword ptr [esp + 0x24]
// 008942da  8b06                 mov eax, dword ptr [esi]
// 008942dc  57                   push edi
// 008942dd  8b7e08               mov edi, dword ptr [esi + 8]
// 008942e0  2bf8                 sub edi, eax
// 008942e2  894c2414             mov dword ptr [esp + 0x14], ecx
// 008942e6  89442410             mov dword ptr [esp + 0x10], eax
// 008942ea  85ff                 test edi, edi
// 008942ec  0f8ef1000000         jle 0x8943e3
// 008942f2  8b460c               mov eax, dword ptr [esi + 0xc]
// 008942f5  8bc8                 mov ecx, eax
// 008942f7  2b4e04               sub ecx, dword ptr [esi + 4]
// 008942fa  894c2418             mov dword ptr [esp + 0x18], ecx
// 008942fe  85c9                 test ecx, ecx
// 00894300  0f8edd000000         jle 0x8943e3
// 00894306  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0089430a  8b13                 mov edx, dword ptr [ebx]
// 0089430c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089430f  2bca                 sub ecx, edx
// 00894311  894c2428             mov dword ptr [esp + 0x28], ecx
// 00894315  85c9                 test ecx, ecx
// 00894317  0f8ec6000000         jle 0x8943e3
// 0089431d  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00894320  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00894323  8bca                 mov ecx, edx
// 00894325  2bcd                 sub ecx, ebp
// 00894327  85c9                 test ecx, ecx
// 00894329  0f8eb4000000         jle 0x8943e3
// 0089432f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00894333  837d2400             cmp dword ptr [ebp + 0x24], 0
// 00894337  7434                 je 0x89436d
// 00894339  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089433d  85c0                 test eax, eax
// 0089433f  7504                 jne 0x894345
// 00894341  33c9                 xor ecx, ecx
// 00894343  eb03                 jmp 0x894348
// 00894345  8b4804               mov ecx, dword ptr [eax + 4]
// 00894348  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089434c  85c0                 test eax, eax
// 0089434e  7403                 je 0x894353
// 00894350  8b4004               mov eax, dword ptr [eax + 4]
// 00894353  53                   push ebx
// 00894354  51                   push ecx
// 00894355  56                   push esi
// 00894356  50                   push eax
// 00894357  e8f401f3ff           call 0x7c4550
// 0089435c  8bc8                 mov ecx, eax
// 0089435e  e8fd9df2ff           call 0x7be160
// 00894363  5f                   pop edi
// 00894364  5e                   pop esi
// 00894365  5d                   pop ebp
// 00894366  5b                   pop ebx
// 00894367  83c410               add esp, 0x10
// 0089436a  c21000               ret 0x10
// 0089436d  397c2428             cmp dword ptr [esp + 0x28], edi
// 00894371  7537                 jne 0x8943aa
// 00894373  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00894377  7531                 jne 0x8943aa
// 00894379  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0089437c  8b13                 mov edx, dword ptr [ebx]
// 0089437e  8b7604               mov esi, dword ptr [esi + 4]
// 00894381  682000cc00           push 0xcc0020
// 00894386  51                   push ecx
// 00894387  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089438b  52                   push edx
// 0089438c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00894390  51                   push ecx
// 00894391  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00894395  2bc6                 sub eax, esi
// 00894397  50                   push eax
// 00894398  57                   push edi
// 00894399  56                   push esi
// 0089439a  52                   push edx
// 0089439b  e89098f1ff           call 0x7adc30
// 008943a0  5f                   pop edi
// 008943a1  5e                   pop esi
// 008943a2  5d                   pop ebp
// 008943a3  5b                   pop ebx
// 008943a4  83c410               add esp, 0x10
// 008943a7  c21000               ret 0x10
// 008943aa  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008943ad  8b7604               mov esi, dword ptr [esi + 4]
// 008943b0  682000cc00           push 0xcc0020
// 008943b5  2bd1                 sub edx, ecx
// 008943b7  52                   push edx
// 008943b8  8b542430             mov edx, dword ptr [esp + 0x30]
// 008943bc  52                   push edx
// 008943bd  8b542438             mov edx, dword ptr [esp + 0x38]
// 008943c1  51                   push ecx
// 008943c2  8b0b                 mov ecx, dword ptr [ebx]
// 008943c4  51                   push ecx
// 008943c5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008943c9  52                   push edx
// 008943ca  2bc6                 sub eax, esi
// 008943cc  50                   push eax
// 008943cd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008943d1  57                   push edi
// 008943d2  56                   push esi
// 008943d3  50                   push eax
// 008943d4  e89798f1ff           call 0x7adc70
// 008943d9  5f                   pop edi
// 008943da  5e                   pop esi
// 008943db  5d                   pop ebp
// 008943dc  5b                   pop ebx
// 008943dd  83c410               add esp, 0x10
// 008943e0  c21000               ret 0x10
// 008943e3  5f                   pop edi
// 008943e4  5e                   pop esi
// 008943e5  5d                   pop ebp
// 008943e6  b801000000           mov eax, 1
// 008943eb  5b                   pop ebx
// 008943ec  83c410               add esp, 0x10
// 008943ef  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
