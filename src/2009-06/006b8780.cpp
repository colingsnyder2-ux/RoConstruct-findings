// roc 2009-06 006b8780  unit: RBX::UniversalTool  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8780
//
// 006b8780  83ec08               sub esp, 8
// 006b8783  53                   push ebx
// 006b8784  55                   push ebp
// 006b8785  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 006b878b  56                   push esi
// 006b878c  8bf1                 mov esi, ecx
// 006b878e  8b4624               mov eax, dword ptr [esi + 0x24]
// 006b8791  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 006b8794  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b8797  57                   push edi
// 006b8798  8d7e04               lea edi, [esi + 4]
// 006b879b  85c0                 test eax, eax
// 006b879d  7404                 je 0x6b87a3
// 006b879f  3bc1                 cmp eax, ecx
// 006b87a1  7402                 je 0x6b87a5
// 006b87a3  ffd5                 call ebp
// 006b87a5  395e28               cmp dword ptr [esi + 0x28], ebx
// 006b87a8  7454                 je 0x6b87fe
// 006b87aa  8b4624               mov eax, dword ptr [esi + 0x24]
// 006b87ad  85c0                 test eax, eax
// 006b87af  7509                 jne 0x6b87ba
// 006b87b1  ffd5                 call ebp
// 006b87b3  8b4624               mov eax, dword ptr [esi + 0x24]
// 006b87b6  85c0                 test eax, eax
// 006b87b8  7404                 je 0x6b87be
// 006b87ba  8b00                 mov eax, dword ptr [eax]
// 006b87bc  eb02                 jmp 0x6b87c0
// 006b87be  33c0                 xor eax, eax
// 006b87c0  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 006b87c3  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 006b87c6  7502                 jne 0x6b87ca
// 006b87c8  ffd5                 call ebp
// 006b87ca  8b5628               mov edx, dword ptr [esi + 0x28]
// 006b87cd  8b420c               mov eax, dword ptr [edx + 0xc]
// 006b87d0  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006b87d4  7528                 jne 0x6b87fe
// 006b87d6  8bca                 mov ecx, edx
// 006b87d8  8b5624               mov edx, dword ptr [esi + 0x24]
// 006b87db  51                   push ecx
// 006b87dc  52                   push edx
// 006b87dd  8d442418             lea eax, [esp + 0x18]
// 006b87e1  50                   push eax
// 006b87e2  8bcf                 mov ecx, edi
// 006b87e4  e82744f7ff           call 0x62cc10
// 006b87e9  8b08                 mov ecx, dword ptr [eax]
// 006b87eb  894e24               mov dword ptr [esi + 0x24], ecx
// 006b87ee  8b5004               mov edx, dword ptr [eax + 4]
// 006b87f1  5f                   pop edi
// 006b87f2  895628               mov dword ptr [esi + 0x28], edx
// 006b87f5  5e                   pop esi
// 006b87f6  5d                   pop ebp
// 006b87f7  5b                   pop ebx
// 006b87f8  83c408               add esp, 8
// 006b87fb  c20400               ret 4
// 006b87fe  8d44241c             lea eax, [esp + 0x1c]
// 006b8802  50                   push eax
// 006b8803  8bcf                 mov ecx, edi
// 006b8805  e8e665fcff           call 0x67edf0
// 006b880a  5f                   pop edi
// 006b880b  5e                   pop esi
// 006b880c  5d                   pop ebp
// 006b880d  5b                   pop ebx
// 006b880e  83c408               add esp, 8
// 006b8811  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?remove@IMovingManager@RBX@@IAEXPAVIMoving@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
