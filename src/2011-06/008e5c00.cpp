// from server: 100% by auto
// roc 2011-06 008e5c00  unit: CXTPPropertyGridInplaceList  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5c00
//
// 008e5c00  56                   push esi
// 008e5c01  8bf1                 mov esi, ecx
// 008e5c03  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008e5c06  85c9                 test ecx, ecx
// 008e5c08  7411                 je 0x8e5c1b
// 008e5c0a  8b01                 mov eax, dword ptr [ecx]
// 008e5c0c  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 008e5c12  ffd2                 call edx
// 008e5c14  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008e5c1b  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e5c1f  743b                 je 0x8e5c5c
// 008e5c21  57                   push edi
// 008e5c22  8b7e20               mov edi, dword ptr [esi + 0x20]
// 008e5c25  ff15f819a400         call dword ptr [0xa419f8]
// 008e5c2b  3bc7                 cmp eax, edi
// 008e5c2d  752c                 jne 0x8e5c5b
// 008e5c2f  8b7638               mov esi, dword ptr [esi + 0x38]
// 008e5c32  85f6                 test esi, esi
// 008e5c34  740f                 je 0x8e5c45
// 008e5c36  56                   push esi
// 008e5c37  e8ec46f2ff           call 0x80a328
// 008e5c3c  5f                   pop edi
// 008e5c3d  8bc8                 mov ecx, eax
// 008e5c3f  5e                   pop esi
// 008e5c40  e9bb47f2ff           jmp 0x80a400
// 008e5c45  57                   push edi
// 008e5c46  ff15b819a400         call dword ptr [0xa419b8]
// 008e5c4c  50                   push eax
// 008e5c4d  e8d646f2ff           call 0x80a328
// 008e5c52  5f                   pop edi
// 008e5c53  8bc8                 mov ecx, eax
// 008e5c55  5e                   pop esi
// 008e5c56  e9a547f2ff           jmp 0x80a400
// 008e5c5b  5f                   pop edi
// 008e5c5c  5e                   pop esi
// 008e5c5d  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?Cancel@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
