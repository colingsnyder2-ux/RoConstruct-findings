// roc 2012-06 00997200  unit: CXTPCommandBar  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00997200
//
// 00997200  83ec58               sub esp, 0x58
// 00997203  56                   push esi
// 00997204  8b355021b200         mov esi, dword ptr [0xb22150]
// 0099720a  57                   push edi
// 0099720b  8d442430             lea eax, [esp + 0x30]
// 0099720f  50                   push eax
// 00997210  8bf9                 mov edi, ecx
// 00997212  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00997216  6a18                 push 0x18
// 00997218  51                   push ecx
// 00997219  ffd6                 call esi
// 0099721b  85c0                 test eax, eax
// 0099721d  0f84ea010000         je 0x99740d
// 00997223  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00997227  8d542448             lea edx, [esp + 0x48]
// 0099722b  52                   push edx
// 0099722c  6a18                 push 0x18
// 0099722e  50                   push eax
// 0099722f  ffd6                 call esi
// 00997231  85c0                 test eax, eax
// 00997233  0f84d4010000         je 0x99740d
// 00997239  8b542474             mov edx, dword ptr [esp + 0x74]
// 0099723d  8d4c2418             lea ecx, [esp + 0x18]
// 00997241  51                   push ecx
// 00997242  6a18                 push 0x18
// 00997244  52                   push edx
// 00997245  ffd6                 call esi
// 00997247  85c0                 test eax, eax
// 00997249  0f84be010000         je 0x99740d
// 0099724f  8d442448             lea eax, [esp + 0x48]
// 00997253  50                   push eax
// 00997254  8d4c2434             lea ecx, [esp + 0x34]
// 00997258  51                   push ecx
// 00997259  8bcf                 mov ecx, edi
// 0099725b  e8b0fcffff           call 0x996f10
// 00997260  85c0                 test eax, eax
// 00997262  0f84a5010000         je 0x99740d
// 00997268  8d542418             lea edx, [esp + 0x18]
// 0099726c  52                   push edx
// 0099726d  8d442434             lea eax, [esp + 0x34]
// 00997271  50                   push eax
// 00997272  8bcf                 mov ecx, edi
// 00997274  e897fcffff           call 0x996f10
// 00997279  85c0                 test eax, eax
// 0099727b  0f848c010000         je 0x99740d
// 00997281  66837c244220         cmp word ptr [esp + 0x42], 0x20
// 00997287  0f8580010000         jne 0x99740d
// 0099728d  66837c244001         cmp word ptr [esp + 0x40], 1
// 00997293  0f8574010000         jne 0x99740d
// 00997299  8b442444             mov eax, dword ptr [esp + 0x44]
// 0099729d  85c0                 test eax, eax
// 0099729f  0f8468010000         je 0x99740d
// 009972a5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009972a9  85d2                 test edx, edx
// 009972ab  0f845c010000         je 0x99740d
// 009972b1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009972b5  85f6                 test esi, esi
// 009972b7  0f8450010000         je 0x99740d
// 009972bd  837c242000           cmp dword ptr [esp + 0x20], 0
// 009972c2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009972c6  894c2414             mov dword ptr [esp + 0x14], ecx
// 009972ca  89442464             mov dword ptr [esp + 0x64], eax
// 009972ce  89542474             mov dword ptr [esp + 0x74], edx
// 009972d2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009972da  0f8e20010000         jle 0x997400
// 009972e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009972e4  53                   push ebx
// 009972e5  8d7e01               lea edi, [esi + 1]
// 009972e8  55                   push ebp
// 009972e9  897c2410             mov dword ptr [esp + 0x10], edi
// 009972ed  8d4900               lea ecx, [ecx]
// 009972f0  33ed                 xor ebp, ebp
// 009972f2  85c0                 test eax, eax
// 009972f4  0f8edd000000         jle 0x9973d7
// 009972fa  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 009972fe  8bda                 mov ebx, edx
// 00997300  2bca                 sub ecx, edx
// 00997302  895c2474             mov dword ptr [esp + 0x74], ebx
// 00997306  894c2418             mov dword ptr [esp + 0x18], ecx
// 0099730a  eb0c                 jmp 0x997318
// 0099730c  8d642400             lea esp, [esp]
// 00997310  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00997314  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00997318  837c247000           cmp dword ptr [esp + 0x70], 0
// 0099731d  740e                 je 0x99732d
// 0099731f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00997323  8bc8                 mov ecx, eax
// 00997325  2bcd                 sub ecx, ebp
// 00997327  8d4c8efc             lea ecx, [esi + ecx*4 - 4]
// 0099732b  eb02                 jmp 0x99732f
// 0099732d  03cb                 add ecx, ebx
// 0099732f  837c247800           cmp dword ptr [esp + 0x78], 0
// 00997334  7406                 je 0x99733c
// 00997336  2bc5                 sub eax, ebp
// 00997338  8d5c82fc             lea ebx, [edx + eax*4 - 4]
// 0099733c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 00997340  0fb67302             movzx esi, byte ptr [ebx + 2]
// 00997344  b8ff000000           mov eax, 0xff
// 00997349  2bc2                 sub eax, edx
// 0099734b  0faff0               imul esi, eax
// 0099734e  b881808080           mov eax, 0x80808081
// 00997353  f7ee                 imul esi
// 00997355  03d6                 add edx, esi
// 00997357  c1fa07               sar edx, 7
// 0099735a  8bc2                 mov eax, edx
// 0099735c  c1e81f               shr eax, 0x1f
// 0099735f  03c2                 add eax, edx
// 00997361  024102               add al, byte ptr [ecx + 2]
// 00997364  8344247404           add dword ptr [esp + 0x74], 4
// 00997369  884701               mov byte ptr [edi + 1], al
// 0099736c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 00997370  0fb67301             movzx esi, byte ptr [ebx + 1]
// 00997374  b8ff000000           mov eax, 0xff
// 00997379  2bc2                 sub eax, edx
// 0099737b  0faff0               imul esi, eax
// 0099737e  b881808080           mov eax, 0x80808081
// 00997383  f7ee                 imul esi
// 00997385  03d6                 add edx, esi
// 00997387  c1fa07               sar edx, 7
// 0099738a  8bc2                 mov eax, edx
// 0099738c  c1e81f               shr eax, 0x1f
// 0099738f  03c2                 add eax, edx
// 00997391  024101               add al, byte ptr [ecx + 1]
// 00997394  beff000000           mov esi, 0xff
// 00997399  8807                 mov byte ptr [edi], al
// 0099739b  0fb65103             movzx edx, byte ptr [ecx + 3]
// 0099739f  0fb603               movzx eax, byte ptr [ebx]
// 009973a2  2bf2                 sub esi, edx
// 009973a4  0faff0               imul esi, eax
// 009973a7  b881808080           mov eax, 0x80808081
// 009973ac  f7ee                 imul esi
// 009973ae  03d6                 add edx, esi
// 009973b0  c1fa07               sar edx, 7
// 009973b3  8bc2                 mov eax, edx
// 009973b5  c1e81f               shr eax, 0x1f
// 009973b8  03c2                 add eax, edx
// 009973ba  0201                 add al, byte ptr [ecx]
// 009973bc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 009973c0  8847ff               mov byte ptr [edi - 1], al
// 009973c3  8b442424             mov eax, dword ptr [esp + 0x24]
// 009973c7  45                   inc ebp
// 009973c8  83c704               add edi, 4
// 009973cb  3be8                 cmp ebp, eax
// 009973cd  0f8c3dffffff         jl 0x997310
// 009973d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009973d7  8b742414             mov esi, dword ptr [esp + 0x14]
// 009973db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009973df  014c246c             add dword ptr [esp + 0x6c], ecx
// 009973e3  46                   inc esi
// 009973e4  03d1                 add edx, ecx
// 009973e6  03f9                 add edi, ecx
// 009973e8  3b742428             cmp esi, dword ptr [esp + 0x28]
// 009973ec  8954247c             mov dword ptr [esp + 0x7c], edx
// 009973f0  897c2410             mov dword ptr [esp + 0x10], edi
// 009973f4  89742414             mov dword ptr [esp + 0x14], esi
// 009973f8  0f8cf2feffff         jl 0x9972f0
// 009973fe  5d                   pop ebp
// 009973ff  5b                   pop ebx
// 00997400  5f                   pop edi
// 00997401  b801000000           mov eax, 1
// 00997406  5e                   pop esi
// 00997407  83c458               add esp, 0x58
// 0099740a  c21400               ret 0x14
// 0099740d  5f                   pop edi
// 0099740e  33c0                 xor eax, eax
// 00997410  5e                   pop esi
// 00997411  83c458               add esp, 0x58
// 00997414  c21400               ret 0x14
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?BlendImages@CXTPImageManager@@ABEHPAUHBITMAP__@@H0H0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
