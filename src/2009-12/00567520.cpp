// roc 2009-12 00567520  unit: RakPeer  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00567520
//
// 00567520  56                   push esi
// 00567521  8bf1                 mov esi, ecx
// 00567523  8b4608               mov eax, dword ptr [esi + 8]
// 00567526  394604               cmp dword ptr [esi + 4], eax
// 00567529  7579                 jne 0x5675a4
// 0056752b  85c0                 test eax, eax
// 0056752d  7509                 jne 0x567538
// 0056752f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00567536  eb05                 jmp 0x56753d
// 00567538  03c0                 add eax, eax
// 0056753a  894608               mov dword ptr [esi + 8], eax
// 0056753d  8b4608               mov eax, dword ptr [esi + 8]
// 00567540  33c9                 xor ecx, ecx
// 00567542  ba0c000000           mov edx, 0xc
// 00567547  f7e2                 mul edx
// 00567549  0f90c1               seto cl
// 0056754c  53                   push ebx
// 0056754d  f7d9                 neg ecx
// 0056754f  0bc8                 or ecx, eax
// 00567551  51                   push ecx
// 00567552  e8ebc52800           call 0x7f3b42
// 00567557  83c404               add esp, 4
// 0056755a  833e00               cmp dword ptr [esi], 0
// 0056755d  8bd8                 mov ebx, eax
// 0056755f  7440                 je 0x5675a1
// 00567561  33d2                 xor edx, edx
// 00567563  395604               cmp dword ptr [esi + 4], edx
// 00567566  762e                 jbe 0x567596
// 00567568  55                   push ebp
// 00567569  57                   push edi
// 0056756a  bff8ffffff           mov edi, 0xfffffff8
// 0056756f  8d4b08               lea ecx, [ebx + 8]
// 00567572  2bfb                 sub edi, ebx
// 00567574  8d040f               lea eax, [edi + ecx]
// 00567577  0306                 add eax, dword ptr [esi]
// 00567579  42                   inc edx
// 0056757a  8b28                 mov ebp, dword ptr [eax]
// 0056757c  8969f8               mov dword ptr [ecx - 8], ebp
// 0056757f  668b6804             mov bp, word ptr [eax + 4]
// 00567583  668969fc             mov word ptr [ecx - 4], bp
// 00567587  8b4008               mov eax, dword ptr [eax + 8]
// 0056758a  8901                 mov dword ptr [ecx], eax
// 0056758c  83c10c               add ecx, 0xc
// 0056758f  3b5604               cmp edx, dword ptr [esi + 4]
// 00567592  72e0                 jb 0x567574
// 00567594  5f                   pop edi
// 00567595  5d                   pop ebp
// 00567596  8b0e                 mov ecx, dword ptr [esi]
// 00567598  51                   push ecx
// 00567599  e868c52800           call 0x7f3b06
// 0056759e  83c404               add esp, 4
// 005675a1  891e                 mov dword ptr [esi], ebx
// 005675a3  5b                   pop ebx
// 005675a4  8b4604               mov eax, dword ptr [esi + 4]
// 005675a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005675ab  8d1440               lea edx, [eax + eax*2]
// 005675ae  8b06                 mov eax, dword ptr [esi]
// 005675b0  8d0490               lea eax, [eax + edx*4]
// 005675b3  8908                 mov dword ptr [eax], ecx
// 005675b5  668b54240c           mov dx, word ptr [esp + 0xc]
// 005675ba  66895004             mov word ptr [eax + 4], dx
// 005675be  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005675c2  894808               mov dword ptr [eax + 8], ecx
// 005675c5  ff4604               inc dword ptr [esi + 4]
// 005675c8  5e                   pop esi
// 005675c9  c20c00               ret 0xc
// library rbxgs-raknet/LogCommandParser.cpp (function ?Insert@?$List@USystemAddressAndChannel@LogCommandParser@@@DataStructures@@QAEXUSystemAddressAndChannel@LogCommandParser@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
