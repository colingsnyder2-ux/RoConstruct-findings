// roc 2009-06 00569770  unit: RBX::RbxG3D::RenderScene  size: 2197 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569770
//
// 00569770  55                   push ebp
// 00569771  8bec                 mov ebp, esp
// 00569773  83e4f8               and esp, 0xfffffff8
// 00569776  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00569779  83ec5c               sub esp, 0x5c
// 0056977c  53                   push ebx
// 0056977d  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00569780  2bcb                 sub ecx, ebx
// 00569782  b867666666           mov eax, 0x66666667
// 00569787  f7e9                 imul ecx
// 00569789  c1fa05               sar edx, 5
// 0056978c  8bc2                 mov eax, edx
// 0056978e  c1e81f               shr eax, 0x1f
// 00569791  03c2                 add eax, edx
// 00569793  99                   cdq 
// 00569794  56                   push esi
// 00569795  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00569798  57                   push edi
// 00569799  2bc2                 sub eax, edx
// 0056979b  d1f8                 sar eax, 1
// 0056979d  8d3c80               lea edi, [eax + eax*4]
// 005697a0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005697a3  56                   push esi
// 005697a4  83c0b0               add eax, -0x50
// 005697a7  c1e704               shl edi, 4
// 005697aa  50                   push eax
// 005697ab  03fb                 add edi, ebx
// 005697ad  57                   push edi
// 005697ae  53                   push ebx
// 005697af  e8fcfdffff           call 0x5695b0
// 005697b4  83c410               add esp, 0x10
// 005697b7  8d5f50               lea ebx, [edi + 0x50]
// 005697ba  397d0c               cmp dword ptr [ebp + 0xc], edi
// 005697bd  732b                 jae 0x5697ea
// 005697bf  90                   nop 
// 005697c0  8d47b0               lea eax, [edi - 0x50]
// 005697c3  57                   push edi
// 005697c4  50                   push eax
// 005697c5  8944241c             mov dword ptr [esp + 0x1c], eax
// 005697c9  ffd6                 call esi
// 005697cb  83c408               add esp, 8
// 005697ce  84c0                 test al, al
// 005697d0  7518                 jne 0x5697ea
// 005697d2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005697d6  51                   push ecx
// 005697d7  57                   push edi
// 005697d8  ffd6                 call esi
// 005697da  83c408               add esp, 8
// 005697dd  84c0                 test al, al
// 005697df  7509                 jne 0x5697ea
// 005697e1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005697e5  397d0c               cmp dword ptr [ebp + 0xc], edi
// 005697e8  72d6                 jb 0x5697c0
// 005697ea  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 005697ed  731f                 jae 0x56980e
// 005697ef  90                   nop 
// 005697f0  57                   push edi
// 005697f1  53                   push ebx
// 005697f2  ffd6                 call esi
// 005697f4  83c408               add esp, 8
// 005697f7  84c0                 test al, al
// 005697f9  7513                 jne 0x56980e
// 005697fb  53                   push ebx
// 005697fc  57                   push edi
// 005697fd  ffd6                 call esi
// 005697ff  83c408               add esp, 8
// 00569802  84c0                 test al, al
// 00569804  7508                 jne 0x56980e
// 00569806  83c350               add ebx, 0x50
// 00569809  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 0056980c  72e2                 jb 0x5697f0
// 0056980e  8bc3                 mov eax, ebx
// 00569810  897c2410             mov dword ptr [esp + 0x10], edi
// 00569814  8944240c             mov dword ptr [esp + 0xc], eax
// 00569818  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 0056981b  0f8349010000         jae 0x56996a
// 00569821  8d7018               lea esi, [eax + 0x18]
// 00569824  eb04                 jmp 0x56982a
// 00569826  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056982a  50                   push eax
// 0056982b  57                   push edi
// 0056982c  ff5514               call dword ptr [ebp + 0x14]
// 0056982f  83c408               add esp, 8
// 00569832  84c0                 test al, al
// 00569834  0f8515010000         jne 0x56994f
// 0056983a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056983e  57                   push edi
// 0056983f  52                   push edx
// 00569840  ff5514               call dword ptr [ebp + 0x14]
// 00569843  83c408               add esp, 8
// 00569846  84c0                 test al, al
// 00569848  0f8518010000         jne 0x569966
// 0056984e  8bc3                 mov eax, ebx
// 00569850  83c350               add ebx, 0x50
// 00569853  89442414             mov dword ptr [esp + 0x14], eax
// 00569857  3b44240c             cmp eax, dword ptr [esp + 0xc]
// 0056985b  0f84ee000000         je 0x56994f
// 00569861  50                   push eax
// 00569862  8d4c241c             lea ecx, [esp + 0x1c]
// 00569866  e8555af3ff           call 0x49f2c0
// 0056986b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056986f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00569873  d901                 fld dword ptr [ecx]
// 00569875  d918                 fstp dword ptr [eax]
// 00569877  d946ec               fld dword ptr [esi - 0x14]
// 0056987a  d95804               fstp dword ptr [eax + 4]
// 0056987d  d946f0               fld dword ptr [esi - 0x10]
// 00569880  d95808               fstp dword ptr [eax + 8]
// 00569883  d946f4               fld dword ptr [esi - 0xc]
// 00569886  d9580c               fstp dword ptr [eax + 0xc]
// 00569889  d946f8               fld dword ptr [esi - 8]
// 0056988c  d95810               fstp dword ptr [eax + 0x10]
// 0056988f  d946fc               fld dword ptr [esi - 4]
// 00569892  d95814               fstp dword ptr [eax + 0x14]
// 00569895  d906                 fld dword ptr [esi]
// 00569897  d95818               fstp dword ptr [eax + 0x18]
// 0056989a  dd4608               fld qword ptr [esi + 8]
// 0056989d  dd5820               fstp qword ptr [eax + 0x20]
// 005698a0  dd4610               fld qword ptr [esi + 0x10]
// 005698a3  dd5828               fstp qword ptr [eax + 0x28]
// 005698a6  dd4618               fld qword ptr [esi + 0x18]
// 005698a9  dd5830               fstp qword ptr [eax + 0x30]
// 005698ac  dd4620               fld qword ptr [esi + 0x20]
// 005698af  dd5838               fstp qword ptr [eax + 0x38]
// 005698b2  d94628               fld dword ptr [esi + 0x28]
// 005698b5  d95840               fstp dword ptr [eax + 0x40]
// 005698b8  d9462c               fld dword ptr [esi + 0x2c]
// 005698bb  d95844               fstp dword ptr [eax + 0x44]
// 005698be  d94630               fld dword ptr [esi + 0x30]
// 005698c1  d95848               fstp dword ptr [eax + 0x48]
// 005698c4  0fb65634             movzx edx, byte ptr [esi + 0x34]
// 005698c8  d9442418             fld dword ptr [esp + 0x18]
// 005698cc  88504c               mov byte ptr [eax + 0x4c], dl
// 005698cf  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 005698d3  88504d               mov byte ptr [eax + 0x4d], dl
// 005698d6  0fb65636             movzx edx, byte ptr [esi + 0x36]
// 005698da  88504e               mov byte ptr [eax + 0x4e], dl
// 005698dd  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 005698e2  d919                 fstp dword ptr [ecx]
// 005698e4  d944241c             fld dword ptr [esp + 0x1c]
// 005698e8  d95eec               fstp dword ptr [esi - 0x14]
// 005698eb  8a442464             mov al, byte ptr [esp + 0x64]
// 005698ef  d9442420             fld dword ptr [esp + 0x20]
// 005698f3  8a4c2465             mov cl, byte ptr [esp + 0x65]
// 005698f7  d95ef0               fstp dword ptr [esi - 0x10]
// 005698fa  d9442424             fld dword ptr [esp + 0x24]
// 005698fe  d95ef4               fstp dword ptr [esi - 0xc]
// 00569901  d9442428             fld dword ptr [esp + 0x28]
// 00569905  d95ef8               fstp dword ptr [esi - 8]
// 00569908  d944242c             fld dword ptr [esp + 0x2c]
// 0056990c  d95efc               fstp dword ptr [esi - 4]
// 0056990f  d9442430             fld dword ptr [esp + 0x30]
// 00569913  d91e                 fstp dword ptr [esi]
// 00569915  dd442438             fld qword ptr [esp + 0x38]
// 00569919  dd5e08               fstp qword ptr [esi + 8]
// 0056991c  dd442440             fld qword ptr [esp + 0x40]
// 00569920  dd5e10               fstp qword ptr [esi + 0x10]
// 00569923  dd442448             fld qword ptr [esp + 0x48]
// 00569927  dd5e18               fstp qword ptr [esi + 0x18]
// 0056992a  dd442450             fld qword ptr [esp + 0x50]
// 0056992e  dd5e20               fstp qword ptr [esi + 0x20]
// 00569931  d9442458             fld dword ptr [esp + 0x58]
// 00569935  d95e28               fstp dword ptr [esi + 0x28]
// 00569938  d944245c             fld dword ptr [esp + 0x5c]
// 0056993c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0056993f  d9442460             fld dword ptr [esp + 0x60]
// 00569943  d95e30               fstp dword ptr [esi + 0x30]
// 00569946  884634               mov byte ptr [esi + 0x34], al
// 00569949  884e35               mov byte ptr [esi + 0x35], cl
// 0056994c  885636               mov byte ptr [esi + 0x36], dl
// 0056994f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569953  83c050               add eax, 0x50
// 00569956  83c650               add esi, 0x50
// 00569959  8944240c             mov dword ptr [esp + 0xc], eax
// 0056995d  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00569960  0f82c0feffff         jb 0x569826
// 00569966  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056996a  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056996e  39750c               cmp dword ptr [ebp + 0xc], esi
// 00569971  0f834a010000         jae 0x569ac1
// 00569977  8d4718               lea eax, [edi + 0x18]
// 0056997a  89442414             mov dword ptr [esp + 0x14], eax
// 0056997e  83c6c8               add esi, -0x38
// 00569981  8d46e8               lea eax, [esi - 0x18]
// 00569984  57                   push edi
// 00569985  50                   push eax
// 00569986  ff5514               call dword ptr [ebp + 0x14]
// 00569989  83c408               add esp, 8
// 0056998c  84c0                 test al, al
// 0056998e  0f8512010000         jne 0x569aa6
// 00569994  8d46e8               lea eax, [esi - 0x18]
// 00569997  50                   push eax
// 00569998  57                   push edi
// 00569999  ff5514               call dword ptr [ebp + 0x14]
// 0056999c  83c408               add esp, 8
// 0056999f  84c0                 test al, al
// 005699a1  0f8516010000         jne 0x569abd
// 005699a7  836c241450           sub dword ptr [esp + 0x14], 0x50
// 005699ac  83ef50               sub edi, 0x50
// 005699af  8d4ee8               lea ecx, [esi - 0x18]
// 005699b2  3bf9                 cmp edi, ecx
// 005699b4  0f84ec000000         je 0x569aa6
// 005699ba  57                   push edi
// 005699bb  8d4c241c             lea ecx, [esp + 0x1c]
// 005699bf  e8fc58f3ff           call 0x49f2c0
// 005699c4  d946e8               fld dword ptr [esi - 0x18]
// 005699c7  d91f                 fstp dword ptr [edi]
// 005699c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 005699cd  d946ec               fld dword ptr [esi - 0x14]
// 005699d0  d958ec               fstp dword ptr [eax - 0x14]
// 005699d3  d946f0               fld dword ptr [esi - 0x10]
// 005699d6  d958f0               fstp dword ptr [eax - 0x10]
// 005699d9  d946f4               fld dword ptr [esi - 0xc]
// 005699dc  d958f4               fstp dword ptr [eax - 0xc]
// 005699df  d946f8               fld dword ptr [esi - 8]
// 005699e2  d958f8               fstp dword ptr [eax - 8]
// 005699e5  d946fc               fld dword ptr [esi - 4]
// 005699e8  d958fc               fstp dword ptr [eax - 4]
// 005699eb  d906                 fld dword ptr [esi]
// 005699ed  d918                 fstp dword ptr [eax]
// 005699ef  dd4608               fld qword ptr [esi + 8]
// 005699f2  dd5808               fstp qword ptr [eax + 8]
// 005699f5  dd4610               fld qword ptr [esi + 0x10]
// 005699f8  dd5810               fstp qword ptr [eax + 0x10]
// 005699fb  dd4618               fld qword ptr [esi + 0x18]
// 005699fe  dd5818               fstp qword ptr [eax + 0x18]
// 00569a01  dd4620               fld qword ptr [esi + 0x20]
// 00569a04  dd5820               fstp qword ptr [eax + 0x20]
// 00569a07  d94628               fld dword ptr [esi + 0x28]
// 00569a0a  d95828               fstp dword ptr [eax + 0x28]
// 00569a0d  d9462c               fld dword ptr [esi + 0x2c]
// 00569a10  d9582c               fstp dword ptr [eax + 0x2c]
// 00569a13  d94630               fld dword ptr [esi + 0x30]
// 00569a16  d95830               fstp dword ptr [eax + 0x30]
// 00569a19  0fb65634             movzx edx, byte ptr [esi + 0x34]
// 00569a1d  d9442418             fld dword ptr [esp + 0x18]
// 00569a21  885034               mov byte ptr [eax + 0x34], dl
// 00569a24  0fb64e35             movzx ecx, byte ptr [esi + 0x35]
// 00569a28  884835               mov byte ptr [eax + 0x35], cl
// 00569a2b  0fb65636             movzx edx, byte ptr [esi + 0x36]
// 00569a2f  885036               mov byte ptr [eax + 0x36], dl
// 00569a32  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00569a37  d95ee8               fstp dword ptr [esi - 0x18]
// 00569a3a  d944241c             fld dword ptr [esp + 0x1c]
// 00569a3e  d95eec               fstp dword ptr [esi - 0x14]
// 00569a41  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00569a46  d9442420             fld dword ptr [esp + 0x20]
// 00569a4a  d95ef0               fstp dword ptr [esi - 0x10]
// 00569a4d  d9442424             fld dword ptr [esp + 0x24]
// 00569a51  8a442464             mov al, byte ptr [esp + 0x64]
// 00569a55  d95ef4               fstp dword ptr [esi - 0xc]
// 00569a58  d9442428             fld dword ptr [esp + 0x28]
// 00569a5c  d95ef8               fstp dword ptr [esi - 8]
// 00569a5f  d944242c             fld dword ptr [esp + 0x2c]
// 00569a63  d95efc               fstp dword ptr [esi - 4]
// 00569a66  d9442430             fld dword ptr [esp + 0x30]
// 00569a6a  d91e                 fstp dword ptr [esi]
// 00569a6c  dd442438             fld qword ptr [esp + 0x38]
// 00569a70  dd5e08               fstp qword ptr [esi + 8]
// 00569a73  dd442440             fld qword ptr [esp + 0x40]
// 00569a77  dd5e10               fstp qword ptr [esi + 0x10]
// 00569a7a  dd442448             fld qword ptr [esp + 0x48]
// 00569a7e  dd5e18               fstp qword ptr [esi + 0x18]
// 00569a81  dd442450             fld qword ptr [esp + 0x50]
// 00569a85  dd5e20               fstp qword ptr [esi + 0x20]
// 00569a88  d9442458             fld dword ptr [esp + 0x58]
// 00569a8c  d95e28               fstp dword ptr [esi + 0x28]
// 00569a8f  d944245c             fld dword ptr [esp + 0x5c]
// 00569a93  d95e2c               fstp dword ptr [esi + 0x2c]
// 00569a96  d9442460             fld dword ptr [esp + 0x60]
// 00569a9a  d95e30               fstp dword ptr [esi + 0x30]
// 00569a9d  884634               mov byte ptr [esi + 0x34], al
// 00569aa0  884e35               mov byte ptr [esi + 0x35], cl
// 00569aa3  885636               mov byte ptr [esi + 0x36], dl
// 00569aa6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569aaa  83e850               sub eax, 0x50
// 00569aad  83ee50               sub esi, 0x50
// 00569ab0  89442410             mov dword ptr [esp + 0x10], eax
// 00569ab4  39450c               cmp dword ptr [ebp + 0xc], eax
// 00569ab7  0f82c4feffff         jb 0x569981
// 00569abd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569ac1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569ac5  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 00569ac8  0f851a020000         jne 0x569ce8
// 00569ace  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00569ad1  0f841f050000         je 0x569ff6
// 00569ad7  3bd8                 cmp ebx, eax
// 00569ad9  0f84f6000000         je 0x569bd5
// 00569adf  3bfb                 cmp edi, ebx
// 00569ae1  0f84ee000000         je 0x569bd5
// 00569ae7  57                   push edi
// 00569ae8  8d4c241c             lea ecx, [esp + 0x1c]
// 00569aec  e8cf57f3ff           call 0x49f2c0
// 00569af1  d903                 fld dword ptr [ebx]
// 00569af3  d91f                 fstp dword ptr [edi]
// 00569af5  d94304               fld dword ptr [ebx + 4]
// 00569af8  d95f04               fstp dword ptr [edi + 4]
// 00569afb  d94308               fld dword ptr [ebx + 8]
// 00569afe  d95f08               fstp dword ptr [edi + 8]
// 00569b01  d9430c               fld dword ptr [ebx + 0xc]
// 00569b04  d95f0c               fstp dword ptr [edi + 0xc]
// 00569b07  d94310               fld dword ptr [ebx + 0x10]
// 00569b0a  d95f10               fstp dword ptr [edi + 0x10]
// 00569b0d  d94314               fld dword ptr [ebx + 0x14]
// 00569b10  d95f14               fstp dword ptr [edi + 0x14]
// 00569b13  d94318               fld dword ptr [ebx + 0x18]
// 00569b16  d95f18               fstp dword ptr [edi + 0x18]
// 00569b19  dd4320               fld qword ptr [ebx + 0x20]
// 00569b1c  dd5f20               fstp qword ptr [edi + 0x20]
// 00569b1f  dd4328               fld qword ptr [ebx + 0x28]
// 00569b22  dd5f28               fstp qword ptr [edi + 0x28]
// 00569b25  dd4330               fld qword ptr [ebx + 0x30]
// 00569b28  dd5f30               fstp qword ptr [edi + 0x30]
// 00569b2b  dd4338               fld qword ptr [ebx + 0x38]
// 00569b2e  dd5f38               fstp qword ptr [edi + 0x38]
// 00569b31  d94340               fld dword ptr [ebx + 0x40]
// 00569b34  d95f40               fstp dword ptr [edi + 0x40]
// 00569b37  d94344               fld dword ptr [ebx + 0x44]
// 00569b3a  d95f44               fstp dword ptr [edi + 0x44]
// 00569b3d  d94348               fld dword ptr [ebx + 0x48]
// 00569b40  d95f48               fstp dword ptr [edi + 0x48]
// 00569b43  0fb6434c             movzx eax, byte ptr [ebx + 0x4c]
// 00569b47  d9442418             fld dword ptr [esp + 0x18]
// 00569b4b  88474c               mov byte ptr [edi + 0x4c], al
// 00569b4e  0fb64b4d             movzx ecx, byte ptr [ebx + 0x4d]
// 00569b52  884f4d               mov byte ptr [edi + 0x4d], cl
// 00569b55  0fb6534e             movzx edx, byte ptr [ebx + 0x4e]
// 00569b59  88574e               mov byte ptr [edi + 0x4e], dl
// 00569b5c  0fb6442464           movzx eax, byte ptr [esp + 0x64]
// 00569b61  d91b                 fstp dword ptr [ebx]
// 00569b63  d944241c             fld dword ptr [esp + 0x1c]
// 00569b67  d95b04               fstp dword ptr [ebx + 4]
// 00569b6a  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00569b6f  d9442420             fld dword ptr [esp + 0x20]
// 00569b73  d95b08               fstp dword ptr [ebx + 8]
// 00569b76  d9442424             fld dword ptr [esp + 0x24]
// 00569b7a  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00569b7f  d95b0c               fstp dword ptr [ebx + 0xc]
// 00569b82  d9442428             fld dword ptr [esp + 0x28]
// 00569b86  d95b10               fstp dword ptr [ebx + 0x10]
// 00569b89  d944242c             fld dword ptr [esp + 0x2c]
// 00569b8d  d95b14               fstp dword ptr [ebx + 0x14]
// 00569b90  d9442430             fld dword ptr [esp + 0x30]
// 00569b94  d95b18               fstp dword ptr [ebx + 0x18]
// 00569b97  dd442438             fld qword ptr [esp + 0x38]
// 00569b9b  dd5b20               fstp qword ptr [ebx + 0x20]
// 00569b9e  dd442440             fld qword ptr [esp + 0x40]
// 00569ba2  dd5b28               fstp qword ptr [ebx + 0x28]
// 00569ba5  dd442448             fld qword ptr [esp + 0x48]
// 00569ba9  dd5b30               fstp qword ptr [ebx + 0x30]
// 00569bac  dd442450             fld qword ptr [esp + 0x50]
// 00569bb0  dd5b38               fstp qword ptr [ebx + 0x38]
// 00569bb3  d9442458             fld dword ptr [esp + 0x58]
// 00569bb7  d95b40               fstp dword ptr [ebx + 0x40]
// 00569bba  d944245c             fld dword ptr [esp + 0x5c]
// 00569bbe  d95b44               fstp dword ptr [ebx + 0x44]
// 00569bc1  d9442460             fld dword ptr [esp + 0x60]
// 00569bc5  d95b48               fstp dword ptr [ebx + 0x48]
// 00569bc8  88434c               mov byte ptr [ebx + 0x4c], al
// 00569bcb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569bcf  884b4d               mov byte ptr [ebx + 0x4d], cl
// 00569bd2  88534e               mov byte ptr [ebx + 0x4e], dl
// 00569bd5  8bcf                 mov ecx, edi
// 00569bd7  8bf0                 mov esi, eax
// 00569bd9  83c050               add eax, 0x50
// 00569bdc  83c350               add ebx, 0x50
// 00569bdf  83c750               add edi, 0x50
// 00569be2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00569be6  8944240c             mov dword ptr [esp + 0xc], eax
// 00569bea  3bce                 cmp ecx, esi
// 00569bec  0f8426fcffff         je 0x569818
// 00569bf2  51                   push ecx
// 00569bf3  8d4c241c             lea ecx, [esp + 0x1c]
// 00569bf7  e8c456f3ff           call 0x49f2c0
// 00569bfc  d906                 fld dword ptr [esi]
// 00569bfe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00569c02  d918                 fstp dword ptr [eax]
// 00569c04  d94604               fld dword ptr [esi + 4]
// 00569c07  d95804               fstp dword ptr [eax + 4]
// 00569c0a  d94608               fld dword ptr [esi + 8]
// 00569c0d  d95808               fstp dword ptr [eax + 8]
// 00569c10  d9460c               fld dword ptr [esi + 0xc]
// 00569c13  d9580c               fstp dword ptr [eax + 0xc]
// 00569c16  d94610               fld dword ptr [esi + 0x10]
// 00569c19  d95810               fstp dword ptr [eax + 0x10]
// 00569c1c  d94614               fld dword ptr [esi + 0x14]
// 00569c1f  d95814               fstp dword ptr [eax + 0x14]
// 00569c22  d94618               fld dword ptr [esi + 0x18]
// 00569c25  d95818               fstp dword ptr [eax + 0x18]
// 00569c28  dd4620               fld qword ptr [esi + 0x20]
// 00569c2b  dd5820               fstp qword ptr [eax + 0x20]
// 00569c2e  dd4628               fld qword ptr [esi + 0x28]
// 00569c31  dd5828               fstp qword ptr [eax + 0x28]
// 00569c34  dd4630               fld qword ptr [esi + 0x30]
// 00569c37  dd5830               fstp qword ptr [eax + 0x30]
// 00569c3a  dd4638               fld qword ptr [esi + 0x38]
// 00569c3d  dd5838               fstp qword ptr [eax + 0x38]
// 00569c40  d94640               fld dword ptr [esi + 0x40]
// 00569c43  d95840               fstp dword ptr [eax + 0x40]
// 00569c46  d94644               fld dword ptr [esi + 0x44]
// 00569c49  d95844               fstp dword ptr [eax + 0x44]
// 00569c4c  d94648               fld dword ptr [esi + 0x48]
// 00569c4f  d95848               fstp dword ptr [eax + 0x48]
// 00569c52  0fb64e4c             movzx ecx, byte ptr [esi + 0x4c]
// 00569c56  d9442418             fld dword ptr [esp + 0x18]
// 00569c5a  88484c               mov byte ptr [eax + 0x4c], cl
// 00569c5d  0fb6564d             movzx edx, byte ptr [esi + 0x4d]
// 00569c61  88504d               mov byte ptr [eax + 0x4d], dl
// 00569c64  0fb64e4e             movzx ecx, byte ptr [esi + 0x4e]
// 00569c68  88484e               mov byte ptr [eax + 0x4e], cl
// 00569c6b  0fb6542464           movzx edx, byte ptr [esp + 0x64]
// 00569c70  d91e                 fstp dword ptr [esi]
// 00569c72  d944241c             fld dword ptr [esp + 0x1c]
// 00569c76  d95e04               fstp dword ptr [esi + 4]
// 00569c79  8a442465             mov al, byte ptr [esp + 0x65]
// 00569c7d  d9442420             fld dword ptr [esp + 0x20]
// 00569c81  0fb64c2466           movzx ecx, byte ptr [esp + 0x66]
// 00569c86  d95e08               fstp dword ptr [esi + 8]
// 00569c89  d9442424             fld dword ptr [esp + 0x24]
// 00569c8d  d95e0c               fstp dword ptr [esi + 0xc]
// 00569c90  d9442428             fld dword ptr [esp + 0x28]
// 00569c94  d95e10               fstp dword ptr [esi + 0x10]
// 00569c97  d944242c             fld dword ptr [esp + 0x2c]
// 00569c9b  d95e14               fstp dword ptr [esi + 0x14]
// 00569c9e  d9442430             fld dword ptr [esp + 0x30]
// 00569ca2  d95e18               fstp dword ptr [esi + 0x18]
// 00569ca5  dd442438             fld qword ptr [esp + 0x38]
// 00569ca9  dd5e20               fstp qword ptr [esi + 0x20]
// 00569cac  dd442440             fld qword ptr [esp + 0x40]
// 00569cb0  dd5e28               fstp qword ptr [esi + 0x28]
// 00569cb3  dd442448             fld qword ptr [esp + 0x48]
// 00569cb7  dd5e30               fstp qword ptr [esi + 0x30]
// 00569cba  dd442450             fld qword ptr [esp + 0x50]
// 00569cbe  dd5e38               fstp qword ptr [esi + 0x38]
// 00569cc1  d9442458             fld dword ptr [esp + 0x58]
// 00569cc5  d95e40               fstp dword ptr [esi + 0x40]
// 00569cc8  d944245c             fld dword ptr [esp + 0x5c]
// 00569ccc  d95e44               fstp dword ptr [esi + 0x44]
// 00569ccf  d9442460             fld dword ptr [esp + 0x60]
// 00569cd3  d95e48               fstp dword ptr [esi + 0x48]
// 00569cd6  88464d               mov byte ptr [esi + 0x4d], al
// 00569cd9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569cdd  88564c               mov byte ptr [esi + 0x4c], dl
// 00569ce0  884e4e               mov byte ptr [esi + 0x4e], cl
// 00569ce3  e930fbffff           jmp 0x569818
// 00569ce8  83e950               sub ecx, 0x50
// 00569ceb  894c2410             mov dword ptr [esp + 0x10], ecx
// 00569cef  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00569cf2  0f85fa010000         jne 0x569ef2
// 00569cf8  83ef50               sub edi, 0x50
// 00569cfb  3bcf                 cmp ecx, edi
// 00569cfd  0f84f1000000         je 0x569df4
// 00569d03  51                   push ecx
// 00569d04  8d4c241c             lea ecx, [esp + 0x1c]
// 00569d08  e8b355f3ff           call 0x49f2c0
// 00569d0d  d907                 fld dword ptr [edi]
// 00569d0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569d13  d918                 fstp dword ptr [eax]
// 00569d15  d94704               fld dword ptr [edi + 4]
// 00569d18  d95804               fstp dword ptr [eax + 4]
// 00569d1b  d94708               fld dword ptr [edi + 8]
// 00569d1e  d95808               fstp dword ptr [eax + 8]
// 00569d21  d9470c               fld dword ptr [edi + 0xc]
// 00569d24  d9580c               fstp dword ptr [eax + 0xc]
// 00569d27  d94710               fld dword ptr [edi + 0x10]
// 00569d2a  d95810               fstp dword ptr [eax + 0x10]
// 00569d2d  d94714               fld dword ptr [edi + 0x14]
// 00569d30  d95814               fstp dword ptr [eax + 0x14]
// 00569d33  d94718               fld dword ptr [edi + 0x18]
// 00569d36  d95818               fstp dword ptr [eax + 0x18]
// 00569d39  dd4720               fld qword ptr [edi + 0x20]
// 00569d3c  dd5820               fstp qword ptr [eax + 0x20]
// 00569d3f  dd4728               fld qword ptr [edi + 0x28]
// 00569d42  dd5828               fstp qword ptr [eax + 0x28]
// 00569d45  dd4730               fld qword ptr [edi + 0x30]
// 00569d48  dd5830               fstp qword ptr [eax + 0x30]
// 00569d4b  dd4738               fld qword ptr [edi + 0x38]
// 00569d4e  dd5838               fstp qword ptr [eax + 0x38]
// 00569d51  d94740               fld dword ptr [edi + 0x40]
// 00569d54  d95840               fstp dword ptr [eax + 0x40]
// 00569d57  d94744               fld dword ptr [edi + 0x44]
// 00569d5a  d95844               fstp dword ptr [eax + 0x44]
// 00569d5d  d94748               fld dword ptr [edi + 0x48]
// 00569d60  d95848               fstp dword ptr [eax + 0x48]
// 00569d63  0fb6574c             movzx edx, byte ptr [edi + 0x4c]
// 00569d67  d9442418             fld dword ptr [esp + 0x18]
// 00569d6b  88504c               mov byte ptr [eax + 0x4c], dl
// 00569d6e  0fb64f4d             movzx ecx, byte ptr [edi + 0x4d]
// 00569d72  88484d               mov byte ptr [eax + 0x4d], cl
// 00569d75  0fb6574e             movzx edx, byte ptr [edi + 0x4e]
// 00569d79  88504e               mov byte ptr [eax + 0x4e], dl
// 00569d7c  8a442464             mov al, byte ptr [esp + 0x64]
// 00569d80  d91f                 fstp dword ptr [edi]
// 00569d82  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00569d87  d944241c             fld dword ptr [esp + 0x1c]
// 00569d8b  d95f04               fstp dword ptr [edi + 4]
// 00569d8e  d9442420             fld dword ptr [esp + 0x20]
// 00569d92  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00569d97  d95f08               fstp dword ptr [edi + 8]
// 00569d9a  d9442424             fld dword ptr [esp + 0x24]
// 00569d9e  d95f0c               fstp dword ptr [edi + 0xc]
// 00569da1  d9442428             fld dword ptr [esp + 0x28]
// 00569da5  d95f10               fstp dword ptr [edi + 0x10]
// 00569da8  d944242c             fld dword ptr [esp + 0x2c]
// 00569dac  d95f14               fstp dword ptr [edi + 0x14]
// 00569daf  d9442430             fld dword ptr [esp + 0x30]
// 00569db3  d95f18               fstp dword ptr [edi + 0x18]
// 00569db6  dd442438             fld qword ptr [esp + 0x38]
// 00569dba  dd5f20               fstp qword ptr [edi + 0x20]
// 00569dbd  dd442440             fld qword ptr [esp + 0x40]
// 00569dc1  dd5f28               fstp qword ptr [edi + 0x28]
// 00569dc4  dd442448             fld qword ptr [esp + 0x48]
// 00569dc8  dd5f30               fstp qword ptr [edi + 0x30]
// 00569dcb  dd442450             fld qword ptr [esp + 0x50]
// 00569dcf  dd5f38               fstp qword ptr [edi + 0x38]
// 00569dd2  d9442458             fld dword ptr [esp + 0x58]
// 00569dd6  d95f40               fstp dword ptr [edi + 0x40]
// 00569dd9  d944245c             fld dword ptr [esp + 0x5c]
// 00569ddd  d95f44               fstp dword ptr [edi + 0x44]
// 00569de0  d9442460             fld dword ptr [esp + 0x60]
// 00569de4  d95f48               fstp dword ptr [edi + 0x48]
// 00569de7  88474c               mov byte ptr [edi + 0x4c], al
// 00569dea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569dee  884f4d               mov byte ptr [edi + 0x4d], cl
// 00569df1  88574e               mov byte ptr [edi + 0x4e], dl
// 00569df4  83eb50               sub ebx, 0x50
// 00569df7  3bfb                 cmp edi, ebx
// 00569df9  0f8419faffff         je 0x569818
// 00569dff  57                   push edi
// 00569e00  8d4c241c             lea ecx, [esp + 0x1c]
// 00569e04  e8b754f3ff           call 0x49f2c0
// 00569e09  d903                 fld dword ptr [ebx]
// 00569e0b  d91f                 fstp dword ptr [edi]
// 00569e0d  d94304               fld dword ptr [ebx + 4]
// 00569e10  d95f04               fstp dword ptr [edi + 4]
// 00569e13  d94308               fld dword ptr [ebx + 8]
// 00569e16  d95f08               fstp dword ptr [edi + 8]
// 00569e19  d9430c               fld dword ptr [ebx + 0xc]
// 00569e1c  d95f0c               fstp dword ptr [edi + 0xc]
// 00569e1f  d94310               fld dword ptr [ebx + 0x10]
// 00569e22  d95f10               fstp dword ptr [edi + 0x10]
// 00569e25  d94314               fld dword ptr [ebx + 0x14]
// 00569e28  d95f14               fstp dword ptr [edi + 0x14]
// 00569e2b  d94318               fld dword ptr [ebx + 0x18]
// 00569e2e  d95f18               fstp dword ptr [edi + 0x18]
// 00569e31  dd4320               fld qword ptr [ebx + 0x20]
// 00569e34  dd5f20               fstp qword ptr [edi + 0x20]
// 00569e37  dd4328               fld qword ptr [ebx + 0x28]
// 00569e3a  dd5f28               fstp qword ptr [edi + 0x28]
// 00569e3d  dd4330               fld qword ptr [ebx + 0x30]
// 00569e40  dd5f30               fstp qword ptr [edi + 0x30]
// 00569e43  dd4338               fld qword ptr [ebx + 0x38]
// 00569e46  dd5f38               fstp qword ptr [edi + 0x38]
// 00569e49  d94340               fld dword ptr [ebx + 0x40]
// 00569e4c  d95f40               fstp dword ptr [edi + 0x40]
// 00569e4f  d94344               fld dword ptr [ebx + 0x44]
// 00569e52  d95f44               fstp dword ptr [edi + 0x44]
// 00569e55  d94348               fld dword ptr [ebx + 0x48]
// 00569e58  d95f48               fstp dword ptr [edi + 0x48]
// 00569e5b  0fb6434c             movzx eax, byte ptr [ebx + 0x4c]
// 00569e5f  d9442418             fld dword ptr [esp + 0x18]
// 00569e63  88474c               mov byte ptr [edi + 0x4c], al
// 00569e66  0fb64b4d             movzx ecx, byte ptr [ebx + 0x4d]
// 00569e6a  884f4d               mov byte ptr [edi + 0x4d], cl
// 00569e6d  0fb6534e             movzx edx, byte ptr [ebx + 0x4e]
// 00569e71  88574e               mov byte ptr [edi + 0x4e], dl
// 00569e74  0fb6442464           movzx eax, byte ptr [esp + 0x64]
// 00569e79  d91b                 fstp dword ptr [ebx]
// 00569e7b  d944241c             fld dword ptr [esp + 0x1c]
// 00569e7f  d95b04               fstp dword ptr [ebx + 4]
// 00569e82  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00569e87  d9442420             fld dword ptr [esp + 0x20]
// 00569e8b  d95b08               fstp dword ptr [ebx + 8]
// 00569e8e  d9442424             fld dword ptr [esp + 0x24]
// 00569e92  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00569e97  d95b0c               fstp dword ptr [ebx + 0xc]
// 00569e9a  d9442428             fld dword ptr [esp + 0x28]
// 00569e9e  d95b10               fstp dword ptr [ebx + 0x10]
// 00569ea1  d944242c             fld dword ptr [esp + 0x2c]
// 00569ea5  d95b14               fstp dword ptr [ebx + 0x14]
// 00569ea8  d9442430             fld dword ptr [esp + 0x30]
// 00569eac  d95b18               fstp dword ptr [ebx + 0x18]
// 00569eaf  dd442438             fld qword ptr [esp + 0x38]
// 00569eb3  dd5b20               fstp qword ptr [ebx + 0x20]
// 00569eb6  dd442440             fld qword ptr [esp + 0x40]
// 00569eba  dd5b28               fstp qword ptr [ebx + 0x28]
// 00569ebd  dd442448             fld qword ptr [esp + 0x48]
// 00569ec1  dd5b30               fstp qword ptr [ebx + 0x30]
// 00569ec4  dd442450             fld qword ptr [esp + 0x50]
// 00569ec8  dd5b38               fstp qword ptr [ebx + 0x38]
// 00569ecb  d9442458             fld dword ptr [esp + 0x58]
// 00569ecf  d95b40               fstp dword ptr [ebx + 0x40]
// 00569ed2  d944245c             fld dword ptr [esp + 0x5c]
// 00569ed6  d95b44               fstp dword ptr [ebx + 0x44]
// 00569ed9  d9442460             fld dword ptr [esp + 0x60]
// 00569edd  d95b48               fstp dword ptr [ebx + 0x48]
// 00569ee0  88434c               mov byte ptr [ebx + 0x4c], al
// 00569ee3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569ee7  884b4d               mov byte ptr [ebx + 0x4d], cl
// 00569eea  88534e               mov byte ptr [ebx + 0x4e], dl
// 00569eed  e926f9ffff           jmp 0x569818
// 00569ef2  3bc1                 cmp eax, ecx
// 00569ef4  0f84f4000000         je 0x569fee
// 00569efa  50                   push eax
// 00569efb  8d4c241c             lea ecx, [esp + 0x1c]
// 00569eff  e8bc53f3ff           call 0x49f2c0
// 00569f04  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569f08  d900                 fld dword ptr [eax]
// 00569f0a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00569f0e  d91e                 fstp dword ptr [esi]
// 00569f10  d94004               fld dword ptr [eax + 4]
// 00569f13  d95e04               fstp dword ptr [esi + 4]
// 00569f16  d94008               fld dword ptr [eax + 8]
// 00569f19  d95e08               fstp dword ptr [esi + 8]
// 00569f1c  d9400c               fld dword ptr [eax + 0xc]
// 00569f1f  d95e0c               fstp dword ptr [esi + 0xc]
// 00569f22  d94010               fld dword ptr [eax + 0x10]
// 00569f25  d95e10               fstp dword ptr [esi + 0x10]
// 00569f28  d94014               fld dword ptr [eax + 0x14]
// 00569f2b  d95e14               fstp dword ptr [esi + 0x14]
// 00569f2e  d94018               fld dword ptr [eax + 0x18]
// 00569f31  d95e18               fstp dword ptr [esi + 0x18]
// 00569f34  dd4020               fld qword ptr [eax + 0x20]
// 00569f37  dd5e20               fstp qword ptr [esi + 0x20]
// 00569f3a  dd4028               fld qword ptr [eax + 0x28]
// 00569f3d  dd5e28               fstp qword ptr [esi + 0x28]
// 00569f40  dd4030               fld qword ptr [eax + 0x30]
// 00569f43  dd5e30               fstp qword ptr [esi + 0x30]
// 00569f46  dd4038               fld qword ptr [eax + 0x38]
// 00569f49  dd5e38               fstp qword ptr [esi + 0x38]
// 00569f4c  d94040               fld dword ptr [eax + 0x40]
// 00569f4f  d95e40               fstp dword ptr [esi + 0x40]
// 00569f52  d94044               fld dword ptr [eax + 0x44]
// 00569f55  d95e44               fstp dword ptr [esi + 0x44]
// 00569f58  d94048               fld dword ptr [eax + 0x48]
// 00569f5b  d95e48               fstp dword ptr [esi + 0x48]
// 00569f5e  0fb6484c             movzx ecx, byte ptr [eax + 0x4c]
// 00569f62  d9442418             fld dword ptr [esp + 0x18]
// 00569f66  884e4c               mov byte ptr [esi + 0x4c], cl
// 00569f69  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 00569f6d  88564d               mov byte ptr [esi + 0x4d], dl
// 00569f70  0fb6484e             movzx ecx, byte ptr [eax + 0x4e]
// 00569f74  884e4e               mov byte ptr [esi + 0x4e], cl
// 00569f77  0fb6542464           movzx edx, byte ptr [esp + 0x64]
// 00569f7c  d918                 fstp dword ptr [eax]
// 00569f7e  d944241c             fld dword ptr [esp + 0x1c]
// 00569f82  d95804               fstp dword ptr [eax + 4]
// 00569f85  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00569f8a  d9442420             fld dword ptr [esp + 0x20]
// 00569f8e  d95808               fstp dword ptr [eax + 8]
// 00569f91  d9442424             fld dword ptr [esp + 0x24]
// 00569f95  d9580c               fstp dword ptr [eax + 0xc]
// 00569f98  d9442428             fld dword ptr [esp + 0x28]
// 00569f9c  d95810               fstp dword ptr [eax + 0x10]
// 00569f9f  d944242c             fld dword ptr [esp + 0x2c]
// 00569fa3  d95814               fstp dword ptr [eax + 0x14]
// 00569fa6  d9442430             fld dword ptr [esp + 0x30]
// 00569faa  d95818               fstp dword ptr [eax + 0x18]
// 00569fad  dd442438             fld qword ptr [esp + 0x38]
// 00569fb1  dd5820               fstp qword ptr [eax + 0x20]
// 00569fb4  dd442440             fld qword ptr [esp + 0x40]
// 00569fb8  dd5828               fstp qword ptr [eax + 0x28]
// 00569fbb  dd442448             fld qword ptr [esp + 0x48]
// 00569fbf  dd5830               fstp qword ptr [eax + 0x30]
// 00569fc2  dd442450             fld qword ptr [esp + 0x50]
// 00569fc6  dd5838               fstp qword ptr [eax + 0x38]
// 00569fc9  d9442458             fld dword ptr [esp + 0x58]
// 00569fcd  d95840               fstp dword ptr [eax + 0x40]
// 00569fd0  d944245c             fld dword ptr [esp + 0x5c]
// 00569fd4  d95844               fstp dword ptr [eax + 0x44]
// 00569fd7  d9442460             fld dword ptr [esp + 0x60]
// 00569fdb  d95848               fstp dword ptr [eax + 0x48]
// 00569fde  88504c               mov byte ptr [eax + 0x4c], dl
// 00569fe1  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00569fe6  88484d               mov byte ptr [eax + 0x4d], cl
// 00569fe9  88504e               mov byte ptr [eax + 0x4e], dl
// 00569fec  8bc6                 mov eax, esi
// 00569fee  83c050               add eax, 0x50
// 00569ff1  e91ef8ffff           jmp 0x569814
// 00569ff6  8b4508               mov eax, dword ptr [ebp + 8]
// 00569ff9  8938                 mov dword ptr [eax], edi
// 00569ffb  5f                   pop edi
// 00569ffc  5e                   pop esi
// 00569ffd  895804               mov dword ptr [eax + 4], ebx
// 0056a000  5b                   pop ebx
// 0056a001  8be5                 mov esp, ebp
// 0056a003  5d                   pop ebp
// 0056a004  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Unguarded_partition@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YA?AU?$pair@PAVGLight@G3D@@PAV12@@0@PAVGLight@G3D@@0P6A_NABV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
