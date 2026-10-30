// roc 2009-12 00877f20  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877f20
//
// 00877f20  6aff                 push -1
// 00877f22  6854029600           push 0x960254
// 00877f27  64a100000000         mov eax, dword ptr fs:[0]
// 00877f2d  50                   push eax
// 00877f2e  51                   push ecx
// 00877f2f  53                   push ebx
// 00877f30  56                   push esi
// 00877f31  57                   push edi
// 00877f32  a10052b600           mov eax, dword ptr [0xb65200]
// 00877f37  33c4                 xor eax, esp
// 00877f39  50                   push eax
// 00877f3a  8d442414             lea eax, [esp + 0x14]
// 00877f3e  64a300000000         mov dword ptr fs:[0], eax
// 00877f44  8bf1                 mov esi, ecx
// 00877f46  89742410             mov dword ptr [esp + 0x10], esi
// 00877f4a  e8812bfcff           call 0x83aad0
// 00877f4f  8d9e84010000         lea ebx, [esi + 0x184]
// 00877f55  33ff                 xor edi, edi
// 00877f57  8bcb                 mov ecx, ebx
// 00877f59  897c241c             mov dword ptr [esp + 0x1c], edi
// 00877f5d  e84e2c0700           call 0x8eabb0
// 00877f62  8d8e4c020000         lea ecx, [esi + 0x24c]
// 00877f68  c706dc19a000         mov dword ptr [esi], 0xa019dc
// 00877f6e  c746207c19a000       mov dword ptr [esi + 0x20], 0xa0197c
// 00877f75  c7034c19a000         mov dword ptr [ebx], 0xa0194c
// 00877f7b  e8f0fcffff           call 0x877c70
// 00877f80  83c8ff               or eax, 0xffffffff
// 00877f83  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 00877f89  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 00877f8f  8d8634020000         lea eax, [esi + 0x234]
// 00877f95  bb01000000           mov ebx, 1
// 00877f9a  50                   push eax
// 00877f9b  c644242002           mov byte ptr [esp + 0x20], 2
// 00877fa0  89be00020000         mov dword ptr [esi + 0x200], edi
// 00877fa6  89be20020000         mov dword ptr [esi + 0x220], edi
// 00877fac  89befc010000         mov dword ptr [esi + 0x1fc], edi
// 00877fb2  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 00877fb8  89be24020000         mov dword ptr [esi + 0x224], edi
// 00877fbe  899e28020000         mov dword ptr [esi + 0x228], ebx
// 00877fc4  c7866001000078000000 mov dword ptr [esi + 0x160], 0x78
// 00877fce  c786640100003c000000 mov dword ptr [esi + 0x164], 0x3c
// 00877fd8  ff159cca9800         call dword ptr [0x98ca9c]
// 00877fde  d9ee                 fldz 
// 00877fe0  33c9                 xor ecx, ecx
// 00877fe2  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00877fe8  33c0                 xor eax, eax
// 00877fea  898e08020000         mov dword ptr [esi + 0x208], ecx
// 00877ff0  6a40                 push 0x40
// 00877ff2  8bce                 mov ecx, esi
// 00877ff4  898604020000         mov dword ptr [esi + 0x204], eax
// 00877ffa  899e2c020000         mov dword ptr [esi + 0x22c], ebx
// 00878000  89be30020000         mov dword ptr [esi + 0x230], edi
// 00878006  89be80010000         mov dword ptr [esi + 0x180], edi
// 0087800c  89be44020000         mov dword ptr [esi + 0x244], edi
// 00878012  89be48020000         mov dword ptr [esi + 0x248], edi
// 00878018  c786fc0000000a000000 mov dword ptr [esi + 0xfc], 0xa
// 00878022  89beec010000         mov dword ptr [esi + 0x1ec], edi
// 00878028  89be10020000         mov dword ptr [esi + 0x210], edi
// 0087802e  e82de0f7ff           call 0x7f6060
// 00878033  8bc6                 mov eax, esi
// 00878035  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00878039  64890d00000000       mov dword ptr fs:[0], ecx
// 00878040  59                   pop ecx
// 00878041  5f                   pop edi
// 00878042  5e                   pop esi
// 00878043  5b                   pop ebx
// 00878044  83c410               add esp, 0x10
// 00878047  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlGallery@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp