// roc 2010-06 0088cd00  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088cd00
//
// 0088cd00  51                   push ecx
// 0088cd01  53                   push ebx
// 0088cd02  55                   push ebp
// 0088cd03  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0088cd07  56                   push esi
// 0088cd08  8bf1                 mov esi, ecx
// 0088cd0a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0088cd0d  034608               add eax, dword ptr [esi + 8]
// 0088cd10  8b16                 mov edx, dword ptr [esi]
// 0088cd12  8944240c             mov dword ptr [esp + 0xc], eax
// 0088cd16  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0088cd1c  8b5804               mov ebx, dword ptr [eax + 4]
// 0088cd1f  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0088cd22  57                   push edi
// 0088cd23  55                   push ebp
// 0088cd24  ffd0                 call eax
// 0088cd26  8bf8                 mov edi, eax
// 0088cd28  0faffb               imul edi, ebx
// 0088cd2b  4b                   dec ebx
// 0088cd2c  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 0088cd30  8bcd                 mov ecx, ebp
// 0088cd32  03fb                 add edi, ebx
// 0088cd34  e80758ffff           call 0x882540
// 0088cd39  83f805               cmp eax, 5
// 0088cd3c  7529                 jne 0x88cd67
// 0088cd3e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 0088cd41  33c0                 xor eax, eax
// 0088cd43  85d2                 test edx, edx
// 0088cd45  7e20                 jle 0x88cd67
// 0088cd47  85c0                 test eax, eax
// 0088cd49  7c0c                 jl 0x88cd57
// 0088cd4b  3bc2                 cmp eax, edx
// 0088cd4d  7d08                 jge 0x88cd57
// 0088cd4f  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 0088cd52  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0088cd55  eb02                 jmp 0x88cd59
// 0088cd57  33c9                 xor ecx, ecx
// 0088cd59  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0088cd5c  3bcf                 cmp ecx, edi
// 0088cd5e  7e02                 jle 0x88cd62
// 0088cd60  8bf9                 mov edi, ecx
// 0088cd62  40                   inc eax
// 0088cd63  3bc2                 cmp eax, edx
// 0088cd65  7ce0                 jl 0x88cd47
// 0088cd67  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088cd6b  8d0417               lea eax, [edi + edx]
// 0088cd6e  5f                   pop edi
// 0088cd6f  5e                   pop esi
// 0088cd70  5d                   pop ebp
// 0088cd71  5b                   pop ebx
// 0088cd72  59                   pop ecx
// 0088cd73  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
