// roc 2009-12 008d8bd0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8bd0
//
// 008d8bd0  8b442408             mov eax, dword ptr [esp + 8]
// 008d8bd4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d8bd8  53                   push ebx
// 008d8bd9  56                   push esi
// 008d8bda  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008d8bde  8906                 mov dword ptr [esi], eax
// 008d8be0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d8be4  57                   push edi
// 008d8be5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008d8be9  895604               mov dword ptr [esi + 4], edx
// 008d8bec  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8bf0  894608               mov dword ptr [esi + 8], eax
// 008d8bf3  57                   push edi
// 008d8bf4  89560c               mov dword ptr [esi + 0xc], edx
// 008d8bf7  e854ffffff           call 0x8d8b50
// 008d8bfc  8bd8                 mov ebx, eax
// 008d8bfe  8b07                 mov eax, dword ptr [edi]
// 008d8c00  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d8c03  8bcf                 mov ecx, edi
// 008d8c05  ffd2                 call edx
// 008d8c07  83f803               cmp eax, 3
// 008d8c0a  7742                 ja 0x8d8c4e
// 008d8c0c  ff2485588c8d00       jmp dword ptr [eax*4 + 0x8d8c58]
// 008d8c13  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d8c17  03c3                 add eax, ebx
// 008d8c19  89460c               mov dword ptr [esi + 0xc], eax
// 008d8c1c  5f                   pop edi
// 008d8c1d  8bc6                 mov eax, esi
// 008d8c1f  5e                   pop esi
// 008d8c20  5b                   pop ebx
// 008d8c21  c21800               ret 0x18
// 008d8c24  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d8c28  03cb                 add ecx, ebx
// 008d8c2a  5f                   pop edi
// 008d8c2b  894e08               mov dword ptr [esi + 8], ecx
// 008d8c2e  8bc6                 mov eax, esi
// 008d8c30  5e                   pop esi
// 008d8c31  5b                   pop ebx
// 008d8c32  c21800               ret 0x18
// 008d8c35  8b542420             mov edx, dword ptr [esp + 0x20]
// 008d8c39  2bd3                 sub edx, ebx
// 008d8c3b  5f                   pop edi
// 008d8c3c  895604               mov dword ptr [esi + 4], edx
// 008d8c3f  8bc6                 mov eax, esi
// 008d8c41  5e                   pop esi
// 008d8c42  5b                   pop ebx
// 008d8c43  c21800               ret 0x18
// 008d8c46  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d8c4a  2bc3                 sub eax, ebx
// 008d8c4c  8906                 mov dword ptr [esi], eax
// 008d8c4e  5f                   pop edi
// 008d8c4f  8bc6                 mov eax, esi
// 008d8c51  5e                   pop esi
// 008d8c52  5b                   pop ebx
// 008d8c53  c21800               ret 0x18
// 008d8c56  8bff                 mov edi, edi
// 008d8c58  138c8d00248c8d       adc ecx, dword ptr [ebp + ecx*4 - 0x7273dc00]
// 008d8c5f  00358c8d0046         add byte ptr [0x46008d8c], dh
// copied from an identical function in another client (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp