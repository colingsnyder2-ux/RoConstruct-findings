// roc 2011-06 004138b0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004138b0
//
// 004138b0  8d5104               lea edx, [ecx + 4]
// 004138b3  8b0a                 mov ecx, dword ptr [edx]
// 004138b5  56                   push esi
// 004138b6  57                   push edi
// 004138b7  85c9                 test ecx, ecx
// 004138b9  741c                 je 0x4138d7
// 004138bb  eb03                 jmp 0x4138c0
// 004138bd  8d4900               lea ecx, [ecx]
// 004138c0  8d4101               lea eax, [ecx + 1]
// 004138c3  8bf0                 mov esi, eax
// 004138c5  8bfa                 mov edi, edx
// 004138c7  8bc1                 mov eax, ecx
// 004138c9  f00fb137             lock cmpxchg dword ptr [edi], esi
// 004138cd  3bc1                 cmp eax, ecx
// 004138cf  740b                 je 0x4138dc
// 004138d1  8b0a                 mov ecx, dword ptr [edx]
// 004138d3  85c9                 test ecx, ecx
// 004138d5  75e9                 jne 0x4138c0
// 004138d7  5f                   pop edi
// 004138d8  32c0                 xor al, al
// 004138da  5e                   pop esi
// 004138db  c3                   ret 
// 004138dc  5f                   pop edi
// 004138dd  b001                 mov al, 1
// 004138df  5e                   pop esi
// 004138e0  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
