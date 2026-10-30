// roc 2009-12 008b0680  unit: CXTPDockingPaneMiniWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0680
//
// 008b0680  53                   push ebx
// 008b0681  56                   push esi
// 008b0682  57                   push edi
// 008b0683  8bf1                 mov esi, ecx
// 008b0685  e8b6010000           call 0x8b0840
// 008b068a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008b068d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b0691  8b10                 mov edx, dword ptr [eax]
// 008b0693  57                   push edi
// 008b0694  51                   push ecx
// 008b0695  8bc8                 mov ecx, eax
// 008b0697  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b069d  ffd0                 call eax
// 008b069f  85c0                 test eax, eax
// 008b06a1  7408                 je 0x8b06ab
// 008b06a3  8db808ffffff         lea edi, [eax - 0xf8]
// 008b06a9  eb02                 jmp 0x8b06ad
// 008b06ab  33ff                 xor edi, edi
// 008b06ad  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b06b1  8b17                 mov edx, dword ptr [edi]
// 008b06b3  8b92a4010000         mov edx, dword ptr [edx + 0x1a4]
// 008b06b9  53                   push ebx
// 008b06ba  8d8608ffffff         lea eax, [esi - 0xf8]
// 008b06c0  50                   push eax
// 008b06c1  8bcf                 mov ecx, edi
// 008b06c3  ffd2                 call edx
// 008b06c5  85db                 test ebx, ebx
// 008b06c7  741e                 je 0x8b06e7
// 008b06c9  8d8608ffffff         lea eax, [esi - 0xf8]
// 008b06cf  f7d8                 neg eax
// 008b06d1  1bc0                 sbb eax, eax
// 008b06d3  55                   push ebp
// 008b06d4  23c6                 and eax, esi
// 008b06d6  50                   push eax
// 008b06d7  8bcb                 mov ecx, ebx
// 008b06d9  8daff8000000         lea ebp, [edi + 0xf8]
// 008b06df  e89c3afeff           call 0x894180
// 008b06e4  8928                 mov dword ptr [eax], ebp
// 008b06e6  5d                   pop ebp
// 008b06e7  8d87f8000000         lea eax, [edi + 0xf8]
// 008b06ed  5f                   pop edi
// 008b06ee  5e                   pop esi
// 008b06ef  5b                   pop ebx
// 008b06f0  c20c00               ret 0xc
// copied from an identical function in another client (function ?Clone@CXTPDockingPaneMiniWnd@@MAEPAVCXTPDockingPaneBase@@PAVCXTPDockingPaneLayout@@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp