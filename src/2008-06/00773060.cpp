// roc 2008-06 00773060  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773060
//
// 00773060  8bc1                 mov eax, ecx
// 00773062  83782c00             cmp dword ptr [eax + 0x2c], 0
// 00773066  742f                 je 0x773097
// 00773068  83785000             cmp dword ptr [eax + 0x50], 0
// 0077306c  7429                 je 0x773097
// 0077306e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00773072  83f920               cmp ecx, 0x20
// 00773075  740f                 je 0x773086
// 00773077  83f928               cmp ecx, 0x28
// 0077307a  740a                 je 0x773086
// 0077307c  83f90d               cmp ecx, 0xd
// 0077307f  7405                 je 0x773086
// 00773081  83f973               cmp ecx, 0x73
// 00773084  7511                 jne 0x773097
// 00773086  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00773089  8b11                 mov edx, dword ptr [ecx]
// 0077308b  89442404             mov dword ptr [esp + 4], eax
// 0077308f  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00773095  ffe0                 jmp eax
// 00773097  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceButton@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
