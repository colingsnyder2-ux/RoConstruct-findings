// roc 2009-06 007fdfb0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fdfb0
//
// 007fdfb0  51                   push ecx
// 007fdfb1  53                   push ebx
// 007fdfb2  55                   push ebp
// 007fdfb3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fdfb7  56                   push esi
// 007fdfb8  8bf1                 mov esi, ecx
// 007fdfba  8b4610               mov eax, dword ptr [esi + 0x10]
// 007fdfbd  034608               add eax, dword ptr [esi + 8]
// 007fdfc0  8b16                 mov edx, dword ptr [esi]
// 007fdfc2  8944240c             mov dword ptr [esp + 0xc], eax
// 007fdfc6  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 007fdfcc  8b5804               mov ebx, dword ptr [eax + 4]
// 007fdfcf  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007fdfd2  57                   push edi
// 007fdfd3  55                   push ebp
// 007fdfd4  ffd0                 call eax
// 007fdfd6  8bf8                 mov edi, eax
// 007fdfd8  0faffb               imul edi, ebx
// 007fdfdb  4b                   dec ebx
// 007fdfdc  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 007fdfe0  8bcd                 mov ecx, ebp
// 007fdfe2  03fb                 add edi, ebx
// 007fdfe4  e8c757ffff           call 0x7f37b0
// 007fdfe9  83f805               cmp eax, 5
// 007fdfec  7529                 jne 0x7fe017
// 007fdfee  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 007fdff1  33c0                 xor eax, eax
// 007fdff3  85d2                 test edx, edx
// 007fdff5  7e20                 jle 0x7fe017
// 007fdff7  85c0                 test eax, eax
// 007fdff9  7c0c                 jl 0x7fe007
// 007fdffb  3bc2                 cmp eax, edx
// 007fdffd  7d08                 jge 0x7fe007
// 007fdfff  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 007fe002  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 007fe005  eb02                 jmp 0x7fe009
// 007fe007  33c9                 xor ecx, ecx
// 007fe009  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007fe00c  3bcf                 cmp ecx, edi
// 007fe00e  7e02                 jle 0x7fe012
// 007fe010  8bf9                 mov edi, ecx
// 007fe012  40                   inc eax
// 007fe013  3bc2                 cmp eax, edx
// 007fe015  7ce0                 jl 0x7fdff7
// 007fe017  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fe01b  8d0417               lea eax, [edi + edx]
// 007fe01e  5f                   pop edi
// 007fe01f  5e                   pop esi
// 007fe020  5d                   pop ebp
// 007fe021  5b                   pop ebx
// 007fe022  59                   pop ecx
// 007fe023  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
