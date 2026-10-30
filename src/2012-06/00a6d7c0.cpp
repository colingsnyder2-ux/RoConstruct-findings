// roc 2012-06 00a6d7c0  unit: CXTPTabPaintManager::CColorSetDefault  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d7c0
//
// 00a6d7c0  56                   push esi
// 00a6d7c1  57                   push edi
// 00a6d7c2  e89900f5ff           call 0x9bd860
// 00a6d7c7  6a10                 push 0x10
// 00a6d7c9  8bc8                 mov ecx, eax
// 00a6d7cb  e810f8f4ff           call 0x9bcfe0
// 00a6d7d0  8bf0                 mov esi, eax
// 00a6d7d2  e88900f5ff           call 0x9bd860
// 00a6d7d7  6a14                 push 0x14
// 00a6d7d9  8bc8                 mov ecx, eax
// 00a6d7db  e800f8f4ff           call 0x9bcfe0
// 00a6d7e0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6d7e4  83792000             cmp dword ptr [ecx + 0x20], 0
// 00a6d7e8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a6d7ec  7437                 je 0xa6d825
// 00a6d7ee  83792400             cmp dword ptr [ecx + 0x24], 0
// 00a6d7f2  741b                 je 0xa6d80f
// 00a6d7f4  50                   push eax
// 00a6d7f5  56                   push esi
// 00a6d7f6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a6d7fa  56                   push esi
// 00a6d7fb  8bcf                 mov ecx, edi
// 00a6d7fd  e8a456f1ff           call 0x982ea6
// 00a6d802  6a01                 push 1
// 00a6d804  6a01                 push 1
// 00a6d806  56                   push esi
// 00a6d807  ff15f43ab200         call dword ptr [0xb23af4]
// 00a6d80d  eb16                 jmp 0xa6d825
// 00a6d80f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00a6d812  394a10               cmp dword ptr [edx + 0x10], ecx
// 00a6d815  750e                 jne 0xa6d825
// 00a6d817  56                   push esi
// 00a6d818  50                   push eax
// 00a6d819  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a6d81d  50                   push eax
// 00a6d81e  8bcf                 mov ecx, edi
// 00a6d820  e88156f1ff           call 0x982ea6
// 00a6d825  e83600f5ff           call 0x9bd860
// 00a6d82a  6a12                 push 0x12
// 00a6d82c  8bc8                 mov ecx, eax
// 00a6d82e  e8adf7f4ff           call 0x9bcfe0
// 00a6d833  8b17                 mov edx, dword ptr [edi]
// 00a6d835  50                   push eax
// 00a6d836  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a6d839  8bcf                 mov ecx, edi
// 00a6d83b  ffd0                 call eax
// 00a6d83d  5f                   pop edi
// 00a6d83e  5e                   pop esi
// 00a6d83f  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetDefault@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
