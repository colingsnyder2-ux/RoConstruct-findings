// roc 2011-06 00417960  unit: PasteVerb  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417960
//
// 00417960  56                   push esi
// 00417961  57                   push edi
// 00417962  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00417966  8bf1                 mov esi, ecx
// 00417968  85ff                 test edi, edi
// 0041796a  7459                 je 0x4179c5
// 0041796c  8d44240c             lea eax, [esp + 0xc]
// 00417970  50                   push eax
// 00417971  57                   push edi
// 00417972  ff15dc0aa400         call dword ptr [0xa40adc]
// 00417978  85c0                 test eax, eax
// 0041797a  7c27                 jl 0x4179a3
// 0041797c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00417981  7420                 je 0x4179a3
// 00417983  56                   push esi
// 00417984  57                   push edi
// 00417985  e866ffffff           call 0x4178f0
// 0041798a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041798e  83c408               add esp, 8
// 00417991  b900200000           mov ecx, 0x2000
// 00417996  66090e               or word ptr [esi], cx
// 00417999  5f                   pop edi
// 0041799a  895608               mov dword ptr [esi + 8], edx
// 0041799d  8bc6                 mov eax, esi
// 0041799f  5e                   pop esi
// 004179a0  c20400               ret 4
// 004179a3  b90a000000           mov ecx, 0xa
// 004179a8  66890e               mov word ptr [esi], cx
// 004179ab  894608               mov dword ptr [esi + 8], eax
// 004179ae  3d0e000780           cmp eax, 0x8007000e
// 004179b3  7506                 jne 0x4179bb
// 004179b5  50                   push eax
// 004179b6  e8e5bbfeff           call 0x4035a0
// 004179bb  6857000780           push 0x80070057
// 004179c0  e8dbbbfeff           call 0x4035a0
// 004179c5  33d2                 xor edx, edx
// 004179c7  5f                   pop edi
// 004179c8  668916               mov word ptr [esi], dx
// 004179cb  8bc6                 mov eax, esi
// 004179cd  5e                   pop esi
// 004179ce  c20400               ret 4
// copied from an identical function in another client (function ??0CComVariant@ATL@@QAE@PBUtagSAFEARRAY@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp