// roc 2009-06 00808b20  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808b20
//
// 00808b20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00808b24  53                   push ebx
// 00808b25  56                   push esi
// 00808b26  57                   push edi
// 00808b27  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00808b2b  8bf1                 mov esi, ecx
// 00808b2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00808b31  50                   push eax
// 00808b32  51                   push ecx
// 00808b33  57                   push edi
// 00808b34  8bce                 mov ecx, esi
// 00808b36  e835000100           call 0x818b70
// 00808b3b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00808b3e  8d542418             lea edx, [esp + 0x18]
// 00808b42  8bd8                 mov ebx, eax
// 00808b44  52                   push edx
// 00808b45  8d442418             lea eax, [esp + 0x18]
// 00808b49  50                   push eax
// 00808b4a  57                   push edi
// 00808b4b  e8e0f9ffff           call 0x808530
// 00808b50  5f                   pop edi
// 00808b51  5e                   pop esi
// 00808b52  8bc3                 mov eax, ebx
// 00808b54  5b                   pop ebx
// 00808b55  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp