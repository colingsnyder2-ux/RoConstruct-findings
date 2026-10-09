// roc 2007-03 0068c200  unit: seg_00680000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c200
//
// 0068c200  83ec20               sub esp, 0x20
// 0068c203  56                   push esi
// 0068c204  8bf1                 mov esi, ecx
// 0068c206  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0068c20c  50                   push eax
// 0068c20d  ff1574ed7700         call dword ptr [0x77ed74]
// 0068c213  85c0                 test eax, eax
// 0068c215  752c                 jne 0x68c243
// 0068c217  8d4c2414             lea ecx, [esp + 0x14]
// 0068c21b  e870f5fdff           call 0x66b790
// 0068c220  8b10                 mov edx, dword ptr [eax]
// 0068c222  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068c226  8911                 mov dword ptr [ecx], edx
// 0068c228  8b5004               mov edx, dword ptr [eax + 4]
// 0068c22b  895104               mov dword ptr [ecx + 4], edx
// 0068c22e  8b5008               mov edx, dword ptr [eax + 8]
// 0068c231  895108               mov dword ptr [ecx + 8], edx
// 0068c234  8b400c               mov eax, dword ptr [eax + 0xc]
// 0068c237  89410c               mov dword ptr [ecx + 0xc], eax
// 0068c23a  8bc1                 mov eax, ecx
// 0068c23c  5e                   pop esi
// 0068c23d  83c420               add esp, 0x20
// 0068c240  c20400               ret 4
// 0068c243  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0068c24a  57                   push edi
// 0068c24b  751b                 jne 0x68c268
// 0068c24d  8b16                 mov edx, dword ptr [esi]
// 0068c24f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0068c253  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0068c259  57                   push edi
// 0068c25a  8bce                 mov ecx, esi
// 0068c25c  ffd0                 call eax
// 0068c25e  8bc7                 mov eax, edi
// 0068c260  5f                   pop edi
// 0068c261  5e                   pop esi
// 0068c262  83c420               add esp, 0x20
// 0068c265  c20400               ret 4
// 0068c268  56                   push esi
// 0068c269  8d4c240c             lea ecx, [esp + 0xc]
// 0068c26d  e8eef5fdff           call 0x66b860
// 0068c272  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068c276  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0068c27a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068c27e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0068c282  83e80f               sub eax, 0xf
// 0068c285  99                   cdq 
// 0068c286  2bc2                 sub eax, edx
// 0068c288  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0068c28c  83e912               sub ecx, 0x12
// 0068c28f  d1f8                 sar eax, 1
// 0068c291  890a                 mov dword ptr [edx], ecx
// 0068c293  8d7110               lea esi, [ecx + 0x10]
// 0068c296  8d780f               lea edi, [eax + 0xf]
// 0068c299  894204               mov dword ptr [edx + 4], eax
// 0068c29c  897208               mov dword ptr [edx + 8], esi
// 0068c29f  897a0c               mov dword ptr [edx + 0xc], edi
// 0068c2a2  5f                   pop edi
// 0068c2a3  8bc2                 mov eax, edx
// 0068c2a5  5e                   pop esi
// 0068c2a6  83c420               add esp, 0x20
// 0068c2a9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTCaption.cpp (function ?GetButtonRect@CXTCaption@@MBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaption.cpp
