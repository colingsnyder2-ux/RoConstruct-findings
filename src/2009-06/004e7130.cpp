// roc 2009-06 004e7130  unit: RBX::Network::DirectPhysicsReceiver  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e7130
//
// 004e7130  83ec0c               sub esp, 0xc
// 004e7133  53                   push ebx
// 004e7134  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e7138  55                   push ebp
// 004e7139  56                   push esi
// 004e713a  57                   push edi
// 004e713b  8bf9                 mov edi, ecx
// 004e713d  8b7718               mov esi, dword ptr [edi + 0x18]
// 004e7140  8b4604               mov eax, dword ptr [esi + 4]
// 004e7143  80781100             cmp byte ptr [eax + 0x11], 0
// 004e7147  b101                 mov cl, 1
// 004e7149  884c2410             mov byte ptr [esp + 0x10], cl
// 004e714d  751f                 jne 0x4e716e
// 004e714f  8b13                 mov edx, dword ptr [ebx]
// 004e7151  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004e7154  8bf0                 mov esi, eax
// 004e7156  0f92c1               setb cl
// 004e7159  884c2410             mov byte ptr [esp + 0x10], cl
// 004e715d  84c9                 test cl, cl
// 004e715f  7404                 je 0x4e7165
// 004e7161  8b00                 mov eax, dword ptr [eax]
// 004e7163  eb03                 jmp 0x4e7168
// 004e7165  8b4008               mov eax, dword ptr [eax + 8]
// 004e7168  80781100             cmp byte ptr [eax + 0x11], 0
// 004e716c  74e3                 je 0x4e7151
// 004e716e  8b17                 mov edx, dword ptr [edi]
// 004e7170  8bee                 mov ebp, esi
// 004e7172  896c2418             mov dword ptr [esp + 0x18], ebp
// 004e7176  89542414             mov dword ptr [esp + 0x14], edx
// 004e717a  84c9                 test cl, cl
// 004e717c  7452                 je 0x4e71d0
// 004e717e  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e7181  8b28                 mov ebp, dword ptr [eax]
// 004e7183  85d2                 test edx, edx
// 004e7185  7404                 je 0x4e718b
// 004e7187  3bd2                 cmp edx, edx
// 004e7189  7406                 je 0x4e7191
// 004e718b  ff15ace98900         call dword ptr [0x89e9ac]
// 004e7191  8d4c2414             lea ecx, [esp + 0x14]
// 004e7195  3bf5                 cmp esi, ebp
// 004e7197  752a                 jne 0x4e71c3
// 004e7199  53                   push ebx
// 004e719a  56                   push esi
// 004e719b  6a01                 push 1
// 004e719d  51                   push ecx
// 004e719e  8bcf                 mov ecx, edi
// 004e71a0  e81bf3ffff           call 0x4e64c0
// 004e71a5  5f                   pop edi
// 004e71a6  8bc8                 mov ecx, eax
// 004e71a8  8b11                 mov edx, dword ptr [ecx]
// 004e71aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e71ae  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e71b1  5e                   pop esi
// 004e71b2  5d                   pop ebp
// 004e71b3  894804               mov dword ptr [eax + 4], ecx
// 004e71b6  c6400801             mov byte ptr [eax + 8], 1
// 004e71ba  8910                 mov dword ptr [eax], edx
// 004e71bc  5b                   pop ebx
// 004e71bd  83c40c               add esp, 0xc
// 004e71c0  c20800               ret 8
// 004e71c3  e838791900           call 0x67eb00
// 004e71c8  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004e71cc  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e71d0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004e71d3  3b03                 cmp eax, dword ptr [ebx]
// 004e71d5  7331                 jae 0x4e7208
// 004e71d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e71db  53                   push ebx
// 004e71dc  56                   push esi
// 004e71dd  51                   push ecx
// 004e71de  8d542420             lea edx, [esp + 0x20]
// 004e71e2  52                   push edx
// 004e71e3  8bcf                 mov ecx, edi
// 004e71e5  e8d6f2ffff           call 0x4e64c0
// 004e71ea  5f                   pop edi
// 004e71eb  8bc8                 mov ecx, eax
// 004e71ed  8b11                 mov edx, dword ptr [ecx]
// 004e71ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e71f3  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e71f6  5e                   pop esi
// 004e71f7  5d                   pop ebp
// 004e71f8  894804               mov dword ptr [eax + 4], ecx
// 004e71fb  c6400801             mov byte ptr [eax + 8], 1
// 004e71ff  8910                 mov dword ptr [eax], edx
// 004e7201  5b                   pop ebx
// 004e7202  83c40c               add esp, 0xc
// 004e7205  c20800               ret 8
// 004e7208  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e720c  5f                   pop edi
// 004e720d  5e                   pop esi
// 004e720e  896804               mov dword ptr [eax + 4], ebp
// 004e7211  5d                   pop ebp
// 004e7212  c6400800             mov byte ptr [eax + 8], 0
// 004e7216  8910                 mov dword ptr [eax], edx
// 004e7218  5b                   pop ebx
// 004e7219  83c40c               add esp, 0xc
// 004e721c  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@_N@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
