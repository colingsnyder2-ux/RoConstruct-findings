// roc 2011-06 008f0420  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0420
//
// 008f0420  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f0424  53                   push ebx
// 008f0425  56                   push esi
// 008f0426  57                   push edi
// 008f0427  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f042b  8bf1                 mov esi, ecx
// 008f042d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f0431  50                   push eax
// 008f0432  51                   push ecx
// 008f0433  57                   push edi
// 008f0434  8bce                 mov ecx, esi
// 008f0436  e8050c0100           call 0x901040
// 008f043b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008f043e  8d542418             lea edx, [esp + 0x18]
// 008f0442  8bd8                 mov ebx, eax
// 008f0444  52                   push edx
// 008f0445  8d442418             lea eax, [esp + 0x18]
// 008f0449  50                   push eax
// 008f044a  57                   push edi
// 008f044b  e890f9ffff           call 0x8efde0
// 008f0450  5f                   pop edi
// 008f0451  5e                   pop esi
// 008f0452  8bc3                 mov eax, ebx
// 008f0454  5b                   pop ebx
// 008f0455  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp