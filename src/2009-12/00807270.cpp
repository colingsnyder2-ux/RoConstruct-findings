// roc 2009-12 00807270  unit: CXTPCommandBar  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807270
//
// 00807270  83ec1c               sub esp, 0x1c
// 00807273  56                   push esi
// 00807274  8bf1                 mov esi, ecx
// 00807276  e855d2ffff           call 0x8044d0
// 0080727b  8944240c             mov dword ptr [esp + 0xc], eax
// 0080727f  85c0                 test eax, eax
// 00807281  0f843e010000         je 0x8073c5
// 00807287  53                   push ebx
// 00807288  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0080728c  57                   push edi
// 0080728d  8d44240c             lea eax, [esp + 0xc]
// 00807291  50                   push eax
// 00807292  8d4c2414             lea ecx, [esp + 0x14]
// 00807296  51                   push ecx
// 00807297  8d542420             lea edx, [esp + 0x20]
// 0080729b  52                   push edx
// 0080729c  8d442440             lea eax, [esp + 0x40]
// 008072a0  50                   push eax
// 008072a1  53                   push ebx
// 008072a2  8bce                 mov ecx, esi
// 008072a4  e8d7e5ffff           call 0x805880
// 008072a9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008072ad  83ffff               cmp edi, -1
// 008072b0  7463                 je 0x807315
// 008072b2  57                   push edi
// 008072b3  8bce                 mov ecx, esi
// 008072b5  e8a6dfffff           call 0x805260
// 008072ba  3bd8                 cmp ebx, eax
// 008072bc  7557                 jne 0x807315
// 008072be  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008072c2  2b442434             sub eax, dword ptr [esp + 0x34]
// 008072c6  99                   cdq 
// 008072c7  33c2                 xor eax, edx
// 008072c9  2bc2                 sub eax, edx
// 008072cb  83f804               cmp eax, 4
// 008072ce  7f12                 jg 0x8072e2
// 008072d0  8b442440             mov eax, dword ptr [esp + 0x40]
// 008072d4  2b442438             sub eax, dword ptr [esp + 0x38]
// 008072d8  99                   cdq 
// 008072d9  33c2                 xor eax, edx
// 008072db  2bc2                 sub eax, edx
// 008072dd  83f804               cmp eax, 4
// 008072e0  7e24                 jle 0x807306
// 008072e2  57                   push edi
// 008072e3  e878dfffff           call 0x805260
// 008072e8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008072ed  740b                 je 0x8072fa
// 008072ef  85ff                 test edi, edi
// 008072f1  7407                 je 0x8072fa
// 008072f3  ba01000000           mov edx, 1
// 008072f8  eb02                 jmp 0x8072fc
// 008072fa  33d2                 xor edx, edx
// 008072fc  8b38                 mov edi, dword ptr [eax]
// 008072fe  52                   push edx
// 008072ff  8b5764               mov edx, dword ptr [edi + 0x64]
// 00807302  8bc8                 mov ecx, eax
// 00807304  ffd2                 call edx
// 00807306  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080730a  c70005000000         mov dword ptr [eax], 5
// 00807310  e985000000           jmp 0x80739a
// 00807315  55                   push ebp
// 00807316  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0080731a  85ed                 test ebp, ebp
// 0080731c  7401                 je 0x80731f
// 0080731e  47                   inc edi
// 0080731f  6a00                 push 0
// 00807321  6aff                 push -1
// 00807323  8bce                 mov ecx, esi
// 00807325  e876f2ffff           call 0x8065a0
// 0080732a  8b16                 mov edx, dword ptr [esi]
// 0080732c  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00807332  6a00                 push 0
// 00807334  6aff                 push -1
// 00807336  8bce                 mov ecx, esi
// 00807338  ffd0                 call eax
// 0080733a  33db                 xor ebx, ebx
// 0080733c  85ed                 test ebp, ebp
// 0080733e  5d                   pop ebp
// 0080733f  7530                 jne 0x807371
// 00807341  85ff                 test edi, edi
// 00807343  7c2c                 jl 0x807371
// 00807345  8bce                 mov ecx, esi
// 00807347  e804dfffff           call 0x805250
// 0080734c  3bf8                 cmp edi, eax
// 0080734e  7d21                 jge 0x807371
// 00807350  57                   push edi
// 00807351  e80adfffff           call 0x805260
// 00807356  8b9898000000         mov ebx, dword ptr [eax + 0x98]
// 0080735c  85db                 test ebx, ebx
// 0080735e  7411                 je 0x807371
// 00807360  57                   push edi
// 00807361  e8fadeffff           call 0x805260
// 00807366  8b10                 mov edx, dword ptr [eax]
// 00807368  8bc8                 mov ecx, eax
// 0080736a  8b4264               mov eax, dword ptr [edx + 0x64]
// 0080736d  6a00                 push 0
// 0080736f  ffd0                 call eax
// 00807371  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00807375  6a00                 push 0
// 00807377  57                   push edi
// 00807378  51                   push ecx
// 00807379  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0080737f  e82cff0300           call 0x8472b0
// 00807384  8bf8                 mov edi, eax
// 00807386  8b17                 mov edx, dword ptr [edi]
// 00807388  8b4264               mov eax, dword ptr [edx + 0x64]
// 0080738b  53                   push ebx
// 0080738c  8bcf                 mov ecx, edi
// 0080738e  ffd0                 call eax
// 00807390  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00807394  57                   push edi
// 00807395  e806da0000           call 0x814da0
// 0080739a  8b16                 mov edx, dword ptr [esi]
// 0080739c  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008073a2  8bce                 mov ecx, esi
// 008073a4  ffd0                 call eax
// 008073a6  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008073ac  51                   push ecx
// 008073ad  ff159cca9800         call dword ptr [0x98ca9c]
// 008073b3  8b16                 mov edx, dword ptr [esi]
// 008073b5  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 008073bb  6a01                 push 1
// 008073bd  6a00                 push 0
// 008073bf  8bce                 mov ecx, esi
// 008073c1  ffd0                 call eax
// 008073c3  5f                   pop edi
// 008073c4  5b                   pop ebx
// 008073c5  5e                   pop esi
// 008073c6  83c41c               add esp, 0x1c
// 008073c9  c21800               ret 0x18
// copied from an identical function in another client (function ?OnCustomizeDrop@CXTPCommandBar@@UAEXPAVCXTPControl@@AAKVCPoint@@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp