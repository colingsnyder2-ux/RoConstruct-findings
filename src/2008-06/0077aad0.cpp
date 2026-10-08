// roc 2008-06 0077aad0  unit: CXTPPropertyGridInplaceList  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aad0
//
// 0077aad0  56                   push esi
// 0077aad1  8bf1                 mov esi, ecx
// 0077aad3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0077aad6  85c9                 test ecx, ecx
// 0077aad8  7411                 je 0x77aaeb
// 0077aada  8b01                 mov eax, dword ptr [ecx]
// 0077aadc  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 0077aae2  ffd2                 call edx
// 0077aae4  c7465400000000       mov dword ptr [esi + 0x54], 0
// 0077aaeb  837e2000             cmp dword ptr [esi + 0x20], 0
// 0077aaef  743b                 je 0x77ab2c
// 0077aaf1  57                   push edi
// 0077aaf2  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0077aaf5  ff15102e8000         call dword ptr [0x802e10]
// 0077aafb  3bc7                 cmp eax, edi
// 0077aafd  752c                 jne 0x77ab2b
// 0077aaff  8b7638               mov esi, dword ptr [esi + 0x38]
// 0077ab02  85f6                 test esi, esi
// 0077ab04  740f                 je 0x77ab15
// 0077ab06  56                   push esi
// 0077ab07  e8d260f2ff           call 0x6a0bde
// 0077ab0c  5f                   pop edi
// 0077ab0d  8bc8                 mov ecx, eax
// 0077ab0f  5e                   pop esi
// 0077ab10  e9135ff2ff           jmp 0x6a0a28
// 0077ab15  57                   push edi
// 0077ab16  ff15f82d8000         call dword ptr [0x802df8]
// 0077ab1c  50                   push eax
// 0077ab1d  e8bc60f2ff           call 0x6a0bde
// 0077ab22  5f                   pop edi
// 0077ab23  8bc8                 mov ecx, eax
// 0077ab25  5e                   pop esi
// 0077ab26  e9fd5ef2ff           jmp 0x6a0a28
// 0077ab2b  5f                   pop edi
// 0077ab2c  5e                   pop esi
// 0077ab2d  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?Cancel@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
