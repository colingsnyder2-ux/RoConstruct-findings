// roc 2010-06 007b1050  unit: CXTPPaintManager  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b1050
//
// 007b1050  83ec10               sub esp, 0x10
// 007b1053  837c242400           cmp dword ptr [esp + 0x24], 0
// 007b1058  53                   push ebx
// 007b1059  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007b105d  55                   push ebp
// 007b105e  56                   push esi
// 007b105f  8b742420             mov esi, dword ptr [esp + 0x20]
// 007b1063  57                   push edi
// 007b1064  8be9                 mov ebp, ecx
// 007b1066  0f849a000000         je 0x7b1106
// 007b106c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 007b1071  7561                 jne 0x7b10d4
// 007b1073  837c243800           cmp dword ptr [esp + 0x38], 0
// 007b1078  755a                 jne 0x7b10d4
// 007b107a  83bd2401000000       cmp dword ptr [ebp + 0x124], 0
// 007b1081  7451                 je 0x7b10d4
// 007b1083  8b4608               mov eax, dword ptr [esi + 8]
// 007b1086  50                   push eax
// 007b1087  ff156ca19e00         call dword ptr [0x9ea16c]
// 007b108d  8b16                 mov edx, dword ptr [esi]
// 007b108f  6a14                 push 0x14
// 007b1091  8bcd                 mov ecx, ebp
// 007b1093  8bf8                 mov edi, eax
// 007b1095  e876c0ffff           call 0x7ad110
// 007b109a  50                   push eax
// 007b109b  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b109e  8bce                 mov ecx, esi
// 007b10a0  ffd0                 call eax
// 007b10a2  b801000000           mov eax, 1
// 007b10a7  8bc8                 mov ecx, eax
// 007b10a9  51                   push ecx
// 007b10aa  50                   push eax
// 007b10ab  8d4c2418             lea ecx, [esp + 0x18]
// 007b10af  51                   push ecx
// 007b10b0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007b10b4  e8e7caffff           call 0x7adba0
// 007b10b9  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b10bd  83ca24               or edx, 0x24
// 007b10c0  52                   push edx
// 007b10c1  50                   push eax
// 007b10c2  53                   push ebx
// 007b10c3  8bce                 mov ecx, esi
// 007b10c5  e816ccffff           call 0x7adce0
// 007b10ca  8b06                 mov eax, dword ptr [esi]
// 007b10cc  8b5038               mov edx, dword ptr [eax + 0x38]
// 007b10cf  57                   push edi
// 007b10d0  8bce                 mov ecx, esi
// 007b10d2  ffd2                 call edx
// 007b10d4  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b10d8  8b3e                 mov edi, dword ptr [esi]
// 007b10da  83c824               or eax, 0x24
// 007b10dd  50                   push eax
// 007b10de  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b10e2  50                   push eax
// 007b10e3  8bcb                 mov ecx, ebx
// 007b10e5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b10eb  50                   push eax
// 007b10ec  8bcb                 mov ecx, ebx
// 007b10ee  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b10f4  8b5770               mov edx, dword ptr [edi + 0x70]
// 007b10f7  50                   push eax
// 007b10f8  8bce                 mov ecx, esi
// 007b10fa  ffd2                 call edx
// 007b10fc  5f                   pop edi
// 007b10fd  5e                   pop esi
// 007b10fe  5d                   pop ebp
// 007b10ff  5b                   pop ebx
// 007b1100  83c410               add esp, 0x10
// 007b1103  c21c00               ret 0x1c
// 007b1106  b800040000           mov eax, 0x400
// 007b110b  ebcb                 jmp 0x7b10d8
// copied from an identical function in another client (function ?DrawPopupBarText@CXTPPaintManager@@MAEXPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@AAVCRect@@IHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp