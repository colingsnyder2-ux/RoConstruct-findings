// roc 2009-12 008b5950  unit: CXTPDockingPanePaintManager  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5950
//
// 008b5950  56                   push esi
// 008b5951  57                   push edi
// 008b5952  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b5956  8bf1                 mov esi, ecx
// 008b5958  8bcf                 mov ecx, edi
// 008b595a  e8a1b4ffff           call 0x8b0e00
// 008b595f  85c0                 test eax, eax
// 008b5961  743c                 je 0x8b599f
// 008b5963  8b07                 mov eax, dword ptr [edi]
// 008b5965  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008b596b  8bcf                 mov ecx, edi
// 008b596d  ffd2                 call edx
// 008b596f  85c0                 test eax, eax
// 008b5971  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b5975  7416                 je 0x8b598d
// 008b5977  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 008b597d  038eac010000         add ecx, dword ptr [esi + 0x1ac]
// 008b5983  5f                   pop edi
// 008b5984  034e78               add ecx, dword ptr [esi + 0x78]
// 008b5987  5e                   pop esi
// 008b5988  0108                 add dword ptr [eax], ecx
// 008b598a  c20800               ret 8
// 008b598d  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 008b5993  0396ac010000         add edx, dword ptr [esi + 0x1ac]
// 008b5999  035678               add edx, dword ptr [esi + 0x78]
// 008b599c  015004               add dword ptr [eax + 4], edx
// 008b599f  5f                   pop edi
// 008b59a0  5e                   pop esi
// 008b59a1  c20800               ret 8
// copied from an identical function in another client (function ?AdjustCaptionRect@CXTPDockingPanePaintManager@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp