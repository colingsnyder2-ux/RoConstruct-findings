// roc 2009-12 008b0940  unit: CXTPDockingPane  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0940
//
// 008b0940  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 008b0943  33c0                 xor eax, eax
// 008b0945  85c9                 test ecx, ecx
// 008b0947  7429                 je 0x8b0972
// 008b0949  8b5108               mov edx, dword ptr [ecx + 8]
// 008b094c  56                   push esi
// 008b094d  57                   push edi
// 008b094e  85d2                 test edx, edx
// 008b0950  7e1c                 jle 0x8b096e
// 008b0952  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008b0956  85c0                 test eax, eax
// 008b0958  7c2a                 jl 0x8b0984
// 008b095a  3bc2                 cmp eax, edx
// 008b095c  7d26                 jge 0x8b0984
// 008b095e  8b7904               mov edi, dword ptr [ecx + 4]
// 008b0961  8b3c87               mov edi, dword ptr [edi + eax*4]
// 008b0964  397714               cmp dword ptr [edi + 0x14], esi
// 008b0967  740c                 je 0x8b0975
// 008b0969  40                   inc eax
// 008b096a  3bc2                 cmp eax, edx
// 008b096c  7ce8                 jl 0x8b0956
// 008b096e  5f                   pop edi
// 008b096f  33c0                 xor eax, eax
// 008b0971  5e                   pop esi
// 008b0972  c20400               ret 4
// 008b0975  3bc2                 cmp eax, edx
// 008b0977  7d0b                 jge 0x8b0984
// 008b0979  8b4904               mov ecx, dword ptr [ecx + 4]
// 008b097c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008b097f  5f                   pop edi
// 008b0980  5e                   pop esi
// 008b0981  c20400               ret 4
// 008b0984  e88331f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindCaptionButton@CXTPDockingPaneBase@@QBEPAVCXTPDockingPaneCaptionButton@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp