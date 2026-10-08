// roc 2011-06 008ddc40  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ddc40
//
// 008ddc40  51                   push ecx
// 008ddc41  53                   push ebx
// 008ddc42  55                   push ebp
// 008ddc43  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ddc47  56                   push esi
// 008ddc48  8bf1                 mov esi, ecx
// 008ddc4a  8b4610               mov eax, dword ptr [esi + 0x10]
// 008ddc4d  034608               add eax, dword ptr [esi + 8]
// 008ddc50  8b16                 mov edx, dword ptr [esi]
// 008ddc52  8944240c             mov dword ptr [esp + 0xc], eax
// 008ddc56  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 008ddc5c  8b5804               mov ebx, dword ptr [eax + 4]
// 008ddc5f  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008ddc62  57                   push edi
// 008ddc63  55                   push ebp
// 008ddc64  ffd0                 call eax
// 008ddc66  8bf8                 mov edi, eax
// 008ddc68  0faffb               imul edi, ebx
// 008ddc6b  4b                   dec ebx
// 008ddc6c  0faf5e14             imul ebx, dword ptr [esi + 0x14]
// 008ddc70  8bcd                 mov ecx, ebp
// 008ddc72  03fb                 add edi, ebx
// 008ddc74  e8d757ffff           call 0x8d3450
// 008ddc79  83f805               cmp eax, 5
// 008ddc7c  7529                 jne 0x8ddca7
// 008ddc7e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 008ddc81  33c0                 xor eax, eax
// 008ddc83  85d2                 test edx, edx
// 008ddc85  7e20                 jle 0x8ddca7
// 008ddc87  85c0                 test eax, eax
// 008ddc89  7c0c                 jl 0x8ddc97
// 008ddc8b  3bc2                 cmp eax, edx
// 008ddc8d  7d08                 jge 0x8ddc97
// 008ddc8f  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 008ddc92  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008ddc95  eb02                 jmp 0x8ddc99
// 008ddc97  33c9                 xor ecx, ecx
// 008ddc99  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008ddc9c  3bcf                 cmp ecx, edi
// 008ddc9e  7e02                 jle 0x8ddca2
// 008ddca0  8bf9                 mov edi, ecx
// 008ddca2  40                   inc eax
// 008ddca3  3bc2                 cmp eax, edx
// 008ddca5  7ce0                 jl 0x8ddc87
// 008ddca7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ddcab  8d0417               lea eax, [edi + edx]
// 008ddcae  5f                   pop edi
// 008ddcaf  5e                   pop esi
// 008ddcb0  5d                   pop ebp
// 008ddcb1  5b                   pop ebx
// 008ddcb2  59                   pop ecx
// 008ddcb3  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderHeight@CAppearanceSet@CXTPTabPaintManager@@QAEHPAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
