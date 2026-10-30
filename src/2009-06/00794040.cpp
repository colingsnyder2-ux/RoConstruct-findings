// roc 2009-06 00794040  unit: PAVCXTPCommandBar::?$CArray  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00794040
//
// 00794040  57                   push edi
// 00794041  8bf9                 mov edi, ecx
// 00794043  8b4710               mov eax, dword ptr [edi + 0x10]
// 00794046  85c0                 test eax, eax
// 00794048  744a                 je 0x794094
// 0079404a  7e4f                 jle 0x79409b
// 0079404c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0079404f  8b11                 mov edx, dword ptr [ecx]
// 00794051  83ba2c01000000       cmp dword ptr [edx + 0x12c], 0
// 00794058  7e3a                 jle 0x794094
// 0079405a  56                   push esi
// 0079405b  33f6                 xor esi, esi
// 0079405d  85c0                 test eax, eax
// 0079405f  7e32                 jle 0x794093
// 00794061  85f6                 test esi, esi
// 00794063  7c31                 jl 0x794096
// 00794065  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00794068  7d2c                 jge 0x794096
// 0079406a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0079406d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00794070  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 00794077  7514                 jne 0x79408d
// 00794079  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0079407c  7d18                 jge 0x794096
// 0079407e  8bd0                 mov edx, eax
// 00794080  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 00794083  8b01                 mov eax, dword ptr [ecx]
// 00794085  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 0079408b  ffd2                 call edx
// 0079408d  46                   inc esi
// 0079408e  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00794091  7cce                 jl 0x794061
// 00794093  5e                   pop esi
// 00794094  5f                   pop edi
// 00794095  c3                   ret 
// 00794096  e8494cf8ff           call 0x718ce4
// 0079409b  e8444cf8ff           call 0x718ce4
// copied from an identical function in another client (function ?SendTrackLostRecurse@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp