// roc 2007-08 004f1060  unit: RBX::Render::AggregatingSceneManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1060
//
// 004f1060  83ec08               sub esp, 8
// 004f1063  53                   push ebx
// 004f1064  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 004f1067  395910               cmp dword ptr [ecx + 0x10], ebx
// 004f106a  55                   push ebp
// 004f106b  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004f1071  56                   push esi
// 004f1072  57                   push edi
// 004f1073  8d790c               lea edi, [ecx + 0xc]
// 004f1076  7602                 jbe 0x4f107a
// 004f1078  ffd5                 call ebp
// 004f107a  8b7704               mov esi, dword ptr [edi + 4]
// 004f107d  3b7708               cmp esi, dword ptr [edi + 8]
// 004f1080  7602                 jbe 0x4f1084
// 004f1082  ffd5                 call ebp
// 004f1084  3bf3                 cmp esi, ebx
// 004f1086  89742414             mov dword ptr [esp + 0x14], esi
// 004f108a  7411                 je 0x4f109d
// 004f108c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f1090  8b00                 mov eax, dword ptr [eax]
// 004f1092  3906                 cmp dword ptr [esi], eax
// 004f1094  7407                 je 0x4f109d
// 004f1096  83c604               add esi, 4
// 004f1099  3bf3                 cmp esi, ebx
// 004f109b  75f5                 jne 0x4f1092
// 004f109d  8b5f08               mov ebx, dword ptr [edi + 8]
// 004f10a0  395f04               cmp dword ptr [edi + 4], ebx
// 004f10a3  7608                 jbe 0x4f10ad
// 004f10a5  ffd5                 call ebp
// 004f10a7  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004f10ad  85ff                 test edi, edi
// 004f10af  7404                 je 0x4f10b5
// 004f10b1  3bff                 cmp edi, edi
// 004f10b3  7402                 je 0x4f10b7
// 004f10b5  ffd5                 call ebp
// 004f10b7  3bf3                 cmp esi, ebx
// 004f10b9  741a                 je 0x4f10d5
// 004f10bb  56                   push esi
// 004f10bc  57                   push edi
// 004f10bd  8d4c2418             lea ecx, [esp + 0x18]
// 004f10c1  51                   push ecx
// 004f10c2  8bcf                 mov ecx, edi
// 004f10c4  e847f5ffff           call 0x4f0610
// 004f10c9  5f                   pop edi
// 004f10ca  5e                   pop esi
// 004f10cb  5d                   pop ebp
// 004f10cc  b001                 mov al, 1
// 004f10ce  5b                   pop ebx
// 004f10cf  83c408               add esp, 8
// 004f10d2  c20400               ret 4
// 004f10d5  5f                   pop edi
// 004f10d6  5e                   pop esi
// 004f10d7  5d                   pop ebp
// 004f10d8  32c0                 xor al, al
// 004f10da  5b                   pop ebx
// 004f10db  83c408               add esp, 8
// 004f10de  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@Bucket@AggregatingSceneManager@Render@RBX@@QAE_NABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
