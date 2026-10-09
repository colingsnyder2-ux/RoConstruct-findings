// roc 2009-12 00570600  unit: CSHA1  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570600
//
// 00570600  56                   push esi
// 00570601  8bf1                 mov esi, ecx
// 00570603  8b4608               mov eax, dword ptr [esi + 8]
// 00570606  394604               cmp dword ptr [esi + 4], eax
// 00570609  7559                 jne 0x570664
// 0057060b  85c0                 test eax, eax
// 0057060d  7509                 jne 0x570618
// 0057060f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 00570616  eb05                 jmp 0x57061d
// 00570618  03c0                 add eax, eax
// 0057061a  894608               mov dword ptr [esi + 8], eax
// 0057061d  8b4608               mov eax, dword ptr [esi + 8]
// 00570620  33c9                 xor ecx, ecx
// 00570622  ba04000000           mov edx, 4
// 00570627  f7e2                 mul edx
// 00570629  0f90c1               seto cl
// 0057062c  57                   push edi
// 0057062d  f7d9                 neg ecx
// 0057062f  0bc8                 or ecx, eax
// 00570631  51                   push ecx
// 00570632  e80b352800           call 0x7f3b42
// 00570637  83c404               add esp, 4
// 0057063a  833e00               cmp dword ptr [esi], 0
// 0057063d  8bf8                 mov edi, eax
// 0057063f  7420                 je 0x570661
// 00570641  33c0                 xor eax, eax
// 00570643  394604               cmp dword ptr [esi + 4], eax
// 00570646  760e                 jbe 0x570656
// 00570648  8b0e                 mov ecx, dword ptr [esi]
// 0057064a  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0057064d  891487               mov dword ptr [edi + eax*4], edx
// 00570650  40                   inc eax
// 00570651  3b4604               cmp eax, dword ptr [esi + 4]
// 00570654  72f2                 jb 0x570648
// 00570656  8b06                 mov eax, dword ptr [esi]
// 00570658  50                   push eax
// 00570659  e8a8342800           call 0x7f3b06
// 0057065e  83c404               add esp, 4
// 00570661  893e                 mov dword ptr [esi], edi
// 00570663  5f                   pop edi
// 00570664  8b4e04               mov ecx, dword ptr [esi + 4]
// 00570667  8b16                 mov edx, dword ptr [esi]
// 00570669  8b442408             mov eax, dword ptr [esp + 8]
// 0057066d  89048a               mov dword ptr [edx + ecx*4], eax
// 00570670  ff4604               inc dword ptr [esi + 4]
// 00570673  5e                   pop esi
// 00570674  c20400               ret 4
// library rbxgs-raknet/ConsoleServer.cpp (function ?Insert@?$List@PAVCommandParserInterface@@@DataStructures@@QAEXQAVCommandParserInterface@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConsoleServer.cpp
