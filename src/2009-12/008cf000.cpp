// roc 2009-12 008cf000  unit: CXTPTabManagerItem  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf000
//
// 008cf000  56                   push esi
// 008cf001  57                   push edi
// 008cf002  8bf9                 mov edi, ecx
// 008cf004  33f6                 xor esi, esi
// 008cf006  397774               cmp dword ptr [edi + 0x74], esi
// 008cf009  7e26                 jle 0x8cf031
// 008cf00b  eb03                 jmp 0x8cf010
// 008cf00d  8d4900               lea ecx, [ecx]
// 008cf010  85f6                 test esi, esi
// 008cf012  7c2c                 jl 0x8cf040
// 008cf014  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cf017  7d27                 jge 0x8cf040
// 008cf019  8b4770               mov eax, dword ptr [edi + 0x70]
// 008cf01c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 008cf01f  85c9                 test ecx, ecx
// 008cf021  7408                 je 0x8cf02b
// 008cf023  8b11                 mov edx, dword ptr [ecx]
// 008cf025  8b02                 mov eax, dword ptr [edx]
// 008cf027  6a01                 push 1
// 008cf029  ffd0                 call eax
// 008cf02b  46                   inc esi
// 008cf02c  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008cf02f  7cdf                 jl 0x8cf010
// 008cf031  6aff                 push -1
// 008cf033  6a00                 push 0
// 008cf035  8d4f6c               lea ecx, [edi + 0x6c]
// 008cf038  e86363f8ff           call 0x8553a0
// 008cf03d  5f                   pop edi
// 008cf03e  5e                   pop esi
// 008cf03f  c3                   ret 
// 008cf040  e8c74af2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnRemoved@CXTPTabManagerItem@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp