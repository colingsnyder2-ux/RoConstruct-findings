// roc 2011-06 008807e0  unit: PAUHWND__::?$CArray  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008807e0
//
// 008807e0  57                   push edi
// 008807e1  8bf9                 mov edi, ecx
// 008807e3  8b4710               mov eax, dword ptr [edi + 0x10]
// 008807e6  85c0                 test eax, eax
// 008807e8  744a                 je 0x880834
// 008807ea  7e4f                 jle 0x88083b
// 008807ec  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008807ef  8b11                 mov edx, dword ptr [ecx]
// 008807f1  83ba2c01000000       cmp dword ptr [edx + 0x12c], 0
// 008807f8  7e3a                 jle 0x880834
// 008807fa  56                   push esi
// 008807fb  33f6                 xor esi, esi
// 008807fd  85c0                 test eax, eax
// 008807ff  7e32                 jle 0x880833
// 00880801  85f6                 test esi, esi
// 00880803  7c31                 jl 0x880836
// 00880805  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00880808  7d2c                 jge 0x880836
// 0088080a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0088080d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00880810  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 00880817  7514                 jne 0x88082d
// 00880819  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0088081c  7d18                 jge 0x880836
// 0088081e  8bd0                 mov edx, eax
// 00880820  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 00880823  8b01                 mov eax, dword ptr [ecx]
// 00880825  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 0088082b  ffd2                 call edx
// 0088082d  46                   inc esi
// 0088082e  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00880831  7cce                 jl 0x880801
// 00880833  5e                   pop esi
// 00880834  5f                   pop edi
// 00880835  c3                   ret 
// 00880836  e8cf9af8ff           call 0x80a30a
// 0088083b  e8ca9af8ff           call 0x80a30a
// copied from an identical function in another client (function ?SendTrackLostRecurse@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp