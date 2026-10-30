// roc 2007-03 00704640  unit: seg_00700000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704640
//
// 00704640  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00704644  53                   push ebx
// 00704645  56                   push esi
// 00704646  57                   push edi
// 00704647  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0070464b  8bf1                 mov esi, ecx
// 0070464d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00704651  50                   push eax
// 00704652  51                   push ecx
// 00704653  57                   push edi
// 00704654  8bce                 mov ecx, esi
// 00704656  e8d5d20100           call 0x721930
// 0070465b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0070465e  8d542418             lea edx, [esp + 0x18]
// 00704662  8bd8                 mov ebx, eax
// 00704664  52                   push edx
// 00704665  8d442418             lea eax, [esp + 0x18]
// 00704669  50                   push eax
// 0070466a  57                   push edi
// 0070466b  e840f3ffff           call 0x7039b0
// 00704670  5f                   pop edi
// 00704671  5e                   pop esi
// 00704672  8bc3                 mov eax, ebx
// 00704674  5b                   pop ebx
// 00704675  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp