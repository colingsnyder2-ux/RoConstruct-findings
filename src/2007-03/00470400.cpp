// roc 2007-03 00470400  unit: seg_00470000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470400
//
// 00470400  56                   push esi
// 00470401  57                   push edi
// 00470402  8bf1                 mov esi, ecx
// 00470404  8b4608               mov eax, dword ptr [esi + 8]
// 00470407  8b3e                 mov edi, dword ptr [esi]
// 00470409  6a10                 push 0x10
// 0047040b  50                   push eax
// 0047040c  e8bf370800           call 0x4f3bd0
// 00470411  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00470415  8906                 mov dword ptr [esi], eax
// 00470417  8b7608               mov esi, dword ptr [esi + 8]
// 0047041a  83c408               add esp, 8
// 0047041d  3bce                 cmp ecx, esi
// 0047041f  7d02                 jge 0x470423
// 00470421  8bf1                 mov esi, ecx
// 00470423  03f0                 add esi, eax
// 00470425  3bc6                 cmp eax, esi
// 00470427  8bcf                 mov ecx, edi
// 00470429  7317                 jae 0x470442
// 0047042b  eb03                 jmp 0x470430
// 0047042d  8d4900               lea ecx, [ecx]
// 00470430  85c0                 test eax, eax
// 00470432  7404                 je 0x470438
// 00470434  8a11                 mov dl, byte ptr [ecx]
// 00470436  8810                 mov byte ptr [eax], dl
// 00470438  83c001               add eax, 1
// 0047043b  83c101               add ecx, 1
// 0047043e  3bc6                 cmp eax, esi
// 00470440  72ee                 jb 0x470430
// 00470442  57                   push edi
// 00470443  e8382f0800           call 0x4f3380
// 00470448  83c404               add esp, 4
// 0047044b  5f                   pop edi
// 0047044c  5e                   pop esi
// 0047044d  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
