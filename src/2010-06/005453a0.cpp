// roc 2010-06 005453a0  unit: RBX::RbxG3D::RenderScene  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005453a0
//
// 005453a0  6aff                 push -1
// 005453a2  68eefd9800           push 0x98fdee
// 005453a7  64a100000000         mov eax, dword ptr fs:[0]
// 005453ad  50                   push eax
// 005453ae  64892500000000       mov dword ptr fs:[0], esp
// 005453b5  51                   push ecx
// 005453b6  53                   push ebx
// 005453b7  56                   push esi
// 005453b8  8bf1                 mov esi, ecx
// 005453ba  89742408             mov dword ptr [esp + 8], esi
// 005453be  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005453c1  50                   push eax
// 005453c2  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005453ca  e8f1850000           call 0x54d9c0
// 005453cf  33db                 xor ebx, ebx
// 005453d1  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005453d4  895e50               mov dword ptr [esi + 0x50], ebx
// 005453d7  895e54               mov dword ptr [esi + 0x54], ebx
// 005453da  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 005453dd  51                   push ecx
// 005453de  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005453e3  e8d8850000           call 0x54d9c0
// 005453e8  895e40               mov dword ptr [esi + 0x40], ebx
// 005453eb  895e44               mov dword ptr [esi + 0x44], ebx
// 005453ee  895e48               mov dword ptr [esi + 0x48], ebx
// 005453f1  8b4630               mov eax, dword ptr [esi + 0x30]
// 005453f4  83c408               add esp, 8
// 005453f7  885c2414             mov byte ptr [esp + 0x14], bl
// 005453fb  3bc3                 cmp eax, ebx
// 005453fd  7428                 je 0x545427
// 005453ff  83c004               add eax, 4
// 00545402  50                   push eax
// 00545403  ff157ca39e00         call dword ptr [0x9ea37c]
// 00545409  85c0                 test eax, eax
// 0054540b  7517                 jne 0x545424
// 0054540d  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00545410  e80be7f3ff           call 0x483b20
// 00545415  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00545418  3bcb                 cmp ecx, ebx
// 0054541a  7408                 je 0x545424
// 0054541c  8b11                 mov edx, dword ptr [ecx]
// 0054541e  8b02                 mov eax, dword ptr [edx]
// 00545420  6a01                 push 1
// 00545422  ffd0                 call eax
// 00545424  895e30               mov dword ptr [esi + 0x30], ebx
// 00545427  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054542b  c7065032a100         mov dword ptr [esi], 0xa13250
// 00545431  5e                   pop esi
// 00545432  5b                   pop ebx
// 00545433  64890d00000000       mov dword ptr fs:[0], ecx
// 0054543a  83c410               add esp, 0x10
// 0054543d  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??1Lighting@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
