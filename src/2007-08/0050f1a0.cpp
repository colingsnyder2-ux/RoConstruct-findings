// from server: 100% by tester
// roc 2007-03 00503840  unit: seg_00500000  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503840
//
// 00503840  6aff                 push -1
// 00503842  6818107500           push 0x751018
// 00503847  64a100000000         mov eax, dword ptr fs:[0]
// 0050384d  50                   push eax
// 0050384e  83ec34               sub esp, 0x34
// 00503851  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00503856  33c4                 xor eax, esp
// 00503858  89442430             mov dword ptr [esp + 0x30], eax
// 0050385c  53                   push ebx
// 0050385d  55                   push ebp
// 0050385e  56                   push esi
// 0050385f  57                   push edi
// 00503860  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00503865  33c4                 xor eax, esp
// 00503867  50                   push eax
// 00503868  8d442448             lea eax, [esp + 0x48]
// 0050386c  64a300000000         mov dword ptr fs:[0], eax
// 00503872  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00503876  33ff                 xor edi, edi
// 00503878  8bf1                 mov esi, ecx
// 0050387a  397e10               cmp dword ptr [esi + 0x10], edi
// 0050387d  897c2414             mov dword ptr [esp + 0x14], edi
// 00503881  752c                 jne 0x5038af
// 00503883  8d442418             lea eax, [esp + 0x18]
// 00503887  50                   push eax
// 00503888  e883e9ffff           call 0x502210
// 0050388d  8d4c2418             lea ecx, [esp + 0x18]
// 00503891  51                   push ecx
// 00503892  8bce                 mov ecx, esi
// 00503894  897c2454             mov dword ptr [esp + 0x54], edi
// 00503898  e833fbffff           call 0x5033d0
// 0050389d  8d4c2418             lea ecx, [esp + 0x18]
// 005038a1  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005038a9  ff158ce77700         call dword ptr [0x77e78c]
// 005038af  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005038b2  8b5610               mov edx, dword ptr [esi + 0x10]
// 005038b5  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005038bb  03d7                 add edx, edi
// 005038bd  3bfa                 cmp edi, edx
// 005038bf  7602                 jbe 0x5038c3
// 005038c1  ffd5                 call ebp
// 005038c3  8b4610               mov eax, dword ptr [esi + 0x10]
// 005038c6  03460c               add eax, dword ptr [esi + 0xc]
// 005038c9  3bf8                 cmp edi, eax
// 005038cb  7202                 jb 0x5038cf
// 005038cd  ffd5                 call ebp
// 005038cf  8b4608               mov eax, dword ptr [esi + 8]
// 005038d2  3bc7                 cmp eax, edi
// 005038d4  7702                 ja 0x5038d8
// 005038d6  2bf8                 sub edi, eax
// 005038d8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005038db  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 005038de  56                   push esi
// 005038df  8bcb                 mov ecx, ebx
// 005038e1  ff157ce77700         call dword ptr [0x77e77c]
// 005038e7  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005038ea  89531c               mov dword ptr [ebx + 0x1c], edx
// 005038ed  8b4620               mov eax, dword ptr [esi + 0x20]
// 005038f0  894320               mov dword ptr [ebx + 0x20], eax
// 005038f3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005038f6  894b24               mov dword ptr [ebx + 0x24], ecx
// 005038f9  8b5628               mov edx, dword ptr [esi + 0x28]
// 005038fc  895328               mov dword ptr [ebx + 0x28], edx
// 005038ff  8bc3                 mov eax, ebx
// 00503901  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00503905  64890d00000000       mov dword ptr fs:[0], ecx
// 0050390c  59                   pop ecx
// 0050390d  5f                   pop edi
// 0050390e  5e                   pop esi
// 0050390f  5d                   pop ebp
// 00503910  5b                   pop ebx
// 00503911  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00503915  33cc                 xor ecx, esp
// 00503917  e88ab51100           call 0x61eea6
// 0050391c  83c440               add esp, 0x40
// 0050391f  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?peek@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
