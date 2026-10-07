// roc 2010-06 00881f70  unit: CXTPPropertyGridInplaceList  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00881f70
//
// 00881f70  56                   push esi
// 00881f71  8bf1                 mov esi, ecx
// 00881f73  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00881f76  85c9                 test ecx, ecx
// 00881f78  7411                 je 0x881f8b
// 00881f7a  8b01                 mov eax, dword ptr [ecx]
// 00881f7c  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00881f82  ffd2                 call edx
// 00881f84  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00881f8b  837e2000             cmp dword ptr [esi + 0x20], 0
// 00881f8f  743b                 je 0x881fcc
// 00881f91  57                   push edi
// 00881f92  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00881f95  ff1580ba9e00         call dword ptr [0x9eba80]
// 00881f9b  3bc7                 cmp eax, edi
// 00881f9d  752c                 jne 0x881fcb
// 00881f9f  8b7638               mov esi, dword ptr [esi + 0x38]
// 00881fa2  85f6                 test esi, esi
// 00881fa4  740f                 je 0x881fb5
// 00881fa6  56                   push esi
// 00881fa7  e8be5cf2ff           call 0x7a7c6a
// 00881fac  5f                   pop edi
// 00881fad  8bc8                 mov ecx, eax
// 00881faf  5e                   pop esi
// 00881fb0  e98d5df2ff           jmp 0x7a7d42
// 00881fb5  57                   push edi
// 00881fb6  ff154cba9e00         call dword ptr [0x9eba4c]
// 00881fbc  50                   push eax
// 00881fbd  e8a85cf2ff           call 0x7a7c6a
// 00881fc2  5f                   pop edi
// 00881fc3  8bc8                 mov ecx, eax
// 00881fc5  5e                   pop esi
// 00881fc6  e9775df2ff           jmp 0x7a7d42
// 00881fcb  5f                   pop edi
// 00881fcc  5e                   pop esi
// 00881fcd  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?Cancel@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
