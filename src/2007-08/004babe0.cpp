// roc 2007-08 004babe0  unit: RakPeer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004babe0
//
// 004babe0  56                   push esi
// 004babe1  8bf1                 mov esi, ecx
// 004babe3  8b4608               mov eax, dword ptr [esi + 8]
// 004babe6  394604               cmp dword ptr [esi + 4], eax
// 004babe9  757b                 jne 0x4bac66
// 004babeb  85c0                 test eax, eax
// 004babed  7509                 jne 0x4babf8
// 004babef  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004babf6  eb05                 jmp 0x4babfd
// 004babf8  03c0                 add eax, eax
// 004babfa  894608               mov dword ptr [esi + 8], eax
// 004babfd  8b4608               mov eax, dword ptr [esi + 8]
// 004bac00  33c9                 xor ecx, ecx
// 004bac02  ba0c000000           mov edx, 0xc
// 004bac07  f7e2                 mul edx
// 004bac09  0f90c1               seto cl
// 004bac0c  53                   push ebx
// 004bac0d  f7d9                 neg ecx
// 004bac0f  0bc8                 or ecx, eax
// 004bac11  51                   push ecx
// 004bac12  e8df521700           call 0x62fef6
// 004bac17  83c404               add esp, 4
// 004bac1a  833e00               cmp dword ptr [esi], 0
// 004bac1d  8bd8                 mov ebx, eax
// 004bac1f  7442                 je 0x4bac63
// 004bac21  33d2                 xor edx, edx
// 004bac23  395604               cmp dword ptr [esi + 4], edx
// 004bac26  7630                 jbe 0x4bac58
// 004bac28  55                   push ebp
// 004bac29  57                   push edi
// 004bac2a  bff8ffffff           mov edi, 0xfffffff8
// 004bac2f  8d4b08               lea ecx, [ebx + 8]
// 004bac32  2bfb                 sub edi, ebx
// 004bac34  8d040f               lea eax, [edi + ecx]
// 004bac37  0306                 add eax, dword ptr [esi]
// 004bac39  83c201               add edx, 1
// 004bac3c  8b28                 mov ebp, dword ptr [eax]
// 004bac3e  8969f8               mov dword ptr [ecx - 8], ebp
// 004bac41  668b6804             mov bp, word ptr [eax + 4]
// 004bac45  668969fc             mov word ptr [ecx - 4], bp
// 004bac49  8b4008               mov eax, dword ptr [eax + 8]
// 004bac4c  8901                 mov dword ptr [ecx], eax
// 004bac4e  83c10c               add ecx, 0xc
// 004bac51  3b5604               cmp edx, dword ptr [esi + 4]
// 004bac54  72de                 jb 0x4bac34
// 004bac56  5f                   pop edi
// 004bac57  5d                   pop ebp
// 004bac58  8b0e                 mov ecx, dword ptr [esi]
// 004bac5a  51                   push ecx
// 004bac5b  e802501700           call 0x62fc62
// 004bac60  83c404               add esp, 4
// 004bac63  891e                 mov dword ptr [esi], ebx
// 004bac65  5b                   pop ebx
// 004bac66  8b4604               mov eax, dword ptr [esi + 4]
// 004bac69  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bac6d  8d1440               lea edx, [eax + eax*2]
// 004bac70  8b06                 mov eax, dword ptr [esi]
// 004bac72  8d0490               lea eax, [eax + edx*4]
// 004bac75  668b54240c           mov dx, word ptr [esp + 0xc]
// 004bac7a  8908                 mov dword ptr [eax], ecx
// 004bac7c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bac80  66895004             mov word ptr [eax + 4], dx
// 004bac84  894808               mov dword ptr [eax + 8], ecx
// 004bac87  83460401             add dword ptr [esi + 4], 1
// 004bac8b  5e                   pop esi
// 004bac8c  c20c00               ret 0xc
// library rbxgs-raknet/LogCommandParser.cpp (function ?Insert@?$List@USystemAddressAndChannel@LogCommandParser@@@DataStructures@@QAEXUSystemAddressAndChannel@LogCommandParser@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
