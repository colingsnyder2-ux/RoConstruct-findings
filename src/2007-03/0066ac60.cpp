// roc 2007-03 0066ac60  unit: seg_00660000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ac60
//
// 0066ac60  53                   push ebx
// 0066ac61  55                   push ebp
// 0066ac62  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066ac66  56                   push esi
// 0066ac67  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066ac6b  57                   push edi
// 0066ac6c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066ac70  8d5f01               lea ebx, [edi + 1]
// 0066ac73  53                   push ebx
// 0066ac74  8d4501               lea eax, [ebp + 1]
// 0066ac77  50                   push eax
// 0066ac78  57                   push edi
// 0066ac79  55                   push ebp
// 0066ac7a  8bce                 mov ecx, esi
// 0066ac7c  e81d040d00           call 0x73b09e
// 0066ac81  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066ac85  53                   push ebx
// 0066ac86  50                   push eax
// 0066ac87  8d48ff               lea ecx, [eax - 1]
// 0066ac8a  57                   push edi
// 0066ac8b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0066ac8f  51                   push ecx
// 0066ac90  8bce                 mov ecx, esi
// 0066ac92  e807040d00           call 0x73b09e
// 0066ac97  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0066ac9b  57                   push edi
// 0066ac9c  8d4501               lea eax, [ebp + 1]
// 0066ac9f  50                   push eax
// 0066aca0  8d5fff               lea ebx, [edi - 1]
// 0066aca3  53                   push ebx
// 0066aca4  55                   push ebp
// 0066aca5  8bce                 mov ecx, esi
// 0066aca7  e8f2030d00           call 0x73b09e
// 0066acac  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066acb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066acb4  57                   push edi
// 0066acb5  50                   push eax
// 0066acb6  53                   push ebx
// 0066acb7  51                   push ecx
// 0066acb8  8bce                 mov ecx, esi
// 0066acba  e8df030d00           call 0x73b09e
// 0066acbf  5f                   pop edi
// 0066acc0  5e                   pop esi
// 0066acc1  5d                   pop ebp
// 0066acc2  5b                   pop ebx
// 0066acc3  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2003Theme.cpp (function ?ExcludeCorners@CXTPOffice2003Theme@XTPPaintThemes@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2003Theme.cpp
