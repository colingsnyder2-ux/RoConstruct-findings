// roc 2010-06 0083ef80  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083ef80
//
// 0083ef80  33d2                 xor edx, edx
// 0083ef82  83ec10               sub esp, 0x10
// 0083ef85  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 0083ef8b  7515                 jne 0x83efa2
// 0083ef8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0083ef91  8910                 mov dword ptr [eax], edx
// 0083ef93  895004               mov dword ptr [eax + 4], edx
// 0083ef96  89500c               mov dword ptr [eax + 0xc], edx
// 0083ef99  895008               mov dword ptr [eax + 8], edx
// 0083ef9c  83c410               add esp, 0x10
// 0083ef9f  c20400               ret 4
// 0083efa2  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0083efa8  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0083efae  56                   push esi
// 0083efaf  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 0083efb5  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0083efbb  57                   push edi
// 0083efbc  8d7aee               lea edi, [edx - 0x12]
// 0083efbf  89442408             mov dword ptr [esp + 8], eax
// 0083efc3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083efc7  46                   inc esi
// 0083efc8  4a                   dec edx
// 0083efc9  8938                 mov dword ptr [eax], edi
// 0083efcb  49                   dec ecx
// 0083efcc  5f                   pop edi
// 0083efcd  897004               mov dword ptr [eax + 4], esi
// 0083efd0  89480c               mov dword ptr [eax + 0xc], ecx
// 0083efd3  5e                   pop esi
// 0083efd4  895008               mov dword ptr [eax + 8], edx
// 0083efd7  83c410               add esp, 0x10
// 0083efda  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
