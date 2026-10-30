// roc 2009-12 008e35e0  unit: CXTShadowHook  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e35e0
//
// 008e35e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e35e4  53                   push ebx
// 008e35e5  56                   push esi
// 008e35e6  57                   push edi
// 008e35e7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008e35eb  8bf1                 mov esi, ecx
// 008e35ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e35f1  50                   push eax
// 008e35f2  51                   push ecx
// 008e35f3  57                   push edi
// 008e35f4  8bce                 mov ecx, esi
// 008e35f6  e845020100           call 0x8f3840
// 008e35fb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008e35fe  8d542418             lea edx, [esp + 0x18]
// 008e3602  8bd8                 mov ebx, eax
// 008e3604  52                   push edx
// 008e3605  8d442418             lea eax, [esp + 0x18]
// 008e3609  50                   push eax
// 008e360a  57                   push edi
// 008e360b  e800faffff           call 0x8e3010
// 008e3610  5f                   pop edi
// 008e3611  5e                   pop esi
// 008e3612  8bc3                 mov eax, ebx
// 008e3614  5b                   pop ebx
// 008e3615  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTShadowHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp