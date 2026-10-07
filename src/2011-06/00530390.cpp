// roc 2011-06 00530390  unit: RBX::Network::ProfiledRakPeer  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00530390
//
// 00530390  56                   push esi
// 00530391  8bf1                 mov esi, ecx
// 00530393  8b4608               mov eax, dword ptr [esi + 8]
// 00530396  394604               cmp dword ptr [esi + 4], eax
// 00530399  757d                 jne 0x530418
// 0053039b  85c0                 test eax, eax
// 0053039d  7509                 jne 0x5303a8
// 0053039f  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005303a6  eb05                 jmp 0x5303ad
// 005303a8  03c0                 add eax, eax
// 005303aa  894608               mov dword ptr [esi + 8], eax
// 005303ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005303b1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005303b5  8b4608               mov eax, dword ptr [esi + 8]
// 005303b8  57                   push edi
// 005303b9  51                   push ecx
// 005303ba  52                   push edx
// 005303bb  50                   push eax
// 005303bc  e81fe5ffff           call 0x52e8e0
// 005303c1  83c40c               add esp, 0xc
// 005303c4  833e00               cmp dword ptr [esi], 0
// 005303c7  8bf8                 mov edi, eax
// 005303c9  744a                 je 0x530415
// 005303cb  33d2                 xor edx, edx
// 005303cd  53                   push ebx
// 005303ce  395604               cmp dword ptr [esi + 4], edx
// 005303d1  761e                 jbe 0x5303f1
// 005303d3  8b06                 mov eax, dword ptr [esi]
// 005303d5  8d0cd500000000       lea ecx, [edx*8]
// 005303dc  8b1c08               mov ebx, dword ptr [eax + ecx]
// 005303df  03c1                 add eax, ecx
// 005303e1  891c39               mov dword ptr [ecx + edi], ebx
// 005303e4  8b4004               mov eax, dword ptr [eax + 4]
// 005303e7  42                   inc edx
// 005303e8  89443904             mov dword ptr [ecx + edi + 4], eax
// 005303ec  3b5604               cmp edx, dword ptr [esi + 4]
// 005303ef  72e2                 jb 0x5303d3
// 005303f1  8b06                 mov eax, dword ptr [esi]
// 005303f3  85c0                 test eax, eax
// 005303f5  741d                 je 0x530414
// 005303f7  8b48fc               mov ecx, dword ptr [eax - 4]
// 005303fa  8d58fc               lea ebx, [eax - 4]
// 005303fd  6840b68600           push 0x86b640
// 00530402  51                   push ecx
// 00530403  6a08                 push 8
// 00530405  50                   push eax
// 00530406  e8cdad2d00           call 0x80b1d8
// 0053040b  53                   push ebx
// 0053040c  e8f39e2d00           call 0x80a304
// 00530411  83c404               add esp, 4
// 00530414  5b                   pop ebx
// 00530415  893e                 mov dword ptr [esi], edi
// 00530417  5f                   pop edi
// 00530418  8b5604               mov edx, dword ptr [esi + 4]
// 0053041b  8b06                 mov eax, dword ptr [esi]
// 0053041d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530421  8d04d0               lea eax, [eax + edx*8]
// 00530424  8b11                 mov edx, dword ptr [ecx]
// 00530426  8910                 mov dword ptr [eax], edx
// 00530428  8b4904               mov ecx, dword ptr [ecx + 4]
// 0053042b  894804               mov dword ptr [eax + 4], ecx
// 0053042e  ff4604               inc dword ptr [esi + 4]
// 00530431  5e                   pop esi
// 00530432  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@Uuint24_t@RakNet@@@DataStructures@@@DataStructures@@QAEXABU?$RangeNode@Uuint24_t@RakNet@@@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
