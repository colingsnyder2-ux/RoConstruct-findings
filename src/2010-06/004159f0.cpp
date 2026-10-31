// roc 2010-06 004159f0  unit: PasteVerb  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004159f0
//
// 004159f0  56                   push esi
// 004159f1  57                   push edi
// 004159f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004159f6  8bf1                 mov esi, ecx
// 004159f8  85ff                 test edi, edi
// 004159fa  7459                 je 0x415a55
// 004159fc  8d44240c             lea eax, [esp + 0xc]
// 00415a00  50                   push eax
// 00415a01  57                   push edi
// 00415a02  ff1560aa9e00         call dword ptr [0x9eaa60]
// 00415a08  85c0                 test eax, eax
// 00415a0a  7c27                 jl 0x415a33
// 00415a0c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00415a11  7420                 je 0x415a33
// 00415a13  56                   push esi
// 00415a14  57                   push edi
// 00415a15  e896ffffff           call 0x4159b0
// 00415a1a  8b542414             mov edx, dword ptr [esp + 0x14]
// 00415a1e  83c408               add esp, 8
// 00415a21  b900200000           mov ecx, 0x2000
// 00415a26  66090e               or word ptr [esi], cx
// 00415a29  5f                   pop edi
// 00415a2a  895608               mov dword ptr [esi + 8], edx
// 00415a2d  8bc6                 mov eax, esi
// 00415a2f  5e                   pop esi
// 00415a30  c20400               ret 4
// 00415a33  b90a000000           mov ecx, 0xa
// 00415a38  66890e               mov word ptr [esi], cx
// 00415a3b  894608               mov dword ptr [esi + 8], eax
// 00415a3e  3d0e000780           cmp eax, 0x8007000e
// 00415a43  7506                 jne 0x415a4b
// 00415a45  50                   push eax
// 00415a46  e885d1feff           call 0x402bd0
// 00415a4b  6857000780           push 0x80070057
// 00415a50  e87bd1feff           call 0x402bd0
// 00415a55  33d2                 xor edx, edx
// 00415a57  5f                   pop edi
// 00415a58  668916               mov word ptr [esi], dx
// 00415a5b  8bc6                 mov eax, esi
// 00415a5d  5e                   pop esi
// 00415a5e  c20400               ret 4
// copied from an identical function in another client (function ??0CComVariant@ATL@@QAE@PBUtagSAFEARRAY@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp