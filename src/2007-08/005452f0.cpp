// roc 2007-08 005452f0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005452f0
//
// 005452f0  56                   push esi
// 005452f1  8b742408             mov esi, dword ptr [esp + 8]
// 005452f5  8b0e                 mov ecx, dword ptr [esi]
// 005452f7  8b01                 mov eax, dword ptr [ecx]
// 005452f9  8b5010               mov edx, dword ptr [eax + 0x10]
// 005452fc  57                   push edi
// 005452fd  ffd2                 call edx
// 005452ff  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00545303  8d4e0c               lea ecx, [esi + 0xc]
// 00545306  7c14                 jl 0x54531c
// 00545308  3b06                 cmp eax, dword ptr [esi]
// 0054530a  7510                 jne 0x54531c
// 0054530c  8bfe                 mov edi, esi
// 0054530e  b801000000           mov eax, 1
// 00545313  f00fc101             lock xadd dword ptr [ecx], eax
// 00545317  8bc7                 mov eax, edi
// 00545319  5f                   pop edi
// 0054531a  5e                   pop esi
// 0054531b  c3                   ret 
// 0054531c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054531f  8b10                 mov edx, dword ptr [eax]
// 00545321  8b12                 mov edx, dword ptr [edx]
// 00545323  6a01                 push 1
// 00545325  51                   push ecx
// 00545326  8bc8                 mov ecx, eax
// 00545328  ffd2                 call edx
// 0054532a  8bf8                 mov edi, eax
// 0054532c  85ff                 test edi, edi
// 0054532e  7505                 jne 0x545335
// 00545330  e9ebdbecff           jmp 0x412f20
// 00545335  8b4604               mov eax, dword ptr [esi + 4]
// 00545338  894704               mov dword ptr [edi + 4], eax
// 0054533b  8b4604               mov eax, dword ptr [esi + 4]
// 0054533e  83c001               add eax, 1
// 00545341  50                   push eax
// 00545342  83c610               add esi, 0x10
// 00545345  56                   push esi
// 00545346  50                   push eax
// 00545347  8d4f10               lea ecx, [edi + 0x10]
// 0054534a  51                   push ecx
// 0054534b  ff15d4e67700         call dword ptr [0x77e6d4]
// 00545351  83c410               add esp, 0x10
// 00545354  8bc7                 mov eax, edi
// 00545356  5f                   pop edi
// 00545357  5e                   pop esi
// 00545358  c3                   ret 
// copied from an identical function in another client (function ?CloneData@?$CSimpleStringT@D$0A@@ATL@@CAPAUCStringData@2@PAU32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp