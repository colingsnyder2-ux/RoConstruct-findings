// roc 2008-06 005ce6e0  unit: RBX::Camera  size: 640 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce6e0
//
// 005ce6e0  81ec8c000000         sub esp, 0x8c
// 005ce6e6  53                   push ebx
// 005ce6e7  56                   push esi
// 005ce6e8  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 005ce6ef  803e00               cmp byte ptr [esi], 0
// 005ce6f2  8bd9                 mov ebx, ecx
// 005ce6f4  7534                 jne 0x5ce72a
// 005ce6f6  807e0100             cmp byte ptr [esi + 1], 0
// 005ce6fa  752e                 jne 0x5ce72a
// 005ce6fc  807e0200             cmp byte ptr [esi + 2], 0
// 005ce700  7528                 jne 0x5ce72a
// 005ce702  807e0300             cmp byte ptr [esi + 3], 0
// 005ce706  7522                 jne 0x5ce72a
// 005ce708  807e0400             cmp byte ptr [esi + 4], 0
// 005ce70c  751c                 jne 0x5ce72a
// 005ce70e  807e0500             cmp byte ptr [esi + 5], 0
// 005ce712  7516                 jne 0x5ce72a
// 005ce714  807e0600             cmp byte ptr [esi + 6], 0
// 005ce718  7510                 jne 0x5ce72a
// 005ce71a  807e0700             cmp byte ptr [esi + 7], 0
// 005ce71e  750a                 jne 0x5ce72a
// 005ce720  807e0800             cmp byte ptr [esi + 8], 0
// 005ce724  0f842b020000         je 0x5ce955
// 005ce72a  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005ce731  d90534c48100         fld dword ptr [0x81c434]
// 005ce737  83f878               cmp eax, 0x78
// 005ce73a  d95c2414             fstp dword ptr [esp + 0x14]
// 005ce73e  7e08                 jle 0x5ce748
// 005ce740  d90540ca8200         fld dword ptr [0x82ca40]
// 005ce746  eb0b                 jmp 0x5ce753
// 005ce748  83f83c               cmp eax, 0x3c
// 005ce74b  7e0a                 jle 0x5ce757
// 005ce74d  d9056c6e8200         fld dword ptr [0x826e6c]
// 005ce753  d95c2414             fstp dword ptr [esp + 0x14]
// 005ce757  8d442428             lea eax, [esp + 0x28]
// 005ce75b  50                   push eax
// 005ce75c  e89fc7e8ff           call 0x45af00
// 005ce761  d905608b8200         fld dword ptr [0x828b60]
// 005ce767  6a02                 push 2
// 005ce769  d95c2428             fstp dword ptr [esp + 0x28]
// 005ce76d  8d8c248c000000       lea ecx, [esp + 0x8c]
// 005ce774  51                   push ecx
// 005ce775  8d4c2430             lea ecx, [esp + 0x30]
// 005ce779  e8c24af4ff           call 0x513240
// 005ce77e  d900                 fld dword ptr [eax]
// 005ce780  d9442424             fld dword ptr [esp + 0x24]
// 005ce784  6a00                 push 0
// 005ce786  dcc9                 fmul st(1), st(0)
// 005ce788  8d54241c             lea edx, [esp + 0x1c]
// 005ce78c  d9c9                 fxch st(1)
// 005ce78e  52                   push edx
// 005ce78f  8d4c2430             lea ecx, [esp + 0x30]
// 005ce793  d95c2410             fstp dword ptr [esp + 0x10]
// 005ce797  d94004               fld dword ptr [eax + 4]
// 005ce79a  d8c9                 fmul st(1)
// 005ce79c  d95c2414             fstp dword ptr [esp + 0x14]
// 005ce7a0  d84808               fmul dword ptr [eax + 8]
// 005ce7a3  d95c2418             fstp dword ptr [esp + 0x18]
// 005ce7a7  e8944af4ff           call 0x513240
// 005ce7ac  803e00               cmp byte ptr [esi], 0
// 005ce7af  d9ee                 fldz 
// 005ce7b1  d9c0                 fld st(0)
// 005ce7b3  d9c1                 fld st(1)
// 005ce7b5  750a                 jne 0x5ce7c1
// 005ce7b7  807e0400             cmp byte ptr [esi + 4], 0
// 005ce7bb  0f849a000000         je 0x5ce85b
// 005ce7c1  ddd9                 fstp st(1)
// 005ce7c3  ddd8                 fstp st(0)
// 005ce7c5  ddd8                 fstp st(0)
// 005ce7c7  d9442408             fld dword ptr [esp + 8]
// 005ce7cb  d9442414             fld dword ptr [esp + 0x14]
// 005ce7cf  dcc9                 fmul st(1), st(0)
// 005ce7d1  d944240c             fld dword ptr [esp + 0xc]
// 005ce7d5  d8c9                 fmul st(1)
// 005ce7d7  d9442410             fld dword ptr [esp + 0x10]
// 005ce7db  d8ca                 fmul st(2)
// 005ce7dd  d9cb                 fxch st(3)
// 005ce7df  d9ca                 fxch st(2)
// 005ce7e1  807e0100             cmp byte ptr [esi + 1], 0
// 005ce7e5  7506                 jne 0x5ce7ed
// 005ce7e7  807e0500             cmp byte ptr [esi + 5], 0
// 005ce7eb  7422                 je 0x5ce80f
// 005ce7ed  d9442408             fld dword ptr [esp + 8]
// 005ce7f1  d8c9                 fmul st(1)
// 005ce7f3  d944240c             fld dword ptr [esp + 0xc]
// 005ce7f7  d8ca                 fmul st(2)
// 005ce7f9  d9442410             fld dword ptr [esp + 0x10]
// 005ce7fd  d8cb                 fmul st(3)
// 005ce7ff  d9cd                 fxch st(5)
// 005ce801  dee2                 fsubrp st(2)
// 005ce803  deeb                 fsubp st(3)
// 005ce805  d9cc                 fxch st(4)
// 005ce807  dee3                 fsubrp st(3)
// 005ce809  d9ca                 fxch st(2)
// 005ce80b  d9cb                 fxch st(3)
// 005ce80d  d9ca                 fxch st(2)
// 005ce80f  807e0300             cmp byte ptr [esi + 3], 0
// 005ce813  d9442420             fld dword ptr [esp + 0x20]
// 005ce817  7506                 jne 0x5ce81f
// 005ce819  807e0700             cmp byte ptr [esi + 7], 0
// 005ce81d  7418                 je 0x5ce837
// 005ce81f  d9442418             fld dword ptr [esp + 0x18]
// 005ce823  d8ca                 fmul st(2)
// 005ce825  d944241c             fld dword ptr [esp + 0x1c]
// 005ce829  d8cb                 fmul st(3)
// 005ce82b  d9c2                 fld st(2)
// 005ce82d  d8cc                 fmul st(4)
// 005ce82f  d9ca                 fxch st(2)
// 005ce831  dec6                 faddp st(6)
// 005ce833  dec4                 faddp st(4)
// 005ce835  dec5                 faddp st(5)
// 005ce837  807e0200             cmp byte ptr [esi + 2], 0
// 005ce83b  7506                 jne 0x5ce843
// 005ce83d  807e0600             cmp byte ptr [esi + 6], 0
// 005ce841  741e                 je 0x5ce861
// 005ce843  d9442418             fld dword ptr [esp + 0x18]
// 005ce847  d8ca                 fmul st(2)
// 005ce849  d944241c             fld dword ptr [esp + 0x1c]
// 005ce84d  d8cb                 fmul st(3)
// 005ce84f  d9ca                 fxch st(2)
// 005ce851  decb                 fmulp st(3)
// 005ce853  deec                 fsubp st(4)
// 005ce855  deea                 fsubp st(2)
// 005ce857  deeb                 fsubp st(3)
// 005ce859  eb0a                 jmp 0x5ce865
// 005ce85b  d9442414             fld dword ptr [esp + 0x14]
// 005ce85f  eb80                 jmp 0x5ce7e1
// 005ce861  ddd9                 fstp st(1)
// 005ce863  ddd8                 fstp st(0)
// 005ce865  83bbd401000000       cmp dword ptr [ebx + 0x1d4], 0
// 005ce86c  d944244c             fld dword ptr [esp + 0x4c]
// 005ce870  dec2                 faddp st(2)
// 005ce872  d9c9                 fxch st(1)
// 005ce874  d95c244c             fstp dword ptr [esp + 0x4c]
// 005ce878  d8442450             fadd dword ptr [esp + 0x50]
// 005ce87c  d95c2450             fstp dword ptr [esp + 0x50]
// 005ce880  d8442454             fadd dword ptr [esp + 0x54]
// 005ce884  d95c2454             fstp dword ptr [esp + 0x54]
// 005ce888  742a                 je 0x5ce8b4
// 005ce88a  68b09a9700           push 0x979ab0
// 005ce88f  8bcb                 mov ecx, ebx
// 005ce891  c783d401000000000000 mov dword ptr [ebx + 0x1d4], 0
// 005ce89b  e860f2e3ff           call 0x40db00
// 005ce8a0  8bcb                 mov ecx, ebx
// 005ce8a2  e8a9d6ffff           call 0x5cbf50
// 005ce8a7  85c0                 test eax, eax
// 005ce8a9  7409                 je 0x5ce8b4
// 005ce8ab  8b10                 mov edx, dword ptr [eax]
// 005ce8ad  8bc8                 mov ecx, eax
// 005ce8af  8b420c               mov eax, dword ptr [edx + 0xc]
// 005ce8b2  ffd0                 call eax
// 005ce8b4  d944244c             fld dword ptr [esp + 0x4c]
// 005ce8b8  8d8374010000         lea eax, [ebx + 0x174]
// 005ce8be  57                   push edi
// 005ce8bf  8bf8                 mov edi, eax
// 005ce8c1  b909000000           mov ecx, 9
// 005ce8c6  8d74242c             lea esi, [esp + 0x2c]
// 005ce8ca  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ce8cc  d95824               fstp dword ptr [eax + 0x24]
// 005ce8cf  d9442454             fld dword ptr [esp + 0x54]
// 005ce8d3  d95828               fstp dword ptr [eax + 0x28]
// 005ce8d6  d9442458             fld dword ptr [esp + 0x58]
// 005ce8da  d9582c               fstp dword ptr [eax + 0x2c]
// 005ce8dd  8bcb                 mov ecx, ebx
// 005ce8df  e88cf6ffff           call 0x5cdf70
// 005ce8e4  d944240c             fld dword ptr [esp + 0xc]
// 005ce8e8  d905f0228200         fld dword ptr [0x8222f0]
// 005ce8ee  dcc9                 fmul st(1), st(0)
// 005ce8f0  d9442410             fld dword ptr [esp + 0x10]
// 005ce8f4  d8c9                 fmul st(1)
// 005ce8f6  d9442414             fld dword ptr [esp + 0x14]
// 005ce8fa  deca                 fmulp st(2)
// 005ce8fc  d9ca                 fxch st(2)
// 005ce8fe  d8442450             fadd dword ptr [esp + 0x50]
// 005ce902  d95c240c             fstp dword ptr [esp + 0xc]
// 005ce906  d9c9                 fxch st(1)
// 005ce908  d8442454             fadd dword ptr [esp + 0x54]
// 005ce90c  d95c2410             fstp dword ptr [esp + 0x10]
// 005ce910  d8442458             fadd dword ptr [esp + 0x58]
// 005ce914  d95c2414             fstp dword ptr [esp + 0x14]
// 005ce918  e80355f4ff           call 0x513e20
// 005ce91d  50                   push eax
// 005ce91e  8d4c2460             lea ecx, [esp + 0x60]
// 005ce922  e8f948f4ff           call 0x513220
// 005ce927  d944240c             fld dword ptr [esp + 0xc]
// 005ce92b  d99c2480000000       fstp dword ptr [esp + 0x80]
// 005ce932  8d4c245c             lea ecx, [esp + 0x5c]
// 005ce936  d9442410             fld dword ptr [esp + 0x10]
// 005ce93a  51                   push ecx
// 005ce93b  d99c2488000000       fstp dword ptr [esp + 0x88]
// 005ce942  8bcb                 mov ecx, ebx
// 005ce944  d9442418             fld dword ptr [esp + 0x18]
// 005ce948  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 005ce94f  e8acf5ffff           call 0x5cdf00
// 005ce954  5f                   pop edi
// 005ce955  5e                   pop esi
// 005ce956  5b                   pop ebx
// 005ce957  81c48c000000         add esp, 0x8c
// 005ce95d  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?doFly@Camera@RBX@@QAEXABVNavKeys@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
