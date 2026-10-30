// roc 2012-06 009f8df0  unit: PAUHWND__::?$CArray  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8df0
//
// 009f8df0  57                   push edi
// 009f8df1  8bf9                 mov edi, ecx
// 009f8df3  8b4710               mov eax, dword ptr [edi + 0x10]
// 009f8df6  85c0                 test eax, eax
// 009f8df8  744a                 je 0x9f8e44
// 009f8dfa  7e4f                 jle 0x9f8e4b
// 009f8dfc  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 009f8dff  8b11                 mov edx, dword ptr [ecx]
// 009f8e01  83ba2c01000000       cmp dword ptr [edx + 0x12c], 0
// 009f8e08  7e3a                 jle 0x9f8e44
// 009f8e0a  56                   push esi
// 009f8e0b  33f6                 xor esi, esi
// 009f8e0d  85c0                 test eax, eax
// 009f8e0f  7e32                 jle 0x9f8e43
// 009f8e11  85f6                 test esi, esi
// 009f8e13  7c31                 jl 0x9f8e46
// 009f8e15  3b7710               cmp esi, dword ptr [edi + 0x10]
// 009f8e18  7d2c                 jge 0x9f8e46
// 009f8e1a  8b470c               mov eax, dword ptr [edi + 0xc]
// 009f8e1d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009f8e20  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 009f8e27  7514                 jne 0x9f8e3d
// 009f8e29  3b7710               cmp esi, dword ptr [edi + 0x10]
// 009f8e2c  7d18                 jge 0x9f8e46
// 009f8e2e  8bd0                 mov edx, eax
// 009f8e30  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 009f8e33  8b01                 mov eax, dword ptr [ecx]
// 009f8e35  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 009f8e3b  ffd2                 call edx
// 009f8e3d  46                   inc esi
// 009f8e3e  3b7710               cmp esi, dword ptr [edi + 0x10]
// 009f8e41  7cce                 jl 0x9f8e11
// 009f8e43  5e                   pop esi
// 009f8e44  5f                   pop edi
// 009f8e45  c3                   ret 
// 009f8e46  e87595f8ff           call 0x9823c0
// 009f8e4b  e87095f8ff           call 0x9823c0
// copied from an identical function in another client (function ?SendTrackLostRecurse@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp