// roc 2009-12 00864be0  unit: CPropertyGridItemBrickColor  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864be0
//
// 00864be0  56                   push esi
// 00864be1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00864be5  57                   push edi
// 00864be6  8bf9                 mov edi, ecx
// 00864be8  85f6                 test esi, esi
// 00864bea  750a                 jne 0x864bf6
// 00864bec  5f                   pop edi
// 00864bed  b857000780           mov eax, 0x80070057
// 00864bf2  5e                   pop esi
// 00864bf3  c21400               ret 0x14
// 00864bf6  8d44240c             lea eax, [esp + 0xc]
// 00864bfa  50                   push eax
// 00864bfb  e8a06dfdff           call 0x83b9a0
// 00864c00  85c0                 test eax, eax
// 00864c02  75e8                 jne 0x864bec
// 00864c04  53                   push ebx
// 00864c05  b903000000           mov ecx, 3
// 00864c0a  66890e               mov word ptr [esi], cx
// 00864c0d  8d5fe0               lea ebx, [edi - 0x20]
// 00864c10  8bcb                 mov ecx, ebx
// 00864c12  e8f9fcffff           call 0x864910
// 00864c17  f7d8                 neg eax
// 00864c19  1bc0                 sbb eax, eax
// 00864c1b  83e004               and eax, 4
// 00864c1e  0d00003000           or eax, 0x300000
// 00864c23  894608               mov dword ptr [esi + 8], eax
// 00864c26  837f7400             cmp dword ptr [edi + 0x74], 0
// 00864c2a  7508                 jne 0x864c34
// 00864c2c  0d00800000           or eax, 0x8000
// 00864c31  894608               mov dword ptr [esi + 8], eax
// 00864c34  8b13                 mov edx, dword ptr [ebx]
// 00864c36  8b4258               mov eax, dword ptr [edx + 0x58]
// 00864c39  8bcb                 mov ecx, ebx
// 00864c3b  ffd0                 call eax
// 00864c3d  5b                   pop ebx
// 00864c3e  85c0                 test eax, eax
// 00864c40  7404                 je 0x864c46
// 00864c42  834e0840             or dword ptr [esi + 8], 0x40
// 00864c46  5f                   pop edi
// 00864c47  33c0                 xor eax, eax
// 00864c49  5e                   pop esi
// 00864c4a  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleState@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAU2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp