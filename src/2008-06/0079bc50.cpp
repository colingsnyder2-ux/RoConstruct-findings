// roc 2008-06 0079bc50  unit: CXTPTabPaintManager::CColorSetWinXP  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bc50
//
// 0079bc50  8b442408             mov eax, dword ptr [esp + 8]
// 0079bc54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0079bc58  56                   push esi
// 0079bc59  57                   push edi
// 0079bc5a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079bc5e  8d48ff               lea ecx, [eax - 1]
// 0079bc61  0fafcf               imul ecx, edi
// 0079bc64  8d348a               lea esi, [edx + ecx*4]
// 0079bc67  85c0                 test eax, eax
// 0079bc69  7e34                 jle 0x79bc9f
// 0079bc6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079bc6f  53                   push ebx
// 0079bc70  55                   push ebp
// 0079bc71  8bd8                 mov ebx, eax
// 0079bc73  8bc6                 mov eax, esi
// 0079bc75  85ff                 test edi, edi
// 0079bc77  7e16                 jle 0x79bc8f
// 0079bc79  8bd7                 mov edx, edi
// 0079bc7b  eb03                 jmp 0x79bc80
// 0079bc7d  8d4900               lea ecx, [ecx]
// 0079bc80  8b28                 mov ebp, dword ptr [eax]
// 0079bc82  8929                 mov dword ptr [ecx], ebp
// 0079bc84  83c104               add ecx, 4
// 0079bc87  83c004               add eax, 4
// 0079bc8a  83ea01               sub edx, 1
// 0079bc8d  75f1                 jne 0x79bc80
// 0079bc8f  8d04bd00000000       lea eax, [edi*4]
// 0079bc96  2bf0                 sub esi, eax
// 0079bc98  83eb01               sub ebx, 1
// 0079bc9b  75d6                 jne 0x79bc73
// 0079bc9d  5d                   pop ebp
// 0079bc9e  5b                   pop ebx
// 0079bc9f  5f                   pop edi
// 0079bca0  5e                   pop esi
// 0079bca1  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsBottom@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTabBaseTheme.cpp
