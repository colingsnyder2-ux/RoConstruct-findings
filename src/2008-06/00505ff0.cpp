// roc 2008-06 00505ff0  unit: RBX::Render::RenderScene  size: 2197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505ff0
//
// 00505ff0  55                   push ebp
// 00505ff1  8bec                 mov ebp, esp
// 00505ff3  83e4f8               and esp, 0xfffffff8
// 00505ff6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00505ff9  83ec5c               sub esp, 0x5c
// 00505ffc  53                   push ebx
// 00505ffd  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00506000  2bcb                 sub ecx, ebx
// 00506002  b867666666           mov eax, 0x66666667
// 00506007  f7e9                 imul ecx
// 00506009  c1fa05               sar edx, 5
// 0050600c  8bc2                 mov eax, edx
// 0050600e  c1e81f               shr eax, 0x1f
// 00506011  03c2                 add eax, edx
// 00506013  99                   cdq 
// 00506014  56                   push esi
// 00506015  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00506018  57                   push edi
// 00506019  2bc2                 sub eax, edx
// 0050601b  d1f8                 sar eax, 1
// 0050601d  8d3c80               lea edi, [eax + eax*4]
// 00506020  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00506023  56                   push esi
// 00506024  83c0b0               add eax, -0x50
// 00506027  c1e704               shl edi, 4
// 0050602a  50                   push eax
// 0050602b  03fb                 add edi, ebx
// 0050602d  57                   push edi
// 0050602e  53                   push ebx
// 0050602f  e8fcfdffff           call 0x505e30
// 00506034  83c410               add esp, 0x10
// 00506037  8d5f50               lea ebx, [edi + 0x50]
// 0050603a  397d0c               cmp dword ptr [ebp + 0xc], edi
// 0050603d  732b                 jae 0x50606a
// 0050603f  90                   nop 
// 00506040  8d47b0               lea eax, [edi - 0x50]
// 00506043  57                   push edi
// 00506044  50                   push eax
// 00506045  8944241c             mov dword ptr [esp + 0x1c], eax
// 00506049  ffd6                 call esi
// 0050604b  83c408               add esp, 8
// 0050604e  84c0                 test al, al
// 00506050  7518                 jne 0x50606a
// 00506052  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00506056  51                   push ecx
// 00506057  57                   push edi
// 00506058  ffd6                 call esi
// 0050605a  83c408               add esp, 8
// 0050605d  84c0                 test al, al
// 0050605f  7509                 jne 0x50606a
// 00506061  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00506065  397d0c               cmp dword ptr [ebp + 0xc], edi
// 00506068  72d6                 jb 0x506040
// 0050606a  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 0050606d  731f                 jae 0x50608e
// 0050606f  90                   nop 
// 00506070  57                   push edi
// 00506071  53                   push ebx
// 00506072  ffd6                 call esi
// 00506074  83c408               add esp, 8
// 00506077  84c0                 test al, al
// 00506079  7513                 jne 0x50608e
// 0050607b  53                   push ebx
// 0050607c  57                   push edi
// 0050607d  ffd6                 call esi
// 0050607f  83c408               add esp, 8
// 00506082  84c0                 test al, al
// 00506084  7508                 jne 0x50608e
// 00506086  83c350               add ebx, 0x50
// 00506089  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 0050608c  72e2                 jb 0x506070
// 0050608e  8bc3                 mov eax, ebx
// 00506090  897c2410             mov dword ptr [esp + 0x10], edi
// 00506094  8944240c             mov dword ptr [esp + 0xc], eax
// 00506098  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 0050609b  0f8349010000         jae 0x5061ea
// 005060a1  8d7018               lea esi, [eax + 0x18]
// 005060a4  eb04                 jmp 0x5060aa
// 005060a6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005060aa  50                   push eax
// 005060ab  57                   push edi
// 005060ac  ff5514               call dword ptr [ebp + 0x14]
// 005060af  83c408               add esp, 8
// 005060b2  84c0                 test al, al
// 005060b4  0f8515010000         jne 0x5061cf
// 005060ba  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005060be  57                   push edi
// 005060bf  52                   push edx
// 005060c0  ff5514               call dword ptr [ebp + 0x14]
// 005060c3  83c408               add esp, 8
// 005060c6  84c0                 test al, al
// 005060c8  0f8518010000         jne 0x5061e6
// 005060ce  8bc3                 mov eax, ebx
// 005060d0  83c350               add ebx, 0x50
// 005060d3  89442414             mov dword ptr [esp + 0x14], eax
// 005060d7  3b44240c             cmp eax, dword ptr [esp + 0xc]
// 005060db  0f84ee000000         je 0x5061cf
// 005060e1  50                   push eax
// 005060e2  8d4c241c             lea ecx, [esp + 0x1c]
// 005060e6  e8651bf7ff           call 0x477c50
// 005060eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 005060ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005060f3  d901                 fld dword ptr [ecx]
// 005060f5  d918                 fstp dword ptr [eax]
// 005060f7  d946ec               fld dword ptr [esi - 0x14]
// 005060fa  d95804               fstp dword ptr [eax + 4]
// 005060fd  d946f0               fld dword ptr [esi - 0x10]
// 00506100  d95808               fstp dword ptr [eax + 8]
// 00506103  d946f4               fld dword ptr [esi - 0xc]
// 00506106  d9580c               fstp dword ptr [eax + 0xc]
// 00506109  d946f8               fld dword ptr [esi - 8]
// 0050610c  d95810               fstp dword ptr [eax + 0x10]
// 0050610f  d946fc               fld dword ptr [esi - 4]
// 00506112  d95814               fstp dword ptr [eax + 0x14]
// 00506115  d906                 fld dword ptr [esi]
// 00506117  d95818               fstp dword ptr [eax + 0x18]
// 0050611a  dd4608               fld qword ptr [esi + 8]
// 0050611d  dd5820               fstp qword ptr [eax + 0x20]
// 00506120  dd4610               fld qword ptr [esi + 0x10]
// 00506123  dd5828               fstp qword ptr [eax + 0x28]
// 00506126  dd4618               fld qword ptr [esi + 0x18]
// 00506129  dd5830               fstp qword ptr [eax + 0x30]
// 0050612c  dd4620               fld qword ptr [esi + 0x20]
// 0050612f  dd5838               fstp qword ptr [eax + 0x38]
// 00506132  d94628               fld dword ptr [esi + 0x28]
// 00506135  d95840               fstp dword ptr [eax + 0x40]
// 00506138  d9462c               fld dword ptr [esi + 0x2c]
// 0050613b  d95844               fstp dword ptr [eax + 0x44]
// 0050613e  d94630               fld dword ptr [esi + 0x30]
// 00506141  d95848               fstp dword ptr [eax + 0x48]
// 00506144  0fb65634             movzx edx, byte ptr [esi + 0x34]
// 00506148  d9442418             fld dword ptr [esp + 0x18]
// 0050614c  88504c               mov byte ptr [eax + 0x4c], dl
// 0050614f  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 00506153  88504d               mov byte ptr [eax + 0x4d], dl
// 00506156  0fb65636             movzx edx, byte ptr [esi + 0x36]
// 0050615a  88504e               mov byte ptr [eax + 0x4e], dl
// 0050615d  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00506162  d919                 fstp dword ptr [ecx]
// 00506164  d944241c             fld dword ptr [esp + 0x1c]
// 00506168  d95eec               fstp dword ptr [esi - 0x14]
// 0050616b  8a442464             mov al, byte ptr [esp + 0x64]
// 0050616f  d9442420             fld dword ptr [esp + 0x20]
// 00506173  8a4c2465             mov cl, byte ptr [esp + 0x65]
// 00506177  d95ef0               fstp dword ptr [esi - 0x10]
// 0050617a  d9442424             fld dword ptr [esp + 0x24]
// 0050617e  d95ef4               fstp dword ptr [esi - 0xc]
// 00506181  d9442428             fld dword ptr [esp + 0x28]
// 00506185  d95ef8               fstp dword ptr [esi - 8]
// 00506188  d944242c             fld dword ptr [esp + 0x2c]
// 0050618c  d95efc               fstp dword ptr [esi - 4]
// 0050618f  d9442430             fld dword ptr [esp + 0x30]
// 00506193  d91e                 fstp dword ptr [esi]
// 00506195  dd442438             fld qword ptr [esp + 0x38]
// 00506199  dd5e08               fstp qword ptr [esi + 8]
// 0050619c  dd442440             fld qword ptr [esp + 0x40]
// 005061a0  dd5e10               fstp qword ptr [esi + 0x10]
// 005061a3  dd442448             fld qword ptr [esp + 0x48]
// 005061a7  dd5e18               fstp qword ptr [esi + 0x18]
// 005061aa  dd442450             fld qword ptr [esp + 0x50]
// 005061ae  dd5e20               fstp qword ptr [esi + 0x20]
// 005061b1  d9442458             fld dword ptr [esp + 0x58]
// 005061b5  d95e28               fstp dword ptr [esi + 0x28]
// 005061b8  d944245c             fld dword ptr [esp + 0x5c]
// 005061bc  d95e2c               fstp dword ptr [esi + 0x2c]
// 005061bf  d9442460             fld dword ptr [esp + 0x60]
// 005061c3  d95e30               fstp dword ptr [esi + 0x30]
// 005061c6  884634               mov byte ptr [esi + 0x34], al
// 005061c9  884e35               mov byte ptr [esi + 0x35], cl
// 005061cc  885636               mov byte ptr [esi + 0x36], dl
// 005061cf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005061d3  83c050               add eax, 0x50
// 005061d6  83c650               add esi, 0x50
// 005061d9  8944240c             mov dword ptr [esp + 0xc], eax
// 005061dd  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 005061e0  0f82c0feffff         jb 0x5060a6
// 005061e6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005061ea  8b742410             mov esi, dword ptr [esp + 0x10]
// 005061ee  39750c               cmp dword ptr [ebp + 0xc], esi
// 005061f1  0f834a010000         jae 0x506341
// 005061f7  8d4718               lea eax, [edi + 0x18]
// 005061fa  89442414             mov dword ptr [esp + 0x14], eax
// 005061fe  83c6c8               add esi, -0x38
// 00506201  8d46e8               lea eax, [esi - 0x18]
// 00506204  57                   push edi
// 00506205  50                   push eax
// 00506206  ff5514               call dword ptr [ebp + 0x14]
// 00506209  83c408               add esp, 8
// 0050620c  84c0                 test al, al
// 0050620e  0f8512010000         jne 0x506326
// 00506214  8d46e8               lea eax, [esi - 0x18]
// 00506217  50                   push eax
// 00506218  57                   push edi
// 00506219  ff5514               call dword ptr [ebp + 0x14]
// 0050621c  83c408               add esp, 8
// 0050621f  84c0                 test al, al
// 00506221  0f8516010000         jne 0x50633d
// 00506227  836c241450           sub dword ptr [esp + 0x14], 0x50
// 0050622c  83ef50               sub edi, 0x50
// 0050622f  8d4ee8               lea ecx, [esi - 0x18]
// 00506232  3bf9                 cmp edi, ecx
// 00506234  0f84ec000000         je 0x506326
// 0050623a  57                   push edi
// 0050623b  8d4c241c             lea ecx, [esp + 0x1c]
// 0050623f  e80c1af7ff           call 0x477c50
// 00506244  d946e8               fld dword ptr [esi - 0x18]
// 00506247  d91f                 fstp dword ptr [edi]
// 00506249  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050624d  d946ec               fld dword ptr [esi - 0x14]
// 00506250  d958ec               fstp dword ptr [eax - 0x14]
// 00506253  d946f0               fld dword ptr [esi - 0x10]
// 00506256  d958f0               fstp dword ptr [eax - 0x10]
// 00506259  d946f4               fld dword ptr [esi - 0xc]
// 0050625c  d958f4               fstp dword ptr [eax - 0xc]
// 0050625f  d946f8               fld dword ptr [esi - 8]
// 00506262  d958f8               fstp dword ptr [eax - 8]
// 00506265  d946fc               fld dword ptr [esi - 4]
// 00506268  d958fc               fstp dword ptr [eax - 4]
// 0050626b  d906                 fld dword ptr [esi]
// 0050626d  d918                 fstp dword ptr [eax]
// 0050626f  dd4608               fld qword ptr [esi + 8]
// 00506272  dd5808               fstp qword ptr [eax + 8]
// 00506275  dd4610               fld qword ptr [esi + 0x10]
// 00506278  dd5810               fstp qword ptr [eax + 0x10]
// 0050627b  dd4618               fld qword ptr [esi + 0x18]
// 0050627e  dd5818               fstp qword ptr [eax + 0x18]
// 00506281  dd4620               fld qword ptr [esi + 0x20]
// 00506284  dd5820               fstp qword ptr [eax + 0x20]
// 00506287  d94628               fld dword ptr [esi + 0x28]
// 0050628a  d95828               fstp dword ptr [eax + 0x28]
// 0050628d  d9462c               fld dword ptr [esi + 0x2c]
// 00506290  d9582c               fstp dword ptr [eax + 0x2c]
// 00506293  d94630               fld dword ptr [esi + 0x30]
// 00506296  d95830               fstp dword ptr [eax + 0x30]
// 00506299  0fb65634             movzx edx, byte ptr [esi + 0x34]
// 0050629d  d9442418             fld dword ptr [esp + 0x18]
// 005062a1  885034               mov byte ptr [eax + 0x34], dl
// 005062a4  0fb64e35             movzx ecx, byte ptr [esi + 0x35]
// 005062a8  884835               mov byte ptr [eax + 0x35], cl
// 005062ab  0fb65636             movzx edx, byte ptr [esi + 0x36]
// 005062af  885036               mov byte ptr [eax + 0x36], dl
// 005062b2  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 005062b7  d95ee8               fstp dword ptr [esi - 0x18]
// 005062ba  d944241c             fld dword ptr [esp + 0x1c]
// 005062be  d95eec               fstp dword ptr [esi - 0x14]
// 005062c1  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 005062c6  d9442420             fld dword ptr [esp + 0x20]
// 005062ca  d95ef0               fstp dword ptr [esi - 0x10]
// 005062cd  d9442424             fld dword ptr [esp + 0x24]
// 005062d1  8a442464             mov al, byte ptr [esp + 0x64]
// 005062d5  d95ef4               fstp dword ptr [esi - 0xc]
// 005062d8  d9442428             fld dword ptr [esp + 0x28]
// 005062dc  d95ef8               fstp dword ptr [esi - 8]
// 005062df  d944242c             fld dword ptr [esp + 0x2c]
// 005062e3  d95efc               fstp dword ptr [esi - 4]
// 005062e6  d9442430             fld dword ptr [esp + 0x30]
// 005062ea  d91e                 fstp dword ptr [esi]
// 005062ec  dd442438             fld qword ptr [esp + 0x38]
// 005062f0  dd5e08               fstp qword ptr [esi + 8]
// 005062f3  dd442440             fld qword ptr [esp + 0x40]
// 005062f7  dd5e10               fstp qword ptr [esi + 0x10]
// 005062fa  dd442448             fld qword ptr [esp + 0x48]
// 005062fe  dd5e18               fstp qword ptr [esi + 0x18]
// 00506301  dd442450             fld qword ptr [esp + 0x50]
// 00506305  dd5e20               fstp qword ptr [esi + 0x20]
// 00506308  d9442458             fld dword ptr [esp + 0x58]
// 0050630c  d95e28               fstp dword ptr [esi + 0x28]
// 0050630f  d944245c             fld dword ptr [esp + 0x5c]
// 00506313  d95e2c               fstp dword ptr [esi + 0x2c]
// 00506316  d9442460             fld dword ptr [esp + 0x60]
// 0050631a  d95e30               fstp dword ptr [esi + 0x30]
// 0050631d  884634               mov byte ptr [esi + 0x34], al
// 00506320  884e35               mov byte ptr [esi + 0x35], cl
// 00506323  885636               mov byte ptr [esi + 0x36], dl
// 00506326  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050632a  83e850               sub eax, 0x50
// 0050632d  83ee50               sub esi, 0x50
// 00506330  89442410             mov dword ptr [esp + 0x10], eax
// 00506334  39450c               cmp dword ptr [ebp + 0xc], eax
// 00506337  0f82c4feffff         jb 0x506201
// 0050633d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00506341  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00506345  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 00506348  0f851a020000         jne 0x506568
// 0050634e  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00506351  0f841f050000         je 0x506876
// 00506357  3bd8                 cmp ebx, eax
// 00506359  0f84f6000000         je 0x506455
// 0050635f  3bfb                 cmp edi, ebx
// 00506361  0f84ee000000         je 0x506455
// 00506367  57                   push edi
// 00506368  8d4c241c             lea ecx, [esp + 0x1c]
// 0050636c  e8df18f7ff           call 0x477c50
// 00506371  d903                 fld dword ptr [ebx]
// 00506373  d91f                 fstp dword ptr [edi]
// 00506375  d94304               fld dword ptr [ebx + 4]
// 00506378  d95f04               fstp dword ptr [edi + 4]
// 0050637b  d94308               fld dword ptr [ebx + 8]
// 0050637e  d95f08               fstp dword ptr [edi + 8]
// 00506381  d9430c               fld dword ptr [ebx + 0xc]
// 00506384  d95f0c               fstp dword ptr [edi + 0xc]
// 00506387  d94310               fld dword ptr [ebx + 0x10]
// 0050638a  d95f10               fstp dword ptr [edi + 0x10]
// 0050638d  d94314               fld dword ptr [ebx + 0x14]
// 00506390  d95f14               fstp dword ptr [edi + 0x14]
// 00506393  d94318               fld dword ptr [ebx + 0x18]
// 00506396  d95f18               fstp dword ptr [edi + 0x18]
// 00506399  dd4320               fld qword ptr [ebx + 0x20]
// 0050639c  dd5f20               fstp qword ptr [edi + 0x20]
// 0050639f  dd4328               fld qword ptr [ebx + 0x28]
// 005063a2  dd5f28               fstp qword ptr [edi + 0x28]
// 005063a5  dd4330               fld qword ptr [ebx + 0x30]
// 005063a8  dd5f30               fstp qword ptr [edi + 0x30]
// 005063ab  dd4338               fld qword ptr [ebx + 0x38]
// 005063ae  dd5f38               fstp qword ptr [edi + 0x38]
// 005063b1  d94340               fld dword ptr [ebx + 0x40]
// 005063b4  d95f40               fstp dword ptr [edi + 0x40]
// 005063b7  d94344               fld dword ptr [ebx + 0x44]
// 005063ba  d95f44               fstp dword ptr [edi + 0x44]
// 005063bd  d94348               fld dword ptr [ebx + 0x48]
// 005063c0  d95f48               fstp dword ptr [edi + 0x48]
// 005063c3  0fb6434c             movzx eax, byte ptr [ebx + 0x4c]
// 005063c7  d9442418             fld dword ptr [esp + 0x18]
// 005063cb  88474c               mov byte ptr [edi + 0x4c], al
// 005063ce  0fb64b4d             movzx ecx, byte ptr [ebx + 0x4d]
// 005063d2  884f4d               mov byte ptr [edi + 0x4d], cl
// 005063d5  0fb6534e             movzx edx, byte ptr [ebx + 0x4e]
// 005063d9  88574e               mov byte ptr [edi + 0x4e], dl
// 005063dc  0fb6442464           movzx eax, byte ptr [esp + 0x64]
// 005063e1  d91b                 fstp dword ptr [ebx]
// 005063e3  d944241c             fld dword ptr [esp + 0x1c]
// 005063e7  d95b04               fstp dword ptr [ebx + 4]
// 005063ea  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 005063ef  d9442420             fld dword ptr [esp + 0x20]
// 005063f3  d95b08               fstp dword ptr [ebx + 8]
// 005063f6  d9442424             fld dword ptr [esp + 0x24]
// 005063fa  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 005063ff  d95b0c               fstp dword ptr [ebx + 0xc]
// 00506402  d9442428             fld dword ptr [esp + 0x28]
// 00506406  d95b10               fstp dword ptr [ebx + 0x10]
// 00506409  d944242c             fld dword ptr [esp + 0x2c]
// 0050640d  d95b14               fstp dword ptr [ebx + 0x14]
// 00506410  d9442430             fld dword ptr [esp + 0x30]
// 00506414  d95b18               fstp dword ptr [ebx + 0x18]
// 00506417  dd442438             fld qword ptr [esp + 0x38]
// 0050641b  dd5b20               fstp qword ptr [ebx + 0x20]
// 0050641e  dd442440             fld qword ptr [esp + 0x40]
// 00506422  dd5b28               fstp qword ptr [ebx + 0x28]
// 00506425  dd442448             fld qword ptr [esp + 0x48]
// 00506429  dd5b30               fstp qword ptr [ebx + 0x30]
// 0050642c  dd442450             fld qword ptr [esp + 0x50]
// 00506430  dd5b38               fstp qword ptr [ebx + 0x38]
// 00506433  d9442458             fld dword ptr [esp + 0x58]
// 00506437  d95b40               fstp dword ptr [ebx + 0x40]
// 0050643a  d944245c             fld dword ptr [esp + 0x5c]
// 0050643e  d95b44               fstp dword ptr [ebx + 0x44]
// 00506441  d9442460             fld dword ptr [esp + 0x60]
// 00506445  d95b48               fstp dword ptr [ebx + 0x48]
// 00506448  88434c               mov byte ptr [ebx + 0x4c], al
// 0050644b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050644f  884b4d               mov byte ptr [ebx + 0x4d], cl
// 00506452  88534e               mov byte ptr [ebx + 0x4e], dl
// 00506455  8bcf                 mov ecx, edi
// 00506457  8bf0                 mov esi, eax
// 00506459  83c050               add eax, 0x50
// 0050645c  83c350               add ebx, 0x50
// 0050645f  83c750               add edi, 0x50
// 00506462  894c2414             mov dword ptr [esp + 0x14], ecx
// 00506466  8944240c             mov dword ptr [esp + 0xc], eax
// 0050646a  3bce                 cmp ecx, esi
// 0050646c  0f8426fcffff         je 0x506098
// 00506472  51                   push ecx
// 00506473  8d4c241c             lea ecx, [esp + 0x1c]
// 00506477  e8d417f7ff           call 0x477c50
// 0050647c  d906                 fld dword ptr [esi]
// 0050647e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00506482  d918                 fstp dword ptr [eax]
// 00506484  d94604               fld dword ptr [esi + 4]
// 00506487  d95804               fstp dword ptr [eax + 4]
// 0050648a  d94608               fld dword ptr [esi + 8]
// 0050648d  d95808               fstp dword ptr [eax + 8]
// 00506490  d9460c               fld dword ptr [esi + 0xc]
// 00506493  d9580c               fstp dword ptr [eax + 0xc]
// 00506496  d94610               fld dword ptr [esi + 0x10]
// 00506499  d95810               fstp dword ptr [eax + 0x10]
// 0050649c  d94614               fld dword ptr [esi + 0x14]
// 0050649f  d95814               fstp dword ptr [eax + 0x14]
// 005064a2  d94618               fld dword ptr [esi + 0x18]
// 005064a5  d95818               fstp dword ptr [eax + 0x18]
// 005064a8  dd4620               fld qword ptr [esi + 0x20]
// 005064ab  dd5820               fstp qword ptr [eax + 0x20]
// 005064ae  dd4628               fld qword ptr [esi + 0x28]
// 005064b1  dd5828               fstp qword ptr [eax + 0x28]
// 005064b4  dd4630               fld qword ptr [esi + 0x30]
// 005064b7  dd5830               fstp qword ptr [eax + 0x30]
// 005064ba  dd4638               fld qword ptr [esi + 0x38]
// 005064bd  dd5838               fstp qword ptr [eax + 0x38]
// 005064c0  d94640               fld dword ptr [esi + 0x40]
// 005064c3  d95840               fstp dword ptr [eax + 0x40]
// 005064c6  d94644               fld dword ptr [esi + 0x44]
// 005064c9  d95844               fstp dword ptr [eax + 0x44]
// 005064cc  d94648               fld dword ptr [esi + 0x48]
// 005064cf  d95848               fstp dword ptr [eax + 0x48]
// 005064d2  0fb64e4c             movzx ecx, byte ptr [esi + 0x4c]
// 005064d6  d9442418             fld dword ptr [esp + 0x18]
// 005064da  88484c               mov byte ptr [eax + 0x4c], cl
// 005064dd  0fb6564d             movzx edx, byte ptr [esi + 0x4d]
// 005064e1  88504d               mov byte ptr [eax + 0x4d], dl
// 005064e4  0fb64e4e             movzx ecx, byte ptr [esi + 0x4e]
// 005064e8  88484e               mov byte ptr [eax + 0x4e], cl
// 005064eb  0fb6542464           movzx edx, byte ptr [esp + 0x64]
// 005064f0  d91e                 fstp dword ptr [esi]
// 005064f2  d944241c             fld dword ptr [esp + 0x1c]
// 005064f6  d95e04               fstp dword ptr [esi + 4]
// 005064f9  8a442465             mov al, byte ptr [esp + 0x65]
// 005064fd  d9442420             fld dword ptr [esp + 0x20]
// 00506501  0fb64c2466           movzx ecx, byte ptr [esp + 0x66]
// 00506506  d95e08               fstp dword ptr [esi + 8]
// 00506509  d9442424             fld dword ptr [esp + 0x24]
// 0050650d  d95e0c               fstp dword ptr [esi + 0xc]
// 00506510  d9442428             fld dword ptr [esp + 0x28]
// 00506514  d95e10               fstp dword ptr [esi + 0x10]
// 00506517  d944242c             fld dword ptr [esp + 0x2c]
// 0050651b  d95e14               fstp dword ptr [esi + 0x14]
// 0050651e  d9442430             fld dword ptr [esp + 0x30]
// 00506522  d95e18               fstp dword ptr [esi + 0x18]
// 00506525  dd442438             fld qword ptr [esp + 0x38]
// 00506529  dd5e20               fstp qword ptr [esi + 0x20]
// 0050652c  dd442440             fld qword ptr [esp + 0x40]
// 00506530  dd5e28               fstp qword ptr [esi + 0x28]
// 00506533  dd442448             fld qword ptr [esp + 0x48]
// 00506537  dd5e30               fstp qword ptr [esi + 0x30]
// 0050653a  dd442450             fld qword ptr [esp + 0x50]
// 0050653e  dd5e38               fstp qword ptr [esi + 0x38]
// 00506541  d9442458             fld dword ptr [esp + 0x58]
// 00506545  d95e40               fstp dword ptr [esi + 0x40]
// 00506548  d944245c             fld dword ptr [esp + 0x5c]
// 0050654c  d95e44               fstp dword ptr [esi + 0x44]
// 0050654f  d9442460             fld dword ptr [esp + 0x60]
// 00506553  d95e48               fstp dword ptr [esi + 0x48]
// 00506556  88464d               mov byte ptr [esi + 0x4d], al
// 00506559  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050655d  88564c               mov byte ptr [esi + 0x4c], dl
// 00506560  884e4e               mov byte ptr [esi + 0x4e], cl
// 00506563  e930fbffff           jmp 0x506098
// 00506568  83e950               sub ecx, 0x50
// 0050656b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0050656f  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00506572  0f85fa010000         jne 0x506772
// 00506578  83ef50               sub edi, 0x50
// 0050657b  3bcf                 cmp ecx, edi
// 0050657d  0f84f1000000         je 0x506674
// 00506583  51                   push ecx
// 00506584  8d4c241c             lea ecx, [esp + 0x1c]
// 00506588  e8c316f7ff           call 0x477c50
// 0050658d  d907                 fld dword ptr [edi]
// 0050658f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00506593  d918                 fstp dword ptr [eax]
// 00506595  d94704               fld dword ptr [edi + 4]
// 00506598  d95804               fstp dword ptr [eax + 4]
// 0050659b  d94708               fld dword ptr [edi + 8]
// 0050659e  d95808               fstp dword ptr [eax + 8]
// 005065a1  d9470c               fld dword ptr [edi + 0xc]
// 005065a4  d9580c               fstp dword ptr [eax + 0xc]
// 005065a7  d94710               fld dword ptr [edi + 0x10]
// 005065aa  d95810               fstp dword ptr [eax + 0x10]
// 005065ad  d94714               fld dword ptr [edi + 0x14]
// 005065b0  d95814               fstp dword ptr [eax + 0x14]
// 005065b3  d94718               fld dword ptr [edi + 0x18]
// 005065b6  d95818               fstp dword ptr [eax + 0x18]
// 005065b9  dd4720               fld qword ptr [edi + 0x20]
// 005065bc  dd5820               fstp qword ptr [eax + 0x20]
// 005065bf  dd4728               fld qword ptr [edi + 0x28]
// 005065c2  dd5828               fstp qword ptr [eax + 0x28]
// 005065c5  dd4730               fld qword ptr [edi + 0x30]
// 005065c8  dd5830               fstp qword ptr [eax + 0x30]
// 005065cb  dd4738               fld qword ptr [edi + 0x38]
// 005065ce  dd5838               fstp qword ptr [eax + 0x38]
// 005065d1  d94740               fld dword ptr [edi + 0x40]
// 005065d4  d95840               fstp dword ptr [eax + 0x40]
// 005065d7  d94744               fld dword ptr [edi + 0x44]
// 005065da  d95844               fstp dword ptr [eax + 0x44]
// 005065dd  d94748               fld dword ptr [edi + 0x48]
// 005065e0  d95848               fstp dword ptr [eax + 0x48]
// 005065e3  0fb6574c             movzx edx, byte ptr [edi + 0x4c]
// 005065e7  d9442418             fld dword ptr [esp + 0x18]
// 005065eb  88504c               mov byte ptr [eax + 0x4c], dl
// 005065ee  0fb64f4d             movzx ecx, byte ptr [edi + 0x4d]
// 005065f2  88484d               mov byte ptr [eax + 0x4d], cl
// 005065f5  0fb6574e             movzx edx, byte ptr [edi + 0x4e]
// 005065f9  88504e               mov byte ptr [eax + 0x4e], dl
// 005065fc  8a442464             mov al, byte ptr [esp + 0x64]
// 00506600  d91f                 fstp dword ptr [edi]
// 00506602  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00506607  d944241c             fld dword ptr [esp + 0x1c]
// 0050660b  d95f04               fstp dword ptr [edi + 4]
// 0050660e  d9442420             fld dword ptr [esp + 0x20]
// 00506612  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00506617  d95f08               fstp dword ptr [edi + 8]
// 0050661a  d9442424             fld dword ptr [esp + 0x24]
// 0050661e  d95f0c               fstp dword ptr [edi + 0xc]
// 00506621  d9442428             fld dword ptr [esp + 0x28]
// 00506625  d95f10               fstp dword ptr [edi + 0x10]
// 00506628  d944242c             fld dword ptr [esp + 0x2c]
// 0050662c  d95f14               fstp dword ptr [edi + 0x14]
// 0050662f  d9442430             fld dword ptr [esp + 0x30]
// 00506633  d95f18               fstp dword ptr [edi + 0x18]
// 00506636  dd442438             fld qword ptr [esp + 0x38]
// 0050663a  dd5f20               fstp qword ptr [edi + 0x20]
// 0050663d  dd442440             fld qword ptr [esp + 0x40]
// 00506641  dd5f28               fstp qword ptr [edi + 0x28]
// 00506644  dd442448             fld qword ptr [esp + 0x48]
// 00506648  dd5f30               fstp qword ptr [edi + 0x30]
// 0050664b  dd442450             fld qword ptr [esp + 0x50]
// 0050664f  dd5f38               fstp qword ptr [edi + 0x38]
// 00506652  d9442458             fld dword ptr [esp + 0x58]
// 00506656  d95f40               fstp dword ptr [edi + 0x40]
// 00506659  d944245c             fld dword ptr [esp + 0x5c]
// 0050665d  d95f44               fstp dword ptr [edi + 0x44]
// 00506660  d9442460             fld dword ptr [esp + 0x60]
// 00506664  d95f48               fstp dword ptr [edi + 0x48]
// 00506667  88474c               mov byte ptr [edi + 0x4c], al
// 0050666a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050666e  884f4d               mov byte ptr [edi + 0x4d], cl
// 00506671  88574e               mov byte ptr [edi + 0x4e], dl
// 00506674  83eb50               sub ebx, 0x50
// 00506677  3bfb                 cmp edi, ebx
// 00506679  0f8419faffff         je 0x506098
// 0050667f  57                   push edi
// 00506680  8d4c241c             lea ecx, [esp + 0x1c]
// 00506684  e8c715f7ff           call 0x477c50
// 00506689  d903                 fld dword ptr [ebx]
// 0050668b  d91f                 fstp dword ptr [edi]
// 0050668d  d94304               fld dword ptr [ebx + 4]
// 00506690  d95f04               fstp dword ptr [edi + 4]
// 00506693  d94308               fld dword ptr [ebx + 8]
// 00506696  d95f08               fstp dword ptr [edi + 8]
// 00506699  d9430c               fld dword ptr [ebx + 0xc]
// 0050669c  d95f0c               fstp dword ptr [edi + 0xc]
// 0050669f  d94310               fld dword ptr [ebx + 0x10]
// 005066a2  d95f10               fstp dword ptr [edi + 0x10]
// 005066a5  d94314               fld dword ptr [ebx + 0x14]
// 005066a8  d95f14               fstp dword ptr [edi + 0x14]
// 005066ab  d94318               fld dword ptr [ebx + 0x18]
// 005066ae  d95f18               fstp dword ptr [edi + 0x18]
// 005066b1  dd4320               fld qword ptr [ebx + 0x20]
// 005066b4  dd5f20               fstp qword ptr [edi + 0x20]
// 005066b7  dd4328               fld qword ptr [ebx + 0x28]
// 005066ba  dd5f28               fstp qword ptr [edi + 0x28]
// 005066bd  dd4330               fld qword ptr [ebx + 0x30]
// 005066c0  dd5f30               fstp qword ptr [edi + 0x30]
// 005066c3  dd4338               fld qword ptr [ebx + 0x38]
// 005066c6  dd5f38               fstp qword ptr [edi + 0x38]
// 005066c9  d94340               fld dword ptr [ebx + 0x40]
// 005066cc  d95f40               fstp dword ptr [edi + 0x40]
// 005066cf  d94344               fld dword ptr [ebx + 0x44]
// 005066d2  d95f44               fstp dword ptr [edi + 0x44]
// 005066d5  d94348               fld dword ptr [ebx + 0x48]
// 005066d8  d95f48               fstp dword ptr [edi + 0x48]
// 005066db  0fb6434c             movzx eax, byte ptr [ebx + 0x4c]
// 005066df  d9442418             fld dword ptr [esp + 0x18]
// 005066e3  88474c               mov byte ptr [edi + 0x4c], al
// 005066e6  0fb64b4d             movzx ecx, byte ptr [ebx + 0x4d]
// 005066ea  884f4d               mov byte ptr [edi + 0x4d], cl
// 005066ed  0fb6534e             movzx edx, byte ptr [ebx + 0x4e]
// 005066f1  88574e               mov byte ptr [edi + 0x4e], dl
// 005066f4  0fb6442464           movzx eax, byte ptr [esp + 0x64]
// 005066f9  d91b                 fstp dword ptr [ebx]
// 005066fb  d944241c             fld dword ptr [esp + 0x1c]
// 005066ff  d95b04               fstp dword ptr [ebx + 4]
// 00506702  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 00506707  d9442420             fld dword ptr [esp + 0x20]
// 0050670b  d95b08               fstp dword ptr [ebx + 8]
// 0050670e  d9442424             fld dword ptr [esp + 0x24]
// 00506712  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00506717  d95b0c               fstp dword ptr [ebx + 0xc]
// 0050671a  d9442428             fld dword ptr [esp + 0x28]
// 0050671e  d95b10               fstp dword ptr [ebx + 0x10]
// 00506721  d944242c             fld dword ptr [esp + 0x2c]
// 00506725  d95b14               fstp dword ptr [ebx + 0x14]
// 00506728  d9442430             fld dword ptr [esp + 0x30]
// 0050672c  d95b18               fstp dword ptr [ebx + 0x18]
// 0050672f  dd442438             fld qword ptr [esp + 0x38]
// 00506733  dd5b20               fstp qword ptr [ebx + 0x20]
// 00506736  dd442440             fld qword ptr [esp + 0x40]
// 0050673a  dd5b28               fstp qword ptr [ebx + 0x28]
// 0050673d  dd442448             fld qword ptr [esp + 0x48]
// 00506741  dd5b30               fstp qword ptr [ebx + 0x30]
// 00506744  dd442450             fld qword ptr [esp + 0x50]
// 00506748  dd5b38               fstp qword ptr [ebx + 0x38]
// 0050674b  d9442458             fld dword ptr [esp + 0x58]
// 0050674f  d95b40               fstp dword ptr [ebx + 0x40]
// 00506752  d944245c             fld dword ptr [esp + 0x5c]
// 00506756  d95b44               fstp dword ptr [ebx + 0x44]
// 00506759  d9442460             fld dword ptr [esp + 0x60]
// 0050675d  d95b48               fstp dword ptr [ebx + 0x48]
// 00506760  88434c               mov byte ptr [ebx + 0x4c], al
// 00506763  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00506767  884b4d               mov byte ptr [ebx + 0x4d], cl
// 0050676a  88534e               mov byte ptr [ebx + 0x4e], dl
// 0050676d  e926f9ffff           jmp 0x506098
// 00506772  3bc1                 cmp eax, ecx
// 00506774  0f84f4000000         je 0x50686e
// 0050677a  50                   push eax
// 0050677b  8d4c241c             lea ecx, [esp + 0x1c]
// 0050677f  e8cc14f7ff           call 0x477c50
// 00506784  8b442410             mov eax, dword ptr [esp + 0x10]
// 00506788  d900                 fld dword ptr [eax]
// 0050678a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050678e  d91e                 fstp dword ptr [esi]
// 00506790  d94004               fld dword ptr [eax + 4]
// 00506793  d95e04               fstp dword ptr [esi + 4]
// 00506796  d94008               fld dword ptr [eax + 8]
// 00506799  d95e08               fstp dword ptr [esi + 8]
// 0050679c  d9400c               fld dword ptr [eax + 0xc]
// 0050679f  d95e0c               fstp dword ptr [esi + 0xc]
// 005067a2  d94010               fld dword ptr [eax + 0x10]
// 005067a5  d95e10               fstp dword ptr [esi + 0x10]
// 005067a8  d94014               fld dword ptr [eax + 0x14]
// 005067ab  d95e14               fstp dword ptr [esi + 0x14]
// 005067ae  d94018               fld dword ptr [eax + 0x18]
// 005067b1  d95e18               fstp dword ptr [esi + 0x18]
// 005067b4  dd4020               fld qword ptr [eax + 0x20]
// 005067b7  dd5e20               fstp qword ptr [esi + 0x20]
// 005067ba  dd4028               fld qword ptr [eax + 0x28]
// 005067bd  dd5e28               fstp qword ptr [esi + 0x28]
// 005067c0  dd4030               fld qword ptr [eax + 0x30]
// 005067c3  dd5e30               fstp qword ptr [esi + 0x30]
// 005067c6  dd4038               fld qword ptr [eax + 0x38]
// 005067c9  dd5e38               fstp qword ptr [esi + 0x38]
// 005067cc  d94040               fld dword ptr [eax + 0x40]
// 005067cf  d95e40               fstp dword ptr [esi + 0x40]
// 005067d2  d94044               fld dword ptr [eax + 0x44]
// 005067d5  d95e44               fstp dword ptr [esi + 0x44]
// 005067d8  d94048               fld dword ptr [eax + 0x48]
// 005067db  d95e48               fstp dword ptr [esi + 0x48]
// 005067de  0fb6484c             movzx ecx, byte ptr [eax + 0x4c]
// 005067e2  d9442418             fld dword ptr [esp + 0x18]
// 005067e6  884e4c               mov byte ptr [esi + 0x4c], cl
// 005067e9  0fb6504d             movzx edx, byte ptr [eax + 0x4d]
// 005067ed  88564d               mov byte ptr [esi + 0x4d], dl
// 005067f0  0fb6484e             movzx ecx, byte ptr [eax + 0x4e]
// 005067f4  884e4e               mov byte ptr [esi + 0x4e], cl
// 005067f7  0fb6542464           movzx edx, byte ptr [esp + 0x64]
// 005067fc  d918                 fstp dword ptr [eax]
// 005067fe  d944241c             fld dword ptr [esp + 0x1c]
// 00506802  d95804               fstp dword ptr [eax + 4]
// 00506805  0fb64c2465           movzx ecx, byte ptr [esp + 0x65]
// 0050680a  d9442420             fld dword ptr [esp + 0x20]
// 0050680e  d95808               fstp dword ptr [eax + 8]
// 00506811  d9442424             fld dword ptr [esp + 0x24]
// 00506815  d9580c               fstp dword ptr [eax + 0xc]
// 00506818  d9442428             fld dword ptr [esp + 0x28]
// 0050681c  d95810               fstp dword ptr [eax + 0x10]
// 0050681f  d944242c             fld dword ptr [esp + 0x2c]
// 00506823  d95814               fstp dword ptr [eax + 0x14]
// 00506826  d9442430             fld dword ptr [esp + 0x30]
// 0050682a  d95818               fstp dword ptr [eax + 0x18]
// 0050682d  dd442438             fld qword ptr [esp + 0x38]
// 00506831  dd5820               fstp qword ptr [eax + 0x20]
// 00506834  dd442440             fld qword ptr [esp + 0x40]
// 00506838  dd5828               fstp qword ptr [eax + 0x28]
// 0050683b  dd442448             fld qword ptr [esp + 0x48]
// 0050683f  dd5830               fstp qword ptr [eax + 0x30]
// 00506842  dd442450             fld qword ptr [esp + 0x50]
// 00506846  dd5838               fstp qword ptr [eax + 0x38]
// 00506849  d9442458             fld dword ptr [esp + 0x58]
// 0050684d  d95840               fstp dword ptr [eax + 0x40]
// 00506850  d944245c             fld dword ptr [esp + 0x5c]
// 00506854  d95844               fstp dword ptr [eax + 0x44]
// 00506857  d9442460             fld dword ptr [esp + 0x60]
// 0050685b  d95848               fstp dword ptr [eax + 0x48]
// 0050685e  88504c               mov byte ptr [eax + 0x4c], dl
// 00506861  0fb6542466           movzx edx, byte ptr [esp + 0x66]
// 00506866  88484d               mov byte ptr [eax + 0x4d], cl
// 00506869  88504e               mov byte ptr [eax + 0x4e], dl
// 0050686c  8bc6                 mov eax, esi
// 0050686e  83c050               add eax, 0x50
// 00506871  e91ef8ffff           jmp 0x506094
// 00506876  8b4508               mov eax, dword ptr [ebp + 8]
// 00506879  8938                 mov dword ptr [eax], edi
// 0050687b  5f                   pop edi
// 0050687c  5e                   pop esi
// 0050687d  895804               mov dword ptr [eax + 4], ebx
// 00506880  5b                   pop ebx
// 00506881  8be5                 mov esp, ebp
// 00506883  5d                   pop ebp
// 00506884  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Unguarded_partition@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YA?AU?$pair@PAVGLight@G3D@@PAV12@@0@PAVGLight@G3D@@0P6A_NABV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
