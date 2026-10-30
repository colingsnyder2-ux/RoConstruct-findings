// roc 2011-06 008d90a0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d90a0
//
// 008d90a0  8b542408             mov edx, dword ptr [esp + 8]
// 008d90a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d90a8  83ec10               sub esp, 0x10
// 008d90ab  53                   push ebx
// 008d90ac  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008d90b0  55                   push ebp
// 008d90b1  8b29                 mov ebp, dword ptr [ecx]
// 008d90b3  56                   push esi
// 008d90b4  8b742420             mov esi, dword ptr [esp + 0x20]
// 008d90b8  8916                 mov dword ptr [esi], edx
// 008d90ba  57                   push edi
// 008d90bb  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008d90bf  895e04               mov dword ptr [esi + 4], ebx
// 008d90c2  894608               mov dword ptr [esi + 8], eax
// 008d90c5  8b442434             mov eax, dword ptr [esp + 0x34]
// 008d90c9  57                   push edi
// 008d90ca  83ec10               sub esp, 0x10
// 008d90cd  89460c               mov dword ptr [esi + 0xc], eax
// 008d90d0  8bc4                 mov eax, esp
// 008d90d2  8910                 mov dword ptr [eax], edx
// 008d90d4  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d90d8  895804               mov dword ptr [eax + 4], ebx
// 008d90db  895008               mov dword ptr [eax + 8], edx
// 008d90de  8b542448             mov edx, dword ptr [esp + 0x48]
// 008d90e2  89500c               mov dword ptr [eax + 0xc], edx
// 008d90e5  8b5508               mov edx, dword ptr [ebp + 8]
// 008d90e8  8d442424             lea eax, [esp + 0x24]
// 008d90ec  50                   push eax
// 008d90ed  ffd2                 call edx
// 008d90ef  8b07                 mov eax, dword ptr [edi]
// 008d90f1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d90f4  8bcf                 mov ecx, edi
// 008d90f6  ffd2                 call edx
// 008d90f8  83f803               cmp eax, 3
// 008d90fb  774a                 ja 0x8d9147
// 008d90fd  ff248554918d00       jmp dword ptr [eax*4 + 0x8d9154]
// 008d9104  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d9108  48                   dec eax
// 008d9109  894604               mov dword ptr [esi + 4], eax
// 008d910c  8bc6                 mov eax, esi
// 008d910e  5f                   pop edi
// 008d910f  5e                   pop esi
// 008d9110  5d                   pop ebp
// 008d9111  5b                   pop ebx
// 008d9112  83c410               add esp, 0x10
// 008d9115  c21800               ret 0x18
// 008d9118  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d911c  49                   dec ecx
// 008d911d  890e                 mov dword ptr [esi], ecx
// 008d911f  8bc6                 mov eax, esi
// 008d9121  5f                   pop edi
// 008d9122  5e                   pop esi
// 008d9123  5d                   pop ebp
// 008d9124  5b                   pop ebx
// 008d9125  83c410               add esp, 0x10
// 008d9128  c21800               ret 0x18
// 008d912b  8b542414             mov edx, dword ptr [esp + 0x14]
// 008d912f  42                   inc edx
// 008d9130  89560c               mov dword ptr [esi + 0xc], edx
// 008d9133  8bc6                 mov eax, esi
// 008d9135  5f                   pop edi
// 008d9136  5e                   pop esi
// 008d9137  5d                   pop ebp
// 008d9138  5b                   pop ebx
// 008d9139  83c410               add esp, 0x10
// 008d913c  c21800               ret 0x18
// 008d913f  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d9143  40                   inc eax
// 008d9144  894608               mov dword ptr [esi + 8], eax
// 008d9147  5f                   pop edi
// 008d9148  8bc6                 mov eax, esi
// 008d914a  5e                   pop esi
// 008d914b  5d                   pop ebp
// 008d914c  5b                   pop ebx
// 008d914d  83c410               add esp, 0x10
// 008d9150  c21800               ret 0x18
// 008d9153  90                   nop 
// 008d9154  0491                 add al, 0x91
// 008d9156  8d00                 lea eax, [eax]
// 008d9158  18918d002b91         sbb byte ptr [ecx - 0x6ed4ff73], dl
// 008d915e  8d00                 lea eax, [eax]
// 008d9160  3f                   aas 
// 008d9161  91                   xchg ecx, eax
// 008d9162  8d00                 lea eax, [eax]
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
