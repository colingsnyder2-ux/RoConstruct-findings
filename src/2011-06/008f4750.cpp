// from server: 100% by auto
// roc 2011-06 008f4750  unit: CXTPTabPaintManager::CColorSetWinXP  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4750
//
// 008f4750  8b442408             mov eax, dword ptr [esp + 8]
// 008f4754  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f4758  56                   push esi
// 008f4759  57                   push edi
// 008f475a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f475e  8d48ff               lea ecx, [eax - 1]
// 008f4761  0fafcf               imul ecx, edi
// 008f4764  8d348a               lea esi, [edx + ecx*4]
// 008f4767  85c0                 test eax, eax
// 008f4769  7e34                 jle 0x8f479f
// 008f476b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f476f  53                   push ebx
// 008f4770  55                   push ebp
// 008f4771  8bd8                 mov ebx, eax
// 008f4773  8bc6                 mov eax, esi
// 008f4775  85ff                 test edi, edi
// 008f4777  7e16                 jle 0x8f478f
// 008f4779  8bd7                 mov edx, edi
// 008f477b  eb03                 jmp 0x8f4780
// 008f477d  8d4900               lea ecx, [ecx]
// 008f4780  8b28                 mov ebp, dword ptr [eax]
// 008f4782  8929                 mov dword ptr [ecx], ebp
// 008f4784  83c104               add ecx, 4
// 008f4787  83c004               add eax, 4
// 008f478a  83ea01               sub edx, 1
// 008f478d  75f1                 jne 0x8f4780
// 008f478f  8d04bd00000000       lea eax, [edi*4]
// 008f4796  2bf0                 sub esi, eax
// 008f4798  83eb01               sub ebx, 1
// 008f479b  75d6                 jne 0x8f4773
// 008f479d  5d                   pop ebp
// 008f479e  5b                   pop ebx
// 008f479f  5f                   pop edi
// 008f47a0  5e                   pop esi
// 008f47a1  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsBottom@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
