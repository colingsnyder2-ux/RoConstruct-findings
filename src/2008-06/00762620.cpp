// roc 2008-06 00762620  unit: CXTPDockingPanePaintManager  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762620
//
// 00762620  56                   push esi
// 00762621  57                   push edi
// 00762622  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00762626  8bf1                 mov esi, ecx
// 00762628  8bcf                 mov ecx, edi
// 0076262a  e851b4ffff           call 0x75da80
// 0076262f  85c0                 test eax, eax
// 00762631  743c                 je 0x76266f
// 00762633  8b07                 mov eax, dword ptr [edi]
// 00762635  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0076263b  8bcf                 mov ecx, edi
// 0076263d  ffd2                 call edx
// 0076263f  85c0                 test eax, eax
// 00762641  8b442410             mov eax, dword ptr [esp + 0x10]
// 00762645  7416                 je 0x76265d
// 00762647  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0076264d  038eac010000         add ecx, dword ptr [esi + 0x1ac]
// 00762653  5f                   pop edi
// 00762654  034e78               add ecx, dword ptr [esi + 0x78]
// 00762657  5e                   pop esi
// 00762658  0108                 add dword ptr [eax], ecx
// 0076265a  c20800               ret 8
// 0076265d  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 00762663  0396ac010000         add edx, dword ptr [esi + 0x1ac]
// 00762669  035678               add edx, dword ptr [esi + 0x78]
// 0076266c  015004               add dword ptr [eax + 4], edx
// 0076266f  5f                   pop edi
// 00762670  5e                   pop esi
// 00762671  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPanePaintManager@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp
