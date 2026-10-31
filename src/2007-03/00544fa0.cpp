// roc 2007-03 00544fa0  unit: seg_00540000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544fa0
//
// 00544fa0  56                   push esi
// 00544fa1  8b742408             mov esi, dword ptr [esp + 8]
// 00544fa5  8b0e                 mov ecx, dword ptr [esi]
// 00544fa7  8b01                 mov eax, dword ptr [ecx]
// 00544fa9  8b5010               mov edx, dword ptr [eax + 0x10]
// 00544fac  57                   push edi
// 00544fad  ffd2                 call edx
// 00544faf  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00544fb3  8d4e0c               lea ecx, [esi + 0xc]
// 00544fb6  7c14                 jl 0x544fcc
// 00544fb8  3b06                 cmp eax, dword ptr [esi]
// 00544fba  7510                 jne 0x544fcc
// 00544fbc  8bfe                 mov edi, esi
// 00544fbe  b801000000           mov eax, 1
// 00544fc3  f00fc101             lock xadd dword ptr [ecx], eax
// 00544fc7  8bc7                 mov eax, edi
// 00544fc9  5f                   pop edi
// 00544fca  5e                   pop esi
// 00544fcb  c3                   ret 
// 00544fcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00544fcf  8b10                 mov edx, dword ptr [eax]
// 00544fd1  8b12                 mov edx, dword ptr [edx]
// 00544fd3  6a01                 push 1
// 00544fd5  51                   push ecx
// 00544fd6  8bc8                 mov ecx, eax
// 00544fd8  ffd2                 call edx
// 00544fda  8bf8                 mov edi, eax
// 00544fdc  85ff                 test edi, edi
// 00544fde  7505                 jne 0x544fe5
// 00544fe0  e95beeecff           jmp 0x413e40
// 00544fe5  8b4604               mov eax, dword ptr [esi + 4]
// 00544fe8  894704               mov dword ptr [edi + 4], eax
// 00544feb  8b4604               mov eax, dword ptr [esi + 4]
// 00544fee  83c001               add eax, 1
// 00544ff1  50                   push eax
// 00544ff2  83c610               add esi, 0x10
// 00544ff5  56                   push esi
// 00544ff6  50                   push eax
// 00544ff7  8d4f10               lea ecx, [edi + 0x10]
// 00544ffa  51                   push ecx
// 00544ffb  ff1540e97700         call dword ptr [0x77e940]
// 00545001  83c410               add esp, 0x10
// 00545004  8bc7                 mov eax, edi
// 00545006  5f                   pop edi
// 00545007  5e                   pop esi
// 00545008  c3                   ret 
// copied from an identical function in another client (function ?CloneData@?$CSimpleStringT@D$0A@@ATL@@CAPAUCStringData@2@PAU32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp