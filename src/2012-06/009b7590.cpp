// roc 2012-06 009b7590  unit: CInstanceRecord::CNameItem  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7590
//
// 009b7590  6aff                 push -1
// 009b7592  68ebeaad00           push 0xadeaeb
// 009b7597  64a100000000         mov eax, dword ptr fs:[0]
// 009b759d  50                   push eax
// 009b759e  83ec34               sub esp, 0x34
// 009b75a1  53                   push ebx
// 009b75a2  55                   push ebp
// 009b75a3  56                   push esi
// 009b75a4  57                   push edi
// 009b75a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b75aa  33c4                 xor eax, esp
// 009b75ac  50                   push eax
// 009b75ad  8d442448             lea eax, [esp + 0x48]
// 009b75b1  64a300000000         mov dword ptr fs:[0], eax
// 009b75b7  894c2414             mov dword ptr [esp + 0x14], ecx
// 009b75bb  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 009b75bf  8b4704               mov eax, dword ptr [edi + 4]
// 009b75c2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 009b75c8  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 009b75cb  33c0                 xor eax, eax
// 009b75cd  8d7714               lea esi, [edi + 0x14]
// 009b75d0  894c2458             mov dword ptr [esp + 0x58], ecx
// 009b75d4  89442434             mov dword ptr [esp + 0x34], eax
// 009b75d8  c744243028e1c000     mov dword ptr [esp + 0x30], 0xc0e128
// 009b75e0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009b75e3  8b5608               mov edx, dword ptr [esi + 8]
// 009b75e6  8b1e                 mov ebx, dword ptr [esi]
// 009b75e8  89442450             mov dword ptr [esp + 0x50], eax
// 009b75ec  8b4604               mov eax, dword ptr [esi + 4]
// 009b75ef  51                   push ecx
// 009b75f0  52                   push edx
// 009b75f1  48                   dec eax
// 009b75f2  50                   push eax
// 009b75f3  53                   push ebx
// 009b75f4  ff15c820b200         call dword ptr [0xb220c8]
// 009b75fa  50                   push eax
// 009b75fb  8d4c2434             lea ecx, [esp + 0x34]
// 009b75ff  e8d4b0fcff           call 0x9826d8
// 009b7604  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 009b7608  750c                 jne 0x9b7616
// 009b760a  8d542430             lea edx, [esp + 0x30]
// 009b760e  52                   push edx
// 009b760f  8bcd                 mov ecx, ebp
// 009b7611  e8d8210e00           call 0xa997ee
// 009b7616  6a40                 push 0x40
// 009b7618  e8fdaafcff           call 0x98211a
// 009b761d  8bd8                 mov ebx, eax
// 009b761f  83c404               add esp, 4
// 009b7622  895c2424             mov dword ptr [esp + 0x24], ebx
// 009b7626  c644245001           mov byte ptr [esp + 0x50], 1
// 009b762b  85db                 test ebx, ebx
// 009b762d  7436                 je 0x9b7665
// 009b762f  8bcb                 mov ecx, ebx
// 009b7631  e84e1f0e00           call 0xa99584
// 009b7636  8d4b2c               lea ecx, [ebx + 0x2c]
// 009b7639  c7038402c100         mov dword ptr [ebx], 0xc10284
// 009b763f  ff158447b200         call dword ptr [0xb24784]
// 009b7645  33c9                 xor ecx, ecx
// 009b7647  83c8ff               or eax, 0xffffffff
// 009b764a  894b20               mov dword ptr [ebx + 0x20], ecx
// 009b764d  894324               mov dword ptr [ebx + 0x24], eax
// 009b7650  894328               mov dword ptr [ebx + 0x28], eax
// 009b7653  894330               mov dword ptr [ebx + 0x30], eax
// 009b7656  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 009b765d  894b38               mov dword ptr [ebx + 0x38], ecx
// 009b7660  89433c               mov dword ptr [ebx + 0x3c], eax
// 009b7663  eb02                 jmp 0x9b7667
// 009b7665  33db                 xor ebx, ebx
// 009b7667  8b570c               mov edx, dword ptr [edi + 0xc]
// 009b766a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b766e  8b01                 mov eax, dword ptr [ecx]
// 009b7670  8b406c               mov eax, dword ptr [eax + 0x6c]
// 009b7673  52                   push edx
// 009b7674  8d54241c             lea edx, [esp + 0x1c]
// 009b7678  52                   push edx
// 009b7679  c644245800           mov byte ptr [esp + 0x58], 0
// 009b767e  ffd0                 call eax
// 009b7680  8d4b2c               lea ecx, [ebx + 0x2c]
// 009b7683  50                   push eax
// 009b7684  c644245402           mov byte ptr [esp + 0x54], 2
// 009b7689  ff152045b200         call dword ptr [0xb24520]
// 009b768f  8d4c2418             lea ecx, [esp + 0x18]
// 009b7693  c644245000           mov byte ptr [esp + 0x50], 0
// 009b7698  ff15d047b200         call dword ptr [0xb247d0]
// 009b769e  8b4f08               mov ecx, dword ptr [edi + 8]
// 009b76a1  8b11                 mov edx, dword ptr [ecx]
// 009b76a3  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 009b76a9  53                   push ebx
// 009b76aa  57                   push edi
// 009b76ab  ffd0                 call eax
// 009b76ad  8b4328               mov eax, dword ptr [ebx + 0x28]
// 009b76b0  83f8ff               cmp eax, -1
// 009b76b3  7409                 je 0x9b76be
// 009b76b5  50                   push eax
// 009b76b6  56                   push esi
// 009b76b7  8bcd                 mov ecx, ebp
// 009b76b9  e8eeb7fcff           call 0x982eac
// 009b76be  8b0e                 mov ecx, dword ptr [esi]
// 009b76c0  894c2424             mov dword ptr [esp + 0x24], ecx
// 009b76c4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 009b76c7  85c9                 test ecx, ecx
// 009b76c9  0f84a3010000         je 0x9b7872
// 009b76cf  e88c0bffff           call 0x9a8260
// 009b76d4  85c0                 test eax, eax
// 009b76d6  0f8496010000         je 0x9b7872
// 009b76dc  8b5708               mov edx, dword ptr [edi + 8]
// 009b76df  8bca                 mov ecx, edx
// 009b76e1  8b01                 mov eax, dword ptr [ecx]
// 009b76e3  89542418             mov dword ptr [esp + 0x18], edx
// 009b76e7  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 009b76ed  ffd2                 call edx
// 009b76ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b76f3  8944241c             mov dword ptr [esp + 0x1c], eax
// 009b76f7  8b01                 mov eax, dword ptr [ecx]
// 009b76f9  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 009b76ff  ffd2                 call edx
// 009b7701  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009b7705  2bc8                 sub ecx, eax
// 009b7707  85c9                 test ecx, ecx
// 009b7709  7e01                 jle 0x9b770c
// 009b770b  41                   inc ecx
// 009b770c  51                   push ecx
// 009b770d  8b4f04               mov ecx, dword ptr [edi + 4]
// 009b7710  e84b15ffff           call 0x9a8c60
// 009b7715  0106                 add dword ptr [esi], eax
// 009b7717  8b4f08               mov ecx, dword ptr [edi + 8]
// 009b771a  8b01                 mov eax, dword ptr [ecx]
// 009b771c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 009b7722  ffd2                 call edx
// 009b7724  8b4e04               mov ecx, dword ptr [esi + 4]
// 009b7727  8b5608               mov edx, dword ptr [esi + 8]
// 009b772a  89442418             mov dword ptr [esp + 0x18], eax
// 009b772e  8b06                 mov eax, dword ptr [esi]
// 009b7730  894c243c             mov dword ptr [esp + 0x3c], ecx
// 009b7734  8d4c2438             lea ecx, [esp + 0x38]
// 009b7738  51                   push ecx
// 009b7739  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009b773d  8944243c             mov dword ptr [esp + 0x3c], eax
// 009b7741  8b460c               mov eax, dword ptr [esi + 0xc]
// 009b7744  89542444             mov dword ptr [esp + 0x44], edx
// 009b7748  8b5708               mov edx, dword ptr [edi + 8]
// 009b774b  52                   push edx
// 009b774c  8944244c             mov dword ptr [esp + 0x4c], eax
// 009b7750  6a00                 push 0
// 009b7752  8d442434             lea eax, [esp + 0x34]
// 009b7756  50                   push eax
// 009b7757  e8c4d30600           call 0xa24b20
// 009b775c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009b7760  8b11                 mov edx, dword ptr [ecx]
// 009b7762  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b7766  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b776a  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 009b7770  50                   push eax
// 009b7771  51                   push ecx
// 009b7772  8b0e                 mov ecx, dword ptr [esi]
// 009b7774  83ec10               sub esp, 0x10
// 009b7777  8bc4                 mov eax, esp
// 009b7779  8908                 mov dword ptr [eax], ecx
// 009b777b  8b4e04               mov ecx, dword ptr [esi + 4]
// 009b777e  894804               mov dword ptr [eax + 4], ecx
// 009b7781  8b4e08               mov ecx, dword ptr [esi + 8]
// 009b7784  894808               mov dword ptr [eax + 8], ecx
// 009b7787  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009b778a  53                   push ebx
// 009b778b  89480c               mov dword ptr [eax + 0xc], ecx
// 009b778e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009b7792  57                   push edi
// 009b7793  ffd2                 call edx
// 009b7795  8b4728               mov eax, dword ptr [edi + 0x28]
// 009b7798  250000f00f           and eax, 0xff00000
// 009b779d  3d00001000           cmp eax, 0x100000
// 009b77a2  7418                 je 0x9b77bc
// 009b77a4  3d00004000           cmp eax, 0x400000
// 009b77a9  7523                 jne 0x9b77ce
// 009b77ab  8b442440             mov eax, dword ptr [esp + 0x40]
// 009b77af  2b442428             sub eax, dword ptr [esp + 0x28]
// 009b77b3  83e802               sub eax, 2
// 009b77b6  89442438             mov dword ptr [esp + 0x38], eax
// 009b77ba  eb41                 jmp 0x9b77fd
// 009b77bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b77c0  8b542438             mov edx, dword ptr [esp + 0x38]
// 009b77c4  8d440a02             lea eax, [edx + ecx + 2]
// 009b77c8  89442440             mov dword ptr [esp + 0x40], eax
// 009b77cc  eb2f                 jmp 0x9b77fd
// 009b77ce  3d00000001           cmp eax, 0x1000000
// 009b77d3  7418                 je 0x9b77ed
// 009b77d5  3d00000004           cmp eax, 0x4000000
// 009b77da  7521                 jne 0x9b77fd
// 009b77dc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009b77e0  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 009b77e4  83e902               sub ecx, 2
// 009b77e7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 009b77eb  eb10                 jmp 0x9b77fd
// 009b77ed  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009b77f1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009b77f5  8d4c1002             lea ecx, [eax + edx + 2]
// 009b77f9  894c2444             mov dword ptr [esp + 0x44], ecx
// 009b77fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b7801  8b4708               mov eax, dword ptr [edi + 8]
// 009b7804  f7d9                 neg ecx
// 009b7806  8d542438             lea edx, [esp + 0x38]
// 009b780a  52                   push edx
// 009b780b  1bc9                 sbb ecx, ecx
// 009b780d  50                   push eax
// 009b780e  23cd                 and ecx, ebp
// 009b7810  51                   push ecx
// 009b7811  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009b7815  8d542428             lea edx, [esp + 0x28]
// 009b7819  52                   push edx
// 009b781a  e801d30600           call 0xa24b20
// 009b781f  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 009b7823  8b08                 mov ecx, dword ptr [eax]
// 009b7825  894c2428             mov dword ptr [esp + 0x28], ecx
// 009b7829  8b5004               mov edx, dword ptr [eax + 4]
// 009b782c  8954242c             mov dword ptr [esp + 0x2c], edx
// 009b7830  7537                 jne 0x9b7869
// 009b7832  837c241800           cmp dword ptr [esp + 0x18], 0
// 009b7837  7430                 je 0x9b7869
// 009b7839  8b4708               mov eax, dword ptr [edi + 8]
// 009b783c  8b10                 mov edx, dword ptr [eax]
// 009b783e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009b7842  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 009b7848  83ec10               sub esp, 0x10
// 009b784b  8bc4                 mov eax, esp
// 009b784d  8908                 mov dword ptr [eax], ecx
// 009b784f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009b7853  894804               mov dword ptr [eax + 4], ecx
// 009b7856  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009b785a  894808               mov dword ptr [eax + 8], ecx
// 009b785d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 009b7861  89480c               mov dword ptr [eax + 0xc], ecx
// 009b7864  8b4f08               mov ecx, dword ptr [edi + 8]
// 009b7867  ffd2                 call edx
// 009b7869  8b442428             mov eax, dword ptr [esp + 0x28]
// 009b786d  83c002               add eax, 2
// 009b7870  0106                 add dword ptr [esi], eax
// 009b7872  8b5500               mov edx, dword ptr [ebp]
// 009b7875  8b4324               mov eax, dword ptr [ebx + 0x24]
// 009b7878  8b5238               mov edx, dword ptr [edx + 0x38]
// 009b787b  50                   push eax
// 009b787c  8bcd                 mov ecx, ebp
// 009b787e  ffd2                 call edx
// 009b7880  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009b7883  8b4500               mov eax, dword ptr [ebp]
// 009b7886  8b5030               mov edx, dword ptr [eax + 0x30]
// 009b7889  51                   push ecx
// 009b788a  8bcd                 mov ecx, ebp
// 009b788c  ffd2                 call edx
// 009b788e  8944241c             mov dword ptr [esp + 0x1c], eax
// 009b7892  8b4328               mov eax, dword ptr [ebx + 0x28]
// 009b7895  83f8ff               cmp eax, -1
// 009b7898  7515                 jne 0x9b78af
// 009b789a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009b789e  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009b78a4  83f8ff               cmp eax, -1
// 009b78a7  7506                 jne 0x9b78af
// 009b78a9  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 009b78af  8b5500               mov edx, dword ptr [ebp]
// 009b78b2  50                   push eax
// 009b78b3  8b4234               mov eax, dword ptr [edx + 0x34]
// 009b78b6  8bcd                 mov ecx, ebp
// 009b78b8  ffd0                 call eax
// 009b78ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b78be  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 009b78c2  7410                 je 0x9b78d4
// 009b78c4  8b11                 mov edx, dword ptr [ecx]
// 009b78c6  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 009b78cc  56                   push esi
// 009b78cd  57                   push edi
// 009b78ce  ffd0                 call eax
// 009b78d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b78d4  837b3cff             cmp dword ptr [ebx + 0x3c], -1
// 009b78d8  7513                 jne 0x9b78ed
// 009b78da  8b11                 mov edx, dword ptr [ecx]
// 009b78dc  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 009b78e2  ffd0                 call eax
// 009b78e4  83f8ff               cmp eax, -1
// 009b78e7  7427                 je 0x9b7910
// 009b78e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b78ed  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 009b78f0  83f8ff               cmp eax, -1
// 009b78f3  750a                 jne 0x9b78ff
// 009b78f5  8b11                 mov edx, dword ptr [ecx]
// 009b78f7  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 009b78fd  ffd0                 call eax
// 009b78ff  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009b7903  8b11                 mov edx, dword ptr [ecx]
// 009b7905  50                   push eax
// 009b7906  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 009b790c  56                   push esi
// 009b790d  57                   push edi
// 009b790e  ffd0                 call eax
// 009b7910  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009b7914  8b11                 mov edx, dword ptr [ecx]
// 009b7916  8b36                 mov esi, dword ptr [esi]
// 009b7918  8b425c               mov eax, dword ptr [edx + 0x5c]
// 009b791b  2b742424             sub esi, dword ptr [esp + 0x24]
// 009b791f  53                   push ebx
// 009b7920  57                   push edi
// 009b7921  ffd0                 call eax
// 009b7923  8d4c2428             lea ecx, [esp + 0x28]
// 009b7927  51                   push ecx
// 009b7928  8d7b2c               lea edi, [ebx + 0x2c]
// 009b792b  8bcf                 mov ecx, edi
// 009b792d  ff155846b200         call dword ptr [0xb24658]
// 009b7933  50                   push eax
// 009b7934  8bcf                 mov ecx, edi
// 009b7936  ff159847b200         call dword ptr [0xb24798]
// 009b793c  8b5508               mov edx, dword ptr [ebp + 8]
// 009b793f  50                   push eax
// 009b7940  52                   push edx
// 009b7941  ff154021b200         call dword ptr [0xb22140]
// 009b7947  8b442428             mov eax, dword ptr [esp + 0x28]
// 009b794b  8b5500               mov edx, dword ptr [ebp]
// 009b794e  8b5230               mov edx, dword ptr [edx + 0x30]
// 009b7951  8d743004             lea esi, [eax + esi + 4]
// 009b7955  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009b7959  50                   push eax
// 009b795a  8bcd                 mov ecx, ebp
// 009b795c  ffd2                 call edx
// 009b795e  8bcb                 mov ecx, ebx
// 009b7960  e825adfcff           call 0x98268a
// 009b7965  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 009b7969  7509                 jne 0x9b7974
// 009b796b  6a00                 push 0
// 009b796d  8bcd                 mov ecx, ebp
// 009b796f  e87a1e0e00           call 0xa997ee
// 009b7974  8d4c2430             lea ecx, [esp + 0x30]
// 009b7978  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 009b7980  c744243028e1c000     mov dword ptr [esp + 0x30], 0xc0e128
// 009b7988  e873f2a5ff           call 0x416c00
// 009b798d  8bc6                 mov eax, esi
// 009b798f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009b7993  64890d00000000       mov dword ptr fs:[0], ecx
// 009b799a  59                   pop ecx
// 009b799b  5f                   pop edi
// 009b799c  5e                   pop esi
// 009b799d  5d                   pop ebp
// 009b799e  5b                   pop ebx
// 009b799f  83c440               add esp, 0x40
// 009b79a2  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPReportRecordItem@@UAEHPAUXTP_REPORTRECORDITEM_DRAWARGS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportRecordItem.cpp