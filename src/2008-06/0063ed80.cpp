// roc 2008-06 0063ed80  unit: RBX::ResizeTool  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ed80
//
// 0063ed80  83ec08               sub esp, 8
// 0063ed83  57                   push edi
// 0063ed84  8bf9                 mov edi, ecx
// 0063ed86  8b4724               mov eax, dword ptr [edi + 0x24]
// 0063ed89  85c0                 test eax, eax
// 0063ed8b  0f8482000000         je 0x63ee13
// 0063ed91  83780400             cmp dword ptr [eax + 4], 0
// 0063ed95  747c                 je 0x63ee13
// 0063ed97  53                   push ebx
// 0063ed98  56                   push esi
// 0063ed99  8d44240c             lea eax, [esp + 0xc]
// 0063ed9d  50                   push eax
// 0063ed9e  8d4f20               lea ecx, [edi + 0x20]
// 0063eda1  e85abdf8ff           call 0x5cab00
// 0063eda6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063edaa  8b18                 mov ebx, dword ptr [eax]
// 0063edac  85f6                 test esi, esi
// 0063edae  742a                 je 0x63edda
// 0063edb0  8d4e04               lea ecx, [esi + 4]
// 0063edb3  83caff               or edx, 0xffffffff
// 0063edb6  f00fc111             lock xadd dword ptr [ecx], edx
// 0063edba  751e                 jne 0x63edda
// 0063edbc  8b06                 mov eax, dword ptr [esi]
// 0063edbe  8b5004               mov edx, dword ptr [eax + 4]
// 0063edc1  8bce                 mov ecx, esi
// 0063edc3  ffd2                 call edx
// 0063edc5  8d4608               lea eax, [esi + 8]
// 0063edc8  83c9ff               or ecx, 0xffffffff
// 0063edcb  f00fc108             lock xadd dword ptr [eax], ecx
// 0063edcf  7509                 jne 0x63edda
// 0063edd1  8b16                 mov edx, dword ptr [esi]
// 0063edd3  8b4208               mov eax, dword ptr [edx + 8]
// 0063edd6  8bce                 mov ecx, esi
// 0063edd8  ffd0                 call eax
// 0063edda  8bcb                 mov ecx, ebx
// 0063eddc  e88f9ef5ff           call 0x598c70
// 0063ede1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063ede5  8b572c               mov edx, dword ptr [edi + 0x2c]
// 0063ede8  51                   push ecx
// 0063ede9  52                   push edx
// 0063edea  8bcb                 mov ecx, ebx
// 0063edec  e85ff3f5ff           call 0x59e150
// 0063edf1  84c0                 test al, al
// 0063edf3  7415                 je 0x63ee0a
// 0063edf5  8b4718               mov eax, dword ptr [edi + 0x18]
// 0063edf8  6a04                 push 4
// 0063edfa  50                   push eax
// 0063edfb  e8b019f4ff           call 0x5807b0
// 0063ee00  83c404               add esp, 4
// 0063ee03  8bc8                 mov ecx, eax
// 0063ee05  e816eaf7ff           call 0x5bd820
// 0063ee0a  8bcb                 mov ecx, ebx
// 0063ee0c  e87f9ef5ff           call 0x598c90
// 0063ee11  5e                   pop esi
// 0063ee12  5b                   pop ebx
// 0063ee13  5f                   pop edi
// 0063ee14  83c408               add esp, 8
// 0063ee17  c20400               ret 4
// library rbxgs/roc_unit_4329760619cd676f.cpp (function ?capturedDrag@ResizeTool@RBX@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4329760619cd676f.cpp
