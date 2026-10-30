// roc 2009-12 00833180  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833180
//
// 00833180  8b442404             mov eax, dword ptr [esp + 4]
// 00833184  c1e804               shr eax, 4
// 00833187  57                   push edi
// 00833188  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0083318c  8907                 mov dword ptr [edi], eax
// 0083318e  33d2                 xor edx, edx
// 00833190  f77108               div dword ptr [ecx + 8]
// 00833193  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00833197  8910                 mov dword ptr [eax], edx
// 00833199  8b4904               mov ecx, dword ptr [ecx + 4]
// 0083319c  85c9                 test ecx, ecx
// 0083319e  7506                 jne 0x8331a6
// 008331a0  33c0                 xor eax, eax
// 008331a2  5f                   pop edi
// 008331a3  c20c00               ret 0xc
// 008331a6  56                   push esi
// 008331a7  8b3491               mov esi, dword ptr [ecx + edx*4]
// 008331aa  85f6                 test esi, esi
// 008331ac  741f                 je 0x8331cd
// 008331ae  8bff                 mov edi, edi
// 008331b0  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 008331b3  3b0f                 cmp ecx, dword ptr [edi]
// 008331b5  750f                 jne 0x8331c6
// 008331b7  8d54240c             lea edx, [esp + 0xc]
// 008331bb  52                   push edx
// 008331bc  56                   push esi
// 008331bd  e8fed20300           call 0x8704c0
// 008331c2  85c0                 test eax, eax
// 008331c4  750e                 jne 0x8331d4
// 008331c6  8b7648               mov esi, dword ptr [esi + 0x48]
// 008331c9  85f6                 test esi, esi
// 008331cb  75e3                 jne 0x8331b0
// 008331cd  5e                   pop esi
// 008331ce  33c0                 xor eax, eax
// 008331d0  5f                   pop edi
// 008331d1  c20c00               ret 0xc
// 008331d4  8bc6                 mov eax, esi
// 008331d6  5e                   pop esi
// 008331d7  5f                   pop edi
// 008331d8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp