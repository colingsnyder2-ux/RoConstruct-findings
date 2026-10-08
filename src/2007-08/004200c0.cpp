// roc 2007-08 004200c0  unit: CXTTreeCtrl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004200c0
//
// 004200c0  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 004200c6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004200ca  3bc8                 cmp ecx, eax
// 004200cc  7410                 je 0x4200de
// 004200ce  8bff                 mov edi, edi
// 004200d0  85c0                 test eax, eax
// 004200d2  740f                 je 0x4200e3
// 004200d4  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 004200da  3bc8                 cmp ecx, eax
// 004200dc  75f2                 jne 0x4200d0
// 004200de  b001                 mov al, 1
// 004200e0  c20400               ret 4
// 004200e3  32c0                 xor al, al
// 004200e5  c20400               ret 4
// library rbxgs/v8datamodel\Filters.cpp (function ?isDescendentOf@Instance@RBX@@QBE_NPBV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
