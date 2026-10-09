// roc 2007-03 005a8460  unit: seg_005a0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8460
//
// 005a8460  51                   push ecx
// 005a8461  56                   push esi
// 005a8462  8bf1                 mov esi, ecx
// 005a8464  8b06                 mov eax, dword ptr [esi]
// 005a8466  85c0                 test eax, eax
// 005a8468  57                   push edi
// 005a8469  741b                 je 0x5a8486
// 005a846b  8d4c2408             lea ecx, [esp + 8]
// 005a846f  51                   push ecx
// 005a8470  83c00c               add eax, 0xc
// 005a8473  50                   push eax
// 005a8474  89742410             mov dword ptr [esp + 0x10], esi
// 005a8478  e8f3feffff           call 0x5a8370
// 005a847d  83c408               add esp, 8
// 005a8480  c70600000000         mov dword ptr [esi], 0
// 005a8486  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a848a  85ff                 test edi, edi
// 005a848c  7413                 je 0x5a84a1
// 005a848e  8d542410             lea edx, [esp + 0x10]
// 005a8492  52                   push edx
// 005a8493  8d4f0c               lea ecx, [edi + 0xc]
// 005a8496  89742414             mov dword ptr [esp + 0x14], esi
// 005a849a  e8a1cdfdff           call 0x585240
// 005a849f  893e                 mov dword ptr [esi], edi
// 005a84a1  5f                   pop edi
// 005a84a2  5e                   pop esi
// 005a84a3  59                   pop ecx
// 005a84a4  c20400               ret 4
// library openrbx-client/App\v8world\Mechanism.cpp (function ?setMechanism@MechanismTracker@RBX@@QAEXPAVMechanism@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
