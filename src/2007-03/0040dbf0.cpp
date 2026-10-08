// roc 2007-03 0040dbf0  unit: seg_00400000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040dbf0
//
// 0040dbf0  8d5104               lea edx, [ecx + 4]
// 0040dbf3  8b0a                 mov ecx, dword ptr [edx]
// 0040dbf5  85c9                 test ecx, ecx
// 0040dbf7  56                   push esi
// 0040dbf8  57                   push edi
// 0040dbf9  741c                 je 0x40dc17
// 0040dbfb  eb03                 jmp 0x40dc00
// 0040dbfd  8d4900               lea ecx, [ecx]
// 0040dc00  8d4101               lea eax, [ecx + 1]
// 0040dc03  8bf0                 mov esi, eax
// 0040dc05  8bfa                 mov edi, edx
// 0040dc07  8bc1                 mov eax, ecx
// 0040dc09  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0040dc0d  3bc1                 cmp eax, ecx
// 0040dc0f  740b                 je 0x40dc1c
// 0040dc11  8b0a                 mov ecx, dword ptr [edx]
// 0040dc13  85c9                 test ecx, ecx
// 0040dc15  75e9                 jne 0x40dc00
// 0040dc17  5f                   pop edi
// 0040dc18  32c0                 xor al, al
// 0040dc1a  5e                   pop esi
// 0040dc1b  c3                   ret 
// 0040dc1c  5f                   pop edi
// 0040dc1d  b001                 mov al, 1
// 0040dc1f  5e                   pop esi
// 0040dc20  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
