// from server: 100% by auto
// roc 2011-06 008de190  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de190
//
// 008de190  8bc1                 mov eax, ecx
// 008de192  83782c00             cmp dword ptr [eax + 0x2c], 0
// 008de196  742f                 je 0x8de1c7
// 008de198  83785000             cmp dword ptr [eax + 0x50], 0
// 008de19c  7429                 je 0x8de1c7
// 008de19e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008de1a2  83f920               cmp ecx, 0x20
// 008de1a5  740f                 je 0x8de1b6
// 008de1a7  83f928               cmp ecx, 0x28
// 008de1aa  740a                 je 0x8de1b6
// 008de1ac  83f90d               cmp ecx, 0xd
// 008de1af  7405                 je 0x8de1b6
// 008de1b1  83f973               cmp ecx, 0x73
// 008de1b4  7511                 jne 0x8de1c7
// 008de1b6  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 008de1b9  8b11                 mov edx, dword ptr [ecx]
// 008de1bb  89442404             mov dword ptr [esp + 4], eax
// 008de1bf  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008de1c5  ffe0                 jmp eax
// 008de1c7  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceButton@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
