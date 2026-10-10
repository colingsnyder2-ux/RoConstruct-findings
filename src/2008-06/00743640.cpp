// roc 2008-06 00743640  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 678 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743640
//
// 00743640  83ec40               sub esp, 0x40
// 00743643  53                   push ebx
// 00743644  55                   push ebp
// 00743645  56                   push esi
// 00743646  8bf1                 mov esi, ecx
// 00743648  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0074364e  8b01                 mov eax, dword ptr [ecx]
// 00743650  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00743656  57                   push edi
// 00743657  6a00                 push 0
// 00743659  6aff                 push -1
// 0074365b  ffd2                 call edx
// 0074365d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743663  8b01                 mov eax, dword ptr [ecx]
// 00743665  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0074366b  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00743671  6a00                 push 0
// 00743673  52                   push edx
// 00743674  ffd0                 call eax
// 00743676  8d4c2424             lea ecx, [esp + 0x24]
// 0074367a  51                   push ecx
// 0074367b  8bce                 mov ecx, esi
// 0074367d  e8aeedffff           call 0x742430
// 00743682  8b442428             mov eax, dword ptr [esp + 0x28]
// 00743686  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0074368a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0074368e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00743692  89442418             mov dword ptr [esp + 0x18], eax
// 00743696  03c3                 add eax, ebx
// 00743698  99                   cdq 
// 00743699  2bc2                 sub eax, edx
// 0074369b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0074369f  d1f8                 sar eax, 1
// 007436a1  89442420             mov dword ptr [esp + 0x20], eax
// 007436a5  89442428             mov dword ptr [esp + 0x28], eax
// 007436a9  8b442454             mov eax, dword ptr [esp + 0x54]
// 007436ad  52                   push edx
// 007436ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 007436b2  894c2428             mov dword ptr [esp + 0x28], ecx
// 007436b6  50                   push eax
// 007436b7  8d4c241c             lea ecx, [esp + 0x1c]
// 007436bb  51                   push ecx
// 007436bc  897c2428             mov dword ptr [esp + 0x28], edi
// 007436c0  897c2438             mov dword ptr [esp + 0x38], edi
// 007436c4  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007436c8  ff152c2d8000         call dword ptr [0x802d2c]
// 007436ce  8d4c2414             lea ecx, [esp + 0x14]
// 007436d2  85c0                 test eax, eax
// 007436d4  7504                 jne 0x7436da
// 007436d6  8d4c2424             lea ecx, [esp + 0x24]
// 007436da  8b11                 mov edx, dword ptr [ecx]
// 007436dc  89542440             mov dword ptr [esp + 0x40], edx
// 007436e0  8b5104               mov edx, dword ptr [ecx + 4]
// 007436e3  89542444             mov dword ptr [esp + 0x44], edx
// 007436e7  8b5108               mov edx, dword ptr [ecx + 8]
// 007436ea  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007436ed  89542448             mov dword ptr [esp + 0x48], edx
// 007436f1  33d2                 xor edx, edx
// 007436f3  85c0                 test eax, eax
// 007436f5  0f95c2               setne dl
// 007436f8  f7d8                 neg eax
// 007436fa  1bc0                 sbb eax, eax
// 007436fc  83c004               add eax, 4
// 007436ff  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00743703  6a00                 push 0
// 00743705  8bce                 mov ecx, esi
// 00743707  8d5412ff             lea edx, [edx + edx - 1]
// 0074370b  8bea                 mov ebp, edx
// 0074370d  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00743713  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00743719  e8b281f6ff           call 0x6ab8d0
// 0074371e  8b06                 mov eax, dword ptr [esi]
// 00743720  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 00743726  55                   push ebp
// 00743727  6a01                 push 1
// 00743729  8bce                 mov ecx, esi
// 0074372b  ffd2                 call edx
// 0074372d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00743733  8b4020               mov eax, dword ptr [eax + 0x20]
// 00743736  50                   push eax
// 00743737  ff15a82d8000         call dword ptr [0x802da8]
// 0074373d  50                   push eax
// 0074373e  e89bd4f5ff           call 0x6a0bde
// 00743743  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743749  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0074374c  6a00                 push 0
// 0074374e  6812020000           push 0x212
// 00743753  68b3010000           push 0x1b3
// 00743758  52                   push edx
// 00743759  ff157c2d8000         call dword ptr [0x802d7c]
// 0074375f  8b1de8218000         mov ebx, dword ptr [0x8021e8]
// 00743765  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0074376d  ffd3                 call ebx
// 0074376f  6a00                 push 0
// 00743771  6a00                 push 0
// 00743773  8bf8                 mov edi, eax
// 00743775  6a00                 push 0
// 00743777  8d442430             lea eax, [esp + 0x30]
// 0074377b  50                   push eax
// 0074377c  ff15782c8000         call dword ptr [0x802c78]
// 00743782  8b442428             mov eax, dword ptr [esp + 0x28]
// 00743786  3d02020000           cmp eax, 0x202
// 0074378b  0f84fe000000         je 0x74388f
// 00743791  3d00020000           cmp eax, 0x200
// 00743796  7546                 jne 0x7437de
// 00743798  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074379c  0fb7c8               movzx ecx, ax
// 0074379f  c1e810               shr eax, 0x10
// 007437a2  50                   push eax
// 007437a3  51                   push ecx
// 007437a4  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007437a8  8d4c2448             lea ecx, [esp + 0x48]
// 007437ac  51                   push ecx
// 007437ad  89442464             mov dword ptr [esp + 0x64], eax
// 007437b1  ff152c2d8000         call dword ptr [0x802d2c]
// 007437b7  8b16                 mov edx, dword ptr [esi]
// 007437b9  50                   push eax
// 007437ba  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007437c0  8bce                 mov ecx, esi
// 007437c2  ffd0                 call eax
// 007437c4  85c0                 test eax, eax
// 007437c6  0f84a3000000         je 0x74386f
// 007437cc  ffd3                 call ebx
// 007437ce  6a01                 push 1
// 007437d0  8bce                 mov ecx, esi
// 007437d2  8bf8                 mov edi, eax
// 007437d4  e8f780f6ff           call 0x6ab8d0
// 007437d9  e991000000           jmp 0x74386f
// 007437de  3d13010000           cmp eax, 0x113
// 007437e3  756b                 jne 0x743850
// 007437e5  817c242cb3010000     cmp dword ptr [esp + 0x2c], 0x1b3
// 007437ed  7561                 jne 0x743850
// 007437ef  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007437f6  7430                 je 0x743828
// 007437f8  ffd3                 call ebx
// 007437fa  2bc7                 sub eax, edi
// 007437fc  c1e80a               shr eax, 0xa
// 007437ff  b901000000           mov ecx, 1
// 00743804  83f805               cmp eax, 5
// 00743807  7207                 jb 0x743810
// 00743809  b914000000           mov ecx, 0x14
// 0074380e  eb0a                 jmp 0x74381a
// 00743810  83f802               cmp eax, 2
// 00743813  7205                 jb 0x74381a
// 00743815  b905000000           mov ecx, 5
// 0074381a  8b16                 mov edx, dword ptr [esi]
// 0074381c  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 00743822  55                   push ebp
// 00743823  51                   push ecx
// 00743824  8bce                 mov ecx, esi
// 00743826  ffd0                 call eax
// 00743828  837c241000           cmp dword ptr [esp + 0x10], 0
// 0074382d  7419                 je 0x743848
// 0074382f  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743835  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00743838  6a00                 push 0
// 0074383a  6a64                 push 0x64
// 0074383c  68b3010000           push 0x1b3
// 00743841  52                   push edx
// 00743842  ff157c2d8000         call dword ptr [0x802d7c]
// 00743848  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00743850  8d442424             lea eax, [esp + 0x24]
// 00743854  50                   push eax
// 00743855  ff15c82c8000         call dword ptr [0x802cc8]
// 0074385b  ff15ac2d8000         call dword ptr [0x802dac]
// 00743861  50                   push eax
// 00743862  e877d3f5ff           call 0x6a0bde
// 00743867  3b8600010000         cmp eax, dword ptr [esi + 0x100]
// 0074386d  7520                 jne 0x74388f
// 0074386f  6a00                 push 0
// 00743871  6a00                 push 0
// 00743873  6a00                 push 0
// 00743875  8d4c2430             lea ecx, [esp + 0x30]
// 00743879  51                   push ecx
// 0074387a  ff15782c8000         call dword ptr [0x802c78]
// 00743880  8b442428             mov eax, dword ptr [esp + 0x28]
// 00743884  3d02020000           cmp eax, 0x202
// 00743889  0f8502ffffff         jne 0x743791
// 0074388f  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 00743895  8b4220               mov eax, dword ptr [edx + 0x20]
// 00743898  68b3010000           push 0x1b3
// 0074389d  50                   push eax
// 0074389e  ff151c2e8000         call dword ptr [0x802e1c]
// 007438a4  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 007438ae  ff15b42d8000         call dword ptr [0x802db4]
// 007438b4  6a00                 push 0
// 007438b6  8bce                 mov ecx, esi
// 007438b8  e81380f6ff           call 0x6ab8d0
// 007438bd  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007438c3  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 007438ca  5f                   pop edi
// 007438cb  5e                   pop esi
// 007438cc  5d                   pop ebp
// 007438cd  5b                   pop ebx
// 007438ce  7410                 je 0x7438e0
// 007438d0  8b11                 mov edx, dword ptr [ecx]
// 007438d2  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007438d8  6a00                 push 0
// 007438da  6a01                 push 1
// 007438dc  6a00                 push 0
// 007438de  ffd0                 call eax
// 007438e0  83c440               add esp, 0x40
// 007438e3  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?TrackSpinButton@CXTPControlEdit@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
