// roc 2009-12 0086f1a0  unit: PAVCXTPCommandBar::?$CArray  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f1a0
//
// 0086f1a0  57                   push edi
// 0086f1a1  8bf9                 mov edi, ecx
// 0086f1a3  8b4710               mov eax, dword ptr [edi + 0x10]
// 0086f1a6  85c0                 test eax, eax
// 0086f1a8  744a                 je 0x86f1f4
// 0086f1aa  7e4f                 jle 0x86f1fb
// 0086f1ac  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0086f1af  8b11                 mov edx, dword ptr [ecx]
// 0086f1b1  83ba2c01000000       cmp dword ptr [edx + 0x12c], 0
// 0086f1b8  7e3a                 jle 0x86f1f4
// 0086f1ba  56                   push esi
// 0086f1bb  33f6                 xor esi, esi
// 0086f1bd  85c0                 test eax, eax
// 0086f1bf  7e32                 jle 0x86f1f3
// 0086f1c1  85f6                 test esi, esi
// 0086f1c3  7c31                 jl 0x86f1f6
// 0086f1c5  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0086f1c8  7d2c                 jge 0x86f1f6
// 0086f1ca  8b470c               mov eax, dword ptr [edi + 0xc]
// 0086f1cd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0086f1d0  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 0086f1d7  7514                 jne 0x86f1ed
// 0086f1d9  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0086f1dc  7d18                 jge 0x86f1f6
// 0086f1de  8bd0                 mov edx, eax
// 0086f1e0  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 0086f1e3  8b01                 mov eax, dword ptr [ecx]
// 0086f1e5  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 0086f1eb  ffd2                 call edx
// 0086f1ed  46                   inc esi
// 0086f1ee  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0086f1f1  7cce                 jl 0x86f1c1
// 0086f1f3  5e                   pop esi
// 0086f1f4  5f                   pop edi
// 0086f1f5  c3                   ret 
// 0086f1f6  e81149f8ff           call 0x7f3b0c
// 0086f1fb  e80c49f8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?SendTrackLostRecurse@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp