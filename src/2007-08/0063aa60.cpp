// roc 2007-08 0063aa60  unit: CRobloxControlColorSelector  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063aa60
//
// 0063aa60  83ec10               sub esp, 0x10
// 0063aa63  53                   push ebx
// 0063aa64  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0063aa68  55                   push ebp
// 0063aa69  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0063aa6d  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063aa70  56                   push esi
// 0063aa71  8b742424             mov esi, dword ptr [esp + 0x24]
// 0063aa75  57                   push edi
// 0063aa76  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0063aa7a  8d442410             lea eax, [esp + 0x10]
// 0063aa7e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0063aa82  50                   push eax
// 0063aa83  83c302               add ebx, 2
// 0063aa86  51                   push ecx
// 0063aa87  89742418             mov dword ptr [esp + 0x18], esi
// 0063aa8b  897c2420             mov dword ptr [esp + 0x20], edi
// 0063aa8f  895c2424             mov dword ptr [esp + 0x24], ebx
// 0063aa93  ff1540ee7700         call dword ptr [0x77ee40]
// 0063aa99  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0063aa9d  8d41fe               lea eax, [ecx - 2]
// 0063aaa0  8d542410             lea edx, [esp + 0x10]
// 0063aaa4  89442424             mov dword ptr [esp + 0x24], eax
// 0063aaa8  89442414             mov dword ptr [esp + 0x14], eax
// 0063aaac  8b4504               mov eax, dword ptr [ebp + 4]
// 0063aaaf  52                   push edx
// 0063aab0  50                   push eax
// 0063aab1  89742418             mov dword ptr [esp + 0x18], esi
// 0063aab5  897c2420             mov dword ptr [esp + 0x20], edi
// 0063aab9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0063aabd  ff1540ee7700         call dword ptr [0x77ee40]
// 0063aac3  8b4504               mov eax, dword ptr [ebp + 4]
// 0063aac6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0063aaca  89742428             mov dword ptr [esp + 0x28], esi
// 0063aace  8d542428             lea edx, [esp + 0x28]
// 0063aad2  83c602               add esi, 2
// 0063aad5  52                   push edx
// 0063aad6  89742434             mov dword ptr [esp + 0x34], esi
// 0063aada  8b3540ee7700         mov esi, dword ptr [0x77ee40]
// 0063aae0  50                   push eax
// 0063aae1  895c2434             mov dword ptr [esp + 0x34], ebx
// 0063aae5  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0063aae9  ffd6                 call esi
// 0063aaeb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0063aaef  8d4ffe               lea ecx, [edi - 2]
// 0063aaf2  8d442428             lea eax, [esp + 0x28]
// 0063aaf6  894c2428             mov dword ptr [esp + 0x28], ecx
// 0063aafa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063aafd  50                   push eax
// 0063aafe  51                   push ecx
// 0063aaff  895c2434             mov dword ptr [esp + 0x34], ebx
// 0063ab03  897c2438             mov dword ptr [esp + 0x38], edi
// 0063ab07  8954243c             mov dword ptr [esp + 0x3c], edx
// 0063ab0b  ffd6                 call esi
// 0063ab0d  5f                   pop edi
// 0063ab0e  5e                   pop esi
// 0063ab0f  5d                   pop ebp
// 0063ab10  5b                   pop ebx
// 0063ab11  83c410               add esp, 0x10
// 0063ab14  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ?OnInvertTracker@CXTPControl@@AAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
