// roc 2010-06 00897910  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897910
//
// 00897910  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00897914  53                   push ebx
// 00897915  56                   push esi
// 00897916  57                   push edi
// 00897917  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0089791b  8bf1                 mov esi, ecx
// 0089791d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00897921  50                   push eax
// 00897922  51                   push ecx
// 00897923  57                   push edi
// 00897924  8bce                 mov ecx, esi
// 00897926  e845000100           call 0x8a7970
// 0089792b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0089792e  8d542418             lea edx, [esp + 0x18]
// 00897932  8bd8                 mov ebx, eax
// 00897934  52                   push edx
// 00897935  8d442418             lea eax, [esp + 0x18]
// 00897939  50                   push eax
// 0089793a  57                   push edi
// 0089793b  e8a0f9ffff           call 0x8972e0
// 00897940  5f                   pop edi
// 00897941  5e                   pop esi
// 00897942  8bc3                 mov eax, ebx
// 00897944  5b                   pop ebx
// 00897945  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp