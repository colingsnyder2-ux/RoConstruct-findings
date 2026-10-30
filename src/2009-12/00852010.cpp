// roc 2009-12 00852010  unit: CXTPPropExchangeArchive  size: 958 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00852010
//
// 00852010  6aff                 push -1
// 00852012  68ccda9500           push 0x95dacc
// 00852017  64a100000000         mov eax, dword ptr fs:[0]
// 0085201d  50                   push eax
// 0085201e  83ec30               sub esp, 0x30
// 00852021  53                   push ebx
// 00852022  55                   push ebp
// 00852023  56                   push esi
// 00852024  57                   push edi
// 00852025  a10052b600           mov eax, dword ptr [0xb65200]
// 0085202a  33c4                 xor eax, esp
// 0085202c  50                   push eax
// 0085202d  8d442444             lea eax, [esp + 0x44]
// 00852031  64a300000000         mov dword ptr fs:[0], eax
// 00852037  8bf1                 mov esi, ecx
// 00852039  89742420             mov dword ptr [esp + 0x20], esi
// 0085203d  33ff                 xor edi, edi
// 0085203f  8d4c2428             lea ecx, [esp + 0x28]
// 00852043  897c242c             mov dword ptr [esp + 0x2c], edi
// 00852047  ff1574de9800         call dword ptr [0x98de74]
// 0085204d  8b06                 mov eax, dword ptr [esi]
// 0085204f  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00852055  8bce                 mov ecx, esi
// 00852057  897c244c             mov dword ptr [esp + 0x4c], edi
// 0085205b  ffd2                 call edx
// 0085205d  85c0                 test eax, eax
// 0085205f  7514                 jne 0x852075
// 00852061  8d4c2428             lea ecx, [esp + 0x28]
// 00852065  ff15c0de9800         call dword ptr [0x98dec0]
// 0085206b  b805400080           mov eax, 0x80004005
// 00852070  e943030000           jmp 0x8523b8
// 00852075  8d4654               lea eax, [esi + 0x54]
// 00852078  50                   push eax
// 00852079  8d4c2434             lea ecx, [esp + 0x34]
// 0085207d  6858c59f00           push 0x9fc558
// 00852082  51                   push ecx
// 00852083  e8382cc0ff           call 0x454cc0
// 00852088  68001f9b00           push 0x9b1f00
// 0085208d  50                   push eax
// 0085208e  8d542438             lea edx, [esp + 0x38]
// 00852092  52                   push edx
// 00852093  c644246401           mov byte ptr [esp + 0x64], 1
// 00852098  e843adbbff           call 0x40cde0
// 0085209d  83c418               add esp, 0x18
// 008520a0  8d4c2430             lea ecx, [esp + 0x30]
// 008520a4  ff15c0de9800         call dword ptr [0x98dec0]
// 008520aa  33ed                 xor ebp, ebp
// 008520ac  897c2418             mov dword ptr [esp + 0x18], edi
// 008520b0  8b4644               mov eax, dword ptr [esi + 0x44]
// 008520b3  c644244c04           mov byte ptr [esp + 0x4c], 4
// 008520b8  3bc7                 cmp eax, edi
// 008520ba  750a                 jne 0x8520c6
// 008520bc  6803400080           push 0x80004003
// 008520c1  e83a38faff           call 0x7f5900
// 008520c6  8d542418             lea edx, [esp + 0x18]
// 008520ca  52                   push edx
// 008520cb  897c241c             mov dword ptr [esp + 0x1c], edi
// 008520cf  8b08                 mov ecx, dword ptr [eax]
// 008520d1  6848c59f00           push 0x9fc548
// 008520d6  50                   push eax
// 008520d7  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 008520dd  ffd0                 call eax
// 008520df  85c0                 test eax, eax
// 008520e1  7c78                 jl 0x85215b
// 008520e3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008520e7  3bc7                 cmp eax, edi
// 008520e9  0f94c1               sete cl
// 008520ec  84c9                 test cl, cl
// 008520ee  0f94c1               sete cl
// 008520f1  84c9                 test cl, cl
// 008520f3  7466                 je 0x85215b
// 008520f5  897c241c             mov dword ptr [esp + 0x1c], edi
// 008520f9  3bc7                 cmp eax, edi
// 008520fb  750a                 jne 0x852107
// 008520fd  6803400080           push 0x80004003
// 00852102  e8f937faff           call 0x7f5900
// 00852107  8b08                 mov ecx, dword ptr [eax]
// 00852109  8d54241c             lea edx, [esp + 0x1c]
// 0085210d  52                   push edx
// 0085210e  50                   push eax
// 0085210f  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00852112  ffd0                 call eax
// 00852114  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00852118  b940c59f00           mov ecx, 0x9fc540
// 0085211d  8bc3                 mov eax, ebx
// 0085211f  90                   nop 
// 00852120  668b10               mov dx, word ptr [eax]
// 00852123  663b11               cmp dx, word ptr [ecx]
// 00852126  751e                 jne 0x852146
// 00852128  663bd7               cmp dx, di
// 0085212b  7415                 je 0x852142
// 0085212d  668b5002             mov dx, word ptr [eax + 2]
// 00852131  663b5102             cmp dx, word ptr [ecx + 2]
// 00852135  750f                 jne 0x852146
// 00852137  83c004               add eax, 4
// 0085213a  83c104               add ecx, 4
// 0085213d  663bd7               cmp dx, di
// 00852140  75de                 jne 0x852120
// 00852142  33c0                 xor eax, eax
// 00852144  eb05                 jmp 0x85214b
// 00852146  1bc0                 sbb eax, eax
// 00852148  83d8ff               sbb eax, -1
// 0085214b  3bc7                 cmp eax, edi
// 0085214d  7505                 jne 0x852154
// 0085214f  bd01000000           mov ebp, 1
// 00852154  53                   push ebx
// 00852155  ff1590ba9800         call dword ptr [0x98ba90]
// 0085215b  897c2414             mov dword ptr [esp + 0x14], edi
// 0085215f  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00852164  3bef                 cmp ebp, edi
// 00852166  756f                 jne 0x8521d7
// 00852168  8b7644               mov esi, dword ptr [esi + 0x44]
// 0085216b  3bf7                 cmp esi, edi
// 0085216d  750a                 jne 0x852179
// 0085216f  6803400080           push 0x80004003
// 00852174  e88737faff           call 0x7f5900
// 00852179  8d4c2424             lea ecx, [esp + 0x24]
// 0085217d  ff1580de9800         call dword ptr [0x98de80]
// 00852183  50                   push eax
// 00852184  8d4c2420             lea ecx, [esp + 0x20]
// 00852188  e803c80100           call 0x86e990
// 0085218d  8be8                 mov ebp, eax
// 0085218f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852193  c644244c06           mov byte ptr [esp + 0x4c], 6
// 00852198  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 008521a0  3bc7                 cmp eax, edi
// 008521a2  7408                 je 0x8521ac
// 008521a4  8b08                 mov ecx, dword ptr [eax]
// 008521a6  8b5108               mov edx, dword ptr [ecx + 8]
// 008521a9  50                   push eax
// 008521aa  ffd2                 call edx
// 008521ac  8d442414             lea eax, [esp + 0x14]
// 008521b0  897c2414             mov dword ptr [esp + 0x14], edi
// 008521b4  8b3e                 mov edi, dword ptr [esi]
// 008521b6  50                   push eax
// 008521b7  8bcd                 mov ecx, ebp
// 008521b9  e8b2d4cdff           call 0x52f670
// 008521be  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 008521c4  50                   push eax
// 008521c5  6840c59f00           push 0x9fc540
// 008521ca  56                   push esi
// 008521cb  ffd1                 call ecx
// 008521cd  33ff                 xor edi, edi
// 008521cf  85c0                 test eax, eax
// 008521d1  7c04                 jl 0x8521d7
// 008521d3  b301                 mov bl, 1
// 008521d5  eb02                 jmp 0x8521d9
// 008521d7  32db                 xor bl, bl
// 008521d9  f644242c01           test byte ptr [esp + 0x2c], 1
// 008521de  c744244c05000000     mov dword ptr [esp + 0x4c], 5
// 008521e6  7409                 je 0x8521f1
// 008521e8  8d4c241c             lea ecx, [esp + 0x1c]
// 008521ec  e87fbe0100           call 0x86e070
// 008521f1  8b2d34ba9800         mov ebp, dword ptr [0x98ba34]
// 008521f7  84db                 test bl, bl
// 008521f9  0f84bb000000         je 0x8522ba
// 008521ff  897c241c             mov dword ptr [esp + 0x1c], edi
// 00852203  8b742420             mov esi, dword ptr [esp + 0x20]
// 00852207  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085220a  c644244c07           mov byte ptr [esp + 0x4c], 7
// 0085220f  3bc7                 cmp eax, edi
// 00852211  750a                 jne 0x85221d
// 00852213  6803400080           push 0x80004003
// 00852218  e8e336faff           call 0x7f5900
// 0085221d  8d4c241c             lea ecx, [esp + 0x1c]
// 00852221  51                   push ecx
// 00852222  897c2420             mov dword ptr [esp + 0x20], edi
// 00852226  8b10                 mov edx, dword ptr [eax]
// 00852228  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0085222e  6848c59f00           push 0x9fc548
// 00852233  50                   push eax
// 00852234  ffd2                 call edx
// 00852236  85c0                 test eax, eax
// 00852238  7c69                 jl 0x8522a3
// 0085223a  b809000000           mov eax, 9
// 0085223f  6689442434           mov word ptr [esp + 0x34], ax
// 00852244  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00852248  8944243c             mov dword ptr [esp + 0x3c], eax
// 0085224c  3bc7                 cmp eax, edi
// 0085224e  7408                 je 0x852258
// 00852250  8b08                 mov ecx, dword ptr [eax]
// 00852252  8b5104               mov edx, dword ptr [ecx + 4]
// 00852255  50                   push eax
// 00852256  ffd2                 call edx
// 00852258  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0085225b  c644244c08           mov byte ptr [esp + 0x4c], 8
// 00852260  3bcf                 cmp ecx, edi
// 00852262  750a                 jne 0x85226e
// 00852264  6803400080           push 0x80004003
// 00852269  e89236faff           call 0x7f5900
// 0085226e  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00852272  8b11                 mov edx, dword ptr [ecx]
// 00852274  57                   push edi
// 00852275  83ec10               sub esp, 0x10
// 00852278  8bc4                 mov eax, esp
// 0085227a  8918                 mov dword ptr [eax], ebx
// 0085227c  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00852280  895804               mov dword ptr [eax + 4], ebx
// 00852283  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00852287  895808               mov dword ptr [eax + 8], ebx
// 0085228a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0085228e  89580c               mov dword ptr [eax + 0xc], ebx
// 00852291  8b442428             mov eax, dword ptr [esp + 0x28]
// 00852295  50                   push eax
// 00852296  51                   push ecx
// 00852297  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0085229a  ffd1                 call ecx
// 0085229c  8d542434             lea edx, [esp + 0x34]
// 008522a0  52                   push edx
// 008522a1  ffd5                 call ebp
// 008522a3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008522a7  c644244c05           mov byte ptr [esp + 0x4c], 5
// 008522ac  3bc7                 cmp eax, edi
// 008522ae  740e                 je 0x8522be
// 008522b0  8b08                 mov ecx, dword ptr [eax]
// 008522b2  8b5108               mov edx, dword ptr [ecx + 8]
// 008522b5  50                   push eax
// 008522b6  ffd2                 call edx
// 008522b8  eb04                 jmp 0x8522be
// 008522ba  8b742420             mov esi, dword ptr [esp + 0x20]
// 008522be  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008522c2  33c0                 xor eax, eax
// 008522c4  53                   push ebx
// 008522c5  8d4c2438             lea ecx, [esp + 0x38]
// 008522c9  6689442438           mov word ptr [esp + 0x38], ax
// 008522ce  e8c1430d00           call 0x926694
// 008522d3  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008522d6  c644244c09           mov byte ptr [esp + 0x4c], 9
// 008522db  3bcf                 cmp ecx, edi
// 008522dd  750a                 jne 0x8522e9
// 008522df  6803400080           push 0x80004003
// 008522e4  e81736faff           call 0x7f5900
// 008522e9  8b742434             mov esi, dword ptr [esp + 0x34]
// 008522ed  8b11                 mov edx, dword ptr [ecx]
// 008522ef  83ec10               sub esp, 0x10
// 008522f2  8bc4                 mov eax, esp
// 008522f4  8930                 mov dword ptr [eax], esi
// 008522f6  8b742448             mov esi, dword ptr [esp + 0x48]
// 008522fa  897004               mov dword ptr [eax + 4], esi
// 008522fd  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00852301  897008               mov dword ptr [eax + 8], esi
// 00852304  8b742450             mov esi, dword ptr [esp + 0x50]
// 00852308  89700c               mov dword ptr [eax + 0xc], esi
// 0085230b  8b8208010000         mov eax, dword ptr [edx + 0x108]
// 00852311  51                   push ecx
// 00852312  ffd0                 call eax
// 00852314  8d4c2434             lea ecx, [esp + 0x34]
// 00852318  51                   push ecx
// 00852319  8bf0                 mov esi, eax
// 0085231b  c644245005           mov byte ptr [esp + 0x50], 5
// 00852320  ffd5                 call ebp
// 00852322  3bf7                 cmp esi, edi
// 00852324  7d42                 jge 0x852368
// 00852326  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085232a  c644244c04           mov byte ptr [esp + 0x4c], 4
// 0085232f  3bc7                 cmp eax, edi
// 00852331  7408                 je 0x85233b
// 00852333  8b10                 mov edx, dword ptr [eax]
// 00852335  50                   push eax
// 00852336  8b4208               mov eax, dword ptr [edx + 8]
// 00852339  ffd0                 call eax
// 0085233b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085233f  c644244c03           mov byte ptr [esp + 0x4c], 3
// 00852344  3bc7                 cmp eax, edi
// 00852346  7408                 je 0x852350
// 00852348  8b08                 mov ecx, dword ptr [eax]
// 0085234a  8b5108               mov edx, dword ptr [ecx + 8]
// 0085234d  50                   push eax
// 0085234e  ffd2                 call edx
// 00852350  8d4c2424             lea ecx, [esp + 0x24]
// 00852354  ff15c0de9800         call dword ptr [0x98dec0]
// 0085235a  8d4c2428             lea ecx, [esp + 0x28]
// 0085235e  ff15c0de9800         call dword ptr [0x98dec0]
// 00852364  8bc6                 mov eax, esi
// 00852366  eb50                 jmp 0x8523b8
// 00852368  397c2458             cmp dword ptr [esp + 0x58], edi
// 0085236c  740a                 je 0x852378
// 0085236e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00852372  53                   push ebx
// 00852373  e858e3ffff           call 0x8506d0
// 00852378  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085237c  c644244c04           mov byte ptr [esp + 0x4c], 4
// 00852381  3bc7                 cmp eax, edi
// 00852383  7408                 je 0x85238d
// 00852385  8b08                 mov ecx, dword ptr [eax]
// 00852387  8b5108               mov edx, dword ptr [ecx + 8]
// 0085238a  50                   push eax
// 0085238b  ffd2                 call edx
// 0085238d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00852391  c644244c03           mov byte ptr [esp + 0x4c], 3
// 00852396  3bc7                 cmp eax, edi
// 00852398  7408                 je 0x8523a2
// 0085239a  8b08                 mov ecx, dword ptr [eax]
// 0085239c  8b5108               mov edx, dword ptr [ecx + 8]
// 0085239f  50                   push eax
// 008523a0  ffd2                 call edx
// 008523a2  8d4c2424             lea ecx, [esp + 0x24]
// 008523a6  ff15c0de9800         call dword ptr [0x98dec0]
// 008523ac  8d4c2428             lea ecx, [esp + 0x28]
// 008523b0  ff15c0de9800         call dword ptr [0x98dec0]
// 008523b6  33c0                 xor eax, eax
// 008523b8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008523bc  64890d00000000       mov dword ptr fs:[0], ecx
// 008523c3  59                   pop ecx
// 008523c4  5f                   pop edi
// 008523c5  5e                   pop esi
// 008523c6  5d                   pop ebp
// 008523c7  5b                   pop ebx
// 008523c8  83c43c               add esp, 0x3c
// 008523cb  c20800               ret 8
// copied from an identical function in another client (function ?SaveToFile@CXTPPropExchangeXMLNode@@QAEJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp