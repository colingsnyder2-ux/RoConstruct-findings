// roc 2008-06 00506890  unit: RBX::Render::RenderScene  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506890
//
// 00506890  55                   push ebp
// 00506891  8bec                 mov ebp, esp
// 00506893  83e4f8               and esp, 0xfffffff8
// 00506896  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00506899  83ec64               sub esp, 0x64
// 0050689c  53                   push ebx
// 0050689d  56                   push esi
// 0050689e  57                   push edi
// 0050689f  8b7d08               mov edi, dword ptr [ebp + 8]
// 005068a2  3bf8                 cmp edi, eax
// 005068a4  0f84af010000         je 0x506a59
// 005068aa  83c750               add edi, 0x50
// 005068ad  897c2414             mov dword ptr [esp + 0x14], edi
// 005068b1  3bf8                 cmp edi, eax
// 005068b3  0f84a0010000         je 0x506a59
// 005068b9  8d5fb0               lea ebx, [edi - 0x50]
// 005068bc  895c2410             mov dword ptr [esp + 0x10], ebx
// 005068c0  57                   push edi
// 005068c1  8d4c2424             lea ecx, [esp + 0x24]
// 005068c5  8bf7                 mov esi, edi
// 005068c7  e88413f7ff           call 0x477c50
// 005068cc  8b4508               mov eax, dword ptr [ebp + 8]
// 005068cf  50                   push eax
// 005068d0  8d4c2424             lea ecx, [esp + 0x24]
// 005068d4  51                   push ecx
// 005068d5  ff5510               call dword ptr [ebp + 0x10]
// 005068d8  83c408               add esp, 8
// 005068db  84c0                 test al, al
// 005068dd  743e                 je 0x50691d
// 005068df  8b7508               mov esi, dword ptr [ebp + 8]
// 005068e2  c644241800           mov byte ptr [esp + 0x18], 0
// 005068e7  8b542418             mov edx, dword ptr [esp + 0x18]
// 005068eb  52                   push edx
// 005068ec  c644242000           mov byte ptr [esp + 0x20], 0
// 005068f1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005068f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005068f9  50                   push eax
// 005068fa  51                   push ecx
// 005068fb  8d93a0000000         lea edx, [ebx + 0xa0]
// 00506901  52                   push edx
// 00506902  57                   push edi
// 00506903  56                   push esi
// 00506904  e817f1ffff           call 0x505a20
// 00506909  83c418               add esp, 0x18
// 0050690c  8d442420             lea eax, [esp + 0x20]
// 00506910  50                   push eax
// 00506911  8bce                 mov ecx, esi
// 00506913  e88800f7ff           call 0x4769a0
// 00506918  e925010000           jmp 0x506a42
// 0050691d  8d4c2420             lea ecx, [esp + 0x20]
// 00506921  53                   push ebx
// 00506922  51                   push ecx
// 00506923  ff5510               call dword ptr [ebp + 0x10]
// 00506926  83c408               add esp, 8
// 00506929  84c0                 test al, al
// 0050692b  0f8497000000         je 0x5069c8
// 00506931  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00506935  83c718               add edi, 0x18
// 00506938  d903                 fld dword ptr [ebx]
// 0050693a  83ef50               sub edi, 0x50
// 0050693d  d91e                 fstp dword ptr [esi]
// 0050693f  d9473c               fld dword ptr [edi + 0x3c]
// 00506942  d95e04               fstp dword ptr [esi + 4]
// 00506945  d94740               fld dword ptr [edi + 0x40]
// 00506948  d95e08               fstp dword ptr [esi + 8]
// 0050694b  d94744               fld dword ptr [edi + 0x44]
// 0050694e  d95e0c               fstp dword ptr [esi + 0xc]
// 00506951  d94748               fld dword ptr [edi + 0x48]
// 00506954  d95e10               fstp dword ptr [esi + 0x10]
// 00506957  d9474c               fld dword ptr [edi + 0x4c]
// 0050695a  d95e14               fstp dword ptr [esi + 0x14]
// 0050695d  d94750               fld dword ptr [edi + 0x50]
// 00506960  d95e18               fstp dword ptr [esi + 0x18]
// 00506963  dd4758               fld qword ptr [edi + 0x58]
// 00506966  dd5e20               fstp qword ptr [esi + 0x20]
// 00506969  dd4760               fld qword ptr [edi + 0x60]
// 0050696c  dd5e28               fstp qword ptr [esi + 0x28]
// 0050696f  dd4768               fld qword ptr [edi + 0x68]
// 00506972  dd5e30               fstp qword ptr [esi + 0x30]
// 00506975  dd4770               fld qword ptr [edi + 0x70]
// 00506978  dd5e38               fstp qword ptr [esi + 0x38]
// 0050697b  d94778               fld dword ptr [edi + 0x78]
// 0050697e  d95e40               fstp dword ptr [esi + 0x40]
// 00506981  d9477c               fld dword ptr [edi + 0x7c]
// 00506984  d95e44               fstp dword ptr [esi + 0x44]
// 00506987  d98780000000         fld dword ptr [edi + 0x80]
// 0050698d  d95e48               fstp dword ptr [esi + 0x48]
// 00506990  8a9784000000         mov dl, byte ptr [edi + 0x84]
// 00506996  88564c               mov byte ptr [esi + 0x4c], dl
// 00506999  8a8785000000         mov al, byte ptr [edi + 0x85]
// 0050699f  88464d               mov byte ptr [esi + 0x4d], al
// 005069a2  8a8f86000000         mov cl, byte ptr [edi + 0x86]
// 005069a8  884e4e               mov byte ptr [esi + 0x4e], cl
// 005069ab  8bf3                 mov esi, ebx
// 005069ad  83eb50               sub ebx, 0x50
// 005069b0  8d542420             lea edx, [esp + 0x20]
// 005069b4  53                   push ebx
// 005069b5  52                   push edx
// 005069b6  ff5510               call dword ptr [ebp + 0x10]
// 005069b9  83c408               add esp, 8
// 005069bc  84c0                 test al, al
// 005069be  0f8574ffffff         jne 0x506938
// 005069c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005069c8  d9442420             fld dword ptr [esp + 0x20]
// 005069cc  8a44246c             mov al, byte ptr [esp + 0x6c]
// 005069d0  d91e                 fstp dword ptr [esi]
// 005069d2  8a4c246d             mov cl, byte ptr [esp + 0x6d]
// 005069d6  d9442424             fld dword ptr [esp + 0x24]
// 005069da  8a54246e             mov dl, byte ptr [esp + 0x6e]
// 005069de  d95e04               fstp dword ptr [esi + 4]
// 005069e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005069e5  d9442428             fld dword ptr [esp + 0x28]
// 005069e9  d95e08               fstp dword ptr [esi + 8]
// 005069ec  d944242c             fld dword ptr [esp + 0x2c]
// 005069f0  d95e0c               fstp dword ptr [esi + 0xc]
// 005069f3  d9442430             fld dword ptr [esp + 0x30]
// 005069f7  d95e10               fstp dword ptr [esi + 0x10]
// 005069fa  d9442434             fld dword ptr [esp + 0x34]
// 005069fe  d95e14               fstp dword ptr [esi + 0x14]
// 00506a01  d9442438             fld dword ptr [esp + 0x38]
// 00506a05  d95e18               fstp dword ptr [esi + 0x18]
// 00506a08  dd442440             fld qword ptr [esp + 0x40]
// 00506a0c  dd5e20               fstp qword ptr [esi + 0x20]
// 00506a0f  dd442448             fld qword ptr [esp + 0x48]
// 00506a13  dd5e28               fstp qword ptr [esi + 0x28]
// 00506a16  dd442450             fld qword ptr [esp + 0x50]
// 00506a1a  dd5e30               fstp qword ptr [esi + 0x30]
// 00506a1d  dd442458             fld qword ptr [esp + 0x58]
// 00506a21  dd5e38               fstp qword ptr [esi + 0x38]
// 00506a24  d9442460             fld dword ptr [esp + 0x60]
// 00506a28  d95e40               fstp dword ptr [esi + 0x40]
// 00506a2b  d9442464             fld dword ptr [esp + 0x64]
// 00506a2f  d95e44               fstp dword ptr [esi + 0x44]
// 00506a32  d9442468             fld dword ptr [esp + 0x68]
// 00506a36  d95e48               fstp dword ptr [esi + 0x48]
// 00506a39  88464c               mov byte ptr [esi + 0x4c], al
// 00506a3c  884e4d               mov byte ptr [esi + 0x4d], cl
// 00506a3f  88564e               mov byte ptr [esi + 0x4e], dl
// 00506a42  83c750               add edi, 0x50
// 00506a45  83c350               add ebx, 0x50
// 00506a48  897c2414             mov dword ptr [esp + 0x14], edi
// 00506a4c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00506a50  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 00506a53  0f8567feffff         jne 0x5068c0
// 00506a59  5f                   pop edi
// 00506a5a  5e                   pop esi
// 00506a5b  5b                   pop ebx
// 00506a5c  8be5                 mov esp, ebp
// 00506a5e  5d                   pop ebp
// 00506a5f  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Insertion_sort1@PAVGLight@G3D@@P6A_NABV12@0@ZV12@@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
