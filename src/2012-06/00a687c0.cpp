// roc 2012-06 00a687c0  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a687c0
//
// 00a687c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a687c4  53                   push ebx
// 00a687c5  56                   push esi
// 00a687c6  57                   push edi
// 00a687c7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a687cb  8bf1                 mov esi, ecx
// 00a687cd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a687d1  50                   push eax
// 00a687d2  51                   push ecx
// 00a687d3  57                   push edi
// 00a687d4  8bce                 mov ecx, esi
// 00a687d6  e8750a0100           call 0xa79250
// 00a687db  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a687de  8d542418             lea edx, [esp + 0x18]
// 00a687e2  8bd8                 mov ebx, eax
// 00a687e4  52                   push edx
// 00a687e5  8d442418             lea eax, [esp + 0x18]
// 00a687e9  50                   push eax
// 00a687ea  57                   push edi
// 00a687eb  e840faffff           call 0xa68230
// 00a687f0  5f                   pop edi
// 00a687f1  5e                   pop esi
// 00a687f2  8bc3                 mov eax, ebx
// 00a687f4  5b                   pop ebx
// 00a687f5  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp