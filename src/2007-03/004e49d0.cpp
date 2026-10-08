// roc 2007-03 004e49d0  unit: seg_004e0000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e49d0
//
// 004e49d0  83ec08               sub esp, 8
// 004e49d3  53                   push ebx
// 004e49d4  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 004e49d7  395910               cmp dword ptr [ecx + 0x10], ebx
// 004e49da  55                   push ebp
// 004e49db  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 004e49e1  56                   push esi
// 004e49e2  57                   push edi
// 004e49e3  8d790c               lea edi, [ecx + 0xc]
// 004e49e6  7602                 jbe 0x4e49ea
// 004e49e8  ffd5                 call ebp
// 004e49ea  8b7704               mov esi, dword ptr [edi + 4]
// 004e49ed  3b7708               cmp esi, dword ptr [edi + 8]
// 004e49f0  7602                 jbe 0x4e49f4
// 004e49f2  ffd5                 call ebp
// 004e49f4  3bf3                 cmp esi, ebx
// 004e49f6  89742414             mov dword ptr [esp + 0x14], esi
// 004e49fa  7411                 je 0x4e4a0d
// 004e49fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e4a00  8b00                 mov eax, dword ptr [eax]
// 004e4a02  3906                 cmp dword ptr [esi], eax
// 004e4a04  7407                 je 0x4e4a0d
// 004e4a06  83c604               add esi, 4
// 004e4a09  3bf3                 cmp esi, ebx
// 004e4a0b  75f5                 jne 0x4e4a02
// 004e4a0d  8b5f08               mov ebx, dword ptr [edi + 8]
// 004e4a10  395f04               cmp dword ptr [edi + 4], ebx
// 004e4a13  7608                 jbe 0x4e4a1d
// 004e4a15  ffd5                 call ebp
// 004e4a17  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 004e4a1d  85ff                 test edi, edi
// 004e4a1f  7404                 je 0x4e4a25
// 004e4a21  3bff                 cmp edi, edi
// 004e4a23  7402                 je 0x4e4a27
// 004e4a25  ffd5                 call ebp
// 004e4a27  3bf3                 cmp esi, ebx
// 004e4a29  741a                 je 0x4e4a45
// 004e4a2b  56                   push esi
// 004e4a2c  57                   push edi
// 004e4a2d  8d4c2418             lea ecx, [esp + 0x18]
// 004e4a31  51                   push ecx
// 004e4a32  8bcf                 mov ecx, edi
// 004e4a34  e847f5ffff           call 0x4e3f80
// 004e4a39  5f                   pop edi
// 004e4a3a  5e                   pop esi
// 004e4a3b  5d                   pop ebp
// 004e4a3c  b001                 mov al, 1
// 004e4a3e  5b                   pop ebx
// 004e4a3f  83c408               add esp, 8
// 004e4a42  c20400               ret 4
// 004e4a45  5f                   pop edi
// 004e4a46  5e                   pop esi
// 004e4a47  5d                   pop ebp
// 004e4a48  32c0                 xor al, al
// 004e4a4a  5b                   pop ebx
// 004e4a4b  83c408               add esp, 8
// 004e4a4e  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@Bucket@AggregatingSceneManager@Render@RBX@@QAE_NABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
