// roc 2008-06 006f1a10  unit: CXTPControls  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1a10
//
// 006f1a10  56                   push esi
// 006f1a11  8b742408             mov esi, dword ptr [esp + 8]
// 006f1a15  8b06                 mov eax, dword ptr [esi]
// 006f1a17  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 006f1a1d  57                   push edi
// 006f1a1e  8bf9                 mov edi, ecx
// 006f1a20  8bce                 mov ecx, esi
// 006f1a22  c786f800000000000000 mov dword ptr [esi + 0xf8], 0
// 006f1a2c  ffd2                 call edx
// 006f1a2e  c7860001000000000000 mov dword ptr [esi + 0x100], 0
// 006f1a38  8b07                 mov eax, dword ptr [edi]
// 006f1a3a  8b5074               mov edx, dword ptr [eax + 0x74]
// 006f1a3d  8bcf                 mov ecx, edi
// 006f1a3f  ffd2                 call edx
// 006f1a41  5f                   pop edi
// 006f1a42  5e                   pop esi
// 006f1a43  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?OnControlRemoved@CXTPControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
