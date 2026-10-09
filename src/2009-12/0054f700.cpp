// roc 2009-12 0054f700  unit: RBX::Network::IdSerializer  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054f700
//
// 0054f700  57                   push edi
// 0054f701  8bf9                 mov edi, ecx
// 0054f703  837f0400             cmp dword ptr [edi + 4], 0
// 0054f707  750d                 jne 0x54f716
// 0054f709  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054f70d  c60000               mov byte ptr [eax], 0
// 0054f710  33c0                 xor eax, eax
// 0054f712  5f                   pop edi
// 0054f713  c20c00               ret 0xc
// 0054f716  8b4704               mov eax, dword ptr [edi + 4]
// 0054f719  8b0f                 mov ecx, dword ptr [edi]
// 0054f71b  53                   push ebx
// 0054f71c  55                   push ebp
// 0054f71d  8d68ff               lea ebp, [eax - 1]
// 0054f720  99                   cdq 
// 0054f721  2bc2                 sub eax, edx
// 0054f723  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054f727  56                   push esi
// 0054f728  8bf0                 mov esi, eax
// 0054f72a  d1fe                 sar esi, 1
// 0054f72c  8d04f1               lea eax, [ecx + esi*8]
// 0054f72f  50                   push eax
// 0054f730  52                   push edx
// 0054f731  33db                 xor ebx, ebx
// 0054f733  ff542424             call dword ptr [esp + 0x24]
// 0054f737  83c408               add esp, 8
// 0054f73a  85c0                 test eax, eax
// 0054f73c  7431                 je 0x54f76f
// 0054f73e  7d05                 jge 0x54f745
// 0054f740  8d6eff               lea ebp, [esi - 1]
// 0054f743  eb03                 jmp 0x54f748
// 0054f745  8d5e01               lea ebx, [esi + 1]
// 0054f748  8bc5                 mov eax, ebp
// 0054f74a  2bc3                 sub eax, ebx
// 0054f74c  99                   cdq 
// 0054f74d  2bc2                 sub eax, edx
// 0054f74f  8bf0                 mov esi, eax
// 0054f751  d1fe                 sar esi, 1
// 0054f753  03f3                 add esi, ebx
// 0054f755  3bdd                 cmp ebx, ebp
// 0054f757  7f26                 jg 0x54f77f
// 0054f759  8b07                 mov eax, dword ptr [edi]
// 0054f75b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054f75f  8d04f0               lea eax, [eax + esi*8]
// 0054f762  50                   push eax
// 0054f763  51                   push ecx
// 0054f764  ff542424             call dword ptr [esp + 0x24]
// 0054f768  83c408               add esp, 8
// 0054f76b  85c0                 test eax, eax
// 0054f76d  75cf                 jne 0x54f73e
// 0054f76f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054f773  8bc6                 mov eax, esi
// 0054f775  5e                   pop esi
// 0054f776  5d                   pop ebp
// 0054f777  5b                   pop ebx
// 0054f778  c60201               mov byte ptr [edx], 1
// 0054f77b  5f                   pop edi
// 0054f77c  c20c00               ret 0xc
// 0054f77f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054f783  5e                   pop esi
// 0054f784  5d                   pop ebp
// 0054f785  c60000               mov byte ptr [eax], 0
// 0054f788  8bc3                 mov eax, ebx
// 0054f78a  5b                   pop ebx
// 0054f78b  5f                   pop edi
// 0054f78c  c20c00               ret 0xc
// library rbxgs-raknet/ConnectionGraph.cpp (function ?GetIndexFromKey@?$OrderedList@USystemAddress@@U1@$1??$defaultOrderedListComparison@USystemAddress@@U1@@DataStructures@@YAHABU1@0@Z@DataStructures@@QBEIABUSystemAddress@@PA_NP6AH00@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
