// roc 2008-06 00785970  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00785970
//
// 00785970  8b442408             mov eax, dword ptr [esp + 8]
// 00785974  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00785978  53                   push ebx
// 00785979  56                   push esi
// 0078597a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078597e  8906                 mov dword ptr [esi], eax
// 00785980  8b442418             mov eax, dword ptr [esp + 0x18]
// 00785984  57                   push edi
// 00785985  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00785989  895604               mov dword ptr [esi + 4], edx
// 0078598c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00785990  894608               mov dword ptr [esi + 8], eax
// 00785993  57                   push edi
// 00785994  89560c               mov dword ptr [esi + 0xc], edx
// 00785997  e854ffffff           call 0x7858f0
// 0078599c  8bd8                 mov ebx, eax
// 0078599e  8b07                 mov eax, dword ptr [edi]
// 007859a0  8b5048               mov edx, dword ptr [eax + 0x48]
// 007859a3  8bcf                 mov ecx, edi
// 007859a5  ffd2                 call edx
// 007859a7  83f803               cmp eax, 3
// 007859aa  7742                 ja 0x7859ee
// 007859ac  ff2485f8597800       jmp dword ptr [eax*4 + 0x7859f8]
// 007859b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007859b7  03c3                 add eax, ebx
// 007859b9  89460c               mov dword ptr [esi + 0xc], eax
// 007859bc  5f                   pop edi
// 007859bd  8bc6                 mov eax, esi
// 007859bf  5e                   pop esi
// 007859c0  5b                   pop ebx
// 007859c1  c21800               ret 0x18
// 007859c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007859c8  03cb                 add ecx, ebx
// 007859ca  5f                   pop edi
// 007859cb  894e08               mov dword ptr [esi + 8], ecx
// 007859ce  8bc6                 mov eax, esi
// 007859d0  5e                   pop esi
// 007859d1  5b                   pop ebx
// 007859d2  c21800               ret 0x18
// 007859d5  8b542420             mov edx, dword ptr [esp + 0x20]
// 007859d9  2bd3                 sub edx, ebx
// 007859db  5f                   pop edi
// 007859dc  895604               mov dword ptr [esi + 4], edx
// 007859df  8bc6                 mov eax, esi
// 007859e1  5e                   pop esi
// 007859e2  5b                   pop ebx
// 007859e3  c21800               ret 0x18
// 007859e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007859ea  2bc3                 sub eax, ebx
// 007859ec  8906                 mov dword ptr [esi], eax
// 007859ee  5f                   pop edi
// 007859ef  8bc6                 mov eax, esi
// 007859f1  5e                   pop esi
// 007859f2  5b                   pop ebx
// 007859f3  c21800               ret 0x18
// 007859f6  8bff                 mov edi, edi
// 007859f8  b359                 mov bl, 0x59
// 007859fa  7800                 js 0x7859fc
// 007859fc  c45978               les ebx, ptr [ecx + 0x78]
// 007859ff  00d5                 add ch, dl
// 00785a01  59                   pop ecx
// 00785a02  7800                 js 0x785a04
// 00785a04  e659                 out 0x59, al
// 00785a06  7800                 js 0x785a08
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
