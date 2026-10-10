// roc 2008-06 00722cc0  unit: CXTPRibbonBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722cc0
//
// 00722cc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722cc4  56                   push esi
// 00722cc5  8b742408             mov esi, dword ptr [esp + 8]
// 00722cc9  8b06                 mov eax, dword ptr [esi]
// 00722ccb  8b5064               mov edx, dword ptr [eax + 0x64]
// 00722cce  57                   push edi
// 00722ccf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00722cd3  51                   push ecx
// 00722cd4  57                   push edi
// 00722cd5  8bce                 mov ecx, esi
// 00722cd7  ffd2                 call edx
// 00722cd9  85c0                 test eax, eax
// 00722cdb  7503                 jne 0x722ce0
// 00722cdd  5f                   pop edi
// 00722cde  5e                   pop esi
// 00722cdf  c3                   ret 
// 00722ce0  8b0f                 mov ecx, dword ptr [edi]
// 00722ce2  8b01                 mov eax, dword ptr [ecx]
// 00722ce4  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00722cea  56                   push esi
// 00722ceb  ffd2                 call edx
// 00722ced  5f                   pop edi
// 00722cee  b801000000           mov eax, 1
// 00722cf3  5e                   pop esi
// 00722cf4  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ??$PX_Object@VCXTPControl@@@@YAHPAVCXTPPropExchange@@AAPAVCXTPControl@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
