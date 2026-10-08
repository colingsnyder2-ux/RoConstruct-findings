// roc 2009-06 004ffe20  unit: RakPeer  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ffe20
//
// 004ffe20  56                   push esi
// 004ffe21  8bf1                 mov esi, ecx
// 004ffe23  8b4608               mov eax, dword ptr [esi + 8]
// 004ffe26  394604               cmp dword ptr [esi + 4], eax
// 004ffe29  7579                 jne 0x4ffea4
// 004ffe2b  85c0                 test eax, eax
// 004ffe2d  7509                 jne 0x4ffe38
// 004ffe2f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004ffe36  eb05                 jmp 0x4ffe3d
// 004ffe38  03c0                 add eax, eax
// 004ffe3a  894608               mov dword ptr [esi + 8], eax
// 004ffe3d  8b4608               mov eax, dword ptr [esi + 8]
// 004ffe40  33c9                 xor ecx, ecx
// 004ffe42  ba0c000000           mov edx, 0xc
// 004ffe47  f7e2                 mul edx
// 004ffe49  0f90c1               seto cl
// 004ffe4c  53                   push ebx
// 004ffe4d  f7d9                 neg ecx
// 004ffe4f  0bc8                 or ecx, eax
// 004ffe51  51                   push ecx
// 004ffe52  e8c38e2100           call 0x718d1a
// 004ffe57  83c404               add esp, 4
// 004ffe5a  833e00               cmp dword ptr [esi], 0
// 004ffe5d  8bd8                 mov ebx, eax
// 004ffe5f  7440                 je 0x4ffea1
// 004ffe61  33d2                 xor edx, edx
// 004ffe63  395604               cmp dword ptr [esi + 4], edx
// 004ffe66  762e                 jbe 0x4ffe96
// 004ffe68  55                   push ebp
// 004ffe69  57                   push edi
// 004ffe6a  bff8ffffff           mov edi, 0xfffffff8
// 004ffe6f  8d4b08               lea ecx, [ebx + 8]
// 004ffe72  2bfb                 sub edi, ebx
// 004ffe74  8d040f               lea eax, [edi + ecx]
// 004ffe77  0306                 add eax, dword ptr [esi]
// 004ffe79  42                   inc edx
// 004ffe7a  8b28                 mov ebp, dword ptr [eax]
// 004ffe7c  8969f8               mov dword ptr [ecx - 8], ebp
// 004ffe7f  668b6804             mov bp, word ptr [eax + 4]
// 004ffe83  668969fc             mov word ptr [ecx - 4], bp
// 004ffe87  8b4008               mov eax, dword ptr [eax + 8]
// 004ffe8a  8901                 mov dword ptr [ecx], eax
// 004ffe8c  83c10c               add ecx, 0xc
// 004ffe8f  3b5604               cmp edx, dword ptr [esi + 4]
// 004ffe92  72e0                 jb 0x4ffe74
// 004ffe94  5f                   pop edi
// 004ffe95  5d                   pop ebp
// 004ffe96  8b0e                 mov ecx, dword ptr [esi]
// 004ffe98  51                   push ecx
// 004ffe99  e8408e2100           call 0x718cde
// 004ffe9e  83c404               add esp, 4
// 004ffea1  891e                 mov dword ptr [esi], ebx
// 004ffea3  5b                   pop ebx
// 004ffea4  8b4604               mov eax, dword ptr [esi + 4]
// 004ffea7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ffeab  8d1440               lea edx, [eax + eax*2]
// 004ffeae  8b06                 mov eax, dword ptr [esi]
// 004ffeb0  8d0490               lea eax, [eax + edx*4]
// 004ffeb3  8908                 mov dword ptr [eax], ecx
// 004ffeb5  668b54240c           mov dx, word ptr [esp + 0xc]
// 004ffeba  66895004             mov word ptr [eax + 4], dx
// 004ffebe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ffec2  894808               mov dword ptr [eax + 8], ecx
// 004ffec5  ff4604               inc dword ptr [esi + 4]
// 004ffec8  5e                   pop esi
// 004ffec9  c20c00               ret 0xc
// library rbxgs-raknet/LogCommandParser.cpp (function ?Insert@?$List@USystemAddressAndChannel@LogCommandParser@@@DataStructures@@QAEXUSystemAddressAndChannel@LogCommandParser@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
