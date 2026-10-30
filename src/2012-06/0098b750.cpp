// roc 2012-06 0098b750  unit: CXTPPaintManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098b750
//
// 0098b750  83ec10               sub esp, 0x10
// 0098b753  837c242400           cmp dword ptr [esp + 0x24], 0
// 0098b758  53                   push ebx
// 0098b759  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0098b75d  55                   push ebp
// 0098b75e  56                   push esi
// 0098b75f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0098b763  57                   push edi
// 0098b764  8be9                 mov ebp, ecx
// 0098b766  0f849a000000         je 0x98b806
// 0098b76c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0098b771  7561                 jne 0x98b7d4
// 0098b773  837c243800           cmp dword ptr [esp + 0x38], 0
// 0098b778  755a                 jne 0x98b7d4
// 0098b77a  83bd2401000000       cmp dword ptr [ebp + 0x124], 0
// 0098b781  7451                 je 0x98b7d4
// 0098b783  8b4608               mov eax, dword ptr [esi + 8]
// 0098b786  50                   push eax
// 0098b787  ff15ac20b200         call dword ptr [0xb220ac]
// 0098b78d  8b16                 mov edx, dword ptr [esi]
// 0098b78f  6a14                 push 0x14
// 0098b791  8bcd                 mov ecx, ebp
// 0098b793  8bf8                 mov edi, eax
// 0098b795  e8f6c0ffff           call 0x987890
// 0098b79a  50                   push eax
// 0098b79b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0098b79e  8bce                 mov ecx, esi
// 0098b7a0  ffd0                 call eax
// 0098b7a2  b801000000           mov eax, 1
// 0098b7a7  8bc8                 mov ecx, eax
// 0098b7a9  51                   push ecx
// 0098b7aa  50                   push eax
// 0098b7ab  8d4c2418             lea ecx, [esp + 0x18]
// 0098b7af  51                   push ecx
// 0098b7b0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0098b7b4  e867cbffff           call 0x988320
// 0098b7b9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098b7bd  83ca24               or edx, 0x24
// 0098b7c0  52                   push edx
// 0098b7c1  50                   push eax
// 0098b7c2  53                   push ebx
// 0098b7c3  8bce                 mov ecx, esi
// 0098b7c5  e806ccffff           call 0x9883d0
// 0098b7ca  8b06                 mov eax, dword ptr [esi]
// 0098b7cc  8b5038               mov edx, dword ptr [eax + 0x38]
// 0098b7cf  57                   push edi
// 0098b7d0  8bce                 mov ecx, esi
// 0098b7d2  ffd2                 call edx
// 0098b7d4  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098b7d8  8b3e                 mov edi, dword ptr [esi]
// 0098b7da  83c824               or eax, 0x24
// 0098b7dd  50                   push eax
// 0098b7de  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098b7e2  50                   push eax
// 0098b7e3  8bcb                 mov ecx, ebx
// 0098b7e5  ff155846b200         call dword ptr [0xb24658]
// 0098b7eb  50                   push eax
// 0098b7ec  8bcb                 mov ecx, ebx
// 0098b7ee  ff159847b200         call dword ptr [0xb24798]
// 0098b7f4  8b5770               mov edx, dword ptr [edi + 0x70]
// 0098b7f7  50                   push eax
// 0098b7f8  8bce                 mov ecx, esi
// 0098b7fa  ffd2                 call edx
// 0098b7fc  5f                   pop edi
// 0098b7fd  5e                   pop esi
// 0098b7fe  5d                   pop ebp
// 0098b7ff  5b                   pop ebx
// 0098b800  83c410               add esp, 0x10
// 0098b803  c21c00               ret 0x1c
// 0098b806  b800040000           mov eax, 0x400
// 0098b80b  ebcb                 jmp 0x98b7d8
// copied from an identical function in another client (function ?DrawPopupBarText@CXTPPaintManager@@MAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAVCRect@@IHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp