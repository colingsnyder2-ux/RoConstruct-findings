// roc 2012-06 009c1010  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1010
//
// 009c1010  8b442404             mov eax, dword ptr [esp + 4]
// 009c1014  c1e804               shr eax, 4
// 009c1017  57                   push edi
// 009c1018  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c101c  8907                 mov dword ptr [edi], eax
// 009c101e  33d2                 xor edx, edx
// 009c1020  f77108               div dword ptr [ecx + 8]
// 009c1023  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c1027  8910                 mov dword ptr [eax], edx
// 009c1029  8b4904               mov ecx, dword ptr [ecx + 4]
// 009c102c  85c9                 test ecx, ecx
// 009c102e  7506                 jne 0x9c1036
// 009c1030  33c0                 xor eax, eax
// 009c1032  5f                   pop edi
// 009c1033  c20c00               ret 0xc
// 009c1036  56                   push esi
// 009c1037  8b3491               mov esi, dword ptr [ecx + edx*4]
// 009c103a  85f6                 test esi, esi
// 009c103c  741f                 je 0x9c105d
// 009c103e  8bff                 mov edi, edi
// 009c1040  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 009c1043  3b0f                 cmp ecx, dword ptr [edi]
// 009c1045  750f                 jne 0x9c1056
// 009c1047  8d54240c             lea edx, [esp + 0xc]
// 009c104b  52                   push edx
// 009c104c  56                   push esi
// 009c104d  e81e710a00           call 0xa68170
// 009c1052  85c0                 test eax, eax
// 009c1054  750e                 jne 0x9c1064
// 009c1056  8b7648               mov esi, dword ptr [esi + 0x48]
// 009c1059  85f6                 test esi, esi
// 009c105b  75e3                 jne 0x9c1040
// 009c105d  5e                   pop esi
// 009c105e  33c0                 xor eax, eax
// 009c1060  5f                   pop edi
// 009c1061  c20c00               ret 0xc
// 009c1064  8bc6                 mov eax, esi
// 009c1066  5e                   pop esi
// 009c1067  5f                   pop edi
// 009c1068  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp