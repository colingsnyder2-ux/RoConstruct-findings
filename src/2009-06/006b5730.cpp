// roc 2009-06 006b5730  unit: RBX::BlockBlockContact  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5730
//
// 006b5730  6aff                 push -1
// 006b5732  6848068700           push 0x870648
// 006b5737  64a100000000         mov eax, dword ptr fs:[0]
// 006b573d  50                   push eax
// 006b573e  64892500000000       mov dword ptr fs:[0], esp
// 006b5745  83ec20               sub esp, 0x20
// 006b5748  53                   push ebx
// 006b5749  56                   push esi
// 006b574a  57                   push edi
// 006b574b  8bf9                 mov edi, ecx
// 006b574d  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 006b5751  8d4308               lea eax, [ebx + 8]
// 006b5754  50                   push eax
// 006b5755  8d4c2420             lea ecx, [esp + 0x20]
// 006b5759  53                   push ebx
// 006b575a  51                   push ecx
// 006b575b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 006b5763  e8d883e7ff           call 0x52db40
// 006b5768  83c40c               add esp, 0xc
// 006b576b  837c244000           cmp dword ptr [esp + 0x40], 0
// 006b5770  7465                 je 0x6b57d7
// 006b5772  51                   push ecx
// 006b5773  8bcc                 mov ecx, esp
// 006b5775  c70100000000         mov dword ptr [ecx], 0
// 006b577b  8b542444             mov edx, dword ptr [esp + 0x44]
// 006b577f  89642448             mov dword ptr [esp + 0x48], esp
// 006b5783  52                   push edx
// 006b5784  e8d7a0deff           call 0x49f860
// 006b5789  8b742440             mov esi, dword ptr [esp + 0x40]
// 006b578d  8b06                 mov eax, dword ptr [esi]
// 006b578f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006b5792  6a00                 push 0
// 006b5794  8bce                 mov ecx, esi
// 006b5796  ffd2                 call edx
// 006b5798  d9e8                 fld1 
// 006b579a  8b06                 mov eax, dword ptr [esi]
// 006b579c  d954240c             fst dword ptr [esp + 0xc]
// 006b57a0  8b402c               mov eax, dword ptr [eax + 0x2c]
// 006b57a3  d9542410             fst dword ptr [esp + 0x10]
// 006b57a7  8d4c240c             lea ecx, [esp + 0xc]
// 006b57ab  d9542414             fst dword ptr [esp + 0x14]
// 006b57af  51                   push ecx
// 006b57b0  d95c241c             fstp dword ptr [esp + 0x1c]
// 006b57b4  8d542420             lea edx, [esp + 0x20]
// 006b57b8  52                   push edx
// 006b57b9  8bce                 mov ecx, esi
// 006b57bb  ffd0                 call eax
// 006b57bd  51                   push ecx
// 006b57be  8bc4                 mov eax, esp
// 006b57c0  c70000000000         mov dword ptr [eax], 0
// 006b57c6  8b16                 mov edx, dword ptr [esi]
// 006b57c8  8b421c               mov eax, dword ptr [edx + 0x1c]
// 006b57cb  89642440             mov dword ptr [esp + 0x40], esp
// 006b57cf  6a00                 push 0
// 006b57d1  8bce                 mov ecx, esi
// 006b57d3  ffd0                 call eax
// 006b57d5  eb5b                 jmp 0x6b5832
// 006b57d7  837f2000             cmp dword ptr [edi + 0x20], 0
// 006b57db  7455                 je 0x6b5832
// 006b57dd  8b442448             mov eax, dword ptr [esp + 0x48]
// 006b57e1  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006b57e5  8b16                 mov edx, dword ptr [esi]
// 006b57e7  8b522c               mov edx, dword ptr [edx + 0x2c]
// 006b57ea  50                   push eax
// 006b57eb  8d4c2420             lea ecx, [esp + 0x20]
// 006b57ef  51                   push ecx
// 006b57f0  8bce                 mov ecx, esi
// 006b57f2  ffd2                 call edx
// 006b57f4  e85730ecff           call 0x578850
// 006b57f9  50                   push eax
// 006b57fa  e85130ecff           call 0x578850
// 006b57ff  50                   push eax
// 006b5800  53                   push ebx
// 006b5801  51                   push ecx
// 006b5802  8bcc                 mov ecx, esp
// 006b5804  c70100000000         mov dword ptr [ecx], 0
// 006b580a  8b4720               mov eax, dword ptr [edi + 0x20]
// 006b580d  8964244c             mov dword ptr [esp + 0x4c], esp
// 006b5811  50                   push eax
// 006b5812  e849a0deff           call 0x49f860
// 006b5817  56                   push esi
// 006b5818  8bcf                 mov ecx, edi
// 006b581a  e811ffffff           call 0x6b5730
// 006b581f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006b5823  8b16                 mov edx, dword ptr [esi]
// 006b5825  8b522c               mov edx, dword ptr [edx + 0x2c]
// 006b5828  50                   push eax
// 006b5829  8d4c2420             lea ecx, [esp + 0x20]
// 006b582d  51                   push ecx
// 006b582e  8bce                 mov ecx, esi
// 006b5830  ffd2                 call edx
// 006b5832  8b442440             mov eax, dword ptr [esp + 0x40]
// 006b5836  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 006b583e  85c0                 test eax, eax
// 006b5840  7427                 je 0x6b5869
// 006b5842  83c004               add eax, 4
// 006b5845  50                   push eax
// 006b5846  ff15a4e18900         call dword ptr [0x89e1a4]
// 006b584c  85c0                 test eax, eax
// 006b584e  7519                 jne 0x6b5869
// 006b5850  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006b5854  e827f5d8ff           call 0x444d80
// 006b5859  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006b585d  85c9                 test ecx, ecx
// 006b585f  7408                 je 0x6b5869
// 006b5861  8b01                 mov eax, dword ptr [ecx]
// 006b5863  8b10                 mov edx, dword ptr [eax]
// 006b5865  6a01                 push 1
// 006b5867  ffd2                 call edx
// 006b5869  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b586d  5f                   pop edi
// 006b586e  5e                   pop esi
// 006b586f  64890d00000000       mov dword ptr fs:[0], ecx
// 006b5876  5b                   pop ebx
// 006b5877  83c42c               add esp, 0x2c
// 006b587a  c21400               ret 0x14
// library rbxgs/gui\GuiDraw.cpp (function ?draw@GuiDrawImage@RBX@@AAEXPAVAdorn@2@V?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@ABVRect@2@ABVColor4@5@3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
