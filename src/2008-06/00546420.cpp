// from server: 100% by auto
// roc 2008-06 00546420  unit: seg_00540000  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00546420
//
// 00546420  55                   push ebp
// 00546421  8bec                 mov ebp, esp
// 00546423  6aff                 push -1
// 00546425  6860cd7c00           push 0x7ccd60
// 0054642a  64a100000000         mov eax, dword ptr fs:[0]
// 00546430  50                   push eax
// 00546431  51                   push ecx
// 00546432  83ec28               sub esp, 0x28
// 00546435  53                   push ebx
// 00546436  56                   push esi
// 00546437  57                   push edi
// 00546438  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0054643d  33c5                 xor eax, ebp
// 0054643f  50                   push eax
// 00546440  8d45f4               lea eax, [ebp - 0xc]
// 00546443  64a300000000         mov dword ptr fs:[0], eax
// 00546449  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054644c  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 0054644f  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546452  e889feffff           call 0x5462e0
// 00546457  8945ec               mov dword ptr [ebp - 0x14], eax
// 0054645a  837d1000             cmp dword ptr [ebp + 0x10], 0
// 0054645e  7505                 jne 0x546465
// 00546460  e9f6020000           jmp 0x54675b
// 00546465  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546468  e8b3feffff           call 0x546320
// 0054646d  8bf0                 mov esi, eax
// 0054646f  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546472  e8b9c5ffff           call 0x542a30
// 00546477  2bc6                 sub eax, esi
// 00546479  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 0054647c  730a                 jae 0x546488
// 0054647e  e8edcd0000           call 0x553270
// 00546483  e9d3020000           jmp 0x54675b
// 00546488  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054648b  e890feffff           call 0x546320
// 00546490  034510               add eax, dword ptr [ebp + 0x10]
// 00546493  3945ec               cmp dword ptr [ebp - 0x14], eax
// 00546496  0f837c010000         jae 0x546618
// 0054649c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054649f  d1ee                 shr esi, 1
// 005464a1  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005464a4  e887c5ffff           call 0x542a30
// 005464a9  2bc6                 sub eax, esi
// 005464ab  3b45ec               cmp eax, dword ptr [ebp - 0x14]
// 005464ae  7309                 jae 0x5464b9
// 005464b0  c745d000000000       mov dword ptr [ebp - 0x30], 0
// 005464b7  eb0b                 jmp 0x5464c4
// 005464b9  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005464bc  d1e8                 shr eax, 1
// 005464be  0345ec               add eax, dword ptr [ebp - 0x14]
// 005464c1  8945d0               mov dword ptr [ebp - 0x30], eax
// 005464c4  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005464c7  894dec               mov dword ptr [ebp - 0x14], ecx
// 005464ca  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005464cd  e84efeffff           call 0x546320
// 005464d2  034510               add eax, dword ptr [ebp + 0x10]
// 005464d5  3945ec               cmp dword ptr [ebp - 0x14], eax
// 005464d8  730e                 jae 0x5464e8
// 005464da  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005464dd  e83efeffff           call 0x546320
// 005464e2  034510               add eax, dword ptr [ebp + 0x10]
// 005464e5  8945ec               mov dword ptr [ebp - 0x14], eax
// 005464e8  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005464eb  52                   push edx
// 005464ec  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005464ef  83c108               add ecx, 8
// 005464f2  e8e9c8ffff           call 0x542de0
// 005464f7  8945e4               mov dword ptr [ebp - 0x1c], eax
// 005464fa  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005464fd  8945e8               mov dword ptr [ebp - 0x18], eax
// 00546500  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00546507  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0054650a  51                   push ecx
// 0054650b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0054650e  52                   push edx
// 0054650f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00546512  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00546515  51                   push ecx
// 00546516  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546519  e8d2060000           call 0x546bf0
// 0054651e  8945cc               mov dword ptr [ebp - 0x34], eax
// 00546521  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 00546524  8955e8               mov dword ptr [ebp - 0x18], edx
// 00546527  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0054652a  50                   push eax
// 0054652b  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0054652e  51                   push ecx
// 0054652f  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00546532  52                   push edx
// 00546533  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546536  e885feffff           call 0x5463c0
// 0054653b  8945c8               mov dword ptr [ebp - 0x38], eax
// 0054653e  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 00546541  8945e8               mov dword ptr [ebp - 0x18], eax
// 00546544  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00546547  51                   push ecx
// 00546548  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0054654b  8b4210               mov eax, dword ptr [edx + 0x10]
// 0054654e  50                   push eax
// 0054654f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00546552  51                   push ecx
// 00546553  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546556  e895060000           call 0x546bf0
// 0054655b  eb39                 jmp 0x546596
// 0054655d  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00546560  52                   push edx
// 00546561  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00546564  50                   push eax
// 00546565  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546568  e843020000           call 0x5467b0
// 0054656d  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00546570  51                   push ecx
// 00546571  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00546574  52                   push edx
// 00546575  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546578  83c108               add ecx, 8
// 0054657b  e890d0ffff           call 0x543610
// 00546580  6a00                 push 0
// 00546582  6a00                 push 0
// 00546584  e803b01500           call 0x6a158c
// 00546589  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00546590  b89d655400           mov eax, 0x54659d
// 00546595  c3                   ret 
// 00546596  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054659d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005465a0  e87bfdffff           call 0x546320
// 005465a5  034510               add eax, dword ptr [ebp + 0x10]
// 005465a8  894510               mov dword ptr [ebp + 0x10], eax
// 005465ab  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005465ae  83780c00             cmp dword ptr [eax + 0xc], 0
// 005465b2  7438                 je 0x5465ec
// 005465b4  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005465b7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005465ba  52                   push edx
// 005465bb  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005465be  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005465c1  51                   push ecx
// 005465c2  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005465c5  e8e6010000           call 0x5467b0
// 005465ca  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005465cd  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005465d0  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005465d3  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005465d6  c1f902               sar ecx, 2
// 005465d9  51                   push ecx
// 005465da  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005465dd  8b420c               mov eax, dword ptr [edx + 0xc]
// 005465e0  50                   push eax
// 005465e1  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005465e4  83c108               add ecx, 8
// 005465e7  e824d0ffff           call 0x543610
// 005465ec  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005465ef  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 005465f2  8d048a               lea eax, [edx + ecx*4]
// 005465f5  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005465f8  894114               mov dword ptr [ecx + 0x14], eax
// 005465fb  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005465fe  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00546601  8d0c90               lea ecx, [eax + edx*4]
// 00546604  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 00546607  894a10               mov dword ptr [edx + 0x10], ecx
// 0054660a  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 0054660d  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 00546610  89480c               mov dword ptr [eax + 0xc], ecx
// 00546613  e943010000           jmp 0x54675b
// 00546618  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 0054661b  8b4210               mov eax, dword ptr [edx + 0x10]
// 0054661e  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00546621  c1f802               sar eax, 2
// 00546624  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 00546627  0f83c2000000         jae 0x5466ef
// 0054662d  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00546630  8b11                 mov edx, dword ptr [ecx]
// 00546632  8955e0               mov dword ptr [ebp - 0x20], edx
// 00546635  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00546638  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054663b  8d1481               lea edx, [ecx + eax*4]
// 0054663e  52                   push edx
// 0054663f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00546642  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00546645  51                   push ecx
// 00546646  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00546649  52                   push edx
// 0054664a  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054664d  e89e050000           call 0x546bf0
// 00546652  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00546659  8d45e0               lea eax, [ebp - 0x20]
// 0054665c  50                   push eax
// 0054665d  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546660  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00546663  2b550c               sub edx, dword ptr [ebp + 0xc]
// 00546666  c1fa02               sar edx, 2
// 00546669  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0054666c  2bc2                 sub eax, edx
// 0054666e  50                   push eax
// 0054666f  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546672  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00546675  52                   push edx
// 00546676  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00546679  e842fdffff           call 0x5463c0
// 0054667e  eb35                 jmp 0x5466b5
// 00546680  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00546683  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00546686  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00546689  8d0491               lea eax, [ecx + edx*4]
// 0054668c  50                   push eax
// 0054668d  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00546690  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00546693  8d048a               lea eax, [edx + ecx*4]
// 00546696  50                   push eax
// 00546697  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054669a  e811010000           call 0x5467b0
// 0054669f  6a00                 push 0
// 005466a1  6a00                 push 0
// 005466a3  e8e4ae1500           call 0x6a158c
// 005466a8  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005466af  b8bc665400           mov eax, 0x5466bc
// 005466b4  c3                   ret 
// 005466b5  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005466bc  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005466bf  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005466c2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005466c5  8d0c82               lea ecx, [edx + eax*4]
// 005466c8  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005466cb  894a10               mov dword ptr [edx + 0x10], ecx
// 005466ce  8d45e0               lea eax, [ebp - 0x20]
// 005466d1  50                   push eax
// 005466d2  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005466d5  c1e102               shl ecx, 2
// 005466d8  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 005466db  8b4210               mov eax, dword ptr [edx + 0x10]
// 005466de  2bc1                 sub eax, ecx
// 005466e0  50                   push eax
// 005466e1  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005466e4  51                   push ecx
// 005466e5  e836050000           call 0x546c20
// 005466ea  83c40c               add esp, 0xc
// 005466ed  eb6c                 jmp 0x54675b
// 005466ef  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005466f2  8b02                 mov eax, dword ptr [edx]
// 005466f4  8945d8               mov dword ptr [ebp - 0x28], eax
// 005466f7  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 005466fa  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005466fd  8955dc               mov dword ptr [ebp - 0x24], edx
// 00546700  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00546703  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00546706  51                   push ecx
// 00546707  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0054670a  52                   push edx
// 0054670b  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0054670e  c1e002               shl eax, 2
// 00546711  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00546714  2bc8                 sub ecx, eax
// 00546716  51                   push ecx
// 00546717  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 0054671a  e8d1040000           call 0x546bf0
// 0054671f  8b55d4               mov edx, dword ptr [ebp - 0x2c]
// 00546722  894210               mov dword ptr [edx + 0x10], eax
// 00546725  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 00546728  50                   push eax
// 00546729  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0054672c  c1e102               shl ecx, 2
// 0054672f  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00546732  2bd1                 sub edx, ecx
// 00546734  52                   push edx
// 00546735  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00546738  50                   push eax
// 00546739  e812050000           call 0x546c50
// 0054673e  83c40c               add esp, 0xc
// 00546741  8d4dd8               lea ecx, [ebp - 0x28]
// 00546744  51                   push ecx
// 00546745  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00546748  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054674b  8d0c90               lea ecx, [eax + edx*4]
// 0054674e  51                   push ecx
// 0054674f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00546752  52                   push edx
// 00546753  e8c8040000           call 0x546c20
// 00546758  83c40c               add esp, 0xc
// 0054675b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054675e  64890d00000000       mov dword ptr fs:[0], ecx
// 00546765  59                   pop ecx
// 00546766  5f                   pop edi
// 00546767  5e                   pop esi
// 00546768  5b                   pop ebx
// 00546769  8be5                 mov esp, ebp
// 0054676b  5d                   pop ebp
// 0054676c  c21000               ret 0x10

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp
