// roc 2009-12 0088b910  unit: CXTPControlEdit  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b910
//
// 0088b910  33d2                 xor edx, edx
// 0088b912  83ec10               sub esp, 0x10
// 0088b915  3991ac010000         cmp dword ptr [ecx + 0x1ac], edx
// 0088b91b  7515                 jne 0x88b932
// 0088b91d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088b921  8910                 mov dword ptr [eax], edx
// 0088b923  895004               mov dword ptr [eax + 4], edx
// 0088b926  89500c               mov dword ptr [eax + 0xc], edx
// 0088b929  895008               mov dword ptr [eax + 8], edx
// 0088b92c  83c410               add esp, 0x10
// 0088b92f  c20400               ret 4
// 0088b932  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0088b938  8b91c8000000         mov edx, dword ptr [ecx + 0xc8]
// 0088b93e  56                   push esi
// 0088b93f  8bb1c4000000         mov esi, dword ptr [ecx + 0xc4]
// 0088b945  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0088b94b  57                   push edi
// 0088b94c  8d7aee               lea edi, [edx - 0x12]
// 0088b94f  89442408             mov dword ptr [esp + 8], eax
// 0088b953  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088b957  46                   inc esi
// 0088b958  4a                   dec edx
// 0088b959  8938                 mov dword ptr [eax], edi
// 0088b95b  49                   dec ecx
// 0088b95c  5f                   pop edi
// 0088b95d  897004               mov dword ptr [eax + 4], esi
// 0088b960  89480c               mov dword ptr [eax + 0xc], ecx
// 0088b963  5e                   pop esi
// 0088b964  895008               mov dword ptr [eax + 8], edx
// 0088b967  83c410               add esp, 0x10
// 0088b96a  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?GetSpinButtonsRect@CXTPControlEdit@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
