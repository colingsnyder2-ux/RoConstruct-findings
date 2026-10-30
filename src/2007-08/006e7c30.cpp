// roc 2007-08 006e7c30  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisioTheme  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e7c30
//
// 006e7c30  53                   push ebx
// 006e7c31  56                   push esi
// 006e7c32  8b742410             mov esi, dword ptr [esp + 0x10]
// 006e7c36  57                   push edi
// 006e7c37  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e7c3b  56                   push esi
// 006e7c3c  57                   push edi
// 006e7c3d  8bd9                 mov ebx, ecx
// 006e7c3f  e8bcd8ffff           call 0x6e5500
// 006e7c44  8b07                 mov eax, dword ptr [edi]
// 006e7c46  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 006e7c4c  8bcf                 mov ecx, edi
// 006e7c4e  ffd2                 call edx
// 006e7c50  85c0                 test eax, eax
// 006e7c52  b8fdffffff           mov eax, 0xfffffffd
// 006e7c57  7406                 je 0x6e7c5f
// 006e7c59  83460403             add dword ptr [esi + 4], 3
// 006e7c5d  eb03                 jmp 0x6e7c62
// 006e7c5f  830603               add dword ptr [esi], 3
// 006e7c62  014608               add dword ptr [esi + 8], eax
// 006e7c65  01460c               add dword ptr [esi + 0xc], eax
// 006e7c68  8bcf                 mov ecx, edi
// 006e7c6a  e8218effff           call 0x6e0a90
// 006e7c6f  85c0                 test eax, eax
// 006e7c71  7504                 jne 0x6e7c77
// 006e7c73  83460403             add dword ptr [esi + 4], 3
// 006e7c77  8b07                 mov eax, dword ptr [edi]
// 006e7c79  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006e7c7f  8bcf                 mov ecx, edi
// 006e7c81  ffd2                 call edx
// 006e7c83  85c0                 test eax, eax
// 006e7c85  7517                 jne 0x6e7c9e
// 006e7c87  8b839c000000         mov eax, dword ptr [ebx + 0x9c]
// 006e7c8d  83783802             cmp dword ptr [eax + 0x38], 2
// 006e7c91  740b                 je 0x6e7c9e
// 006e7c93  6aff                 push -1
// 006e7c95  6aff                 push -1
// 006e7c97  56                   push esi
// 006e7c98  ff1590ed7700         call dword ptr [0x77ed90]
// 006e7c9e  5f                   pop edi
// 006e7c9f  5e                   pop esi
// 006e7ca0  5b                   pop ebx
// 006e7ca1  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPaneVisioTheme@XTPDockingPanePaintThemes@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
