// roc 2007-08 0071af70  unit: CXTPTabPaintManager::CColorSetWinXP  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071af70
//
// 0071af70  8b442408             mov eax, dword ptr [esp + 8]
// 0071af74  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071af78  56                   push esi
// 0071af79  57                   push edi
// 0071af7a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071af7e  8d48ff               lea ecx, [eax - 1]
// 0071af81  0fafcf               imul ecx, edi
// 0071af84  85c0                 test eax, eax
// 0071af86  8d348a               lea esi, [edx + ecx*4]
// 0071af89  7e34                 jle 0x71afbf
// 0071af8b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071af8f  53                   push ebx
// 0071af90  55                   push ebp
// 0071af91  8bd8                 mov ebx, eax
// 0071af93  85ff                 test edi, edi
// 0071af95  8bc6                 mov eax, esi
// 0071af97  7e16                 jle 0x71afaf
// 0071af99  8bd7                 mov edx, edi
// 0071af9b  eb03                 jmp 0x71afa0
// 0071af9d  8d4900               lea ecx, [ecx]
// 0071afa0  8b28                 mov ebp, dword ptr [eax]
// 0071afa2  8929                 mov dword ptr [ecx], ebp
// 0071afa4  83c104               add ecx, 4
// 0071afa7  83c004               add eax, 4
// 0071afaa  83ea01               sub edx, 1
// 0071afad  75f1                 jne 0x71afa0
// 0071afaf  8d04bd00000000       lea eax, [edi*4]
// 0071afb6  2bf0                 sub esi, eax
// 0071afb8  83eb01               sub ebx, 1
// 0071afbb  75d6                 jne 0x71af93
// 0071afbd  5d                   pop ebp
// 0071afbe  5b                   pop ebx
// 0071afbf  5f                   pop edi
// 0071afc0  5e                   pop esi
// 0071afc1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsBottom@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
