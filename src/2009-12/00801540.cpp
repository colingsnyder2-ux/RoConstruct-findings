// roc 2009-12 00801540  unit: CXTPPaintManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801540
//
// 00801540  83ec10               sub esp, 0x10
// 00801543  837c242400           cmp dword ptr [esp + 0x24], 0
// 00801548  53                   push ebx
// 00801549  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0080154d  55                   push ebp
// 0080154e  56                   push esi
// 0080154f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00801553  57                   push edi
// 00801554  8be9                 mov ebp, ecx
// 00801556  0f849a000000         je 0x8015f6
// 0080155c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00801561  7561                 jne 0x8015c4
// 00801563  837c243800           cmp dword ptr [esp + 0x38], 0
// 00801568  755a                 jne 0x8015c4
// 0080156a  83bd2401000000       cmp dword ptr [ebp + 0x124], 0
// 00801571  7451                 je 0x8015c4
// 00801573  8b4608               mov eax, dword ptr [esi + 8]
// 00801576  50                   push eax
// 00801577  ff1524b19800         call dword ptr [0x98b124]
// 0080157d  8b16                 mov edx, dword ptr [esi]
// 0080157f  6a14                 push 0x14
// 00801581  8bcd                 mov ecx, ebp
// 00801583  8bf8                 mov edi, eax
// 00801585  e8b6c0ffff           call 0x7fd640
// 0080158a  50                   push eax
// 0080158b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0080158e  8bce                 mov ecx, esi
// 00801590  ffd0                 call eax
// 00801592  b801000000           mov eax, 1
// 00801597  8bc8                 mov ecx, eax
// 00801599  51                   push ecx
// 0080159a  50                   push eax
// 0080159b  8d4c2418             lea ecx, [esp + 0x18]
// 0080159f  51                   push ecx
// 008015a0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008015a4  e827cbffff           call 0x7fe0d0
// 008015a9  8b542430             mov edx, dword ptr [esp + 0x30]
// 008015ad  83ca24               or edx, 0x24
// 008015b0  52                   push edx
// 008015b1  50                   push eax
// 008015b2  53                   push ebx
// 008015b3  8bce                 mov ecx, esi
// 008015b5  e86685ffff           call 0x7f9b20
// 008015ba  8b06                 mov eax, dword ptr [esi]
// 008015bc  8b5038               mov edx, dword ptr [eax + 0x38]
// 008015bf  57                   push edi
// 008015c0  8bce                 mov ecx, esi
// 008015c2  ffd2                 call edx
// 008015c4  8b442430             mov eax, dword ptr [esp + 0x30]
// 008015c8  8b3e                 mov edi, dword ptr [esi]
// 008015ca  83c824               or eax, 0x24
// 008015cd  50                   push eax
// 008015ce  8b442430             mov eax, dword ptr [esp + 0x30]
// 008015d2  50                   push eax
// 008015d3  8bcb                 mov ecx, ebx
// 008015d5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008015db  50                   push eax
// 008015dc  8bcb                 mov ecx, ebx
// 008015de  ff1580de9800         call dword ptr [0x98de80]
// 008015e4  8b5770               mov edx, dword ptr [edi + 0x70]
// 008015e7  50                   push eax
// 008015e8  8bce                 mov ecx, esi
// 008015ea  ffd2                 call edx
// 008015ec  5f                   pop edi
// 008015ed  5e                   pop esi
// 008015ee  5d                   pop ebp
// 008015ef  5b                   pop ebx
// 008015f0  83c410               add esp, 0x10
// 008015f3  c21c00               ret 0x1c
// 008015f6  b800040000           mov eax, 0x400
// 008015fb  ebcb                 jmp 0x8015c8
// copied from an identical function in another client (function ?DrawPopupBarText@CXTPPaintManager@@MAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAVCRect@@IHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp