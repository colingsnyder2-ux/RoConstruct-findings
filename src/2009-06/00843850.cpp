// roc 2009-06 00843850  unit: Ogre::RbxSceneNode  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00843850
//
// 00843850  6aff                 push -1
// 00843852  68f0398800           push 0x8839f0
// 00843857  64a100000000         mov eax, dword ptr fs:[0]
// 0084385d  50                   push eax
// 0084385e  64892500000000       mov dword ptr fs:[0], esp
// 00843865  51                   push ecx
// 00843866  53                   push ebx
// 00843867  56                   push esi
// 00843868  8bf1                 mov esi, ecx
// 0084386a  57                   push edi
// 0084386b  8974240c             mov dword ptr [esp + 0xc], esi
// 0084386f  c706f4489200         mov dword ptr [esi], 0x9248f4
// 00843875  8b4644               mov eax, dword ptr [esi + 0x44]
// 00843878  50                   push eax
// 00843879  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00843881  e80a7ad2ff           call 0x56b290
// 00843886  33db                 xor ebx, ebx
// 00843888  895e44               mov dword ptr [esi + 0x44], ebx
// 0084388b  895e48               mov dword ptr [esi + 0x48], ebx
// 0084388e  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00843891  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00843894  51                   push ecx
// 00843895  c644242006           mov byte ptr [esp + 0x20], 6
// 0084389a  e8f179d2ff           call 0x56b290
// 0084389f  8b3da4e18900         mov edi, dword ptr [0x89e1a4]
// 008438a5  895e38               mov dword ptr [esi + 0x38], ebx
// 008438a8  895e3c               mov dword ptr [esi + 0x3c], ebx
// 008438ab  895e40               mov dword ptr [esi + 0x40], ebx
// 008438ae  8b4634               mov eax, dword ptr [esi + 0x34]
// 008438b1  83c408               add esp, 8
// 008438b4  c644241805           mov byte ptr [esp + 0x18], 5
// 008438b9  3bc3                 cmp eax, ebx
// 008438bb  7424                 je 0x8438e1
// 008438bd  83c004               add eax, 4
// 008438c0  50                   push eax
// 008438c1  ffd7                 call edi
// 008438c3  85c0                 test eax, eax
// 008438c5  7517                 jne 0x8438de
// 008438c7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008438ca  e8b114c0ff           call 0x444d80
// 008438cf  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008438d2  3bcb                 cmp ecx, ebx
// 008438d4  7408                 je 0x8438de
// 008438d6  8b11                 mov edx, dword ptr [ecx]
// 008438d8  8b02                 mov eax, dword ptr [edx]
// 008438da  6a01                 push 1
// 008438dc  ffd0                 call eax
// 008438de  895e34               mov dword ptr [esi + 0x34], ebx
// 008438e1  8b4630               mov eax, dword ptr [esi + 0x30]
// 008438e4  c644241804           mov byte ptr [esp + 0x18], 4
// 008438e9  3bc3                 cmp eax, ebx
// 008438eb  7424                 je 0x843911
// 008438ed  83c004               add eax, 4
// 008438f0  50                   push eax
// 008438f1  ffd7                 call edi
// 008438f3  85c0                 test eax, eax
// 008438f5  7517                 jne 0x84390e
// 008438f7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008438fa  e88114c0ff           call 0x444d80
// 008438ff  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00843902  3bcb                 cmp ecx, ebx
// 00843904  7408                 je 0x84390e
// 00843906  8b11                 mov edx, dword ptr [ecx]
// 00843908  8b02                 mov eax, dword ptr [edx]
// 0084390a  6a01                 push 1
// 0084390c  ffd0                 call eax
// 0084390e  895e30               mov dword ptr [esi + 0x30], ebx
// 00843911  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00843914  c644241803           mov byte ptr [esp + 0x18], 3
// 00843919  3bc3                 cmp eax, ebx
// 0084391b  7424                 je 0x843941
// 0084391d  83c004               add eax, 4
// 00843920  50                   push eax
// 00843921  ffd7                 call edi
// 00843923  85c0                 test eax, eax
// 00843925  7517                 jne 0x84393e
// 00843927  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0084392a  e85114c0ff           call 0x444d80
// 0084392f  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00843932  3bcb                 cmp ecx, ebx
// 00843934  7408                 je 0x84393e
// 00843936  8b11                 mov edx, dword ptr [ecx]
// 00843938  8b02                 mov eax, dword ptr [edx]
// 0084393a  6a01                 push 1
// 0084393c  ffd0                 call eax
// 0084393e  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00843941  8b4628               mov eax, dword ptr [esi + 0x28]
// 00843944  c644241802           mov byte ptr [esp + 0x18], 2
// 00843949  3bc3                 cmp eax, ebx
// 0084394b  7424                 je 0x843971
// 0084394d  83c004               add eax, 4
// 00843950  50                   push eax
// 00843951  ffd7                 call edi
// 00843953  85c0                 test eax, eax
// 00843955  7517                 jne 0x84396e
// 00843957  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0084395a  e82114c0ff           call 0x444d80
// 0084395f  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00843962  3bcb                 cmp ecx, ebx
// 00843964  7408                 je 0x84396e
// 00843966  8b11                 mov edx, dword ptr [ecx]
// 00843968  8b02                 mov eax, dword ptr [edx]
// 0084396a  6a01                 push 1
// 0084396c  ffd0                 call eax
// 0084396e  895e28               mov dword ptr [esi + 0x28], ebx
// 00843971  8b4624               mov eax, dword ptr [esi + 0x24]
// 00843974  c644241801           mov byte ptr [esp + 0x18], 1
// 00843979  3bc3                 cmp eax, ebx
// 0084397b  7424                 je 0x8439a1
// 0084397d  83c004               add eax, 4
// 00843980  50                   push eax
// 00843981  ffd7                 call edi
// 00843983  85c0                 test eax, eax
// 00843985  7517                 jne 0x84399e
// 00843987  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0084398a  e8f113c0ff           call 0x444d80
// 0084398f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00843992  3bcb                 cmp ecx, ebx
// 00843994  7408                 je 0x84399e
// 00843996  8b11                 mov edx, dword ptr [ecx]
// 00843998  8b02                 mov eax, dword ptr [edx]
// 0084399a  6a01                 push 1
// 0084399c  ffd0                 call eax
// 0084399e  895e24               mov dword ptr [esi + 0x24], ebx
// 008439a1  6860d14900           push 0x49d160
// 008439a6  6a06                 push 6
// 008439a8  6a04                 push 4
// 008439aa  8d4e0c               lea ecx, [esi + 0xc]
// 008439ad  51                   push ecx
// 008439ae  885c2428             mov byte ptr [esp + 0x28], bl
// 008439b2  e8bf61edff           call 0x719b76
// 008439b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008439bb  5f                   pop edi
// 008439bc  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 008439c2  5e                   pop esi
// 008439c3  5b                   pop ebx
// 008439c4  64890d00000000       mov dword ptr fs:[0], ecx
// 008439cb  83c410               add esp, 0x10
// 008439ce  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
