// from server: 100% by auto
// roc 2008-06 00512800  unit: G3D::GCamera  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512800
//
// 00512800  51                   push ecx
// 00512801  53                   push ebx
// 00512802  55                   push ebp
// 00512803  56                   push esi
// 00512804  57                   push edi
// 00512805  8bf9                 mov edi, ecx
// 00512807  803f00               cmp byte ptr [edi], 0
// 0051280a  bd01000000           mov ebp, 1
// 0051280f  746b                 je 0x51287c
// 00512811  33db                 xor ebx, ebx
// 00512813  395f50               cmp dword ptr [edi + 0x50], ebx
// 00512816  7e5b                 jle 0x512873
// 00512818  8d7728               lea esi, [edi + 0x28]
// 0051281b  eb03                 jmp 0x512820
// 0051281d  8d4900               lea ecx, [ecx]
// 00512820  8b4604               mov eax, dword ptr [esi + 4]
// 00512823  3b4608               cmp eax, dword ptr [esi + 8]
// 00512826  8b0e                 mov ecx, dword ptr [esi]
// 00512828  7d0c                 jge 0x512836
// 0051282a  03c8                 add ecx, eax
// 0051282c  7403                 je 0x512831
// 0051282e  c60120               mov byte ptr [ecx], 0x20
// 00512831  016e04               add dword ptr [esi + 4], ebp
// 00512834  eb36                 jmp 0x51286c
// 00512836  8d542413             lea edx, [esp + 0x13]
// 0051283a  3bd1                 cmp edx, ecx
// 0051283c  7219                 jb 0x512857
// 0051283e  03c8                 add ecx, eax
// 00512840  3bd1                 cmp edx, ecx
// 00512842  7313                 jae 0x512857
// 00512844  8d442413             lea eax, [esp + 0x13]
// 00512848  50                   push eax
// 00512849  8bce                 mov ecx, esi
// 0051284b  c644241720           mov byte ptr [esp + 0x17], 0x20
// 00512850  e83bffffff           call 0x512790
// 00512855  eb15                 jmp 0x51286c
// 00512857  6a00                 push 0
// 00512859  40                   inc eax
// 0051285a  50                   push eax
// 0051285b  8bce                 mov ecx, esi
// 0051285d  e82efeffff           call 0x512690
// 00512862  8b0e                 mov ecx, dword ptr [esi]
// 00512864  8b5604               mov edx, dword ptr [esi + 4]
// 00512867  c64411ff20           mov byte ptr [ecx + edx - 1], 0x20
// 0051286c  03dd                 add ebx, ebp
// 0051286e  3b5f50               cmp ebx, dword ptr [edi + 0x50]
// 00512871  7cad                 jl 0x512820
// 00512873  8b4750               mov eax, dword ptr [edi + 0x50]
// 00512876  c60700               mov byte ptr [edi], 0
// 00512879  894704               mov dword ptr [edi + 4], eax
// 0051287c  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0051287f  3b4730               cmp eax, dword ptr [edi + 0x30]
// 00512882  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00512885  8d7728               lea esi, [edi + 0x28]
// 00512888  7d0f                 jge 0x512899
// 0051288a  03c8                 add ecx, eax
// 0051288c  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 00512890  7402                 je 0x512894
// 00512892  8819                 mov byte ptr [ecx], bl
// 00512894  016e04               add dword ptr [esi + 4], ebp
// 00512897  eb3c                 jmp 0x5128d5
// 00512899  8d542418             lea edx, [esp + 0x18]
// 0051289d  3bd1                 cmp edx, ecx
// 0051289f  721c                 jb 0x5128bd
// 005128a1  03c8                 add ecx, eax
// 005128a3  3bd1                 cmp edx, ecx
// 005128a5  7316                 jae 0x5128bd
// 005128a7  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 005128ab  8d442418             lea eax, [esp + 0x18]
// 005128af  50                   push eax
// 005128b0  8bce                 mov ecx, esi
// 005128b2  885c241c             mov byte ptr [esp + 0x1c], bl
// 005128b6  e8d5feffff           call 0x512790
// 005128bb  eb18                 jmp 0x5128d5
// 005128bd  6a00                 push 0
// 005128bf  40                   inc eax
// 005128c0  50                   push eax
// 005128c1  8bce                 mov ecx, esi
// 005128c3  e8c8fdffff           call 0x512690
// 005128c8  8b0e                 mov ecx, dword ptr [esi]
// 005128ca  8b5604               mov edx, dword ptr [esi + 4]
// 005128cd  8a5c2418             mov bl, byte ptr [esp + 0x18]
// 005128d1  885c11ff             mov byte ptr [ecx + edx - 1], bl
// 005128d5  80fb0d               cmp bl, 0xd
// 005128d8  7403                 je 0x5128dd
// 005128da  016f04               add dword ptr [edi + 4], ebp
// 005128dd  80fb22               cmp bl, 0x22
// 005128e0  750a                 jne 0x5128ec
// 005128e2  807f0800             cmp byte ptr [edi + 8], 0
// 005128e6  0f94c0               sete al
// 005128e9  884708               mov byte ptr [edi + 8], al
// 005128ec  80fb0a               cmp bl, 0xa
// 005128ef  0f94c0               sete al
// 005128f2  8807                 mov byte ptr [edi], al
// 005128f4  84c0                 test al, al
// 005128f6  7407                 je 0x5128ff
// 005128f8  c7470400000000       mov dword ptr [edi + 4], 0
// 005128ff  5f                   pop edi
// 00512900  5e                   pop esi
// 00512901  5d                   pop ebp
// 00512902  5b                   pop ebx
// 00512903  59                   pop ecx
// 00512904  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?indentAppend@TextOutput@G3D@@AAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
