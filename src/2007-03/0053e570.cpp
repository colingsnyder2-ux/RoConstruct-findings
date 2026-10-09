// roc 2007-03 0053e570  unit: seg_00530000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e570
//
// 0053e570  64a100000000         mov eax, dword ptr fs:[0]
// 0053e576  6aff                 push -1
// 0053e578  68ce1f7500           push 0x751fce
// 0053e57d  50                   push eax
// 0053e57e  b801000000           mov eax, 1
// 0053e583  64892500000000       mov dword ptr fs:[0], esp
// 0053e58a  840560b78b00         test byte ptr [0x8bb760], al
// 0053e590  7530                 jne 0x53e5c2
// 0053e592  090560b78b00         or dword ptr [0x8bb760], eax
// 0053e598  6864858900           push 0x898564
// 0053e59d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053e5a5  e8b6b5edff           call 0x419b60
// 0053e5aa  50                   push eax
// 0053e5ab  b9d8b68b00           mov ecx, 0x8bb6d8
// 0053e5b0  e82b280300           call 0x570de0
// 0053e5b5  6840957700           push 0x779540
// 0053e5ba  e8f40b0e00           call 0x61f1b3
// 0053e5bf  83c404               add esp, 4
// 0053e5c2  8b0c24               mov ecx, dword ptr [esp]
// 0053e5c5  b8d8b68b00           mov eax, 0x8bb6d8
// 0053e5ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0053e5d1  83c40c               add esp, 0xc
// 0053e5d4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
