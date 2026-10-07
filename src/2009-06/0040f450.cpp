// roc 2009-06 0040f450  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040f450
//
// 0040f450  8d5104               lea edx, [ecx + 4]
// 0040f453  8b0a                 mov ecx, dword ptr [edx]
// 0040f455  56                   push esi
// 0040f456  57                   push edi
// 0040f457  85c9                 test ecx, ecx
// 0040f459  741c                 je 0x40f477
// 0040f45b  eb03                 jmp 0x40f460
// 0040f45d  8d4900               lea ecx, [ecx]
// 0040f460  8d4101               lea eax, [ecx + 1]
// 0040f463  8bf0                 mov esi, eax
// 0040f465  8bfa                 mov edi, edx
// 0040f467  8bc1                 mov eax, ecx
// 0040f469  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0040f46d  3bc1                 cmp eax, ecx
// 0040f46f  740b                 je 0x40f47c
// 0040f471  8b0a                 mov ecx, dword ptr [edx]
// 0040f473  85c9                 test ecx, ecx
// 0040f475  75e9                 jne 0x40f460
// 0040f477  5f                   pop edi
// 0040f478  32c0                 xor al, al
// 0040f47a  5e                   pop esi
// 0040f47b  c3                   ret 
// 0040f47c  5f                   pop edi
// 0040f47d  b001                 mov al, 1
// 0040f47f  5e                   pop esi
// 0040f480  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
