// roc 2007-03 005ac330  unit: seg_005a0000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac330
//
// 005ac330  8b442408             mov eax, dword ptr [esp + 8]
// 005ac334  57                   push edi
// 005ac335  8b7c2408             mov edi, dword ptr [esp + 8]
// 005ac339  3bf8                 cmp edi, eax
// 005ac33b  0f8491000000         je 0x5ac3d2
// 005ac341  56                   push esi
// 005ac342  8d7704               lea esi, [edi + 4]
// 005ac345  3bf0                 cmp esi, eax
// 005ac347  0f8484000000         je 0x5ac3d1
// 005ac34d  53                   push ebx
// 005ac34e  55                   push ebp
// 005ac34f  8d6e04               lea ebp, [esi + 4]
// 005ac352  8b07                 mov eax, dword ptr [edi]
// 005ac354  8b0e                 mov ecx, dword ptr [esi]
// 005ac356  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ac35a  50                   push eax
// 005ac35b  51                   push ecx
// 005ac35c  ffd3                 call ebx
// 005ac35e  83c408               add esp, 8
// 005ac361  84c0                 test al, al
// 005ac363  7419                 je 0x5ac37e
// 005ac365  3bfe                 cmp edi, esi
// 005ac367  745a                 je 0x5ac3c3
// 005ac369  3bf5                 cmp esi, ebp
// 005ac36b  7456                 je 0x5ac3c3
// 005ac36d  6a00                 push 0
// 005ac36f  6a00                 push 0
// 005ac371  55                   push ebp
// 005ac372  56                   push esi
// 005ac373  57                   push edi
// 005ac374  e81745f4ff           call 0x4f0890
// 005ac379  83c414               add esp, 0x14
// 005ac37c  eb45                 jmp 0x5ac3c3
// 005ac37e  8b55f8               mov edx, dword ptr [ebp - 8]
// 005ac381  8b06                 mov eax, dword ptr [esi]
// 005ac383  8d7df8               lea edi, [ebp - 8]
// 005ac386  52                   push edx
// 005ac387  50                   push eax
// 005ac388  ffd3                 call ebx
// 005ac38a  83c408               add esp, 8
// 005ac38d  84c0                 test al, al
// 005ac38f  742e                 je 0x5ac3bf
// 005ac391  8b4ffc               mov ecx, dword ptr [edi - 4]
// 005ac394  8b16                 mov edx, dword ptr [esi]
// 005ac396  8bdf                 mov ebx, edi
// 005ac398  83ef04               sub edi, 4
// 005ac39b  51                   push ecx
// 005ac39c  52                   push edx
// 005ac39d  ff542424             call dword ptr [esp + 0x24]
// 005ac3a1  83c408               add esp, 8
// 005ac3a4  84c0                 test al, al
// 005ac3a6  75e9                 jne 0x5ac391
// 005ac3a8  3bde                 cmp ebx, esi
// 005ac3aa  7413                 je 0x5ac3bf
// 005ac3ac  3bf5                 cmp esi, ebp
// 005ac3ae  740f                 je 0x5ac3bf
// 005ac3b0  6a00                 push 0
// 005ac3b2  6a00                 push 0
// 005ac3b4  55                   push ebp
// 005ac3b5  56                   push esi
// 005ac3b6  53                   push ebx
// 005ac3b7  e8d444f4ff           call 0x4f0890
// 005ac3bc  83c414               add esp, 0x14
// 005ac3bf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005ac3c3  83c604               add esi, 4
// 005ac3c6  83c504               add ebp, 4
// 005ac3c9  3b742418             cmp esi, dword ptr [esp + 0x18]
// 005ac3cd  7583                 jne 0x5ac352
// 005ac3cf  5d                   pop ebp
// 005ac3d0  5b                   pop ebx
// 005ac3d1  5e                   pop esi
// 005ac3d2  5f                   pop edi
// 005ac3d3  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Insertion_sort@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
