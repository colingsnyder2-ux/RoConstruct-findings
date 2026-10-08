// roc 2008-06 004bda30  unit: ProfiledRakPeer  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bda30
//
// 004bda30  56                   push esi
// 004bda31  8bf1                 mov esi, ecx
// 004bda33  8b4608               mov eax, dword ptr [esi + 8]
// 004bda36  394604               cmp dword ptr [esi + 4], eax
// 004bda39  7579                 jne 0x4bdab4
// 004bda3b  85c0                 test eax, eax
// 004bda3d  7509                 jne 0x4bda48
// 004bda3f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004bda46  eb05                 jmp 0x4bda4d
// 004bda48  03c0                 add eax, eax
// 004bda4a  894608               mov dword ptr [esi + 8], eax
// 004bda4d  8b4608               mov eax, dword ptr [esi + 8]
// 004bda50  33c9                 xor ecx, ecx
// 004bda52  ba0c000000           mov edx, 0xc
// 004bda57  f7e2                 mul edx
// 004bda59  0f90c1               seto cl
// 004bda5c  53                   push ebx
// 004bda5d  f7d9                 neg ecx
// 004bda5f  0bc8                 or ecx, eax
// 004bda61  51                   push ecx
// 004bda62  e8b92e1e00           call 0x6a0920
// 004bda67  83c404               add esp, 4
// 004bda6a  833e00               cmp dword ptr [esi], 0
// 004bda6d  8bd8                 mov ebx, eax
// 004bda6f  7440                 je 0x4bdab1
// 004bda71  33d2                 xor edx, edx
// 004bda73  395604               cmp dword ptr [esi + 4], edx
// 004bda76  762e                 jbe 0x4bdaa6
// 004bda78  55                   push ebp
// 004bda79  57                   push edi
// 004bda7a  bff8ffffff           mov edi, 0xfffffff8
// 004bda7f  8d4b08               lea ecx, [ebx + 8]
// 004bda82  2bfb                 sub edi, ebx
// 004bda84  8d040f               lea eax, [edi + ecx]
// 004bda87  0306                 add eax, dword ptr [esi]
// 004bda89  42                   inc edx
// 004bda8a  8b28                 mov ebp, dword ptr [eax]
// 004bda8c  8969f8               mov dword ptr [ecx - 8], ebp
// 004bda8f  668b6804             mov bp, word ptr [eax + 4]
// 004bda93  668969fc             mov word ptr [ecx - 4], bp
// 004bda97  8b4008               mov eax, dword ptr [eax + 8]
// 004bda9a  8901                 mov dword ptr [ecx], eax
// 004bda9c  83c10c               add ecx, 0xc
// 004bda9f  3b5604               cmp edx, dword ptr [esi + 4]
// 004bdaa2  72e0                 jb 0x4bda84
// 004bdaa4  5f                   pop edi
// 004bdaa5  5d                   pop ebp
// 004bdaa6  8b0e                 mov ecx, dword ptr [esi]
// 004bdaa8  51                   push ecx
// 004bdaa9  e8cc2b1e00           call 0x6a067a
// 004bdaae  83c404               add esp, 4
// 004bdab1  891e                 mov dword ptr [esi], ebx
// 004bdab3  5b                   pop ebx
// 004bdab4  8b4604               mov eax, dword ptr [esi + 4]
// 004bdab7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bdabb  8d1440               lea edx, [eax + eax*2]
// 004bdabe  8b06                 mov eax, dword ptr [esi]
// 004bdac0  8d0490               lea eax, [eax + edx*4]
// 004bdac3  8908                 mov dword ptr [eax], ecx
// 004bdac5  668b54240c           mov dx, word ptr [esp + 0xc]
// 004bdaca  66895004             mov word ptr [eax + 4], dx
// 004bdace  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004bdad2  894808               mov dword ptr [eax + 8], ecx
// 004bdad5  ff4604               inc dword ptr [esi + 4]
// 004bdad8  5e                   pop esi
// 004bdad9  c20c00               ret 0xc
// library rbxgs-raknet/LogCommandParser.cpp (function ?Insert@?$List@USystemAddressAndChannel@LogCommandParser@@@DataStructures@@QAEXUSystemAddressAndChannel@LogCommandParser@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LogCommandParser.cpp
