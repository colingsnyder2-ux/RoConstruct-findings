// roc 2008-06 00411120  unit: VCBrowserViewExternal::?$CComObject  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411120
//
// 00411120  8d5104               lea edx, [ecx + 4]
// 00411123  8b0a                 mov ecx, dword ptr [edx]
// 00411125  56                   push esi
// 00411126  57                   push edi
// 00411127  85c9                 test ecx, ecx
// 00411129  741c                 je 0x411147
// 0041112b  eb03                 jmp 0x411130
// 0041112d  8d4900               lea ecx, [ecx]
// 00411130  8d4101               lea eax, [ecx + 1]
// 00411133  8bf0                 mov esi, eax
// 00411135  8bfa                 mov edi, edx
// 00411137  8bc1                 mov eax, ecx
// 00411139  f00fb137             lock cmpxchg dword ptr [edi], esi
// 0041113d  3bc1                 cmp eax, ecx
// 0041113f  740b                 je 0x41114c
// 00411141  8b0a                 mov ecx, dword ptr [edx]
// 00411143  85c9                 test ecx, ecx
// 00411145  75e9                 jne 0x411130
// 00411147  5f                   pop edi
// 00411148  32c0                 xor al, al
// 0041114a  5e                   pop esi
// 0041114b  c3                   ret 
// 0041114c  5f                   pop edi
// 0041114d  b001                 mov al, 1
// 0041114f  5e                   pop esi
// 00411150  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?add_ref_lock@sp_counted_base@detail@boost@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
