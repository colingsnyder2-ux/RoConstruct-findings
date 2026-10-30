// roc 2007-03 00652cd0  unit: seg_00650000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00652cd0
//
// 00652cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00652cd4  c1e804               shr eax, 4
// 00652cd7  57                   push edi
// 00652cd8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00652cdc  8907                 mov dword ptr [edi], eax
// 00652cde  33d2                 xor edx, edx
// 00652ce0  f77108               div dword ptr [ecx + 8]
// 00652ce3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00652ce7  8910                 mov dword ptr [eax], edx
// 00652ce9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00652cec  85c9                 test ecx, ecx
// 00652cee  7506                 jne 0x652cf6
// 00652cf0  33c0                 xor eax, eax
// 00652cf2  5f                   pop edi
// 00652cf3  c20c00               ret 0xc
// 00652cf6  56                   push esi
// 00652cf7  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00652cfa  85f6                 test esi, esi
// 00652cfc  741f                 je 0x652d1d
// 00652cfe  8bff                 mov edi, edi
// 00652d00  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00652d03  3b0f                 cmp ecx, dword ptr [edi]
// 00652d05  750f                 jne 0x652d16
// 00652d07  8d54240c             lea edx, [esp + 0xc]
// 00652d0b  52                   push edx
// 00652d0c  56                   push esi
// 00652d0d  e80ee20600           call 0x6c0f20
// 00652d12  85c0                 test eax, eax
// 00652d14  750e                 jne 0x652d24
// 00652d16  8b7648               mov esi, dword ptr [esi + 0x48]
// 00652d19  85f6                 test esi, esi
// 00652d1b  75e3                 jne 0x652d00
// 00652d1d  5e                   pop esi
// 00652d1e  33c0                 xor eax, eax
// 00652d20  5f                   pop edi
// 00652d21  c20c00               ret 0xc
// 00652d24  8bc6                 mov eax, esi
// 00652d26  5e                   pop esi
// 00652d27  5f                   pop edi
// 00652d28  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp