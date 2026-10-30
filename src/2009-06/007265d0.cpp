// roc 2009-06 007265d0  unit: CXTPPaintManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007265d0
//
// 007265d0  83ec10               sub esp, 0x10
// 007265d3  837c242400           cmp dword ptr [esp + 0x24], 0
// 007265d8  53                   push ebx
// 007265d9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007265dd  55                   push ebp
// 007265de  56                   push esi
// 007265df  8b742420             mov esi, dword ptr [esp + 0x20]
// 007265e3  57                   push edi
// 007265e4  8be9                 mov ebp, ecx
// 007265e6  0f849a000000         je 0x726686
// 007265ec  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 007265f1  7561                 jne 0x726654
// 007265f3  837c243800           cmp dword ptr [esp + 0x38], 0
// 007265f8  755a                 jne 0x726654
// 007265fa  83bd2401000000       cmp dword ptr [ebp + 0x124], 0
// 00726601  7451                 je 0x726654
// 00726603  8b4608               mov eax, dword ptr [esi + 8]
// 00726606  50                   push eax
// 00726607  ff15e8e08900         call dword ptr [0x89e0e8]
// 0072660d  8b16                 mov edx, dword ptr [esi]
// 0072660f  6a14                 push 0x14
// 00726611  8bcd                 mov ecx, ebp
// 00726613  8bf8                 mov edi, eax
// 00726615  e866c1ffff           call 0x722780
// 0072661a  50                   push eax
// 0072661b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0072661e  8bce                 mov ecx, esi
// 00726620  ffd0                 call eax
// 00726622  b801000000           mov eax, 1
// 00726627  8bc8                 mov ecx, eax
// 00726629  51                   push ecx
// 0072662a  50                   push eax
// 0072662b  8d4c2418             lea ecx, [esp + 0x18]
// 0072662f  51                   push ecx
// 00726630  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00726634  e8e7cbffff           call 0x723220
// 00726639  8b542430             mov edx, dword ptr [esp + 0x30]
// 0072663d  83ca24               or edx, 0x24
// 00726640  52                   push edx
// 00726641  50                   push eax
// 00726642  53                   push ebx
// 00726643  8bce                 mov ecx, esi
// 00726645  e84653ffff           call 0x71b990
// 0072664a  8b06                 mov eax, dword ptr [esi]
// 0072664c  8b5038               mov edx, dword ptr [eax + 0x38]
// 0072664f  57                   push edi
// 00726650  8bce                 mov ecx, esi
// 00726652  ffd2                 call edx
// 00726654  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726658  8b3e                 mov edi, dword ptr [esi]
// 0072665a  83c824               or eax, 0x24
// 0072665d  50                   push eax
// 0072665e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726662  50                   push eax
// 00726663  8bcb                 mov ecx, ebx
// 00726665  ff1554fb8900         call dword ptr [0x89fb54]
// 0072666b  50                   push eax
// 0072666c  8bcb                 mov ecx, ebx
// 0072666e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00726674  8b5770               mov edx, dword ptr [edi + 0x70]
// 00726677  50                   push eax
// 00726678  8bce                 mov ecx, esi
// 0072667a  ffd2                 call edx
// 0072667c  5f                   pop edi
// 0072667d  5e                   pop esi
// 0072667e  5d                   pop ebp
// 0072667f  5b                   pop ebx
// 00726680  83c410               add esp, 0x10
// 00726683  c21c00               ret 0x1c
// 00726686  b800040000           mov eax, 0x400
// 0072668b  ebcb                 jmp 0x726658
// copied from an identical function in another client (function ?DrawPopupBarText@CXTPPaintManager@@MAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAVCRect@@IHHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp