// roc 2007-08 006e5500  unit: CXTPDockingPanePaintManager  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5500
//
// 006e5500  56                   push esi
// 006e5501  57                   push edi
// 006e5502  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e5506  8bf1                 mov esi, ecx
// 006e5508  8bcf                 mov ecx, edi
// 006e550a  e881b5ffff           call 0x6e0a90
// 006e550f  85c0                 test eax, eax
// 006e5511  743c                 je 0x6e554f
// 006e5513  8b07                 mov eax, dword ptr [edi]
// 006e5515  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 006e551b  8bcf                 mov ecx, edi
// 006e551d  ffd2                 call edx
// 006e551f  85c0                 test eax, eax
// 006e5521  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e5525  7416                 je 0x6e553d
// 006e5527  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 006e552d  038eac010000         add ecx, dword ptr [esi + 0x1ac]
// 006e5533  5f                   pop edi
// 006e5534  034e78               add ecx, dword ptr [esi + 0x78]
// 006e5537  5e                   pop esi
// 006e5538  0108                 add dword ptr [eax], ecx
// 006e553a  c20800               ret 8
// 006e553d  8b96b4010000         mov edx, dword ptr [esi + 0x1b4]
// 006e5543  0396ac010000         add edx, dword ptr [esi + 0x1ac]
// 006e5549  035678               add edx, dword ptr [esi + 0x78]
// 006e554c  015004               add dword ptr [eax + 4], edx
// 006e554f  5f                   pop edi
// 006e5550  5e                   pop esi
// 006e5551  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?AdjustCaptionRect@CXTPDockingPanePaintManager@@UAEXPBVCXTPDockingPaneTabbedContainer@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
