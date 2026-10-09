// roc 2009-12 005f5700  unit: G3D::BinaryInput  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5700
//
// 005f5700  6aff                 push -1
// 005f5702  687a8e9200           push 0x928e7a
// 005f5707  64a100000000         mov eax, dword ptr fs:[0]
// 005f570d  50                   push eax
// 005f570e  64892500000000       mov dword ptr fs:[0], esp
// 005f5715  51                   push ecx
// 005f5716  53                   push ebx
// 005f5717  55                   push ebp
// 005f5718  33c0                 xor eax, eax
// 005f571a  56                   push esi
// 005f571b  8bf1                 mov esi, ecx
// 005f571d  8944240c             mov dword ptr [esp + 0xc], eax
// 005f5721  57                   push edi
// 005f5722  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005f5726  8944241c             mov dword ptr [esp + 0x1c], eax
// 005f572a  8b4644               mov eax, dword ptr [esi + 0x44]
// 005f572d  8d0c38               lea ecx, [eax + edi]
// 005f5730  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005f5733  7e0e                 jle 0x5f5743
// 005f5735  8b5634               mov edx, dword ptr [esi + 0x34]
// 005f5738  57                   push edi
// 005f5739  03d0                 add edx, eax
// 005f573b  52                   push edx
// 005f573c  8bce                 mov ecx, esi
// 005f573e  e87dfaffff           call 0x5f51c0
// 005f5743  8d4701               lea eax, [edi + 1]
// 005f5746  50                   push eax
// 005f5747  e8544bffff           call 0x5ea2a0
// 005f574c  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005f574f  034e44               add ecx, dword ptr [esi + 0x44]
// 005f5752  57                   push edi
// 005f5753  8be8                 mov ebp, eax
// 005f5755  51                   push ecx
// 005f5756  55                   push ebp
// 005f5757  e88af51f00           call 0x7f4ce6
// 005f575c  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 005f5760  83c410               add esp, 0x10
// 005f5763  55                   push ebp
// 005f5764  8bcb                 mov ecx, ebx
// 005f5766  c6042f00             mov byte ptr [edi + ebp], 0
// 005f576a  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f5770  55                   push ebp
// 005f5771  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f5779  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005f5781  e81a6af6ff           call 0x55c1a0
// 005f5786  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f578a  83c404               add esp, 4
// 005f578d  017e44               add dword ptr [esi + 0x44], edi
// 005f5790  5f                   pop edi
// 005f5791  5e                   pop esi
// 005f5792  5d                   pop ebp
// 005f5793  8bc3                 mov eax, ebx
// 005f5795  5b                   pop ebx
// 005f5796  64890d00000000       mov dword ptr fs:[0], ecx
// 005f579d  83c410               add esp, 0x10
// 005f57a0  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
