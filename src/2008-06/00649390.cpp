// roc 2008-06 00649390  unit: RBX::Ball  size: 736 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649390
//
// 00649390  8b442404             mov eax, dword ptr [esp + 4]
// 00649394  83ec08               sub esp, 8
// 00649397  50                   push eax
// 00649398  8d4c2404             lea ecx, [esp + 4]
// 0064939c  e81f2a1700           call 0x7bbdc0
// 006493a1  807c241000           cmp byte ptr [esp + 0x10], 0
// 006493a6  7455                 je 0x6493fd
// 006493a8  0fbf0424             movsx eax, word ptr [esp]
// 006493ac  8d48ff               lea ecx, [eax - 1]
// 006493af  83f903               cmp ecx, 3
// 006493b2  772f                 ja 0x6493e3
// 006493b4  ff248d40966400       jmp dword ptr [ecx*4 + 0x649640]
// 006493bb  d905c8788300         fld dword ptr [0x8378c8]
// 006493c1  83c408               add esp, 8
// 006493c4  c3                   ret 
// 006493c5  d9053c798300         fld dword ptr [0x83793c]
// 006493cb  83c408               add esp, 8
// 006493ce  c3                   ret 
// 006493cf  d90530b08400         fld dword ptr [0x84b030]
// 006493d5  83c408               add esp, 8
// 006493d8  c3                   ret 
// 006493d9  d9052cb08400         fld dword ptr [0x84b02c]
// 006493df  83c408               add esp, 8
// 006493e2  c3                   ret 
// 006493e3  8bc8                 mov ecx, eax
// 006493e5  0fafc8               imul ecx, eax
// 006493e8  0fafc8               imul ecx, eax
// 006493eb  894c2410             mov dword ptr [esp + 0x10], ecx
// 006493ef  db442410             fild dword ptr [esp + 0x10]
// 006493f3  d80d28b08400         fmul dword ptr [0x84b028]
// 006493f9  83c408               add esp, 8
// 006493fc  c3                   ret 
// 006493fd  0fbf0c24             movsx ecx, word ptr [esp]
// 00649401  8bc1                 mov eax, ecx
// 00649403  83e801               sub eax, 1
// 00649406  0f84ed000000         je 0x6494f9
// 0064940c  83e801               sub eax, 1
// 0064940f  0fbf442402           movsx eax, word ptr [esp + 2]
// 00649414  741d                 je 0x649433
// 00649416  0fbf542404           movsx edx, word ptr [esp + 4]
// 0064941b  0fafd0               imul edx, eax
// 0064941e  0fafd1               imul edx, ecx
// 00649421  89542410             mov dword ptr [esp + 0x10], edx
// 00649425  db442410             fild dword ptr [esp + 0x10]
// 00649429  d80de4a38300         fmul dword ptr [0x83a3e4]
// 0064942f  83c408               add esp, 8
// 00649432  c3                   ret 
// 00649433  89442410             mov dword ptr [esp + 0x10], eax
// 00649437  83e802               sub eax, 2
// 0064943a  7460                 je 0x64949c
// 0064943c  83e801               sub eax, 1
// 0064943f  741b                 je 0x64945c
// 00649441  db442410             fild dword ptr [esp + 0x10]
// 00649445  0fbf4c2404           movsx ecx, word ptr [esp + 4]
// 0064944a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0064944e  d80d24b08400         fmul dword ptr [0x84b024]
// 00649454  da4c2410             fimul dword ptr [esp + 0x10]
// 00649458  83c408               add esp, 8
// 0064945b  c3                   ret 
// 0064945c  0fbf442404           movsx eax, word ptr [esp + 4]
// 00649461  89442410             mov dword ptr [esp + 0x10], eax
// 00649465  83e803               sub eax, 3
// 00649468  7428                 je 0x649492
// 0064946a  83e801               sub eax, 1
// 0064946d  7419                 je 0x649488
// 0064946f  db442410             fild dword ptr [esp + 0x10]
// 00649473  d90520b08400         fld dword ptr [0x84b020]
// 00649479  d8d9                 fcomp st(1)
// 0064947b  dfe0                 fnstsw ax
// 0064947d  f6c441               test ah, 0x41
// 00649480  754f                 jne 0x6494d1
// 00649482  dcc0                 fadd st(0), st(0)
// 00649484  83c408               add esp, 8
// 00649487  c3                   ret 
// 00649488  d9051cb08400         fld dword ptr [0x84b01c]
// 0064948e  83c408               add esp, 8
// 00649491  c3                   ret 
// 00649492  d90520b08400         fld dword ptr [0x84b020]
// 00649498  83c408               add esp, 8
// 0064949b  c3                   ret 
// 0064949c  0fbf442404           movsx eax, word ptr [esp + 4]
// 006494a1  89442410             mov dword ptr [esp + 0x10], eax
// 006494a5  83e802               sub eax, 2
// 006494a8  7445                 je 0x6494ef
// 006494aa  83e801               sub eax, 1
// 006494ad  7436                 je 0x6494e5
// 006494af  83e801               sub eax, 1
// 006494b2  7427                 je 0x6494db
// 006494b4  db442410             fild dword ptr [esp + 0x10]
// 006494b8  d90520b08400         fld dword ptr [0x84b020]
// 006494be  d8d9                 fcomp st(1)
// 006494c0  dfe0                 fnstsw ax
// 006494c2  f6c441               test ah, 0x41
// 006494c5  750a                 jne 0x6494d1
// 006494c7  d80dc4788300         fmul dword ptr [0x8378c4]
// 006494cd  83c408               add esp, 8
// 006494d0  c3                   ret 
// 006494d1  d80d7ce38100         fmul dword ptr [0x81e37c]
// 006494d7  83c408               add esp, 8
// 006494da  c3                   ret 
// 006494db  d90518b08400         fld dword ptr [0x84b018]
// 006494e1  83c408               add esp, 8
// 006494e4  c3                   ret 
// 006494e5  d90514b08400         fld dword ptr [0x84b014]
// 006494eb  83c408               add esp, 8
// 006494ee  c3                   ret 
// 006494ef  d90510b08400         fld dword ptr [0x84b010]
// 006494f5  83c408               add esp, 8
// 006494f8  c3                   ret 
// 006494f9  0fbf442402           movsx eax, word ptr [esp + 2]
// 006494fe  89442410             mov dword ptr [esp + 0x10], eax
// 00649502  48                   dec eax
// 00649503  83f803               cmp eax, 3
// 00649506  0f8710010000         ja 0x64961c
// 0064950c  ff248550966400       jmp dword ptr [eax*4 + 0x649650]
// 00649513  0fbf442404           movsx eax, word ptr [esp + 4]
// 00649518  89442410             mov dword ptr [esp + 0x10], eax
// 0064951c  48                   dec eax
// 0064951d  83f803               cmp eax, 3
// 00649520  772f                 ja 0x649551
// 00649522  ff248560966400       jmp dword ptr [eax*4 + 0x649660]
// 00649529  d9050cb08400         fld dword ptr [0x84b00c]
// 0064952f  83c408               add esp, 8
// 00649532  c3                   ret 
// 00649533  d90508b08400         fld dword ptr [0x84b008]
// 00649539  83c408               add esp, 8
// 0064953c  c3                   ret 
// 0064953d  d90534c48100         fld dword ptr [0x81c434]
// 00649543  83c408               add esp, 8
// 00649546  c3                   ret 
// 00649547  d90504b08400         fld dword ptr [0x84b004]
// 0064954d  83c408               add esp, 8
// 00649550  c3                   ret 
// 00649551  db442410             fild dword ptr [esp + 0x10]
// 00649555  d80d182a8300         fmul dword ptr [0x832a18]
// 0064955b  83c408               add esp, 8
// 0064955e  c3                   ret 
// 0064955f  0fbf442404           movsx eax, word ptr [esp + 4]
// 00649564  89442410             mov dword ptr [esp + 0x10], eax
// 00649568  83e802               sub eax, 2
// 0064956b  7445                 je 0x6495b2
// 0064956d  83e801               sub eax, 1
// 00649570  7436                 je 0x6495a8
// 00649572  83e801               sub eax, 1
// 00649575  7427                 je 0x64959e
// 00649577  db442410             fild dword ptr [esp + 0x10]
// 0064957b  d90520b08400         fld dword ptr [0x84b020]
// 00649581  d8d9                 fcomp st(1)
// 00649583  dfe0                 fnstsw ax
// 00649585  f6c441               test ah, 0x41
// 00649588  750a                 jne 0x649594
// 0064958a  d80dc86f8200         fmul dword ptr [0x826fc8]
// 00649590  83c408               add esp, 8
// 00649593  c3                   ret 
// 00649594  d80d40f88200         fmul dword ptr [0x82f840]
// 0064959a  83c408               add esp, 8
// 0064959d  c3                   ret 
// 0064959e  d90500b08400         fld dword ptr [0x84b000]
// 006495a4  83c408               add esp, 8
// 006495a7  c3                   ret 
// 006495a8  d905fcaf8400         fld dword ptr [0x84affc]
// 006495ae  83c408               add esp, 8
// 006495b1  c3                   ret 
// 006495b2  d905c4888200         fld dword ptr [0x8288c4]
// 006495b8  83c408               add esp, 8
// 006495bb  c3                   ret 
// 006495bc  0fbf542404           movsx edx, word ptr [esp + 4]
// 006495c1  89542410             mov dword ptr [esp + 0x10], edx
// 006495c5  db442410             fild dword ptr [esp + 0x10]
// 006495c9  d905b41d8300         fld dword ptr [0x831db4]
// 006495cf  d8d9                 fcomp st(1)
// 006495d1  dfe0                 fnstsw ax
// 006495d3  f6c441               test ah, 0x41
// 006495d6  750a                 jne 0x6495e2
// 006495d8  d80df8af8400         fmul dword ptr [0x84aff8]
// 006495de  83c408               add esp, 8
// 006495e1  c3                   ret 
// 006495e2  d80d44788300         fmul dword ptr [0x837844]
// 006495e8  83c408               add esp, 8
// 006495eb  c3                   ret 
// 006495ec  0fbf442404           movsx eax, word ptr [esp + 4]
// 006495f1  89442410             mov dword ptr [esp + 0x10], eax
// 006495f5  db442410             fild dword ptr [esp + 0x10]
// 006495f9  d905b41d8300         fld dword ptr [0x831db4]
// 006495ff  d8d9                 fcomp st(1)
// 00649601  dfe0                 fnstsw ax
// 00649603  f6c441               test ah, 0x41
// 00649606  750a                 jne 0x649612
// 00649608  d80df4af8400         fmul dword ptr [0x84aff4]
// 0064960e  83c408               add esp, 8
// 00649611  c3                   ret 
// 00649612  d80df0af8400         fmul dword ptr [0x84aff0]
// 00649618  83c408               add esp, 8
// 0064961b  c3                   ret 
// 0064961c  db442410             fild dword ptr [esp + 0x10]
// 00649620  0fbf4c2404           movsx ecx, word ptr [esp + 4]
// 00649625  894c2410             mov dword ptr [esp + 0x10], ecx
// 00649629  d80d1c718200         fmul dword ptr [0x82711c]
// 0064962f  d80524b08400         fadd dword ptr [0x84b024]
// 00649635  da4c2410             fimul dword ptr [esp + 0x10]
// 00649639  83c408               add esp, 8
// 0064963c  c3                   ret 
// 0064963d  8d4900               lea ecx, [ecx]
// 00649640  bb936400c5           mov ebx, 0xc5006493
// 00649645  93                   xchg ebx, eax
// 00649646  6400cf               add bh, cl
// 00649649  93                   xchg ebx, eax
// 0064964a  6400d9               add cl, bl
// 0064964d  93                   xchg ebx, eax
// 0064964e  640013               add byte ptr fs:[ebx], dl
// 00649651  95                   xchg ebp, eax
// 00649652  64005f95             add byte ptr fs:[edi - 0x6b], bl
// 00649656  6400bc956400ec95     add byte ptr fs:[ebp + edx*4 - 0x6a13ff9c], bh
// 0064965e  640029               add byte ptr fs:[ecx], ch
// 00649661  95                   xchg ebp, eax
// 00649662  640033               add byte ptr fs:[ebx], dh
// 00649665  95                   xchg ebp, eax
// 00649666  64003d95640047       add byte ptr fs:[0x47006495], bh
// 0064966d  95                   xchg ebp, eax
// library openrbx-client/App\v8kernel\Constants.cpp (function ?getJointKMultiplier@Constants@RBX@@CA?BMABVVector3@G3D@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8kernel/Constants.cpp
