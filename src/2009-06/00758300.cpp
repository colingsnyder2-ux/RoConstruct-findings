// roc 2009-06 00758300  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00758300
//
// 00758300  8b442404             mov eax, dword ptr [esp + 4]
// 00758304  c1e804               shr eax, 4
// 00758307  57                   push edi
// 00758308  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075830c  8907                 mov dword ptr [edi], eax
// 0075830e  33d2                 xor edx, edx
// 00758310  f77108               div dword ptr [ecx + 8]
// 00758313  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00758317  8910                 mov dword ptr [eax], edx
// 00758319  8b4904               mov ecx, dword ptr [ecx + 4]
// 0075831c  85c9                 test ecx, ecx
// 0075831e  7506                 jne 0x758326
// 00758320  33c0                 xor eax, eax
// 00758322  5f                   pop edi
// 00758323  c20c00               ret 0xc
// 00758326  56                   push esi
// 00758327  8b3491               mov esi, dword ptr [ecx + edx*4]
// 0075832a  85f6                 test esi, esi
// 0075832c  741f                 je 0x75834d
// 0075832e  8bff                 mov edi, edi
// 00758330  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00758333  3b0f                 cmp ecx, dword ptr [edi]
// 00758335  750f                 jne 0x758346
// 00758337  8d54240c             lea edx, [esp + 0xc]
// 0075833b  52                   push edx
// 0075833c  56                   push esi
// 0075833d  e8bee6ffff           call 0x756a00
// 00758342  85c0                 test eax, eax
// 00758344  750e                 jne 0x758354
// 00758346  8b7648               mov esi, dword ptr [esi + 0x48]
// 00758349  85f6                 test esi, esi
// 0075834b  75e3                 jne 0x758330
// 0075834d  5e                   pop esi
// 0075834e  33c0                 xor eax, eax
// 00758350  5f                   pop edi
// 00758351  c20c00               ret 0xc
// 00758354  8bc6                 mov eax, esi
// 00758356  5e                   pop esi
// 00758357  5f                   pop edi
// 00758358  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetAssocAt@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IBEPAVCAssoc@1@PAXAAI1@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp