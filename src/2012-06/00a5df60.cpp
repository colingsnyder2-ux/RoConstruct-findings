// from server: 100% by auto
// roc 2012-06 00a5df60  unit: CXTPPropertyGridInplaceList  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5df60
//
// 00a5df60  56                   push esi
// 00a5df61  8bf1                 mov esi, ecx
// 00a5df63  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a5df66  85c9                 test ecx, ecx
// 00a5df68  7411                 je 0xa5df7b
// 00a5df6a  8b01                 mov eax, dword ptr [ecx]
// 00a5df6c  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00a5df72  ffd2                 call edx
// 00a5df74  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00a5df7b  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a5df7f  743b                 je 0xa5dfbc
// 00a5df81  57                   push edi
// 00a5df82  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00a5df85  ff15e83bb200         call dword ptr [0xb23be8]
// 00a5df8b  3bc7                 cmp eax, edi
// 00a5df8d  752c                 jne 0xa5dfbb
// 00a5df8f  8b7638               mov esi, dword ptr [esi + 0x38]
// 00a5df92  85f6                 test esi, esi
// 00a5df94  740f                 je 0xa5dfa5
// 00a5df96  56                   push esi
// 00a5df97  e8ca46f2ff           call 0x982666
// 00a5df9c  5f                   pop edi
// 00a5df9d  8bc8                 mov ecx, eax
// 00a5df9f  5e                   pop esi
// 00a5dfa0  e9ff44f2ff           jmp 0x9824a4
// 00a5dfa5  57                   push edi
// 00a5dfa6  ff15503ab200         call dword ptr [0xb23a50]
// 00a5dfac  50                   push eax
// 00a5dfad  e8b446f2ff           call 0x982666
// 00a5dfb2  5f                   pop edi
// 00a5dfb3  8bc8                 mov ecx, eax
// 00a5dfb5  5e                   pop esi
// 00a5dfb6  e9e944f2ff           jmp 0x9824a4
// 00a5dfbb  5f                   pop edi
// 00a5dfbc  5e                   pop esi
// 00a5dfbd  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?Cancel@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
