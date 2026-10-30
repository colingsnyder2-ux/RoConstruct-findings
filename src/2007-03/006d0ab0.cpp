// roc 2007-03 006d0ab0  unit: seg_006d0000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d0ab0
//
// 006d0ab0  53                   push ebx
// 006d0ab1  56                   push esi
// 006d0ab2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006d0ab6  57                   push edi
// 006d0ab7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d0abb  56                   push esi
// 006d0abc  57                   push edi
// 006d0abd  8bd9                 mov ebx, ecx
// 006d0abf  e8dcd8ffff           call 0x6ce3a0
// 006d0ac4  8b07                 mov eax, dword ptr [edi]
// 006d0ac6  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 006d0acc  8bcf                 mov ecx, edi
// 006d0ace  ffd2                 call edx
// 006d0ad0  85c0                 test eax, eax
// 006d0ad2  b8fdffffff           mov eax, 0xfffffffd
// 006d0ad7  7406                 je 0x6d0adf
// 006d0ad9  83460403             add dword ptr [esi + 4], 3
// 006d0add  eb03                 jmp 0x6d0ae2
// 006d0adf  830603               add dword ptr [esi], 3
// 006d0ae2  014608               add dword ptr [esi + 8], eax
// 006d0ae5  01460c               add dword ptr [esi + 0xc], eax
// 006d0ae8  8bcf                 mov ecx, edi
// 006d0aea  e8818effff           call 0x6c9970
// 006d0aef  85c0                 test eax, eax
// 006d0af1  7504                 jne 0x6d0af7
// 006d0af3  83460403             add dword ptr [esi + 4], 3
// 006d0af7  8b07                 mov eax, dword ptr [edi]
// 006d0af9  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006d0aff  8bcf                 mov ecx, edi
// 006d0b01  ffd2                 call edx
// 006d0b03  85c0                 test eax, eax
// 006d0b05  7517                 jne 0x6d0b1e
// 006d0b07  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 006d0b0d  83783802             cmp dword ptr [eax + 0x38], 2
// 006d0b11  740b                 je 0x6d0b1e
// 006d0b13  6aff                 push -1
// 006d0b15  6aff                 push -1
// 006d0b17  56                   push esi
// 006d0b18  ff159ced7700         call dword ptr [0x77ed9c]
// 006d0b1e  5f                   pop edi
// 006d0b1f  5e                   pop esi
// 006d0b20  5b                   pop ebx
// 006d0b21  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPaneVisioTheme@XTPDockingPanePaintThemes@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
