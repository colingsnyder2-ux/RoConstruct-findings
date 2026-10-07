// roc 2011-06 005711f0  unit: seg_00570000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005711f0
//
// 005711f0  83ec0c               sub esp, 0xc
// 005711f3  53                   push ebx
// 005711f4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005711f8  56                   push esi
// 005711f9  8b742418             mov esi, dword ptr [esp + 0x18]
// 005711fd  8b4668               mov eax, dword ptr [esi + 0x68]
// 00571200  a801                 test al, 1
// 00571202  7534                 jne 0x571238
// 00571204  68b46ca800           push 0xa86cb4
// 00571209  56                   push esi
// 0057120a  e82101ffff           call 0x561330
// 0057120f  83c408               add esp, 8
// 00571212  57                   push edi
// 00571213  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00571217  83ff09               cmp edi, 9
// 0057121a  746b                 je 0x571287
// 0057121c  68986ca800           push 0xa86c98
// 00571221  56                   push esi
// 00571222  e8b901ffff           call 0x5613e0
// 00571227  57                   push edi
// 00571228  56                   push esi
// 00571229  e812e6ffff           call 0x56f840
// 0057122e  83c410               add esp, 0x10
// 00571231  5f                   pop edi
// 00571232  5e                   pop esi
// 00571233  5b                   pop ebx
// 00571234  83c40c               add esp, 0xc
// 00571237  c3                   ret 
// 00571238  a804                 test al, 4
// 0057123a  741f                 je 0x57125b
// 0057123c  68806ca800           push 0xa86c80
// 00571241  56                   push esi
// 00571242  e89901ffff           call 0x5613e0
// 00571247  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057124b  50                   push eax
// 0057124c  56                   push esi
// 0057124d  e8eee5ffff           call 0x56f840
// 00571252  83c410               add esp, 0x10
// 00571255  5e                   pop esi
// 00571256  5b                   pop ebx
// 00571257  83c40c               add esp, 0xc
// 0057125a  c3                   ret 
// 0057125b  85db                 test ebx, ebx
// 0057125d  74b3                 je 0x571212
// 0057125f  f7430800010000       test dword ptr [ebx + 8], 0x100
// 00571266  74aa                 je 0x571212
// 00571268  68686ca800           push 0xa86c68
// 0057126d  56                   push esi
// 0057126e  e86d01ffff           call 0x5613e0
// 00571273  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00571277  51                   push ecx
// 00571278  56                   push esi
// 00571279  e8c2e5ffff           call 0x56f840
// 0057127e  83c410               add esp, 0x10
// 00571281  5e                   pop esi
// 00571282  5b                   pop ebx
// 00571283  83c40c               add esp, 0xc
// 00571286  c3                   ret 
// 00571287  6a09                 push 9
// 00571289  8d542410             lea edx, [esp + 0x10]
// 0057128d  52                   push edx
// 0057128e  56                   push esi
// 0057128f  e8dcfcfeff           call 0x560f70
// 00571294  6a09                 push 9
// 00571296  8d44241c             lea eax, [esp + 0x1c]
// 0057129a  50                   push eax
// 0057129b  56                   push esi
// 0057129c  e8aff5fdff           call 0x550850
// 005712a1  6a00                 push 0
// 005712a3  56                   push esi
// 005712a4  e897e5ffff           call 0x56f840
// 005712a9  83c420               add esp, 0x20
// 005712ac  85c0                 test eax, eax
// 005712ae  7558                 jne 0x571308
// 005712b0  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 005712b5  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 005712ba  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 005712bf  51                   push ecx
// 005712c0  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 005712c5  c1e208               shl edx, 8
// 005712c8  03d0                 add edx, eax
// 005712ca  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 005712cf  c1e208               shl edx, 8
// 005712d2  03d1                 add edx, ecx
// 005712d4  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 005712d9  c1e208               shl edx, 8
// 005712dc  03d0                 add edx, eax
// 005712de  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 005712e3  52                   push edx
// 005712e4  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 005712e9  c1e108               shl ecx, 8
// 005712ec  03ca                 add ecx, edx
// 005712ee  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 005712f3  c1e108               shl ecx, 8
// 005712f6  03c8                 add ecx, eax
// 005712f8  c1e108               shl ecx, 8
// 005712fb  03ca                 add ecx, edx
// 005712fd  51                   push ecx
// 005712fe  53                   push ebx
// 005712ff  56                   push esi
// 00571300  e83b8afeff           call 0x559d40
// 00571305  83c414               add esp, 0x14
// 00571308  5f                   pop edi
// 00571309  5e                   pop esi
// 0057130a  5b                   pop ebx
// 0057130b  83c40c               add esp, 0xc
// 0057130e  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
