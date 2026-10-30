// roc 2009-12 00845130  unit: CXTPControls  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845130
//
// 00845130  56                   push esi
// 00845131  8b742408             mov esi, dword ptr [esp + 8]
// 00845135  8b06                 mov eax, dword ptr [esi]
// 00845137  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 0084513d  57                   push edi
// 0084513e  8bf9                 mov edi, ecx
// 00845140  8bce                 mov ecx, esi
// 00845142  c786f800000000000000 mov dword ptr [esi + 0xf8], 0
// 0084514c  ffd2                 call edx
// 0084514e  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 00845158  8b07                 mov eax, dword ptr [edi]
// 0084515a  8b5074               mov edx, dword ptr [eax + 0x74]
// 0084515d  8bcf                 mov ecx, edi
// 0084515f  ffd2                 call edx
// 00845161  5f                   pop edi
// 00845162  5e                   pop esi
// 00845163  c20400               ret 4
// copied from an identical function in another client (function ?OnControlRemoved@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp