// roc 2009-12 00866b20  unit: CXTPPropertyGridItem  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866b20
//
// 00866b20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00866b24  56                   push esi
// 00866b25  8bf1                 mov esi, ecx
// 00866b27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00866b2b  50                   push eax
// 00866b2c  51                   push ecx
// 00866b2d  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00866b33  e838fa0500           call 0x8c6570
// 00866b38  85c0                 test eax, eax
// 00866b3a  7420                 je 0x866b5c
// 00866b3c  8b16                 mov edx, dword ptr [esi]
// 00866b3e  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00866b44  8bce                 mov ecx, esi
// 00866b46  ffd0                 call eax
// 00866b48  85c0                 test eax, eax
// 00866b4a  7410                 je 0x866b5c
// 00866b4c  8b16                 mov edx, dword ptr [esi]
// 00866b4e  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00866b54  8bce                 mov ecx, esi
// 00866b56  ffd0                 call eax
// 00866b58  5e                   pop esi
// 00866b59  c20c00               ret 0xc
// 00866b5c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00866b62  83792800             cmp dword ptr [ecx + 0x28], 0
// 00866b66  7426                 je 0x866b8e
// 00866b68  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00866b6f  741d                 je 0x866b8e
// 00866b71  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00866b78  8bce                 mov ecx, esi
// 00866b7a  7409                 je 0x866b85
// 00866b7c  e8ffe3ffff           call 0x864f80
// 00866b81  5e                   pop esi
// 00866b82  c20c00               ret 0xc
// 00866b85  e856e4ffff           call 0x864fe0
// 00866b8a  5e                   pop esi
// 00866b8b  c20c00               ret 0xc
// 00866b8e  8b16                 mov edx, dword ptr [esi]
// 00866b90  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00866b96  8bce                 mov ecx, esi
// 00866b98  ffd0                 call eax
// 00866b9a  f6868c00000001       test byte ptr [esi + 0x8c], 1
// 00866ba1  8bce                 mov ecx, esi
// 00866ba3  0f8495000000         je 0x866c3e
// 00866ba9  8b16                 mov edx, dword ptr [esi]
// 00866bab  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00866bb1  57                   push edi
// 00866bb2  ffd0                 call eax
// 00866bb4  8bf8                 mov edi, eax
// 00866bb6  85ff                 test edi, edi
// 00866bb8  7456                 je 0x866c10
// 00866bba  8b4720               mov eax, dword ptr [edi + 0x20]
// 00866bbd  85c0                 test eax, eax
// 00866bbf  744f                 je 0x866c10
// 00866bc1  50                   push eax
// 00866bc2  ff1564ca9800         call dword ptr [0x98ca64]
// 00866bc8  85c0                 test eax, eax
// 00866bca  7444                 je 0x866c10
// 00866bcc  39b7a0000000         cmp dword ptr [edi + 0xa0], esi
// 00866bd2  753c                 jne 0x866c10
// 00866bd4  8bcf                 mov ecx, edi
// 00866bd6  e827d0f8ff           call 0x7f3c02
// 00866bdb  39b7a0000000         cmp dword ptr [edi + 0xa0], esi
// 00866be1  7532                 jne 0x866c15
// 00866be3  8b16                 mov edx, dword ptr [esi]
// 00866be5  8b4258               mov eax, dword ptr [edx + 0x58]
// 00866be8  8bce                 mov ecx, esi
// 00866bea  ffd0                 call eax
// 00866bec  85c0                 test eax, eax
// 00866bee  7525                 jne 0x866c15
// 00866bf0  8b17                 mov edx, dword ptr [edi]
// 00866bf2  8b8270010000         mov eax, dword ptr [edx + 0x170]
// 00866bf8  6a01                 push 1
// 00866bfa  6a01                 push 1
// 00866bfc  8bcf                 mov ecx, edi
// 00866bfe  ffd0                 call eax
// 00866c00  85c0                 test eax, eax
// 00866c02  7411                 je 0x866c15
// 00866c04  8b16                 mov edx, dword ptr [esi]
// 00866c06  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 00866c0c  8bce                 mov ecx, esi
// 00866c0e  ffd0                 call eax
// 00866c10  5f                   pop edi
// 00866c11  5e                   pop esi
// 00866c12  c20c00               ret 0xc
// 00866c15  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00866c18  8b35c4cb9800         mov esi, dword ptr [0x98cbc4]
// 00866c1e  6aff                 push -1
// 00866c20  6a00                 push 0
// 00866c22  68b1000000           push 0xb1
// 00866c27  51                   push ecx
// 00866c28  ffd6                 call esi
// 00866c2a  8b5720               mov edx, dword ptr [edi + 0x20]
// 00866c2d  6a00                 push 0
// 00866c2f  6a00                 push 0
// 00866c31  68b7000000           push 0xb7
// 00866c36  52                   push edx
// 00866c37  ffd6                 call esi
// 00866c39  5f                   pop edi
// 00866c3a  5e                   pop esi
// 00866c3b  c20c00               ret 0xc
// 00866c3e  8b06                 mov eax, dword ptr [esi]
// 00866c40  8b5058               mov edx, dword ptr [eax + 0x58]
// 00866c43  ffd2                 call edx
// 00866c45  85c0                 test eax, eax
// 00866c47  75c8                 jne 0x866c11
// 00866c49  8bce                 mov ecx, esi
// 00866c4b  e8c0f5ffff           call 0x866210
// 00866c50  5e                   pop esi
// 00866c51  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPPropertyGridItem@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp