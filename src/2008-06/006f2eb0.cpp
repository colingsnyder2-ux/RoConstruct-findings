// roc 2008-06 006f2eb0  unit: CXTPControls  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2eb0
//
// 006f2eb0  83ec14               sub esp, 0x14
// 006f2eb3  53                   push ebx
// 006f2eb4  55                   push ebp
// 006f2eb5  56                   push esi
// 006f2eb6  57                   push edi
// 006f2eb7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f2ebb  3b7c242c             cmp edi, dword ptr [esp + 0x2c]
// 006f2ebf  8bd9                 mov ebx, ecx
// 006f2ec1  895c2410             mov dword ptr [esp + 0x10], ebx
// 006f2ec5  897c2428             mov dword ptr [esp + 0x28], edi
// 006f2ec9  0f8d80000000         jge 0x6f2f4f
// 006f2ecf  90                   nop 
// 006f2ed0  85ff                 test edi, edi
// 006f2ed2  7c70                 jl 0x6f2f44
// 006f2ed4  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 006f2ed7  7d6b                 jge 0x6f2f44
// 006f2ed9  8b4328               mov eax, dword ptr [ebx + 0x28]
// 006f2edc  8b34b8               mov esi, dword ptr [eax + edi*4]
// 006f2edf  85f6                 test esi, esi
// 006f2ee1  7461                 je 0x6f2f44
// 006f2ee3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006f2ee9  3b4b20               cmp ecx, dword ptr [ebx + 0x20]
// 006f2eec  7556                 jne 0x6f2f44
// 006f2eee  8b16                 mov edx, dword ptr [esi]
// 006f2ef0  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006f2ef6  6a00                 push 0
// 006f2ef8  8bce                 mov ecx, esi
// 006f2efa  ffd0                 call eax
// 006f2efc  85c0                 test eax, eax
// 006f2efe  7444                 je 0x6f2f44
// 006f2f00  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 006f2f06  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 006f2f0c  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 006f2f12  8b2e                 mov ebp, dword ptr [esi]
// 006f2f14  8bbecc000000         mov edi, dword ptr [esi + 0xcc]
// 006f2f1a  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f2f1e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f2f22  8d1c01               lea ebx, [ecx + eax]
// 006f2f25  83ec10               sub esp, 0x10
// 006f2f28  8bc4                 mov eax, esp
// 006f2f2a  8908                 mov dword ptr [eax], ecx
// 006f2f2c  895004               mov dword ptr [eax + 4], edx
// 006f2f2f  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 006f2f32  895808               mov dword ptr [eax + 8], ebx
// 006f2f35  8bce                 mov ecx, esi
// 006f2f37  89780c               mov dword ptr [eax + 0xc], edi
// 006f2f3a  ffd2                 call edx
// 006f2f3c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f2f40  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006f2f44  47                   inc edi
// 006f2f45  3b7c242c             cmp edi, dword ptr [esp + 0x2c]
// 006f2f49  897c2428             mov dword ptr [esp + 0x28], edi
// 006f2f4d  7c81                 jl 0x6f2ed0
// 006f2f4f  5f                   pop edi
// 006f2f50  5e                   pop esi
// 006f2f51  5d                   pop ebp
// 006f2f52  5b                   pop ebx
// 006f2f53  83c414               add esp, 0x14
// 006f2f56  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?_MakeSameWidth@CXTPControls@@IAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
