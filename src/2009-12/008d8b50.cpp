// roc 2009-12 008d8b50  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d8b50
//
// 008d8b50  51                   push ecx
// 008d8b51  53                   push ebx
// 008d8b52  55                   push ebp
// 008d8b53  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d8b57  56                   push esi
// 008d8b58  8bf1                 mov esi, ecx
// 008d8b5a  8b4610               mov eax, dword ptr [esi + 0x10]
// 008d8b5d  034608               add eax, dword ptr [esi + 8]
// 008d8b60  8b16                 mov edx, dword ptr [esi]
// 008d8b62  8944240c             mov dword ptr [esp + 0xc], eax
// 008d8b66  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008d8b6c  8b5804               mov ebx, dword ptr [eax + 4]
// 008d8b6f  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d8b72  57                   push edi
// 008d8b73  55                   push ebp
// 008d8b74  ffd0                 call eax
// 008d8b76  8bf8                 mov edi, eax
// 008d8b78  0faffb               imul edi, ebx
// 008d8b7b  4b                   dec ebx
// 008d8b7c  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 008d8b80  8bcd                 mov ecx, ebp
// 008d8b82  03fb                 add edi, ebx
// 008d8b84  e8d757ffff           call 0x8ce360
// 008d8b89  83f805               cmp eax, 5
// 008d8b8c  7529                 jne 0x8d8bb7
// 008d8b8e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 008d8b91  33c0                 xor eax, eax
// 008d8b93  85d2                 test edx, edx
// 008d8b95  7e20                 jle 0x8d8bb7
// 008d8b97  85c0                 test eax, eax
// 008d8b99  7c0c                 jl 0x8d8ba7
// 008d8b9b  3bc2                 cmp eax, edx
// 008d8b9d  7d08                 jge 0x8d8ba7
// 008d8b9f  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008d8ba2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008d8ba5  eb02                 jmp 0x8d8ba9
// 008d8ba7  33c9                 xor ecx, ecx
// 008d8ba9  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008d8bac  3bcf                 cmp ecx, edi
// 008d8bae  7e02                 jle 0x8d8bb2
// 008d8bb0  8bf9                 mov edi, ecx
// 008d8bb2  40                   inc eax
// 008d8bb3  3bc2                 cmp eax, edx
// 008d8bb5  7ce0                 jl 0x8d8b97
// 008d8bb7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d8bbb  8d0417               lea eax, [edi + edx]
// 008d8bbe  5f                   pop edi
// 008d8bbf  5e                   pop esi
// 008d8bc0  5d                   pop ebp
// 008d8bc1  5b                   pop ebx
// 008d8bc2  59                   pop ecx
// 008d8bc3  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
