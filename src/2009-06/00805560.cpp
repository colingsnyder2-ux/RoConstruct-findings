// roc 2009-06 00805560  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00805560
//
// 00805560  83ec10               sub esp, 0x10
// 00805563  53                   push ebx
// 00805564  55                   push ebp
// 00805565  56                   push esi
// 00805566  8b742424             mov esi, dword ptr [esp + 0x24]
// 0080556a  8b06                 mov eax, dword ptr [esi]
// 0080556c  57                   push edi
// 0080556d  8b7e08               mov edi, dword ptr [esi + 8]
// 00805570  2bf8                 sub edi, eax
// 00805572  894c2414             mov dword ptr [esp + 0x14], ecx
// 00805576  89442410             mov dword ptr [esp + 0x10], eax
// 0080557a  85ff                 test edi, edi
// 0080557c  0f8ef1000000         jle 0x805673
// 00805582  8b460c               mov eax, dword ptr [esi + 0xc]
// 00805585  8bc8                 mov ecx, eax
// 00805587  2b4e04               sub ecx, dword ptr [esi + 4]
// 0080558a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0080558e  85c9                 test ecx, ecx
// 00805590  0f8edd000000         jle 0x805673
// 00805596  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0080559a  8b13                 mov edx, dword ptr [ebx]
// 0080559c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0080559f  2bca                 sub ecx, edx
// 008055a1  894c2428             mov dword ptr [esp + 0x28], ecx
// 008055a5  85c9                 test ecx, ecx
// 008055a7  0f8ec6000000         jle 0x805673
// 008055ad  8b530c               mov edx, dword ptr [ebx + 0xc]
// 008055b0  8b6b04               mov ebp, dword ptr [ebx + 4]
// 008055b3  8bca                 mov ecx, edx
// 008055b5  2bcd                 sub ecx, ebp
// 008055b7  85c9                 test ecx, ecx
// 008055b9  0f8eb4000000         jle 0x805673
// 008055bf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008055c3  837d2400             cmp dword ptr [ebp + 0x24], 0
// 008055c7  7434                 je 0x8055fd
// 008055c9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008055cd  85c0                 test eax, eax
// 008055cf  7504                 jne 0x8055d5
// 008055d1  33c9                 xor ecx, ecx
// 008055d3  eb03                 jmp 0x8055d8
// 008055d5  8b4804               mov ecx, dword ptr [eax + 4]
// 008055d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 008055dc  85c0                 test eax, eax
// 008055de  7403                 je 0x8055e3
// 008055e0  8b4004               mov eax, dword ptr [eax + 4]
// 008055e3  53                   push ebx
// 008055e4  51                   push ecx
// 008055e5  56                   push esi
// 008055e6  50                   push eax
// 008055e7  e8d43df3ff           call 0x7393c0
// 008055ec  8bc8                 mov ecx, eax
// 008055ee  e87dd9f2ff           call 0x732f70
// 008055f3  5f                   pop edi
// 008055f4  5e                   pop esi
// 008055f5  5d                   pop ebp
// 008055f6  5b                   pop ebx
// 008055f7  83c410               add esp, 0x10
// 008055fa  c21000               ret 0x10
// 008055fd  397c2428             cmp dword ptr [esp + 0x28], edi
// 00805601  7537                 jne 0x80563a
// 00805603  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00805607  7531                 jne 0x80563a
// 00805609  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0080560c  8b13                 mov edx, dword ptr [ebx]
// 0080560e  8b7604               mov esi, dword ptr [esi + 4]
// 00805611  682000cc00           push 0xcc0020
// 00805616  51                   push ecx
// 00805617  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080561b  52                   push edx
// 0080561c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00805620  51                   push ecx
// 00805621  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00805625  2bc6                 sub eax, esi
// 00805627  50                   push eax
// 00805628  57                   push edi
// 00805629  56                   push esi
// 0080562a  52                   push edx
// 0080562b  e880dcf1ff           call 0x7232b0
// 00805630  5f                   pop edi
// 00805631  5e                   pop esi
// 00805632  5d                   pop ebp
// 00805633  5b                   pop ebx
// 00805634  83c410               add esp, 0x10
// 00805637  c21000               ret 0x10
// 0080563a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0080563d  8b7604               mov esi, dword ptr [esi + 4]
// 00805640  682000cc00           push 0xcc0020
// 00805645  2bd1                 sub edx, ecx
// 00805647  52                   push edx
// 00805648  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080564c  52                   push edx
// 0080564d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00805651  51                   push ecx
// 00805652  8b0b                 mov ecx, dword ptr [ebx]
// 00805654  51                   push ecx
// 00805655  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00805659  52                   push edx
// 0080565a  2bc6                 sub eax, esi
// 0080565c  50                   push eax
// 0080565d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00805661  57                   push edi
// 00805662  56                   push esi
// 00805663  50                   push eax
// 00805664  e887dcf1ff           call 0x7232f0
// 00805669  5f                   pop edi
// 0080566a  5e                   pop esi
// 0080566b  5d                   pop ebp
// 0080566c  5b                   pop ebx
// 0080566d  83c410               add esp, 0x10
// 00805670  c21000               ret 0x10
// 00805673  5f                   pop edi
// 00805674  5e                   pop esi
// 00805675  5d                   pop ebp
// 00805676  b801000000           mov eax, 1
// 0080567b  5b                   pop ebx
// 0080567c  83c410               add esp, 0x10
// 0080567f  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
