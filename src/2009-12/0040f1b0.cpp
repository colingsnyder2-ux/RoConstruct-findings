// roc 2009-12 0040f1b0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f1b0
//
// 0040f1b0  8d5104               lea edx, [ecx + 4]
// 0040f1b3  8b0a                 mov ecx, dword ptr [edx]
// 0040f1b5  56                   push esi
// 0040f1b6  57                   push edi
// 0040f1b7  85c9                 test ecx, ecx
// 0040f1b9  741c                 je 0x40f1d7
// 0040f1bb  eb03                 jmp 0x40f1c0
// 0040f1bd  8d4900               lea ecx, [ecx]
// 0040f1c0  8d4101               lea eax, [ecx + 1]
// 0040f1c3  8bf0                 mov esi, eax
// 0040f1c5  8bfa                 mov edi, edx
// 0040f1c7  8bc1                 mov eax, ecx
// 0040f1c9  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0040f1cd  3bc1                 cmp eax, ecx
// 0040f1cf  740b                 je 0x40f1dc
// 0040f1d1  8b0a                 mov ecx, dword ptr [edx]
// 0040f1d3  85c9                 test ecx, ecx
// 0040f1d5  75e9                 jne 0x40f1c0
// 0040f1d7  5f                   pop edi
// 0040f1d8  32c0                 xor al, al
// 0040f1da  5e                   pop esi
// 0040f1db  c3                   ret 
// 0040f1dc  5f                   pop edi
// 0040f1dd  b001                 mov al, 1
// 0040f1df  5e                   pop esi
// 0040f1e0  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
