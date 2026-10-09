// roc 2007-03 006ce770  unit: seg_006c0000  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce770
//
// 006ce770  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ce775  53                   push ebx
// 006ce776  55                   push ebp
// 006ce777  56                   push esi
// 006ce778  57                   push edi
// 006ce779  7438                 je 0x6ce7b3
// 006ce77b  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006ce77f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ce783  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006ce787  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006ce78b  53                   push ebx
// 006ce78c  53                   push ebx
// 006ce78d  6a09                 push 9
// 006ce78f  6a09                 push 9
// 006ce791  83c6fb               add esi, -5
// 006ce794  56                   push esi
// 006ce795  83c7fb               add edi, -5
// 006ce798  57                   push edi
// 006ce799  8bcd                 mov ecx, ebp
// 006ce79b  e898cb0600           call 0x73b338
// 006ce7a0  53                   push ebx
// 006ce7a1  6a02                 push 2
// 006ce7a3  6a09                 push 9
// 006ce7a5  56                   push esi
// 006ce7a6  57                   push edi
// 006ce7a7  8bcd                 mov ecx, ebp
// 006ce7a9  e83ec30600           call 0x73aaec
// 006ce7ae  5f                   pop edi
// 006ce7af  5e                   pop esi
// 006ce7b0  5d                   pop ebp
// 006ce7b1  5b                   pop ebx
// 006ce7b2  c3                   ret 
// 006ce7b3  8b742424             mov esi, dword ptr [esp + 0x24]
// 006ce7b7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006ce7bb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006ce7bf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ce7c3  56                   push esi
// 006ce7c4  56                   push esi
// 006ce7c5  6a06                 push 6
// 006ce7c7  6a06                 push 6
// 006ce7c9  8d43fe               lea eax, [ebx - 2]
// 006ce7cc  8d4dfc               lea ecx, [ebp - 4]
// 006ce7cf  50                   push eax
// 006ce7d0  51                   push ecx
// 006ce7d1  8bcf                 mov ecx, edi
// 006ce7d3  e860cb0600           call 0x73b338
// 006ce7d8  56                   push esi
// 006ce7d9  6a02                 push 2
// 006ce7db  6a06                 push 6
// 006ce7dd  8d43fe               lea eax, [ebx - 2]
// 006ce7e0  50                   push eax
// 006ce7e1  8d45fc               lea eax, [ebp - 4]
// 006ce7e4  50                   push eax
// 006ce7e5  8bcf                 mov ecx, edi
// 006ce7e7  e800c30600           call 0x73aaec
// 006ce7ec  56                   push esi
// 006ce7ed  6a02                 push 2
// 006ce7ef  6a06                 push 6
// 006ce7f1  8d4bfb               lea ecx, [ebx - 5]
// 006ce7f4  51                   push ecx
// 006ce7f5  8d45fe               lea eax, [ebp - 2]
// 006ce7f8  50                   push eax
// 006ce7f9  8bcf                 mov ecx, edi
// 006ce7fb  e8ecc20600           call 0x73aaec
// 006ce800  8b5704               mov edx, dword ptr [edi + 4]
// 006ce803  56                   push esi
// 006ce804  8d43fd               lea eax, [ebx - 3]
// 006ce807  50                   push eax
// 006ce808  8d45fe               lea eax, [ebp - 2]
// 006ce80b  50                   push eax
// 006ce80c  52                   push edx
// 006ce80d  ff1504d17700         call dword ptr [0x77d104]
// 006ce813  56                   push esi
// 006ce814  6a04                 push 4
// 006ce816  6a01                 push 1
// 006ce818  8d43fd               lea eax, [ebx - 3]
// 006ce81b  50                   push eax
// 006ce81c  8d4503               lea eax, [ebp + 3]
// 006ce81f  50                   push eax
// 006ce820  8bcf                 mov ecx, edi
// 006ce822  e8c5c20600           call 0x73aaec
// 006ce827  8b4f04               mov ecx, dword ptr [edi + 4]
// 006ce82a  56                   push esi
// 006ce82b  53                   push ebx
// 006ce82c  83c502               add ebp, 2
// 006ce82f  55                   push ebp
// 006ce830  51                   push ecx
// 006ce831  ff1504d17700         call dword ptr [0x77d104]
// 006ce837  5f                   pop edi
// 006ce838  5e                   pop esi
// 006ce839  5d                   pop ebp
// 006ce83a  5b                   pop ebx
// 006ce83b  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawMaximizeRestoreButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@HK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
