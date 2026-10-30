// roc 2012-06 00a14580  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14580
//
// 00a14580  33d2                 xor edx, edx
// 00a14582  83ec10               sub esp, 0x10
// 00a14585  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 00a1458b  7515                 jne 0xa145a2
// 00a1458d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a14591  8910                 mov dword ptr [eax], edx
// 00a14593  895004               mov dword ptr [eax + 4], edx
// 00a14596  89500c               mov dword ptr [eax + 0xc], edx
// 00a14599  895008               mov dword ptr [eax + 8], edx
// 00a1459c  83c410               add esp, 0x10
// 00a1459f  c20400               ret 4
// 00a145a2  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00a145a8  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 00a145ae  56                   push esi
// 00a145af  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 00a145b5  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 00a145bb  57                   push edi
// 00a145bc  8d7aee               lea edi, [edx - 0x12]
// 00a145bf  89442408             mov dword ptr [esp + 8], eax
// 00a145c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a145c7  46                   inc esi
// 00a145c8  4a                   dec edx
// 00a145c9  8938                 mov dword ptr [eax], edi
// 00a145cb  49                   dec ecx
// 00a145cc  5f                   pop edi
// 00a145cd  897004               mov dword ptr [eax + 4], esi
// 00a145d0  89480c               mov dword ptr [eax + 0xc], ecx
// 00a145d3  5e                   pop esi
// 00a145d4  895008               mov dword ptr [eax + 8], edx
// 00a145d7  83c410               add esp, 0x10
// 00a145da  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
