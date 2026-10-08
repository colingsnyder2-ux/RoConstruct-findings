// roc 2010-06 00515e70  unit: RakPeer  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00515e70
//
// 00515e70  56                   push esi
// 00515e71  8bf1                 mov esi, ecx
// 00515e73  8b4608               mov eax, dword ptr [esi + 8]
// 00515e76  394604               cmp dword ptr [esi + 4], eax
// 00515e79  7579                 jne 0x515ef4
// 00515e7b  85c0                 test eax, eax
// 00515e7d  7509                 jne 0x515e88
// 00515e7f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00515e86  eb05                 jmp 0x515e8d
// 00515e88  03c0                 add eax, eax
// 00515e8a  894608               mov dword ptr [esi + 8], eax
// 00515e8d  8b4608               mov eax, dword ptr [esi + 8]
// 00515e90  33c9                 xor ecx, ecx
// 00515e92  ba0c000000           mov edx, 0xc
// 00515e97  f7e2                 mul edx
// 00515e99  0f90c1               seto cl
// 00515e9c  53                   push ebx
// 00515e9d  f7d9                 neg ecx
// 00515e9f  0bc8                 or ecx, eax
// 00515ea1  51                   push ecx
// 00515ea2  e8db1d2900           call 0x7a7c82
// 00515ea7  83c404               add esp, 4
// 00515eaa  833e00               cmp dword ptr [esi], 0
// 00515ead  8bd8                 mov ebx, eax
// 00515eaf  7440                 je 0x515ef1
// 00515eb1  33d2                 xor edx, edx
// 00515eb3  395604               cmp dword ptr [esi + 4], edx
// 00515eb6  762e                 jbe 0x515ee6
// 00515eb8  55                   push ebp
// 00515eb9  57                   push edi
// 00515eba  bff8ffffff           mov edi, 0xfffffff8
// 00515ebf  8d4b08               lea ecx, [ebx + 8]
// 00515ec2  2bfb                 sub edi, ebx
// 00515ec4  8d040f               lea eax, [edi + ecx]
// 00515ec7  0306                 add eax, dword ptr [esi]
// 00515ec9  42                   inc edx
// 00515eca  8b28                 mov ebp, dword ptr [eax]
// 00515ecc  8969f8               mov dword ptr [ecx - 8], ebp
// 00515ecf  668b6804             mov bp, word ptr [eax + 4]
// 00515ed3  668969fc             mov word ptr [ecx - 4], bp
// 00515ed7  8b4008               mov eax, dword ptr [eax + 8]
// 00515eda  8901                 mov dword ptr [ecx], eax
// 00515edc  83c10c               add ecx, 0xc
// 00515edf  3b5604               cmp edx, dword ptr [esi + 4]
// 00515ee2  72e0                 jb 0x515ec4
// 00515ee4  5f                   pop edi
// 00515ee5  5d                   pop ebp
// 00515ee6  8b0e                 mov ecx, dword ptr [esi]
// 00515ee8  51                   push ecx
// 00515ee9  e8581d2900           call 0x7a7c46
// 00515eee  83c404               add esp, 4
// 00515ef1  891e                 mov dword ptr [esi], ebx
// 00515ef3  5b                   pop ebx
// 00515ef4  8b4604               mov eax, dword ptr [esi + 4]
// 00515ef7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00515efb  8d1440               lea edx, [eax + eax*2]
// 00515efe  8b06                 mov eax, dword ptr [esi]
// 00515f00  8d0490               lea eax, [eax + edx*4]
// 00515f03  8908                 mov dword ptr [eax], ecx
// 00515f05  668b54240c           mov dx, word ptr [esp + 0xc]
// 00515f0a  66895004             mov word ptr [eax + 4], dx
// 00515f0e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00515f12  894808               mov dword ptr [eax + 8], ecx
// 00515f15  ff4604               inc dword ptr [esi + 4]
// 00515f18  5e                   pop esi
// 00515f19  c20c00               ret 0xc
// library rbxgs-raknet/LogCommandParser.cpp (function ?Insert@?$List@USystemAddressAndChannel@LogCommandParser@@@DataStructures@@QAEXUSystemAddressAndChannel@LogCommandParser@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
