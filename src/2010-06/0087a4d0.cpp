// roc 2010-06 0087a4d0  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a4d0
//
// 0087a4d0  8bc1                 mov eax, ecx
// 0087a4d2  83782c00             cmp dword ptr [eax + 0x2c], 0
// 0087a4d6  742f                 je 0x87a507
// 0087a4d8  83785000             cmp dword ptr [eax + 0x50], 0
// 0087a4dc  7429                 je 0x87a507
// 0087a4de  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087a4e2  83f920               cmp ecx, 0x20
// 0087a4e5  740f                 je 0x87a4f6
// 0087a4e7  83f928               cmp ecx, 0x28
// 0087a4ea  740a                 je 0x87a4f6
// 0087a4ec  83f90d               cmp ecx, 0xd
// 0087a4ef  7405                 je 0x87a4f6
// 0087a4f1  83f973               cmp ecx, 0x73
// 0087a4f4  7511                 jne 0x87a507
// 0087a4f6  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0087a4f9  8b11                 mov edx, dword ptr [ecx]
// 0087a4fb  89442404             mov dword ptr [esp + 4], eax
// 0087a4ff  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 0087a505  ffe0                 jmp eax
// 0087a507  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceButton@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
