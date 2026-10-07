// roc 2011-06 009002b0  unit: CXTPRibbonSystemPopupBar  size: 1015 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009002b0
//
// 009002b0  51                   push ecx
// 009002b1  53                   push ebx
// 009002b2  55                   push ebp
// 009002b3  56                   push esi
// 009002b4  57                   push edi
// 009002b5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009002b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009002c1  bd01000000           mov ebp, 1
// 009002c6  8b4774               mov eax, dword ptr [edi + 0x74]
// 009002c9  3d06010000           cmp eax, 0x106
// 009002ce  7323                 jae 0x9002f3
// 009002d0  e8abfaffff           call 0x8ffd80
// 009002d5  8b4774               mov eax, dword ptr [edi + 0x74]
// 009002d8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009002dc  3d06010000           cmp eax, 0x106
// 009002e1  7308                 jae 0x9002eb
// 009002e3  85f6                 test esi, esi
// 009002e5  0f845e020000         je 0x900549
// 009002eb  85c0                 test eax, eax
// 009002ed  0f8409030000         je 0x9005fc
// 009002f3  83f803               cmp eax, 3
// 009002f6  724d                 jb 0x900345
// 009002f8  8b4748               mov eax, dword ptr [edi + 0x48]
// 009002fb  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 009002fe  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00900301  8b7734               mov esi, dword ptr [edi + 0x34]
// 00900304  d3e0                 shl eax, cl
// 00900306  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00900309  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0090030e  33c1                 xor eax, ecx
// 00900310  234754               and eax, dword ptr [edi + 0x54]
// 00900313  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00900316  894748               mov dword ptr [edi + 0x48], eax
// 00900319  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0090031d  23f2                 and esi, edx
// 0090031f  8b5740               mov edx, dword ptr [edi + 0x40]
// 00900322  66890472             mov word ptr [edx + esi*2], ax
// 00900326  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00900329  234f34               and ecx, dword ptr [edi + 0x34]
// 0090032c  8b5740               mov edx, dword ptr [edi + 0x40]
// 0090032f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 00900333  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00900336  8b5744               mov edx, dword ptr [edi + 0x44]
// 00900339  89442410             mov dword ptr [esp + 0x10], eax
// 0090033d  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 00900341  6689044a             mov word ptr [edx + ecx*2], ax
// 00900345  8b5770               mov edx, dword ptr [edi + 0x70]
// 00900348  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0090034b  895764               mov dword ptr [edi + 0x64], edx
// 0090034e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00900352  bb02000000           mov ebx, 2
// 00900357  894f78               mov dword ptr [edi + 0x78], ecx
// 0090035a  895f60               mov dword ptr [edi + 0x60], ebx
// 0090035d  85d2                 test edx, edx
// 0090035f  7471                 je 0x9003d2
// 00900361  8bc1                 mov eax, ecx
// 00900363  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 00900369  7367                 jae 0x9003d2
// 0090036b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0090036e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00900371  2bc2                 sub eax, edx
// 00900373  81e906010000         sub ecx, 0x106
// 00900379  3bc1                 cmp eax, ecx
// 0090037b  7755                 ja 0x9003d2
// 0090037d  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 00900383  3bcb                 cmp ecx, ebx
// 00900385  740e                 je 0x900395
// 00900387  83f903               cmp ecx, 3
// 0090038a  740e                 je 0x90039a
// 0090038c  8bc2                 mov eax, edx
// 0090038e  e88df8ffff           call 0x8ffc20
// 00900393  eb14                 jmp 0x9003a9
// 00900395  83f903               cmp ecx, 3
// 00900398  7512                 jne 0x9003ac
// 0090039a  3bc5                 cmp eax, ebp
// 0090039c  750e                 jne 0x9003ac
// 0090039e  52                   push edx
// 0090039f  8bf7                 mov esi, edi
// 009003a1  e88a61c6ff           call 0x566530
// 009003a6  83c404               add esp, 4
// 009003a9  894760               mov dword ptr [edi + 0x60], eax
// 009003ac  8b4760               mov eax, dword ptr [edi + 0x60]
// 009003af  83f805               cmp eax, 5
// 009003b2  771e                 ja 0x9003d2
// 009003b4  39af88000000         cmp dword ptr [edi + 0x88], ebp
// 009003ba  7413                 je 0x9003cf
// 009003bc  83f803               cmp eax, 3
// 009003bf  7511                 jne 0x9003d2
// 009003c1  8b576c               mov edx, dword ptr [edi + 0x6c]
// 009003c4  2b5770               sub edx, dword ptr [edi + 0x70]
// 009003c7  81fa00100000         cmp edx, 0x1000
// 009003cd  7603                 jbe 0x9003d2
// 009003cf  895f60               mov dword ptr [edi + 0x60], ebx
// 009003d2  8b4778               mov eax, dword ptr [edi + 0x78]
// 009003d5  83f803               cmp eax, 3
// 009003d8  0f8273010000         jb 0x900551
// 009003de  394760               cmp dword ptr [edi + 0x60], eax
// 009003e1  0f876a010000         ja 0x900551
// 009003e7  668b576c             mov dx, word ptr [edi + 0x6c]
// 009003eb  662b5764             sub dx, word ptr [edi + 0x64]
// 009003ef  8b476c               mov eax, dword ptr [edi + 0x6c]
// 009003f2  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 009003f5  8b9fa4160000         mov ebx, dword ptr [edi + 0x16a4]
// 009003fb  8d7408fd             lea esi, [eax + ecx - 3]
// 009003ff  8a4778               mov al, byte ptr [edi + 0x78]
// 00900402  662bd5               sub dx, bp
// 00900405  0fb7ca               movzx ecx, dx
// 00900408  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 0090040e  66890c53             mov word ptr [ebx + edx*2], cx
// 00900412  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 00900418  8b9fa0160000         mov ebx, dword ptr [edi + 0x16a0]
// 0090041e  2c03                 sub al, 3
// 00900420  88041a               mov byte ptr [edx + ebx], al
// 00900423  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00900429  0fb6c0               movzx eax, al
// 0090042c  0fb690d87aa800       movzx edx, byte ptr [eax + 0xa87ad8]
// 00900433  6601ac9798040000     add word ptr [edi + edx*4 + 0x498], bp
// 0090043b  8d849798040000       lea eax, [edi + edx*4 + 0x498]
// 00900442  81c1ffff0000         add ecx, 0xffff
// 00900448  b800010000           mov eax, 0x100
// 0090044d  663bc8               cmp cx, ax
// 00900450  730c                 jae 0x90045e
// 00900452  0fb7c9               movzx ecx, cx
// 00900455  0fb681d878a800       movzx eax, byte ptr [ecx + 0xa878d8]
// 0090045c  eb0d                 jmp 0x90046b
// 0090045e  0fb7d1               movzx edx, cx
// 00900461  c1ea07               shr edx, 7
// 00900464  0fb682d879a800       movzx eax, byte ptr [edx + 0xa879d8]
// 0090046b  6601ac8788090000     add word ptr [edi + eax*4 + 0x988], bp
// 00900473  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 00900479  2bc5                 sub eax, ebp
// 0090047b  33db                 xor ebx, ebx
// 0090047d  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 00900483  8b4778               mov eax, dword ptr [edi + 0x78]
// 00900486  0f94c3               sete bl
// 00900489  8bcd                 mov ecx, ebp
// 0090048b  2bc8                 sub ecx, eax
// 0090048d  014f74               add dword ptr [edi + 0x74], ecx
// 00900490  83c0fe               add eax, -2
// 00900493  894778               mov dword ptr [edi + 0x78], eax
// 00900496  016f6c               add dword ptr [edi + 0x6c], ebp
// 00900499  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0090049c  3bd6                 cmp edx, esi
// 0090049e  774f                 ja 0x9004ef
// 009004a0  8b4748               mov eax, dword ptr [edi + 0x48]
// 009004a3  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 009004a6  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 009004a9  d3e0                 shl eax, cl
// 009004ab  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 009004ae  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 009004b3  33c1                 xor eax, ecx
// 009004b5  234754               and eax, dword ptr [edi + 0x54]
// 009004b8  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 009004bb  894748               mov dword ptr [edi + 0x48], eax
// 009004be  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 009004c2  23ea                 and ebp, edx
// 009004c4  8b5740               mov edx, dword ptr [edi + 0x40]
// 009004c7  6689046a             mov word ptr [edx + ebp*2], ax
// 009004cb  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 009004ce  234f34               and ecx, dword ptr [edi + 0x34]
// 009004d1  8b5740               mov edx, dword ptr [edi + 0x40]
// 009004d4  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 009004d8  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 009004db  8b5744               mov edx, dword ptr [edi + 0x44]
// 009004de  89442410             mov dword ptr [esp + 0x10], eax
// 009004e2  0fb7476c             movzx eax, word ptr [edi + 0x6c]
// 009004e6  6689044a             mov word ptr [edx + ecx*2], ax
// 009004ea  bd01000000           mov ebp, 1
// 009004ef  834778ff             add dword ptr [edi + 0x78], -1
// 009004f3  75a1                 jne 0x900496
// 009004f5  016f6c               add dword ptr [edi + 0x6c], ebp
// 009004f8  8b476c               mov eax, dword ptr [edi + 0x6c]
// 009004fb  c7476800000000       mov dword ptr [edi + 0x68], 0
// 00900502  c7476002000000       mov dword ptr [edi + 0x60], 2
// 00900509  85db                 test ebx, ebx
// 0090050b  0f84b5fdffff         je 0x9002c6
// 00900511  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00900514  85d2                 test edx, edx
// 00900516  7c07                 jl 0x90051f
// 00900518  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0090051b  03ca                 add ecx, edx
// 0090051d  eb02                 jmp 0x900521
// 0090051f  33c9                 xor ecx, ecx
// 00900521  6a00                 push 0
// 00900523  2bc2                 sub eax, edx
// 00900525  50                   push eax
// 00900526  51                   push ecx
// 00900527  57                   push edi
// 00900528  e83340c7ff           call 0x574560
// 0090052d  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00900530  8b07                 mov eax, dword ptr [edi]
// 00900532  83c410               add esp, 0x10
// 00900535  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00900538  e823f6ffff           call 0x8ffb60
// 0090053d  8b17                 mov edx, dword ptr [edi]
// 0090053f  837a1000             cmp dword ptr [edx + 0x10], 0
// 00900543  0f857dfdffff         jne 0x9002c6
// 00900549  5f                   pop edi
// 0090054a  5e                   pop esi
// 0090054b  5d                   pop ebp
// 0090054c  33c0                 xor eax, eax
// 0090054e  5b                   pop ebx
// 0090054f  59                   pop ecx
// 00900550  c3                   ret 
// 00900551  837f6800             cmp dword ptr [edi + 0x68], 0
// 00900555  0f8493000000         je 0x9005ee
// 0090055b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0090055e  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00900561  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 00900565  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 0090056b  8b8fa4160000         mov ecx, dword ptr [edi + 0x16a4]
// 00900571  33f6                 xor esi, esi
// 00900573  66893451             mov word ptr [ecx + edx*2], si
// 00900577  8b9798160000         mov edx, dword ptr [edi + 0x1698]
// 0090057d  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00900583  88040a               mov byte ptr [edx + ecx], al
// 00900586  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 0090058c  0fb6d0               movzx edx, al
// 0090058f  6601ac9794000000     add word ptr [edi + edx*4 + 0x94], bp
// 00900597  8d849794000000       lea eax, [edi + edx*4 + 0x94]
// 0090059e  8b879c160000         mov eax, dword ptr [edi + 0x169c]
// 009005a4  2bc5                 sub eax, ebp
// 009005a6  3987a0160000         cmp dword ptr [edi + 0x16a0], eax
// 009005ac  752f                 jne 0x9005dd
// 009005ae  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 009005b1  85c9                 test ecx, ecx
// 009005b3  7c07                 jl 0x9005bc
// 009005b5  8b4738               mov eax, dword ptr [edi + 0x38]
// 009005b8  03c1                 add eax, ecx
// 009005ba  eb02                 jmp 0x9005be
// 009005bc  33c0                 xor eax, eax
// 009005be  8b576c               mov edx, dword ptr [edi + 0x6c]
// 009005c1  6a00                 push 0
// 009005c3  2bd1                 sub edx, ecx
// 009005c5  52                   push edx
// 009005c6  50                   push eax
// 009005c7  57                   push edi
// 009005c8  e8933fc7ff           call 0x574560
// 009005cd  8b476c               mov eax, dword ptr [edi + 0x6c]
// 009005d0  89475c               mov dword ptr [edi + 0x5c], eax
// 009005d3  8b07                 mov eax, dword ptr [edi]
// 009005d5  83c410               add esp, 0x10
// 009005d8  e883f5ffff           call 0x8ffb60
// 009005dd  8b0f                 mov ecx, dword ptr [edi]
// 009005df  016f6c               add dword ptr [edi + 0x6c], ebp
// 009005e2  ff4f74               dec dword ptr [edi + 0x74]
// 009005e5  83791000             cmp dword ptr [ecx + 0x10], 0
// 009005e9  e955ffffff           jmp 0x900543
// 009005ee  016f6c               add dword ptr [edi + 0x6c], ebp
// 009005f1  ff4f74               dec dword ptr [edi + 0x74]
// 009005f4  896f68               mov dword ptr [edi + 0x68], ebp
// 009005f7  e9cafcffff           jmp 0x9002c6
// 009005fc  837f6800             cmp dword ptr [edi + 0x68], 0
// 00900600  7446                 je 0x900648
// 00900602  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00900605  8b4738               mov eax, dword ptr [edi + 0x38]
// 00900608  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 0090060c  8b8fa0160000         mov ecx, dword ptr [edi + 0x16a0]
// 00900612  8b97a4160000         mov edx, dword ptr [edi + 0x16a4]
// 00900618  33db                 xor ebx, ebx
// 0090061a  66891c4a             mov word ptr [edx + ecx*2], bx
// 0090061e  8b97a0160000         mov edx, dword ptr [edi + 0x16a0]
// 00900624  8b8f98160000         mov ecx, dword ptr [edi + 0x1698]
// 0090062a  880411               mov byte ptr [ecx + edx], al
// 0090062d  01afa0160000         add dword ptr [edi + 0x16a0], ebp
// 00900633  0fb6c0               movzx eax, al
// 00900636  6601ac8794000000     add word ptr [edi + eax*4 + 0x94], bp
// 0090063e  8d848794000000       lea eax, [edi + eax*4 + 0x94]
// 00900645  895f68               mov dword ptr [edi + 0x68], ebx
// 00900648  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0090064b  85c9                 test ecx, ecx
// 0090064d  7c07                 jl 0x900656
// 0090064f  8b4738               mov eax, dword ptr [edi + 0x38]
// 00900652  03c1                 add eax, ecx
// 00900654  eb02                 jmp 0x900658
// 00900656  33c0                 xor eax, eax
// 00900658  33d2                 xor edx, edx
// 0090065a  83fe04               cmp esi, 4
// 0090065d  0f94c2               sete dl
// 00900660  52                   push edx
// 00900661  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00900664  2bd1                 sub edx, ecx
// 00900666  52                   push edx
// 00900667  50                   push eax
// 00900668  57                   push edi
// 00900669  e8f23ec7ff           call 0x574560
// 0090066e  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00900671  89475c               mov dword ptr [edi + 0x5c], eax
// 00900674  8b07                 mov eax, dword ptr [edi]
// 00900676  83c410               add esp, 0x10
// 00900679  e8e2f4ffff           call 0x8ffb60
// 0090067e  8b0f                 mov ecx, dword ptr [edi]
// 00900680  33c0                 xor eax, eax
// 00900682  394110               cmp dword ptr [ecx + 0x10], eax
// 00900685  7510                 jne 0x900697
// 00900687  83fe04               cmp esi, 4
// 0090068a  0f95c0               setne al
// 0090068d  5f                   pop edi
// 0090068e  5e                   pop esi
// 0090068f  5d                   pop ebp
// 00900690  5b                   pop ebx
// 00900691  48                   dec eax
// 00900692  83e002               and eax, 2
// 00900695  59                   pop ecx
// 00900696  c3                   ret 
// 00900697  83fe04               cmp esi, 4
// 0090069a  0f94c0               sete al
// 0090069d  5f                   pop edi
// 0090069e  5e                   pop esi
// 0090069f  5d                   pop ebp
// 009006a0  5b                   pop ebx
// 009006a1  8d440001             lea eax, [eax + eax + 1]
// 009006a5  59                   pop ecx
// 009006a6  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
