// from server: 100% by auto
// roc 2012-06 00a564a0  unit: CXTPPropertyGridInplaceButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a564a0
//
// 00a564a0  8bc1                 mov eax, ecx
// 00a564a2  83782c00             cmp dword ptr [eax + 0x2c], 0
// 00a564a6  742f                 je 0xa564d7
// 00a564a8  83785000             cmp dword ptr [eax + 0x50], 0
// 00a564ac  7429                 je 0xa564d7
// 00a564ae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a564b2  83f920               cmp ecx, 0x20
// 00a564b5  740f                 je 0xa564c6
// 00a564b7  83f928               cmp ecx, 0x28
// 00a564ba  740a                 je 0xa564c6
// 00a564bc  83f90d               cmp ecx, 0xd
// 00a564bf  7405                 je 0xa564c6
// 00a564c1  83f973               cmp ecx, 0x73
// 00a564c4  7511                 jne 0xa564d7
// 00a564c6  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00a564c9  8b11                 mov edx, dword ptr [ecx]
// 00a564cb  89442404             mov dword ptr [esp + 4], eax
// 00a564cf  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 00a564d5  ffe0                 jmp eax
// 00a564d7  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?OnKeyDown@CXTPPropertyGridInplaceButton@@UAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
