// roc 2008-06 00764da0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisioTheme  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00764da0
//
// 00764da0  53                   push ebx
// 00764da1  56                   push esi
// 00764da2  8b742410             mov esi, dword ptr [esp + 0x10]
// 00764da6  57                   push edi
// 00764da7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00764dab  56                   push esi
// 00764dac  57                   push edi
// 00764dad  8bd9                 mov ebx, ecx
// 00764daf  e86cd8ffff           call 0x762620
// 00764db4  8b07                 mov eax, dword ptr [edi]
// 00764db6  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00764dbc  8bcf                 mov ecx, edi
// 00764dbe  ffd2                 call edx
// 00764dc0  85c0                 test eax, eax
// 00764dc2  b8fdffffff           mov eax, 0xfffffffd
// 00764dc7  7406                 je 0x764dcf
// 00764dc9  83460403             add dword ptr [esi + 4], 3
// 00764dcd  eb03                 jmp 0x764dd2
// 00764dcf  830603               add dword ptr [esi], 3
// 00764dd2  014608               add dword ptr [esi + 8], eax
// 00764dd5  01460c               add dword ptr [esi + 0xc], eax
// 00764dd8  8bcf                 mov ecx, edi
// 00764dda  e8a18cffff           call 0x75da80
// 00764ddf  85c0                 test eax, eax
// 00764de1  7504                 jne 0x764de7
// 00764de3  83460403             add dword ptr [esi + 4], 3
// 00764de7  8b07                 mov eax, dword ptr [edi]
// 00764de9  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00764def  8bcf                 mov ecx, edi
// 00764df1  ffd2                 call edx
// 00764df3  85c0                 test eax, eax
// 00764df5  7517                 jne 0x764e0e
// 00764df7  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 00764dfd  83783802             cmp dword ptr [eax + 0x38], 2
// 00764e01  740b                 je 0x764e0e
// 00764e03  6aff                 push -1
// 00764e05  6aff                 push -1
// 00764e07  56                   push esi
// 00764e08  ff15282d8000         call dword ptr [0x802d28]
// 00764e0e  5f                   pop edi
// 00764e0f  5e                   pop esi
// 00764e10  5b                   pop ebx
// 00764e11  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPaneVisioTheme@XTPDockingPanePaintThemes@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp
