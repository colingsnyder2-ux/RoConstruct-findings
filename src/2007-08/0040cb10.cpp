// roc 2007-08 0040cb10  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cb10
//
// 0040cb10  8d5104               lea edx, [ecx + 4]
// 0040cb13  8b0a                 mov ecx, dword ptr [edx]
// 0040cb15  85c9                 test ecx, ecx
// 0040cb17  56                   push esi
// 0040cb18  57                   push edi
// 0040cb19  741c                 je 0x40cb37
// 0040cb1b  eb03                 jmp 0x40cb20
// 0040cb1d  8d4900               lea ecx, [ecx]
// 0040cb20  8d4101               lea eax, [ecx + 1]
// 0040cb23  8bf0                 mov esi, eax
// 0040cb25  8bfa                 mov edi, edx
// 0040cb27  8bc1                 mov eax, ecx
// 0040cb29  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0040cb2d  3bc1                 cmp eax, ecx
// 0040cb2f  740b                 je 0x40cb3c
// 0040cb31  8b0a                 mov ecx, dword ptr [edx]
// 0040cb33  85c9                 test ecx, ecx
// 0040cb35  75e9                 jne 0x40cb20
// 0040cb37  5f                   pop edi
// 0040cb38  32c0                 xor al, al
// 0040cb3a  5e                   pop esi
// 0040cb3b  c3                   ret 
// 0040cb3c  5f                   pop edi
// 0040cb3d  b001                 mov al, 1
// 0040cb3f  5e                   pop esi
// 0040cb40  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
