// roc 2009-12 0085d750  unit: CXTPDockingPane  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d750
//
// 0085d750  56                   push esi
// 0085d751  57                   push edi
// 0085d752  8bf1                 mov esi, ecx
// 0085d754  e8e7300500           call 0x8b0840
// 0085d759  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0085d75c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085d760  8b10                 mov edx, dword ptr [eax]
// 0085d762  57                   push edi
// 0085d763  51                   push ecx
// 0085d764  8bc8                 mov ecx, eax
// 0085d766  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0085d76c  ffd0                 call eax
// 0085d76e  85c0                 test eax, eax
// 0085d770  7405                 je 0x85d777
// 0085d772  8d78e0               lea edi, [eax - 0x20]
// 0085d775  eb02                 jmp 0x85d779
// 0085d777  33ff                 xor edi, edi
// 0085d779  8b17                 mov edx, dword ptr [edi]
// 0085d77b  8b526c               mov edx, dword ptr [edx + 0x6c]
// 0085d77e  8d46e0               lea eax, [esi - 0x20]
// 0085d781  50                   push eax
// 0085d782  8bcf                 mov ecx, edi
// 0085d784  ffd2                 call edx
// 0085d786  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085d78a  85c9                 test ecx, ecx
// 0085d78c  7416                 je 0x85d7a4
// 0085d78e  8d46e0               lea eax, [esi - 0x20]
// 0085d791  f7d8                 neg eax
// 0085d793  1bc0                 sbb eax, eax
// 0085d795  53                   push ebx
// 0085d796  23c6                 and eax, esi
// 0085d798  50                   push eax
// 0085d799  8d5f20               lea ebx, [edi + 0x20]
// 0085d79c  e8df690300           call 0x894180
// 0085d7a1  8918                 mov dword ptr [eax], ebx
// 0085d7a3  5b                   pop ebx
// 0085d7a4  8d4720               lea eax, [edi + 0x20]
// 0085d7a7  5f                   pop edi
// 0085d7a8  5e                   pop esi
// 0085d7a9  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPane@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp