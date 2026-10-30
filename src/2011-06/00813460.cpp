// roc 2011-06 00813460  unit: CXTPPaintManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00813460
//
// 00813460  83ec10               sub esp, 0x10
// 00813463  837c242400           cmp dword ptr [esp + 0x24], 0
// 00813468  53                   push ebx
// 00813469  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0081346d  55                   push ebp
// 0081346e  56                   push esi
// 0081346f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00813473  57                   push edi
// 00813474  8be9                 mov ebp, ecx
// 00813476  0f849a000000         je 0x813516
// 0081347c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00813481  7561                 jne 0x8134e4
// 00813483  837c243800           cmp dword ptr [esp + 0x38], 0
// 00813488  755a                 jne 0x8134e4
// 0081348a  83bd2401000000       cmp dword ptr [ebp + 0x124], 0
// 00813491  7451                 je 0x8134e4
// 00813493  8b4608               mov eax, dword ptr [esi + 8]
// 00813496  50                   push eax
// 00813497  ff151c01a400         call dword ptr [0xa4011c]
// 0081349d  8b16                 mov edx, dword ptr [esi]
// 0081349f  6a14                 push 0x14
// 008134a1  8bcd                 mov ecx, ebp
// 008134a3  8bf8                 mov edi, eax
// 008134a5  e806c1ffff           call 0x80f5b0
// 008134aa  50                   push eax
// 008134ab  8b4238               mov eax, dword ptr [edx + 0x38]
// 008134ae  8bce                 mov ecx, esi
// 008134b0  ffd0                 call eax
// 008134b2  b801000000           mov eax, 1
// 008134b7  8bc8                 mov ecx, eax
// 008134b9  51                   push ecx
// 008134ba  50                   push eax
// 008134bb  8d4c2418             lea ecx, [esp + 0x18]
// 008134bf  51                   push ecx
// 008134c0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008134c4  e877cbffff           call 0x810040
// 008134c9  8b542430             mov edx, dword ptr [esp + 0x30]
// 008134cd  83ca24               or edx, 0x24
// 008134d0  52                   push edx
// 008134d1  50                   push eax
// 008134d2  53                   push ebx
// 008134d3  8bce                 mov ecx, esi
// 008134d5  e816ccffff           call 0x8100f0
// 008134da  8b06                 mov eax, dword ptr [esi]
// 008134dc  8b5038               mov edx, dword ptr [eax + 0x38]
// 008134df  57                   push edi
// 008134e0  8bce                 mov ecx, esi
// 008134e2  ffd2                 call edx
// 008134e4  8b442430             mov eax, dword ptr [esp + 0x30]
// 008134e8  8b3e                 mov edi, dword ptr [esi]
// 008134ea  83c824               or eax, 0x24
// 008134ed  50                   push eax
// 008134ee  8b442430             mov eax, dword ptr [esp + 0x30]
// 008134f2  50                   push eax
// 008134f3  8bcb                 mov ecx, ebx
// 008134f5  ff15a826a400         call dword ptr [0xa426a8]
// 008134fb  50                   push eax
// 008134fc  8bcb                 mov ecx, ebx
// 008134fe  ff15c82da400         call dword ptr [0xa42dc8]
// 00813504  8b5770               mov edx, dword ptr [edi + 0x70]
// 00813507  50                   push eax
// 00813508  8bce                 mov ecx, esi
// 0081350a  ffd2                 call edx
// 0081350c  5f                   pop edi
// 0081350d  5e                   pop esi
// 0081350e  5d                   pop ebp
// 0081350f  5b                   pop ebx
// 00813510  83c410               add esp, 0x10
// 00813513  c21c00               ret 0x1c
// 00813516  b800040000           mov eax, 0x400
// 0081351b  ebcb                 jmp 0x8134e8
// copied from an identical function in another client (function ?DrawPopupBarText@CXTPPaintManager@@MAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAVCRect@@IHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp