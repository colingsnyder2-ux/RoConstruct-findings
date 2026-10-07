// roc 2008-06 00742430  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742430
//
// 00742430  33d2                 xor edx, edx
// 00742432  83ec10               sub esp, 0x10
// 00742435  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 0074243b  7515                 jne 0x742452
// 0074243d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00742441  8910                 mov dword ptr [eax], edx
// 00742443  895004               mov dword ptr [eax + 4], edx
// 00742446  89500c               mov dword ptr [eax + 0xc], edx
// 00742449  895008               mov dword ptr [eax + 8], edx
// 0074244c  83c410               add esp, 0x10
// 0074244f  c20400               ret 4
// 00742452  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00742458  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0074245e  56                   push esi
// 0074245f  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 00742465  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0074246b  57                   push edi
// 0074246c  8d7aee               lea edi, [edx - 0x12]
// 0074246f  89442408             mov dword ptr [esp + 8], eax
// 00742473  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00742477  46                   inc esi
// 00742478  4a                   dec edx
// 00742479  8938                 mov dword ptr [eax], edi
// 0074247b  49                   dec ecx
// 0074247c  5f                   pop edi
// 0074247d  897004               mov dword ptr [eax + 4], esi
// 00742480  89480c               mov dword ptr [eax + 0xc], ecx
// 00742483  5e                   pop esi
// 00742484  895008               mov dword ptr [eax + 8], edx
// 00742487  83c410               add esp, 0x10
// 0074248a  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
