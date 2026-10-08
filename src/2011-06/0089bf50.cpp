// roc 2011-06 0089bf50  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089bf50
//
// 0089bf50  33d2                 xor edx, edx
// 0089bf52  83ec10               sub esp, 0x10
// 0089bf55  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 0089bf5b  7515                 jne 0x89bf72
// 0089bf5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089bf61  8910                 mov dword ptr [eax], edx
// 0089bf63  895004               mov dword ptr [eax + 4], edx
// 0089bf66  89500c               mov dword ptr [eax + 0xc], edx
// 0089bf69  895008               mov dword ptr [eax + 8], edx
// 0089bf6c  83c410               add esp, 0x10
// 0089bf6f  c20400               ret 4
// 0089bf72  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0089bf78  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0089bf7e  56                   push esi
// 0089bf7f  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 0089bf85  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0089bf8b  57                   push edi
// 0089bf8c  8d7aee               lea edi, [edx - 0x12]
// 0089bf8f  89442408             mov dword ptr [esp + 8], eax
// 0089bf93  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089bf97  46                   inc esi
// 0089bf98  4a                   dec edx
// 0089bf99  8938                 mov dword ptr [eax], edi
// 0089bf9b  49                   dec ecx
// 0089bf9c  5f                   pop edi
// 0089bf9d  897004               mov dword ptr [eax + 4], esi
// 0089bfa0  89480c               mov dword ptr [eax + 0xc], ecx
// 0089bfa3  5e                   pop esi
// 0089bfa4  895008               mov dword ptr [eax + 8], edx
// 0089bfa7  83c410               add esp, 0x10
// 0089bfaa  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
