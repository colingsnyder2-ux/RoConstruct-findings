// roc 2009-06 00807ab0  unit: CXTColorSelectorCtrl  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00807ab0
//
// 00807ab0  6aff                 push -1
// 00807ab2  68c91b8800           push 0x881bc9
// 00807ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00807abd  50                   push eax
// 00807abe  53                   push ebx
// 00807abf  55                   push ebp
// 00807ac0  56                   push esi
// 00807ac1  57                   push edi
// 00807ac2  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00807ac7  33c4                 xor eax, esp
// 00807ac9  50                   push eax
// 00807aca  8d442414             lea eax, [esp + 0x14]
// 00807ace  64a300000000         mov dword ptr fs:[0], eax
// 00807ad4  8bf1                 mov esi, ecx
// 00807ad6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00807ada  894678               mov dword ptr [esi + 0x78], eax
// 00807add  85c0                 test eax, eax
// 00807adf  0f8470010000         je 0x807c55
// 00807ae5  8b4020               mov eax, dword ptr [eax + 0x20]
// 00807ae8  50                   push eax
// 00807ae9  e872fdffff           call 0x807860
// 00807aee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00807af2  8b542440             mov edx, dword ptr [esp + 0x40]
// 00807af6  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00807afa  8d442424             lea eax, [esp + 0x24]
// 00807afe  50                   push eax
// 00807aff  8dbe84000000         lea edi, [esi + 0x84]
// 00807b05  57                   push edi
// 00807b06  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00807b0c  898eb0000000         mov dword ptr [esi + 0xb0], ecx
// 00807b12  8996b4000000         mov dword ptr [esi + 0xb4], edx
// 00807b18  ff1500ee8900         call dword ptr [0x89ee00]
// 00807b1e  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 00807b21  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00807b24  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00807b2a  0fafcb               imul ecx, ebx
// 00807b2d  038e9c000000         add ecx, dword ptr [esi + 0x9c]
// 00807b33  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00807b39  038e94000000         add ecx, dword ptr [esi + 0x94]
// 00807b3f  039698000000         add edx, dword ptr [esi + 0x98]
// 00807b45  030f                 add ecx, dword ptr [edi]
// 00807b47  898688000000         mov dword ptr [esi + 0x88], eax
// 00807b4d  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 00807b53  8d0c02               lea ecx, [edx + eax]
// 00807b56  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00807b5c  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00807b62  a810                 test al, 0x10
// 00807b64  7509                 jne 0x807b6f
// 00807b66  83c11b               add ecx, 0x1b
// 00807b69  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00807b6f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00807b75  85c9                 test ecx, ecx
// 00807b77  7409                 je 0x807b82
// 00807b79  83c802               or eax, 2
// 00807b7c  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00807b82  f686a400000002       test byte ptr [esi + 0xa4], 2
// 00807b89  7425                 je 0x807bb0
// 00807b8b  b828000000           mov eax, 0x28
// 00807b90  85c9                 test ecx, ecx
// 00807b92  7406                 je 0x807b9a
// 00807b94  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 00807b9a  8d4403ff             lea eax, [ebx + eax - 1]
// 00807b9e  99                   cdq 
// 00807b9f  f7fb                 idiv ebx
// 00807ba1  0faf8680000000       imul eax, dword ptr [esi + 0x80]
// 00807ba8  018690000000         add dword ptr [esi + 0x90], eax
// 00807bae  eb10                 jmp 0x807bc0
// 00807bb0  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00807bb6  8d4c0016             lea ecx, [eax + eax + 0x16]
// 00807bba  018e90000000         add dword ptr [esi + 0x90], ecx
// 00807bc0  e83111f1ff           call 0x718cf6
// 00807bc5  68007f0000           push 0x7f00
// 00807bca  6a00                 push 0
// 00807bcc  ff15b0ed8900         call dword ptr [0x89edb0]
// 00807bd2  6a00                 push 0
// 00807bd4  6a00                 push 0
// 00807bd6  50                   push eax
// 00807bd7  6a00                 push 0
// 00807bd9  e82018f1ff           call 0x7193fe
// 00807bde  50                   push eax
// 00807bdf  8d4c2438             lea ecx, [esp + 0x38]
// 00807be3  ff1508fd8900         call dword ptr [0x89fd08]
// 00807be9  f686a400000004       test byte ptr [esi + 0xa4], 4
// 00807bf0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00807bf8  7426                 je 0x807c20
// 00807bfa  8386900000001b       add dword ptr [esi + 0x90], 0x1b
// 00807c01  833d242ba50000       cmp dword ptr [0xa52b24], 0
// 00807c08  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00807c0e  7e10                 jle 0x807c20
// 00807c10  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00807c16  8d440204             lea eax, [edx + eax + 4]
// 00807c1a  898690000000         mov dword ptr [esi + 0x90], eax
// 00807c20  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00807c23  6a00                 push 0
// 00807c25  6a00                 push 0
// 00807c27  51                   push ecx
// 00807c28  57                   push edi
// 00807c29  6800000040           push 0x40000000
// 00807c2e  6816d28a00           push 0x8ad216
// 00807c33  8d4c244c             lea ecx, [esp + 0x4c]
// 00807c37  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00807c3d  50                   push eax
// 00807c3e  6a00                 push 0
// 00807c40  8bce                 mov ecx, esi
// 00807c42  e8630ef1ff           call 0x718aaa
// 00807c47  85c0                 test eax, eax
// 00807c49  7511                 jne 0x807c5c
// 00807c4b  8d4c2434             lea ecx, [esp + 0x34]
// 00807c4f  ff1510fd8900         call dword ptr [0x89fd10]
// 00807c55  33c0                 xor eax, eax
// 00807c57  e99d000000           jmp 0x807cf9
// 00807c5c  8bce                 mov ecx, esi
// 00807c5e  85ed                 test ebp, ebp
// 00807c60  7963                 jns 0x807cc5
// 00807c62  e87311f1ff           call 0x718dda
// 00807c67  8b5620               mov edx, dword ptr [esi + 0x20]
// 00807c6a  8b1d34ed8900         mov ebx, dword ptr [0x89ed34]
// 00807c70  6a00                 push 0
// 00807c72  6af8                 push -8
// 00807c74  52                   push edx
// 00807c75  ffd3                 call ebx
// 00807c77  6a00                 push 0
// 00807c79  6800000080           push 0x80000000
// 00807c7e  6800000040           push 0x40000000
// 00807c83  8bce                 mov ecx, esi
// 00807c85  e82815f1ff           call 0x7191b2
// 00807c8a  8b4678               mov eax, dword ptr [esi + 0x78]
// 00807c8d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00807c90  8b5620               mov edx, dword ptr [esi + 0x20]
// 00807c93  51                   push ecx
// 00807c94  6af8                 push -8
// 00807c96  52                   push edx
// 00807c97  ffd3                 call ebx
// 00807c99  8b470c               mov eax, dword ptr [edi + 0xc]
// 00807c9c  2b4704               sub eax, dword ptr [edi + 4]
// 00807c9f  8b4f08               mov ecx, dword ptr [edi + 8]
// 00807ca2  2b0f                 sub ecx, dword ptr [edi]
// 00807ca4  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00807caa  6850020000           push 0x250
// 00807caf  50                   push eax
// 00807cb0  8b07                 mov eax, dword ptr [edi]
// 00807cb2  51                   push ecx
// 00807cb3  8b0db8ff8900         mov ecx, dword ptr [0x89ffb8]
// 00807cb9  52                   push edx
// 00807cba  50                   push eax
// 00807cbb  51                   push ecx
// 00807cbc  8bce                 mov ecx, esi
// 00807cbe  e84111f1ff           call 0x718e04
// 00807cc3  eb07                 jmp 0x807ccc
// 00807cc5  6a08                 push 8
// 00807cc7  e85410f1ff           call 0x718d20
// 00807ccc  e80f18f8ff           call 0x7894e0
// 00807cd1  05dc000000           add eax, 0xdc
// 00807cd6  7403                 je 0x807cdb
// 00807cd8  8b4004               mov eax, dword ptr [eax + 4]
// 00807cdb  8b5620               mov edx, dword ptr [esi + 0x20]
// 00807cde  6a01                 push 1
// 00807ce0  50                   push eax
// 00807ce1  6a30                 push 0x30
// 00807ce3  52                   push edx
// 00807ce4  ff1590ee8900         call dword ptr [0x89ee90]
// 00807cea  8d4c2434             lea ecx, [esp + 0x34]
// 00807cee  ff1510fd8900         call dword ptr [0x89fd10]
// 00807cf4  b801000000           mov eax, 1
// 00807cf9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00807cfd  64890d00000000       mov dword ptr fs:[0], ecx
// 00807d04  59                   pop ecx
// 00807d05  5f                   pop edi
// 00807d06  5e                   pop esi
// 00807d07  5d                   pop ebp
// 00807d08  5b                   pop ebx
// 00807d09  83c40c               add esp, 0xc
// 00807d0c  c22000               ret 0x20
// copied from an identical function in another client (function ?Create@CXTColorSelectorCtrl@@QAEHVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp