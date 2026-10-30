// roc 2009-12 008e66e0  unit: CXTCaptionPopupWnd  size: 626 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e66e0
//
// 008e66e0  6aff                 push -1
// 008e66e2  68f9619600           push 0x9661f9
// 008e66e7  64a100000000         mov eax, dword ptr fs:[0]
// 008e66ed  50                   push eax
// 008e66ee  83ec20               sub esp, 0x20
// 008e66f1  53                   push ebx
// 008e66f2  55                   push ebp
// 008e66f3  56                   push esi
// 008e66f4  57                   push edi
// 008e66f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008e66fa  33c4                 xor eax, esp
// 008e66fc  50                   push eax
// 008e66fd  8d442434             lea eax, [esp + 0x34]
// 008e6701  64a300000000         mov dword ptr fs:[0], eax
// 008e6707  8bf1                 mov esi, ecx
// 008e6709  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008e670d  33db                 xor ebx, ebx
// 008e670f  3bfb                 cmp edi, ebx
// 008e6711  0f84e4000000         je 0x8e67fb
// 008e6717  8b4720               mov eax, dword ptr [edi + 0x20]
// 008e671a  50                   push eax
// 008e671b  ff1584cc9800         call dword ptr [0x98cc84]
// 008e6721  85c0                 test eax, eax
// 008e6723  0f84d2000000         je 0x8e67fb
// 008e6729  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008e672d  897e54               mov dword ptr [esi + 0x54], edi
// 008e6730  3beb                 cmp ebp, ebx
// 008e6732  0f84c3000000         je 0x8e67fb
// 008e6738  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008e673b  51                   push ecx
// 008e673c  ff1584cc9800         call dword ptr [0x98cc84]
// 008e6742  85c0                 test eax, eax
// 008e6744  0f84b1000000         je 0x8e67fb
// 008e674a  8b442444             mov eax, dword ptr [esp + 0x44]
// 008e674e  53                   push ebx
// 008e674f  53                   push ebx
// 008e6750  896e58               mov dword ptr [esi + 0x58], ebp
// 008e6753  8b5004               mov edx, dword ptr [eax + 4]
// 008e6756  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008e6759  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 008e675c  8b38                 mov edi, dword ptr [eax]
// 008e675e  8b4008               mov eax, dword ptr [eax + 8]
// 008e6761  55                   push ebp
// 008e6762  2bca                 sub ecx, edx
// 008e6764  51                   push ecx
// 008e6765  2bc7                 sub eax, edi
// 008e6767  50                   push eax
// 008e6768  52                   push edx
// 008e6769  57                   push edi
// 008e676a  6800004090           push 0x90400000
// 008e676f  6856fd9900           push 0x99fd56
// 008e6774  6818cba000           push 0xa0cb18
// 008e6779  6880000000           push 0x80
// 008e677e  8bce                 mov ecx, esi
// 008e6780  e853d1f0ff           call 0x7f38d8
// 008e6785  85c0                 test eax, eax
// 008e6787  7472                 je 0x8e67fb
// 008e6789  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008e678c  56                   push esi
// 008e678d  e82eebf4ff           call 0x8352c0
// 008e6792  8d4c2448             lea ecx, [esp + 0x48]
// 008e6796  89465c               mov dword ptr [esi + 0x5c], eax
// 008e6799  ff1574de9800         call dword ptr [0x98de74]
// 008e679f  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008e67a3  e8f880f8ff           call 0x86e8a0
// 008e67a8  8b10                 mov edx, dword ptr [eax]
// 008e67aa  8b5208               mov edx, dword ptr [edx + 8]
// 008e67ad  6883240000           push 0x2483
// 008e67b2  8d4c244c             lea ecx, [esp + 0x4c]
// 008e67b6  51                   push ecx
// 008e67b7  8bc8                 mov ecx, eax
// 008e67b9  ffd2                 call edx
// 008e67bb  8b7e60               mov edi, dword ptr [esi + 0x60]
// 008e67be  8d6e60               lea ebp, [esi + 0x60]
// 008e67c1  68ffff0000           push 0xffff
// 008e67c6  8d4c2428             lea ecx, [esp + 0x28]
// 008e67ca  e8614af6ff           call 0x84b230
// 008e67cf  50                   push eax
// 008e67d0  6801020010           push 0x10000201
// 008e67d5  6a02                 push 2
// 008e67d7  8d4c2458             lea ecx, [esp + 0x58]
// 008e67db  ff1580de9800         call dword ptr [0x98de80]
// 008e67e1  50                   push eax
// 008e67e2  8b8764010000         mov eax, dword ptr [edi + 0x164]
// 008e67e8  56                   push esi
// 008e67e9  8bcd                 mov ecx, ebp
// 008e67eb  ffd0                 call eax
// 008e67ed  85c0                 test eax, eax
// 008e67ef  7522                 jne 0x8e6813
// 008e67f1  8d4c2448             lea ecx, [esp + 0x48]
// 008e67f5  ff15c0de9800         call dword ptr [0x98dec0]
// 008e67fb  33c0                 xor eax, eax
// 008e67fd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e6801  64890d00000000       mov dword ptr fs:[0], ecx
// 008e6808  59                   pop ecx
// 008e6809  5f                   pop edi
// 008e680a  5e                   pop esi
// 008e680b  5d                   pop ebp
// 008e680c  5b                   pop ebx
// 008e680d  83c42c               add esp, 0x2c
// 008e6810  c20c00               ret 0xc
// 008e6813  8b8ef0010000         mov ecx, dword ptr [esi + 0x1f0]
// 008e6819  8dbef0010000         lea edi, [esi + 0x1f0]
// 008e681f  6a64                 push 0x64
// 008e6821  894c2450             mov dword ptr [esp + 0x50], ecx
// 008e6825  56                   push esi
// 008e6826  8d4c242c             lea ecx, [esp + 0x2c]
// 008e682a  889ee1000000         mov byte ptr [esi + 0xe1], bl
// 008e6830  e8fb49f6ff           call 0x84b230
// 008e6835  8b542454             mov edx, dword ptr [esp + 0x54]
// 008e6839  50                   push eax
// 008e683a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008e6840  684b0f0010           push 0x10000f4b
// 008e6845  53                   push ebx
// 008e6846  8bcf                 mov ecx, edi
// 008e6848  ffd0                 call eax
// 008e684a  85c0                 test eax, eax
// 008e684c  74a3                 je 0x8e67f1
// 008e684e  8d4c2414             lea ecx, [esp + 0x14]
// 008e6852  89ae9c020000         mov dword ptr [esi + 0x29c], ebp
// 008e6858  e8b3d7f0ff           call 0x7f4010
// 008e685d  6a01                 push 1
// 008e685f  53                   push ebx
// 008e6860  6a09                 push 9
// 008e6862  6a0f                 push 0xf
// 008e6864  6a10                 push 0x10
// 008e6866  8d4c2428             lea ecx, [esp + 0x28]
// 008e686a  c644245001           mov byte ptr [esp + 0x50], 1
// 008e686f  e896d7f0ff           call 0x7f400a
// 008e6874  895c2420             mov dword ptr [esp + 0x20], ebx
// 008e6878  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 008e6880  c644243c02           mov byte ptr [esp + 0x3c], 2
// 008e6885  e81680f8ff           call 0x86e8a0
// 008e688a  8b10                 mov edx, dword ptr [eax]
// 008e688c  8b5214               mov edx, dword ptr [edx + 0x14]
// 008e688f  6856240000           push 0x2456
// 008e6894  8d4c2420             lea ecx, [esp + 0x20]
// 008e6898  51                   push ecx
// 008e6899  8bc8                 mov ecx, eax
// 008e689b  ffd2                 call edx
// 008e689d  68ff00ff00           push 0xff00ff
// 008e68a2  8d442420             lea eax, [esp + 0x20]
// 008e68a6  50                   push eax
// 008e68a7  8d4c241c             lea ecx, [esp + 0x1c]
// 008e68ab  e890c9b2ff           call 0x413240
// 008e68b0  53                   push ebx
// 008e68b1  8d4c2418             lea ecx, [esp + 0x18]
// 008e68b5  e88635f2ff           call 0x809e40
// 008e68ba  50                   push eax
// 008e68bb  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 008e68c1  e8aaf00000           call 0x8f5970
// 008e68c6  6a01                 push 1
// 008e68c8  8d4c2418             lea ecx, [esp + 0x18]
// 008e68cc  e86f35f2ff           call 0x809e40
// 008e68d1  50                   push eax
// 008e68d2  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 008e68d8  e893f00000           call 0x8f5970
// 008e68dd  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 008e68e3  8b8eac020000         mov ecx, dword ptr [esi + 0x2ac]
// 008e68e9  8b1f                 mov ebx, dword ptr [edi]
// 008e68eb  6a01                 push 1
// 008e68ed  50                   push eax
// 008e68ee  ba10000000           mov edx, 0x10
// 008e68f3  51                   push ecx
// 008e68f4  8d6aff               lea ebp, [edx - 1]
// 008e68f7  55                   push ebp
// 008e68f8  52                   push edx
// 008e68f9  8b9358010000         mov edx, dword ptr [ebx + 0x158]
// 008e68ff  8bcf                 mov ecx, edi
// 008e6901  ffd2                 call edx
// 008e6903  8d4c2414             lea ecx, [esp + 0x14]
// 008e6907  e88e030400           call 0x926c9a
// 008e690c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e690f  6a00                 push 0
// 008e6911  6a0a                 push 0xa
// 008e6913  6a01                 push 1
// 008e6915  50                   push eax
// 008e6916  ff1558cc9800         call dword ptr [0x98cc58]
// 008e691c  8d4c241c             lea ecx, [esp + 0x1c]
// 008e6920  c644243c01           mov byte ptr [esp + 0x3c], 1
// 008e6925  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 008e692d  e8fe88b2ff           call 0x40f230
// 008e6932  8d4c2414             lea ecx, [esp + 0x14]
// 008e6936  c644243c00           mov byte ptr [esp + 0x3c], 0
// 008e693b  e8b2d6f0ff           call 0x7f3ff2
// 008e6940  8d4c2448             lea ecx, [esp + 0x48]
// 008e6944  ff15c0de9800         call dword ptr [0x98dec0]
// 008e694a  8d45f2               lea eax, [ebp - 0xe]
// 008e694d  e9abfeffff           jmp 0x8e67fd
// copied from an identical function in another client (function ?Create@CXTCaptionPopupWnd@@UAEHABVCRect@@PAVCWnd@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp