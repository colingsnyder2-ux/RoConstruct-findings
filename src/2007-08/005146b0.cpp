// from server: 100% by auto
// roc 2007-08 005146b0  unit: G3D::_internal::DialogTemplate  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005146b0
//
// 005146b0  57                   push edi
// 005146b1  8b7c2408             mov edi, dword ptr [esp + 8]
// 005146b5  85ff                 test edi, edi
// 005146b7  0f84ec000000         je 0x5147a9
// 005146bd  56                   push esi
// 005146be  8b742410             mov esi, dword ptr [esp + 0x10]
// 005146c2  85f6                 test esi, esi
// 005146c4  0f84de000000         je 0x5147a8
// 005146ca  53                   push ebx
// 005146cb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005146cf  85db                 test ebx, ebx
// 005146d1  0f84d0000000         je 0x5147a7
// 005146d7  837c242000           cmp dword ptr [esp + 0x20], 0
// 005146dc  0f84c5000000         je 0x5147a7
// 005146e2  8bc3                 mov eax, ebx
// 005146e4  8d5001               lea edx, [eax + 1]
// 005146e7  8a08                 mov cl, byte ptr [eax]
// 005146e9  83c001               add eax, 1
// 005146ec  84c9                 test cl, cl
// 005146ee  75f7                 jne 0x5146e7
// 005146f0  2bc2                 sub eax, edx
// 005146f2  55                   push ebp
// 005146f3  83c001               add eax, 1
// 005146f6  50                   push eax
// 005146f7  57                   push edi
// 005146f8  e803a60000           call 0x51ed00
// 005146fd  8be8                 mov ebp, eax
// 005146ff  83c408               add esp, 8
// 00514702  85ed                 test ebp, ebp
// 00514704  7513                 jne 0x514719
// 00514706  68a0147a00           push 0x7a14a0
// 0051470b  57                   push edi
// 0051470c  e87fa20000           call 0x51e990
// 00514711  83c408               add esp, 8
// 00514714  5d                   pop ebp
// 00514715  5b                   pop ebx
// 00514716  5e                   pop esi
// 00514717  5f                   pop edi
// 00514718  c3                   ret 
// 00514719  8bd5                 mov edx, ebp
// 0051471b  8bc3                 mov eax, ebx
// 0051471d  2bd3                 sub edx, ebx
// 0051471f  90                   nop 
// 00514720  8a08                 mov cl, byte ptr [eax]
// 00514722  880c02               mov byte ptr [edx + eax], cl
// 00514725  83c001               add eax, 1
// 00514728  84c9                 test cl, cl
// 0051472a  75f4                 jne 0x514720
// 0051472c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00514730  53                   push ebx
// 00514731  57                   push edi
// 00514732  e8c9a50000           call 0x51ed00
// 00514737  8bf8                 mov edi, eax
// 00514739  83c408               add esp, 8
// 0051473c  85ff                 test edi, edi
// 0051473e  751e                 jne 0x51475e
// 00514740  8b742414             mov esi, dword ptr [esp + 0x14]
// 00514744  55                   push ebp
// 00514745  56                   push esi
// 00514746  e885a50000           call 0x51ecd0
// 0051474b  6870147a00           push 0x7a1470
// 00514750  56                   push esi
// 00514751  e83aa20000           call 0x51e990
// 00514756  83c410               add esp, 0x10
// 00514759  5d                   pop ebp
// 0051475a  5b                   pop ebx
// 0051475b  5e                   pop esi
// 0051475c  5f                   pop edi
// 0051475d  c3                   ret 
// 0051475e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00514762  53                   push ebx
// 00514763  50                   push eax
// 00514764  57                   push edi
// 00514765  e8e2c51100           call 0x630d4c
// 0051476a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051476e  6a00                 push 0
// 00514770  6a10                 push 0x10
// 00514772  56                   push esi
// 00514773  51                   push ecx
// 00514774  e8f7070000           call 0x514f70
// 00514779  8a54243c             mov dl, byte ptr [esp + 0x3c]
// 0051477d  838eb800000010       or dword ptr [esi + 0xb8], 0x10
// 00514784  83c41c               add esp, 0x1c
// 00514787  814e0800100000       or dword ptr [esi + 8], 0x1000
// 0051478e  89aec4000000         mov dword ptr [esi + 0xc4], ebp
// 00514794  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0051479a  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 005147a0  8896d0000000         mov byte ptr [esi + 0xd0], dl
// 005147a6  5d                   pop ebp
// 005147a7  5b                   pop ebx
// 005147a8  5e                   pop esi
// 005147a9  5f                   pop edi
// 005147aa  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_iCCP)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c
