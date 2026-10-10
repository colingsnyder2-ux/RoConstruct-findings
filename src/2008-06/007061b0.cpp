// roc 2008-06 007061b0  unit: CXTPTabClientWnd  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007061b0
//
// 007061b0  51                   push ecx
// 007061b1  56                   push esi
// 007061b2  57                   push edi
// 007061b3  8bf1                 mov esi, ecx
// 007061b5  33ff                 xor edi, edi
// 007061b7  39be94000000         cmp dword ptr [esi + 0x94], edi
// 007061bd  0f84c1010000         je 0x706384
// 007061c3  8b06                 mov eax, dword ptr [esi]
// 007061c5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 007061cb  ffd2                 call edx
// 007061cd  3bc7                 cmp eax, edi
// 007061cf  0f84af010000         je 0x706384
// 007061d5  53                   push ebx
// 007061d6  8bc8                 mov ecx, eax
// 007061d8  e883cdf9ff           call 0x6a2f60
// 007061dd  8b10                 mov edx, dword ptr [eax]
// 007061df  8bc8                 mov ecx, eax
// 007061e1  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 007061e7  ffd0                 call eax
// 007061e9  8bd8                 mov ebx, eax
// 007061eb  895c240c             mov dword ptr [esp + 0xc], ebx
// 007061ef  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 007061f5  0f8488010000         je 0x706383
// 007061fb  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706201  89793c               mov dword ptr [ecx + 0x3c], edi
// 00706204  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0070620a  897a38               mov dword ptr [edx + 0x38], edi
// 0070620d  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00706213  55                   push ebp
// 00706214  8b2d102d8000         mov ebp, dword ptr [0x802d10]
// 0070621a  57                   push edi
// 0070621b  897834               mov dword ptr [eax + 0x34], edi
// 0070621e  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706224  57                   push edi
// 00706225  897920               mov dword ptr [ecx + 0x20], edi
// 00706228  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0070622e  57                   push edi
// 0070622f  57                   push edi
// 00706230  83c260               add edx, 0x60
// 00706233  52                   push edx
// 00706234  ffd5                 call ebp
// 00706236  8d43ff               lea eax, [ebx - 1]
// 00706239  8d5f01               lea ebx, [edi + 1]
// 0070623c  83f805               cmp eax, 5
// 0070623f  0f871f010000         ja 0x706364
// 00706245  ff248588637000       jmp dword ptr [eax*4 + 0x706388]
// 0070624c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706252  6a05                 push 5
// 00706254  e8979e0700           call 0x7800f0
// 00706259  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0070625f  89583c               mov dword ptr [eax + 0x3c], ebx
// 00706262  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706268  895938               mov dword ptr [ecx + 0x38], ebx
// 0070626b  e900010000           jmp 0x706370
// 00706270  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00706276  897a30               mov dword ptr [edx + 0x30], edi
// 00706279  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0070627f  895834               mov dword ptr [eax + 0x34], ebx
// 00706282  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706288  895920               mov dword ptr [ecx + 0x20], ebx
// 0070628b  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706291  6a03                 push 3
// 00706293  e8589e0700           call 0x7800f0
// 00706298  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070629e  6a20                 push 0x20
// 007062a0  e85b820700           call 0x77e500
// 007062a5  e9c6000000           jmp 0x706370
// 007062aa  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 007062b0  897a30               mov dword ptr [edx + 0x30], edi
// 007062b3  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 007062b9  897834               mov dword ptr [eax + 0x34], edi
// 007062bc  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 007062c2  895920               mov dword ptr [ecx + 0x20], ebx
// 007062c5  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 007062cb  6a0a                 push 0xa
// 007062cd  e81e9e0700           call 0x7800f0
// 007062d2  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 007062d8  53                   push ebx
// 007062d9  6a03                 push 3
// 007062db  6a02                 push 2
// 007062dd  6a03                 push 3
// 007062df  83c260               add edx, 0x60
// 007062e2  52                   push edx
// 007062e3  ffd5                 call ebp
// 007062e5  e986000000           jmp 0x706370
// 007062ea  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 007062f0  897830               mov dword ptr [eax + 0x30], edi
// 007062f3  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 007062f9  895934               mov dword ptr [ecx + 0x34], ebx
// 007062fc  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00706302  895a20               mov dword ptr [edx + 0x20], ebx
// 00706305  6a03                 push 3
// 00706307  eb5c                 jmp 0x706365
// 00706309  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070630f  57                   push edi
// 00706310  e8db9d0700           call 0x7800f0
// 00706315  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070631b  6a08                 push 8
// 0070631d  e8de810700           call 0x77e500
// 00706322  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00706328  895820               mov dword ptr [eax + 0x20], ebx
// 0070632b  eb43                 jmp 0x706370
// 0070632d  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00706333  89593c               mov dword ptr [ecx + 0x3c], ebx
// 00706336  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0070633c  895a38               mov dword ptr [edx + 0x38], ebx
// 0070633f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00706345  895830               mov dword ptr [eax + 0x30], ebx
// 00706348  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070634e  6a03                 push 3
// 00706350  e89b9d0700           call 0x7800f0
// 00706355  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070635b  6a10                 push 0x10
// 0070635d  e89e810700           call 0x77e500
// 00706362  eb0c                 jmp 0x706370
// 00706364  57                   push edi
// 00706365  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0070636b  e8809d0700           call 0x7800f0
// 00706370  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00706374  898e90000000         mov dword ptr [esi + 0x90], ecx
// 0070637a  53                   push ebx
// 0070637b  8bce                 mov ecx, esi
// 0070637d  e81ef3ffff           call 0x7056a0
// 00706382  5d                   pop ebp
// 00706383  5b                   pop ebx
// 00706384  5f                   pop edi
// 00706385  5e                   pop esi
// 00706386  59                   pop ecx
// 00706387  c3                   ret 
// 00706388  4c                   dec esp
// 00706389  627000               bound esi, qword ptr [eax]
// 0070638c  ea627000096370       ljmp 0x7063:0x9007062
// 00706393  002d63700070         add byte ptr [0x70007063], ch
// 00706399  627000               bound esi, qword ptr [eax]
// 0070639c  aa                   stosb byte ptr es:[edi], al
// 0070639d  627000               bound esi, qword ptr [eax]
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?CheckCommandBarsTheme@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
