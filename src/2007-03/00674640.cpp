// roc 2007-03 00674640  unit: seg_00670000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00674640
//
// 00674640  8b442408             mov eax, dword ptr [esp + 8]
// 00674644  85c0                 test eax, eax
// 00674646  56                   push esi
// 00674647  57                   push edi
// 00674648  8bf1                 mov esi, ecx
// 0067464a  7c05                 jl 0x674651
// 0067464c  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0067464f  7c03                 jl 0x674654
// 00674651  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00674654  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00674658  6a01                 push 1
// 0067465a  57                   push edi
// 0067465b  50                   push eax
// 0067465c  8d4e24               lea ecx, [esi + 0x24]
// 0067465f  e8ccb7fdff           call 0x64fe30
// 00674664  8b06                 mov eax, dword ptr [esi]
// 00674666  8b5060               mov edx, dword ptr [eax + 0x60]
// 00674669  57                   push edi
// 0067466a  8bce                 mov ecx, esi
// 0067466c  ffd2                 call edx
// 0067466e  8bc7                 mov eax, edi
// 00674670  5f                   pop edi
// 00674671  5e                   pop esi
// 00674672  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?InsertAt@CXTPControls@@QAEPAVCXTPControl@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
