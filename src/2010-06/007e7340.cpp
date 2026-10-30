// roc 2010-06 007e7340  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e7340
//
// 007e7340  8b442404             mov eax, dword ptr [esp + 4]
// 007e7344  c1e804               shr eax, 4
// 007e7347  57                   push edi
// 007e7348  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e734c  8907                 mov dword ptr [edi], eax
// 007e734e  33d2                 xor edx, edx
// 007e7350  f77108               div dword ptr [ecx + 8]
// 007e7353  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007e7357  8910                 mov dword ptr [eax], edx
// 007e7359  8b4904               mov ecx, dword ptr [ecx + 4]
// 007e735c  85c9                 test ecx, ecx
// 007e735e  7506                 jne 0x7e7366
// 007e7360  33c0                 xor eax, eax
// 007e7362  5f                   pop edi
// 007e7363  c20c00               ret 0xc
// 007e7366  56                   push esi
// 007e7367  8b3491               mov esi, dword ptr [ecx + edx*4]
// 007e736a  85f6                 test esi, esi
// 007e736c  741f                 je 0x7e738d
// 007e736e  8bff                 mov edi, edi
// 007e7370  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 007e7373  3b0f                 cmp ecx, dword ptr [edi]
// 007e7375  750f                 jne 0x7e7386
// 007e7377  8d54240c             lea edx, [esp + 0xc]
// 007e737b  52                   push edx
// 007e737c  56                   push esi
// 007e737d  e8cece0800           call 0x874250
// 007e7382  85c0                 test eax, eax
// 007e7384  750e                 jne 0x7e7394
// 007e7386  8b7648               mov esi, dword ptr [esi + 0x48]
// 007e7389  85f6                 test esi, esi
// 007e738b  75e3                 jne 0x7e7370
// 007e738d  5e                   pop esi
// 007e738e  33c0                 xor eax, eax
// 007e7390  5f                   pop edi
// 007e7391  c20c00               ret 0xc
// 007e7394  8bc6                 mov eax, esi
// 007e7396  5e                   pop esi
// 007e7397  5f                   pop edi
// 007e7398  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp