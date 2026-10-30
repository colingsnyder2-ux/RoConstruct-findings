// roc 2007-03 0062ff80  unit: seg_00620000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062ff80
//
// 0062ff80  83ec10               sub esp, 0x10
// 0062ff83  53                   push ebx
// 0062ff84  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062ff88  55                   push ebp
// 0062ff89  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0062ff8d  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0062ff90  56                   push esi
// 0062ff91  8b742424             mov esi, dword ptr [esp + 0x24]
// 0062ff95  57                   push edi
// 0062ff96  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0062ff9a  8d442410             lea eax, [esp + 0x10]
// 0062ff9e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0062ffa2  50                   push eax
// 0062ffa3  83c302               add ebx, 2
// 0062ffa6  51                   push ecx
// 0062ffa7  89742418             mov dword ptr [esp + 0x18], esi
// 0062ffab  897c2420             mov dword ptr [esp + 0x20], edi
// 0062ffaf  895c2424             mov dword ptr [esp + 0x24], ebx
// 0062ffb3  ff1520ef7700         call dword ptr [0x77ef20]
// 0062ffb9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062ffbd  8d41fe               lea eax, [ecx - 2]
// 0062ffc0  8d542410             lea edx, [esp + 0x10]
// 0062ffc4  89442424             mov dword ptr [esp + 0x24], eax
// 0062ffc8  89442414             mov dword ptr [esp + 0x14], eax
// 0062ffcc  8b4504               mov eax, dword ptr [ebp + 4]
// 0062ffcf  52                   push edx
// 0062ffd0  50                   push eax
// 0062ffd1  89742418             mov dword ptr [esp + 0x18], esi
// 0062ffd5  897c2420             mov dword ptr [esp + 0x20], edi
// 0062ffd9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0062ffdd  ff1520ef7700         call dword ptr [0x77ef20]
// 0062ffe3  8b4504               mov eax, dword ptr [ebp + 4]
// 0062ffe6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062ffea  89742428             mov dword ptr [esp + 0x28], esi
// 0062ffee  8d542428             lea edx, [esp + 0x28]
// 0062fff2  83c602               add esi, 2
// 0062fff5  52                   push edx
// 0062fff6  89742434             mov dword ptr [esp + 0x34], esi
// 0062fffa  8b3520ef7700         mov esi, dword ptr [0x77ef20]
// 00630000  50                   push eax
// 00630001  895c2434             mov dword ptr [esp + 0x34], ebx
// 00630005  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00630009  ffd6                 call esi
// 0063000b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0063000f  8d4ffe               lea ecx, [edi - 2]
// 00630012  8d442428             lea eax, [esp + 0x28]
// 00630016  894c2428             mov dword ptr [esp + 0x28], ecx
// 0063001a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063001d  50                   push eax
// 0063001e  51                   push ecx
// 0063001f  895c2434             mov dword ptr [esp + 0x34], ebx
// 00630023  897c2438             mov dword ptr [esp + 0x38], edi
// 00630027  8954243c             mov dword ptr [esp + 0x3c], edx
// 0063002b  ffd6                 call esi
// 0063002d  5f                   pop edi
// 0063002e  5e                   pop esi
// 0063002f  5d                   pop ebp
// 00630030  5b                   pop ebx
// 00630031  83c410               add esp, 0x10
// 00630034  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?OnInvertTracker@CXTPControl@@AAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
