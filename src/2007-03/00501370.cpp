// roc 2007-03 00501370  unit: seg_00500000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501370
//
// 00501370  8b442408             mov eax, dword ptr [esp + 8]
// 00501374  53                   push ebx
// 00501375  56                   push esi
// 00501376  8bf1                 mov esi, ecx
// 00501378  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0050137b  035e44               add ebx, dword ptr [esi + 0x44]
// 0050137e  39463c               cmp dword ptr [esi + 0x3c], eax
// 00501381  7d2e                 jge 0x5013b1
// 00501383  50                   push eax
// 00501384  89463c               mov dword ptr [esi + 0x3c], eax
// 00501387  8b4640               mov eax, dword ptr [esi + 0x40]
// 0050138a  50                   push eax
// 0050138b  e8802effff           call 0x4f4210
// 00501390  83c408               add esp, 8
// 00501393  85c0                 test eax, eax
// 00501395  894640               mov dword ptr [esi + 0x40], eax
// 00501398  7517                 jne 0x5013b1
// 0050139a  6840bf8400           push 0x84bf40
// 0050139f  8d4c2414             lea ecx, [esp + 0x14]
// 005013a3  51                   push ecx
// 005013a4  c744241800047a00     mov dword ptr [esp + 0x18], 0x7a0400
// 005013ac  e87ddc1100           call 0x61f02e
// 005013b1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005013b5  895634               mov dword ptr [esi + 0x34], edx
// 005013b8  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 005013bc  7205                 jb 0x5013c3
// 005013be  8b460c               mov eax, dword ptr [esi + 0xc]
// 005013c1  eb03                 jmp 0x5013c6
// 005013c3  8d460c               lea eax, [esi + 0xc]
// 005013c6  57                   push edi
// 005013c7  6848e57900           push 0x79e548
// 005013cc  50                   push eax
// 005013cd  ff155cea7700         call dword ptr [0x77ea5c]
// 005013d3  8bf8                 mov edi, eax
// 005013d5  8b4634               mov eax, dword ptr [esi + 0x34]
// 005013d8  6a00                 push 0
// 005013da  50                   push eax
// 005013db  57                   push edi
// 005013dc  ff151ce97700         call dword ptr [0x77e91c]
// 005013e2  8b4638               mov eax, dword ptr [esi + 0x38]
// 005013e5  2b4634               sub eax, dword ptr [esi + 0x34]
// 005013e8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005013eb  83c414               add esp, 0x14
// 005013ee  3bc8                 cmp ecx, eax
// 005013f0  7d02                 jge 0x5013f4
// 005013f2  8bc1                 mov eax, ecx
// 005013f4  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005013f7  57                   push edi
// 005013f8  50                   push eax
// 005013f9  6a01                 push 1
// 005013fb  51                   push ecx
// 005013fc  ff153cea7700         call dword ptr [0x77ea3c]
// 00501402  57                   push edi
// 00501403  ff1580ea7700         call dword ptr [0x77ea80]
// 00501409  2b5e34               sub ebx, dword ptr [esi + 0x34]
// 0050140c  83c414               add esp, 0x14
// 0050140f  5f                   pop edi
// 00501410  895e44               mov dword ptr [esi + 0x44], ebx
// 00501413  5e                   pop esi
// 00501414  5b                   pop ebx
// 00501415  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?loadIntoMemory@BinaryInput@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
