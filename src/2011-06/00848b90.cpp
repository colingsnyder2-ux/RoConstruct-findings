// roc 2011-06 00848b90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848b90
//
// 00848b90  8b442404             mov eax, dword ptr [esp + 4]
// 00848b94  c1e804               shr eax, 4
// 00848b97  57                   push edi
// 00848b98  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00848b9c  8907                 mov dword ptr [edi], eax
// 00848b9e  33d2                 xor edx, edx
// 00848ba0  f77108               div dword ptr [ecx + 8]
// 00848ba3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00848ba7  8910                 mov dword ptr [eax], edx
// 00848ba9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00848bac  85c9                 test ecx, ecx
// 00848bae  7506                 jne 0x848bb6
// 00848bb0  33c0                 xor eax, eax
// 00848bb2  5f                   pop edi
// 00848bb3  c20c00               ret 0xc
// 00848bb6  56                   push esi
// 00848bb7  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00848bba  85f6                 test esi, esi
// 00848bbc  741f                 je 0x848bdd
// 00848bbe  8bff                 mov edi, edi
// 00848bc0  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00848bc3  3b0f                 cmp ecx, dword ptr [edi]
// 00848bc5  750f                 jne 0x848bd6
// 00848bc7  8d54240c             lea edx, [esp + 0xc]
// 00848bcb  52                   push edx
// 00848bcc  56                   push esi
// 00848bcd  e86e710a00           call 0x8efd40
// 00848bd2  85c0                 test eax, eax
// 00848bd4  750e                 jne 0x848be4
// 00848bd6  8b7648               mov esi, dword ptr [esi + 0x48]
// 00848bd9  85f6                 test esi, esi
// 00848bdb  75e3                 jne 0x848bc0
// 00848bdd  5e                   pop esi
// 00848bde  33c0                 xor eax, eax
// 00848be0  5f                   pop edi
// 00848be1  c20c00               ret 0xc
// 00848be4  8bc6                 mov eax, esi
// 00848be6  5e                   pop esi
// 00848be7  5f                   pop edi
// 00848be8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp