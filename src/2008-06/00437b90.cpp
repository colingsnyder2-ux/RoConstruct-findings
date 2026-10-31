// from server: 100% by king_originala
// roc 2008-06 00437b90  unit: CPropertyGridItemBrickColor  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437b90
//
// 00437b90  6aff                 push -1
// 00437b92  6899037c00           push 0x7c0399
// 00437b97  64a100000000         mov eax, dword ptr fs:[0]
// 00437b9d  50                   push eax
// 00437b9e  64892500000000       mov dword ptr fs:[0], esp
// 00437ba5  83ec08               sub esp, 8
// 00437ba8  56                   push esi
// 00437ba9  8d442404             lea eax, [esp + 4]
// 00437bad  50                   push eax
// 00437bae  8d4c2420             lea ecx, [esp + 0x20]
// 00437bb2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00437bba  ff15e03e8000         call dword ptr [0x803ee0]
// 00437bc0  50                   push eax
// 00437bc1  8d4c2410             lea ecx, [esp + 0x10]
// 00437bc5  51                   push ecx
// 00437bc6  e8e5e01700           call 0x5b5cb0
// 00437bcb  83c408               add esp, 8
// 00437bce  8bc8                 mov ecx, eax
// 00437bd0  e8abe51700           call 0x5b6180
// 00437bd5  0fb6742406           movzx esi, byte ptr [esp + 6]
// 00437bda  0fb6542405           movzx edx, byte ptr [esp + 5]
// 00437bdf  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00437be4  c1e608               shl esi, 8
// 00437be7  0bf2                 or esi, edx
// 00437be9  c1e608               shl esi, 8
// 00437bec  8d4c241c             lea ecx, [esp + 0x1c]
// 00437bf0  0bf0                 or esi, eax
// 00437bf2  ff15143f8000         call dword ptr [0x803f14]
// 00437bf8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00437bfc  8bc6                 mov eax, esi
// 00437bfe  5e                   pop esi
// 00437bff  64890d00000000       mov dword ptr fs:[0], ecx
// 00437c06  83c414               add esp, 0x14
// 00437c09  c3                   ret 

// from server: 57% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_unit_0e534b6d9cc556c5.cpp
