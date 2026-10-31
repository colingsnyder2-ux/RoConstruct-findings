// roc 2009-06 004161d0  unit: CopyVerb  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004161d0
//
// 004161d0  56                   push esi
// 004161d1  57                   push edi
// 004161d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004161d6  8bf1                 mov esi, ecx
// 004161d8  85ff                 test edi, edi
// 004161da  7459                 je 0x416235
// 004161dc  8d44240c             lea eax, [esp + 0xc]
// 004161e0  50                   push eax
// 004161e1  57                   push edi
// 004161e2  ff152cea8900         call dword ptr [0x89ea2c]
// 004161e8  85c0                 test eax, eax
// 004161ea  7c27                 jl 0x416213
// 004161ec  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004161f1  7420                 je 0x416213
// 004161f3  56                   push esi
// 004161f4  57                   push edi
// 004161f5  e896ffffff           call 0x416190
// 004161fa  8b542414             mov edx, dword ptr [esp + 0x14]
// 004161fe  83c408               add esp, 8
// 00416201  b900200000           mov ecx, 0x2000
// 00416206  66090e               or word ptr [esi], cx
// 00416209  5f                   pop edi
// 0041620a  895608               mov dword ptr [esi + 8], edx
// 0041620d  8bc6                 mov eax, esi
// 0041620f  5e                   pop esi
// 00416210  c20400               ret 4
// 00416213  b90a000000           mov ecx, 0xa
// 00416218  66890e               mov word ptr [esi], cx
// 0041621b  894608               mov dword ptr [esi + 8], eax
// 0041621e  3d0e000780           cmp eax, 0x8007000e
// 00416223  7506                 jne 0x41622b
// 00416225  50                   push eax
// 00416226  e885ccfeff           call 0x402eb0
// 0041622b  6857000780           push 0x80070057
// 00416230  e87bccfeff           call 0x402eb0
// 00416235  33d2                 xor edx, edx
// 00416237  5f                   pop edi
// 00416238  668916               mov word ptr [esi], dx
// 0041623b  8bc6                 mov eax, esi
// 0041623d  5e                   pop esi
// 0041623e  c20400               ret 4
// copied from an identical function in another client (function ??0CComVariant@ATL@@QAE@PBUtagSAFEARRAY@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp