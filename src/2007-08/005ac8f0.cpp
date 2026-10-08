// roc 2007-08 005ac8f0  unit: RBX::World  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac8f0
//
// 005ac8f0  51                   push ecx
// 005ac8f1  56                   push esi
// 005ac8f2  8bf1                 mov esi, ecx
// 005ac8f4  8b06                 mov eax, dword ptr [esi]
// 005ac8f6  85c0                 test eax, eax
// 005ac8f8  57                   push edi
// 005ac8f9  741b                 je 0x5ac916
// 005ac8fb  8d4c2408             lea ecx, [esp + 8]
// 005ac8ff  51                   push ecx
// 005ac900  83c00c               add eax, 0xc
// 005ac903  50                   push eax
// 005ac904  89742410             mov dword ptr [esp + 0x10], esi
// 005ac908  e8c3feffff           call 0x5ac7d0
// 005ac90d  83c408               add esp, 8
// 005ac910  c70600000000         mov dword ptr [esi], 0
// 005ac916  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ac91a  85ff                 test edi, edi
// 005ac91c  7413                 je 0x5ac931
// 005ac91e  8d542410             lea edx, [esp + 0x10]
// 005ac922  52                   push edx
// 005ac923  8d4f0c               lea ecx, [edi + 0xc]
// 005ac926  89742414             mov dword ptr [esp + 0x14], esi
// 005ac92a  e841770000           call 0x5b4070
// 005ac92f  893e                 mov dword ptr [esi], edi
// 005ac931  5f                   pop edi
// 005ac932  5e                   pop esi
// 005ac933  59                   pop ecx
// 005ac934  c20400               ret 4
// library openrbx-client/App\v8world\Mechanism.cpp (function ?setMechanism@MechanismTracker@RBX@@QAEXPAVMechanism@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
