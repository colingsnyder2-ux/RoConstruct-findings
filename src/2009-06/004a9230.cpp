// from server: 100% by auto
// roc 2009-06 004a9230  unit: G3D::Win32Window  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9230
//
// 004a9230  c1f818               sar eax, 0x18
// 004a9233  8d4fbf               lea ecx, [edi - 0x41]
// 004a9236  2401                 and al, 1
// 004a9238  83f919               cmp ecx, 0x19
// 004a923b  7705                 ja 0x4a9242
// 004a923d  8d5720               lea edx, [edi + 0x20]
// 004a9240  eb60                 jmp 0x4a92a2
// 004a9242  83ff10               cmp edi, 0x10
// 004a9245  7512                 jne 0x4a9259
// 004a9247  33c9                 xor ecx, ecx
// 004a9249  84c0                 test al, al
// 004a924b  0f94c1               sete cl
// 004a924e  81c12f010000         add ecx, 0x12f
// 004a9254  894e08               mov dword ptr [esi + 8], ecx
// 004a9257  eb4c                 jmp 0x4a92a5
// 004a9259  83ff11               cmp edi, 0x11
// 004a925c  750f                 jne 0x4a926d
// 004a925e  33d2                 xor edx, edx
// 004a9260  84c0                 test al, al
// 004a9262  0f94c2               sete dl
// 004a9265  81c231010000         add edx, 0x131
// 004a926b  eb35                 jmp 0x4a92a2
// 004a926d  83ff12               cmp edi, 0x12
// 004a9270  7512                 jne 0x4a9284
// 004a9272  33c9                 xor ecx, ecx
// 004a9274  84c0                 test al, al
// 004a9276  0f94c1               sete cl
// 004a9279  81c133010000         add ecx, 0x133
// 004a927f  894e08               mov dword ptr [esi + 8], ecx
// 004a9282  eb21                 jmp 0x4a92a5
// 004a9284  85ff                 test edi, edi
// 004a9286  7f04                 jg 0x4a928c
// 004a9288  33c0                 xor eax, eax
// 004a928a  eb0f                 jmp 0x4a929b
// 004a928c  81ff43010000         cmp edi, 0x143
// 004a9292  b843010000           mov eax, 0x143
// 004a9297  7d02                 jge 0x4a929b
// 004a9299  8bc7                 mov eax, edi
// 004a929b  8b1485d8c9a300       mov edx, dword ptr [eax*4 + 0xa3c9d8]
// 004a92a2  895608               mov dword ptr [esi + 8], edx
// 004a92a5  6a00                 push 0
// 004a92a7  57                   push edi
// 004a92a8  ff1568ed8900         call dword ptr [0x89ed68]
// 004a92ae  68f0cea300           push 0xa3cef0
// 004a92b3  884604               mov byte ptr [esi + 4], al
// 004a92b6  ff156ced8900         call dword ptr [0x89ed6c]
// 004a92bc  b980000000           mov ecx, 0x80
// 004a92c1  33c0                 xor eax, eax
// 004a92c3  840d90cfa300         test byte ptr [0xa3cf90], cl
// 004a92c9  7403                 je 0x4a92ce
// 004a92cb  8d4181               lea eax, [ecx - 0x7f]
// 004a92ce  840d91cfa300         test byte ptr [0xa3cf91], cl
// 004a92d4  7403                 je 0x4a92d9
// 004a92d6  83c802               or eax, 2
// 004a92d9  840d92cfa300         test byte ptr [0xa3cf92], cl
// 004a92df  7403                 je 0x4a92e4
// 004a92e1  83c840               or eax, 0x40
// 004a92e4  840d93cfa300         test byte ptr [0xa3cf93], cl
// 004a92ea  7402                 je 0x4a92ee
// 004a92ec  0bc1                 or eax, ecx
// 004a92ee  840d94cfa300         test byte ptr [0xa3cf94], cl
// 004a92f4  7405                 je 0x4a92fb
// 004a92f6  0d00010000           or eax, 0x100
// 004a92fb  840d95cfa300         test byte ptr [0xa3cf95], cl
// 004a9301  7405                 je 0x4a9308
// 004a9303  0d00020000           or eax, 0x200
// 004a9308  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 004a930c  6a00                 push 0
// 004a930e  6a01                 push 1
// 004a9310  89460c               mov dword ptr [esi + 0xc], eax
// 004a9313  8d4610               lea eax, [esi + 0x10]
// 004a9316  50                   push eax
// 004a9317  68f0cea300           push 0xa3cef0
// 004a931c  51                   push ecx
// 004a931d  57                   push edi
// 004a931e  ff1570ed8900         call dword ptr [0x89ed70]
// 004a9324  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
