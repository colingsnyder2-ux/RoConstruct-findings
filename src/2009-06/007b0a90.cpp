// roc 2009-06 007b0a90  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0a90
//
// 007b0a90  33d2                 xor edx, edx
// 007b0a92  83ec10               sub esp, 0x10
// 007b0a95  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 007b0a9b  7515                 jne 0x7b0ab2
// 007b0a9d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b0aa1  8910                 mov dword ptr [eax], edx
// 007b0aa3  895004               mov dword ptr [eax + 4], edx
// 007b0aa6  89500c               mov dword ptr [eax + 0xc], edx
// 007b0aa9  895008               mov dword ptr [eax + 8], edx
// 007b0aac  83c410               add esp, 0x10
// 007b0aaf  c20400               ret 4
// 007b0ab2  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 007b0ab8  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 007b0abe  56                   push esi
// 007b0abf  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 007b0ac5  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 007b0acb  57                   push edi
// 007b0acc  8d7aee               lea edi, [edx - 0x12]
// 007b0acf  89442408             mov dword ptr [esp + 8], eax
// 007b0ad3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b0ad7  46                   inc esi
// 007b0ad8  4a                   dec edx
// 007b0ad9  8938                 mov dword ptr [eax], edi
// 007b0adb  49                   dec ecx
// 007b0adc  5f                   pop edi
// 007b0add  897004               mov dword ptr [eax + 4], esi
// 007b0ae0  89480c               mov dword ptr [eax + 0xc], ecx
// 007b0ae3  5e                   pop esi
// 007b0ae4  895008               mov dword ptr [eax + 8], edx
// 007b0ae7  83c410               add esp, 0x10
// 007b0aea  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
