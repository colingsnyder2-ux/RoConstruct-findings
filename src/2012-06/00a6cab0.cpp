// roc 2012-06 00a6cab0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6cab0
//
// 00a6cab0  8b442408             mov eax, dword ptr [esp + 8]
// 00a6cab4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a6cab8  56                   push esi
// 00a6cab9  57                   push edi
// 00a6caba  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a6cabe  8d48ff               lea ecx, [eax - 1]
// 00a6cac1  0fafcf               imul ecx, edi
// 00a6cac4  8d348a               lea esi, [edx + ecx*4]
// 00a6cac7  85c0                 test eax, eax
// 00a6cac9  7e34                 jle 0xa6caff
// 00a6cacb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6cacf  53                   push ebx
// 00a6cad0  55                   push ebp
// 00a6cad1  8bd8                 mov ebx, eax
// 00a6cad3  8bc6                 mov eax, esi
// 00a6cad5  85ff                 test edi, edi
// 00a6cad7  7e16                 jle 0xa6caef
// 00a6cad9  8bd7                 mov edx, edi
// 00a6cadb  eb03                 jmp 0xa6cae0
// 00a6cadd  8d4900               lea ecx, [ecx]
// 00a6cae0  8b28                 mov ebp, dword ptr [eax]
// 00a6cae2  8929                 mov dword ptr [ecx], ebp
// 00a6cae4  83c104               add ecx, 4
// 00a6cae7  83c004               add eax, 4
// 00a6caea  83ea01               sub edx, 1
// 00a6caed  75f1                 jne 0xa6cae0
// 00a6caef  8d04bd00000000       lea eax, [edi*4]
// 00a6caf6  2bf0                 sub esi, eax
// 00a6caf8  83eb01               sub ebx, 1
// 00a6cafb  75d6                 jne 0xa6cad3
// 00a6cafd  5d                   pop ebp
// 00a6cafe  5b                   pop ebx
// 00a6caff  5f                   pop edi
// 00a6cb00  5e                   pop esi
// 00a6cb01  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsBottom@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
