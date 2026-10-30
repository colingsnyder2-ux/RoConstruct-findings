// roc 2012-06 00a70fe0  unit: CXTPDialogBar::CControlCaptionPopup  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70fe0
//
// 00a70fe0  6aff                 push -1
// 00a70fe2  68318dae00           push 0xae8d31
// 00a70fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00a70fed  50                   push eax
// 00a70fee  83ec38               sub esp, 0x38
// 00a70ff1  53                   push ebx
// 00a70ff2  55                   push ebp
// 00a70ff3  56                   push esi
// 00a70ff4  57                   push edi
// 00a70ff5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a70ffa  33c4                 xor eax, esp
// 00a70ffc  50                   push eax
// 00a70ffd  8d44244c             lea eax, [esp + 0x4c]
// 00a71001  64a300000000         mov dword ptr fs:[0], eax
// 00a71007  8bf1                 mov esi, ecx
// 00a71009  e8e239f1ff           call 0x9849f0
// 00a7100e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00a71012  89442414             mov dword ptr [esp + 0x14], eax
// 00a71016  0598000000           add eax, 0x98
// 00a7101b  50                   push eax
// 00a7101c  57                   push edi
// 00a7101d  8d4c2444             lea ecx, [esp + 0x44]
// 00a71021  e80a45f6ff           call 0x9d5530
// 00a71026  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00a7102d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00a71033  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00a71039  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 00a7103f  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00a71045  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00a7104d  89442434             mov dword ptr [esp + 0x34], eax
// 00a71051  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a71055  7424                 je 0xa7107b
// 00a71057  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a7105b  8b11                 mov edx, dword ptr [ecx]
// 00a7105d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a71060  56                   push esi
// 00a71061  57                   push edi
// 00a71062  ffd0                 call eax
// 00a71064  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00a7106b  740e                 je 0xa7107b
// 00a7106d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a71071  8b11                 mov edx, dword ptr [ecx]
// 00a71073  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a71076  56                   push esi
// 00a71077  ffd0                 call eax
// 00a71079  eb0e                 jmp 0xa71089
// 00a7107b  e8e0c7f4ff           call 0x9bd860
// 00a71080  6a12                 push 0x12
// 00a71082  8bc8                 mov ecx, eax
// 00a71084  e857bff4ff           call 0x9bcfe0
// 00a71089  8b17                 mov edx, dword ptr [edi]
// 00a7108b  50                   push eax
// 00a7108c  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a7108f  8bcf                 mov ecx, edi
// 00a71091  ffd0                 call eax
// 00a71093  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00a71099  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a7109d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a710a1  f7d8                 neg eax
// 00a710a3  1bc0                 sbb eax, eax
// 00a710a5  83e00d               and eax, 0xd
// 00a710a8  83c002               add eax, 2
// 00a710ab  2bc8                 sub ecx, eax
// 00a710ad  8b06                 mov eax, dword ptr [esi]
// 00a710af  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a710b3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a710b7  8d4c2418             lea ecx, [esp + 0x18]
// 00a710bb  89542428             mov dword ptr [esp + 0x28], edx
// 00a710bf  8b5058               mov edx, dword ptr [eax + 0x58]
// 00a710c2  51                   push ecx
// 00a710c3  83c502               add ebp, 2
// 00a710c6  8bce                 mov ecx, esi
// 00a710c8  895c2424             mov dword ptr [esp + 0x24], ebx
// 00a710cc  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a710d0  ffd2                 call edx
// 00a710d2  8be8                 mov ebp, eax
// 00a710d4  8b07                 mov eax, dword ptr [edi]
// 00a710d6  6a24                 push 0x24
// 00a710d8  8d4c2420             lea ecx, [esp + 0x20]
// 00a710dc  51                   push ecx
// 00a710dd  8bcd                 mov ecx, ebp
// 00a710df  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00a710e4  89442464             mov dword ptr [esp + 0x64], eax
// 00a710e8  ff155846b200         call dword ptr [0xb24658]
// 00a710ee  50                   push eax
// 00a710ef  8bcd                 mov ecx, ebp
// 00a710f1  ff159847b200         call dword ptr [0xb24798]
// 00a710f7  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a710fb  50                   push eax
// 00a710fc  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a710ff  8bcf                 mov ecx, edi
// 00a71101  ffd0                 call eax
// 00a71103  8d4c2418             lea ecx, [esp + 0x18]
// 00a71107  c644245400           mov byte ptr [esp + 0x54], 0
// 00a7110c  ff15d047b200         call dword ptr [0xb247d0]
// 00a71112  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a71115  51                   push ecx
// 00a71116  ff15ac20b200         call dword ptr [0xb220ac]
// 00a7111c  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00a71123  8be8                 mov ebp, eax
// 00a71125  7430                 je 0xa71157
// 00a71127  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a7112b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a7112f  2bc3                 sub eax, ebx
// 00a71131  99                   cdq 
// 00a71132  2bc2                 sub eax, edx
// 00a71134  d1f8                 sar eax, 1
// 00a71136  55                   push ebp
// 00a71137  03c3                 add eax, ebx
// 00a71139  8d5002               lea edx, [eax + 2]
// 00a7113c  52                   push edx
// 00a7113d  83c1f7               add ecx, -9
// 00a71140  51                   push ecx
// 00a71141  83c0fe               add eax, -2
// 00a71144  50                   push eax
// 00a71145  8d7104               lea esi, [ecx + 4]
// 00a71148  56                   push esi
// 00a71149  50                   push eax
// 00a7114a  8d59fc               lea ebx, [ecx - 4]
// 00a7114d  53                   push ebx
// 00a7114e  57                   push edi
// 00a7114f  e84c77f1ff           call 0x9888a0
// 00a71154  83c420               add esp, 0x20
// 00a71157  8d4c243c             lea ecx, [esp + 0x3c]
// 00a7115b  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00a71163  e84844f6ff           call 0x9d55b0
// 00a71168  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a7116c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a71173  59                   pop ecx
// 00a71174  5f                   pop edi
// 00a71175  5e                   pop esi
// 00a71176  5d                   pop ebp
// 00a71177  5b                   pop ebx
// 00a71178  83c444               add esp, 0x44
// 00a7117b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionPopup@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDialogBar.cpp