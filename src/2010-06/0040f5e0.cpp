// roc 2010-06 0040f5e0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f5e0
//
// 0040f5e0  8d5104               lea edx, [ecx + 4]
// 0040f5e3  8b0a                 mov ecx, dword ptr [edx]
// 0040f5e5  56                   push esi
// 0040f5e6  57                   push edi
// 0040f5e7  85c9                 test ecx, ecx
// 0040f5e9  741c                 je 0x40f607
// 0040f5eb  eb03                 jmp 0x40f5f0
// 0040f5ed  8d4900               lea ecx, [ecx]
// 0040f5f0  8d4101               lea eax, [ecx + 1]
// 0040f5f3  8bf0                 mov esi, eax
// 0040f5f5  8bfa                 mov edi, edx
// 0040f5f7  8bc1                 mov eax, ecx
// 0040f5f9  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0040f5fd  3bc1                 cmp eax, ecx
// 0040f5ff  740b                 je 0x40f60c
// 0040f601  8b0a                 mov ecx, dword ptr [edx]
// 0040f603  85c9                 test ecx, ecx
// 0040f605  75e9                 jne 0x40f5f0
// 0040f607  5f                   pop edi
// 0040f608  32c0                 xor al, al
// 0040f60a  5e                   pop esi
// 0040f60b  c3                   ret 
// 0040f60c  5f                   pop edi
// 0040f60d  b001                 mov al, 1
// 0040f60f  5e                   pop esi
// 0040f610  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
