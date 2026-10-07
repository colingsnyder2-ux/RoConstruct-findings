// roc 2012-06 00416bb0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416bb0
//
// 00416bb0  8d5104               lea edx, [ecx + 4]
// 00416bb3  8b0a                 mov ecx, dword ptr [edx]
// 00416bb5  56                   push esi
// 00416bb6  57                   push edi
// 00416bb7  85c9                 test ecx, ecx
// 00416bb9  741c                 je 0x416bd7
// 00416bbb  eb03                 jmp 0x416bc0
// 00416bbd  8d4900               lea ecx, [ecx]
// 00416bc0  8d4101               lea eax, [ecx + 1]
// 00416bc3  8bf0                 mov esi, eax
// 00416bc5  8bfa                 mov edi, edx
// 00416bc7  8bc1                 mov eax, ecx
// 00416bc9  f00fb137             lock cmpxchg dword ptr [edi], esi
// 00416bcd  3bc1                 cmp eax, ecx
// 00416bcf  740b                 je 0x416bdc
// 00416bd1  8b0a                 mov ecx, dword ptr [edx]
// 00416bd3  85c9                 test ecx, ecx
// 00416bd5  75e9                 jne 0x416bc0
// 00416bd7  5f                   pop edi
// 00416bd8  32c0                 xor al, al
// 00416bda  5e                   pop esi
// 00416bdb  c3                   ret 
// 00416bdc  5f                   pop edi
// 00416bdd  b001                 mov al, 1
// 00416bdf  5e                   pop esi
// 00416be0  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
