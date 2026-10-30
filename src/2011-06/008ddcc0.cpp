// roc 2011-06 008ddcc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ddcc0
//
// 008ddcc0  8b442408             mov eax, dword ptr [esp + 8]
// 008ddcc4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ddcc8  53                   push ebx
// 008ddcc9  56                   push esi
// 008ddcca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ddcce  8906                 mov dword ptr [esi], eax
// 008ddcd0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ddcd4  57                   push edi
// 008ddcd5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ddcd9  895604               mov dword ptr [esi + 4], edx
// 008ddcdc  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ddce0  894608               mov dword ptr [esi + 8], eax
// 008ddce3  57                   push edi
// 008ddce4  89560c               mov dword ptr [esi + 0xc], edx
// 008ddce7  e854ffffff           call 0x8ddc40
// 008ddcec  8bd8                 mov ebx, eax
// 008ddcee  8b07                 mov eax, dword ptr [edi]
// 008ddcf0  8b5048               mov edx, dword ptr [eax + 0x48]
// 008ddcf3  8bcf                 mov ecx, edi
// 008ddcf5  ffd2                 call edx
// 008ddcf7  83f803               cmp eax, 3
// 008ddcfa  7742                 ja 0x8ddd3e
// 008ddcfc  ff248548dd8d00       jmp dword ptr [eax*4 + 0x8ddd48]
// 008ddd03  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ddd07  03c3                 add eax, ebx
// 008ddd09  89460c               mov dword ptr [esi + 0xc], eax
// 008ddd0c  5f                   pop edi
// 008ddd0d  8bc6                 mov eax, esi
// 008ddd0f  5e                   pop esi
// 008ddd10  5b                   pop ebx
// 008ddd11  c21800               ret 0x18
// 008ddd14  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ddd18  03cb                 add ecx, ebx
// 008ddd1a  5f                   pop edi
// 008ddd1b  894e08               mov dword ptr [esi + 8], ecx
// 008ddd1e  8bc6                 mov eax, esi
// 008ddd20  5e                   pop esi
// 008ddd21  5b                   pop ebx
// 008ddd22  c21800               ret 0x18
// 008ddd25  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ddd29  2bd3                 sub edx, ebx
// 008ddd2b  5f                   pop edi
// 008ddd2c  895604               mov dword ptr [esi + 4], edx
// 008ddd2f  8bc6                 mov eax, esi
// 008ddd31  5e                   pop esi
// 008ddd32  5b                   pop ebx
// 008ddd33  c21800               ret 0x18
// 008ddd36  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ddd3a  2bc3                 sub eax, ebx
// 008ddd3c  8906                 mov dword ptr [esi], eax
// 008ddd3e  5f                   pop edi
// 008ddd3f  8bc6                 mov eax, esi
// 008ddd41  5e                   pop esi
// 008ddd42  5b                   pop ebx
// 008ddd43  c21800               ret 0x18
// 008ddd46  8bff                 mov edi, edi
// 008ddd48  03dd                 add ebx, ebp
// 008ddd4a  8d00                 lea eax, [eax]
// 008ddd4c  14dd                 adc al, 0xdd
// 008ddd4e  8d00                 lea eax, [eax]
// 008ddd50  25dd8d0036           and eax, 0x36008ddd
// copied from an identical function in another client (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp