// roc 2007-03 005f6690  unit: seg_005f0000  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6690
//
// 005f6690  83ec18               sub esp, 0x18
// 005f6693  53                   push ebx
// 005f6694  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005f6698  56                   push esi
// 005f6699  57                   push edi
// 005f669a  53                   push ebx
// 005f669b  8bf1                 mov esi, ecx
// 005f669d  e89ef4ffff           call 0x5f5b40
// 005f66a2  85f6                 test esi, esi
// 005f66a4  8bf8                 mov edi, eax
// 005f66a6  7506                 jne 0x5f66ae
// 005f66a8  ff1544e97700         call dword ptr [0x77e944]
// 005f66ae  3b7e04               cmp edi, dword ptr [esi + 4]
// 005f66b1  7410                 je 0x5f66c3
// 005f66b3  8d470c               lea eax, [edi + 0xc]
// 005f66b6  50                   push eax
// 005f66b7  53                   push ebx
// 005f66b8  8bce                 mov ecx, esi
// 005f66ba  e821ebffff           call 0x5f51e0
// 005f66bf  84c0                 test al, al
// 005f66c1  7434                 je 0x5f66f7
// 005f66c3  d903                 fld dword ptr [ebx]
// 005f66c5  8d4c2414             lea ecx, [esp + 0x14]
// 005f66c9  51                   push ecx
// 005f66ca  d95c2418             fstp dword ptr [esp + 0x18]
// 005f66ce  d94304               fld dword ptr [ebx + 4]
// 005f66d1  57                   push edi
// 005f66d2  d95c2420             fstp dword ptr [esp + 0x20]
// 005f66d6  56                   push esi
// 005f66d7  d94308               fld dword ptr [ebx + 8]
// 005f66da  8d542418             lea edx, [esp + 0x18]
// 005f66de  52                   push edx
// 005f66df  d95c242c             fstp dword ptr [esp + 0x2c]
// 005f66e3  8bce                 mov ecx, esi
// 005f66e5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005f66ed  e89efdffff           call 0x5f6490
// 005f66f2  8b30                 mov esi, dword ptr [eax]
// 005f66f4  8b7804               mov edi, dword ptr [eax + 4]
// 005f66f7  85f6                 test esi, esi
// 005f66f9  7506                 jne 0x5f6701
// 005f66fb  ff1544e97700         call dword ptr [0x77e944]
// 005f6701  3b7e04               cmp edi, dword ptr [esi + 4]
// 005f6704  7506                 jne 0x5f670c
// 005f6706  ff1544e97700         call dword ptr [0x77e944]
// 005f670c  8d4718               lea eax, [edi + 0x18]
// 005f670f  5f                   pop edi
// 005f6710  5e                   pop esi
// 005f6711  5b                   pop ebx
// 005f6712  83c418               add esp, 0x18
// 005f6715  c20400               ret 4
// library rbxgs/v8world\Block.cpp (function ??A?$map@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@@std@@QAEAAPAVBlockTemplate@RBX@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
