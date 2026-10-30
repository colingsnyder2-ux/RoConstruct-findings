// roc 2007-03 006ce3a0  unit: seg_006c0000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce3a0
//
// 006ce3a0  56                   push esi
// 006ce3a1  57                   push edi
// 006ce3a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006ce3a6  8bf1                 mov esi, ecx
// 006ce3a8  8bcf                 mov ecx, edi
// 006ce3aa  e8c1b5ffff           call 0x6c9970
// 006ce3af  85c0                 test eax, eax
// 006ce3b1  743c                 je 0x6ce3ef
// 006ce3b3  8b07                 mov eax, dword ptr [edi]
// 006ce3b5  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 006ce3bb  8bcf                 mov ecx, edi
// 006ce3bd  ffd2                 call edx
// 006ce3bf  85c0                 test eax, eax
// 006ce3c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ce3c5  7416                 je 0x6ce3dd
// 006ce3c7  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 006ce3cd  038eac010000         add ecx, dword ptr [esi + 0x1ac]
// 006ce3d3  5f                   pop edi
// 006ce3d4  034e78               add ecx, dword ptr [esi + 0x78]
// 006ce3d7  5e                   pop esi
// 006ce3d8  0108                 add dword ptr [eax], ecx
// 006ce3da  c20800               ret 8
// 006ce3dd  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 006ce3e3  0396ac010000         add edx, dword ptr [esi + 0x1ac]
// 006ce3e9  035678               add edx, dword ptr [esi + 0x78]
// 006ce3ec  015004               add dword ptr [eax + 4], edx
// 006ce3ef  5f                   pop edi
// 006ce3f0  5e                   pop esi
// 006ce3f1  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPanePaintManager@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
