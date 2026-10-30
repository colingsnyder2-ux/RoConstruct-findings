// roc 2010-06 00888160  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00888160
//
// 00888160  8b542408             mov edx, dword ptr [esp + 8]
// 00888164  8b442410             mov eax, dword ptr [esp + 0x10]
// 00888168  83ec10               sub esp, 0x10
// 0088816b  53                   push ebx
// 0088816c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00888170  55                   push ebp
// 00888171  8b29                 mov ebp, dword ptr [ecx]
// 00888173  56                   push esi
// 00888174  8b742420             mov esi, dword ptr [esp + 0x20]
// 00888178  8916                 mov dword ptr [esi], edx
// 0088817a  57                   push edi
// 0088817b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0088817f  895e04               mov dword ptr [esi + 4], ebx
// 00888182  894608               mov dword ptr [esi + 8], eax
// 00888185  8b442434             mov eax, dword ptr [esp + 0x34]
// 00888189  57                   push edi
// 0088818a  83ec10               sub esp, 0x10
// 0088818d  89460c               mov dword ptr [esi + 0xc], eax
// 00888190  8bc4                 mov eax, esp
// 00888192  8910                 mov dword ptr [eax], edx
// 00888194  8b542444             mov edx, dword ptr [esp + 0x44]
// 00888198  895804               mov dword ptr [eax + 4], ebx
// 0088819b  895008               mov dword ptr [eax + 8], edx
// 0088819e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008881a2  89500c               mov dword ptr [eax + 0xc], edx
// 008881a5  8b5508               mov edx, dword ptr [ebp + 8]
// 008881a8  8d442424             lea eax, [esp + 0x24]
// 008881ac  50                   push eax
// 008881ad  ffd2                 call edx
// 008881af  8b07                 mov eax, dword ptr [edi]
// 008881b1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008881b4  8bcf                 mov ecx, edi
// 008881b6  ffd2                 call edx
// 008881b8  83f803               cmp eax, 3
// 008881bb  774a                 ja 0x888207
// 008881bd  ff248514828800       jmp dword ptr [eax*4 + 0x888214]
// 008881c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008881c8  48                   dec eax
// 008881c9  894604               mov dword ptr [esi + 4], eax
// 008881cc  8bc6                 mov eax, esi
// 008881ce  5f                   pop edi
// 008881cf  5e                   pop esi
// 008881d0  5d                   pop ebp
// 008881d1  5b                   pop ebx
// 008881d2  83c410               add esp, 0x10
// 008881d5  c21800               ret 0x18
// 008881d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008881dc  49                   dec ecx
// 008881dd  890e                 mov dword ptr [esi], ecx
// 008881df  8bc6                 mov eax, esi
// 008881e1  5f                   pop edi
// 008881e2  5e                   pop esi
// 008881e3  5d                   pop ebp
// 008881e4  5b                   pop ebx
// 008881e5  83c410               add esp, 0x10
// 008881e8  c21800               ret 0x18
// 008881eb  8b542414             mov edx, dword ptr [esp + 0x14]
// 008881ef  42                   inc edx
// 008881f0  89560c               mov dword ptr [esi + 0xc], edx
// 008881f3  8bc6                 mov eax, esi
// 008881f5  5f                   pop edi
// 008881f6  5e                   pop esi
// 008881f7  5d                   pop ebp
// 008881f8  5b                   pop ebx
// 008881f9  83c410               add esp, 0x10
// 008881fc  c21800               ret 0x18
// 008881ff  8b442410             mov eax, dword ptr [esp + 0x10]
// 00888203  40                   inc eax
// 00888204  894608               mov dword ptr [esi + 8], eax
// 00888207  5f                   pop edi
// 00888208  8bc6                 mov eax, esi
// 0088820a  5e                   pop esi
// 0088820b  5d                   pop ebp
// 0088820c  5b                   pop ebx
// 0088820d  83c410               add esp, 0x10
// 00888210  c21800               ret 0x18
// 00888213  90                   nop 
// 00888214  c4818800d881         les eax, ptr [ecx - 0x7e27ff78]
// 0088821a  8800                 mov byte ptr [eax], al
// 0088821c  eb81                 jmp 0x88819f
// 0088821e  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp