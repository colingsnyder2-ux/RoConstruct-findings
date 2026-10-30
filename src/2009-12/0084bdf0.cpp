// roc 2009-12 0084bdf0  unit: CXTPDrawHelpers  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084bdf0
//
// 0084bdf0  83ec14               sub esp, 0x14
// 0084bdf3  53                   push ebx
// 0084bdf4  55                   push ebp
// 0084bdf5  56                   push esi
// 0084bdf6  57                   push edi
// 0084bdf7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0084bdfb  8b4708               mov eax, dword ptr [edi + 8]
// 0084bdfe  2b07                 sub eax, dword ptr [edi]
// 0084be00  8be9                 mov ebp, ecx
// 0084be02  b901000000           mov ecx, 1
// 0084be07  3bc1                 cmp eax, ecx
// 0084be09  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0084be0d  7c04                 jl 0x84be13
// 0084be0f  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084be13  8b470c               mov eax, dword ptr [edi + 0xc]
// 0084be16  2b4704               sub eax, dword ptr [edi + 4]
// 0084be19  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084be1d  3bc1                 cmp eax, ecx
// 0084be1f  7c04                 jl 0x84be25
// 0084be21  89442410             mov dword ptr [esp + 0x10], eax
// 0084be25  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0084be29  8b03                 mov eax, dword ptr [ebx]
// 0084be2b  8b5058               mov edx, dword ptr [eax + 0x58]
// 0084be2e  8d4c2414             lea ecx, [esp + 0x14]
// 0084be32  51                   push ecx
// 0084be33  8bcb                 mov ecx, ebx
// 0084be35  ffd2                 call edx
// 0084be37  8d442414             lea eax, [esp + 0x14]
// 0084be3b  50                   push eax
// 0084be3c  ff1568cc9800         call dword ptr [0x98cc68]
// 0084be42  57                   push edi
// 0084be43  85c0                 test eax, eax
// 0084be45  740d                 je 0x84be54
// 0084be47  8d4c2418             lea ecx, [esp + 0x18]
// 0084be4b  51                   push ecx
// 0084be4c  ff1564cc9800         call dword ptr [0x98cc64]
// 0084be52  eb0e                 jmp 0x84be62
// 0084be54  8d542418             lea edx, [esp + 0x18]
// 0084be58  52                   push edx
// 0084be59  8bc2                 mov eax, edx
// 0084be5b  50                   push eax
// 0084be5c  ff15dcca9800         call dword ptr [0x98cadc]
// 0084be62  837c243800           cmp dword ptr [esp + 0x38], 0
// 0084be67  7470                 je 0x84bed9
// 0084be69  8b742414             mov esi, dword ptr [esp + 0x14]
// 0084be6d  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0084be71  0f8dc9000000         jge 0x84bf40
// 0084be77  db44242c             fild dword ptr [esp + 0x2c]
// 0084be7b  d95c2428             fstp dword ptr [esp + 0x28]
// 0084be7f  90                   nop 
// 0084be80  8b542434             mov edx, dword ptr [esp + 0x34]
// 0084be84  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084be88  8bce                 mov ecx, esi
// 0084be8a  2b0f                 sub ecx, dword ptr [edi]
// 0084be8c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0084be90  db44242c             fild dword ptr [esp + 0x2c]
// 0084be94  51                   push ecx
// 0084be95  8bcd                 mov ecx, ebp
// 0084be97  d874242c             fdiv dword ptr [esp + 0x2c]
// 0084be9b  d9e8                 fld1 
// 0084be9d  dee1                 fsubrp st(1)
// 0084be9f  d95c2430             fstp dword ptr [esp + 0x30]
// 0084bea3  d9442430             fld dword ptr [esp + 0x30]
// 0084bea7  d91c24               fstp dword ptr [esp]
// 0084beaa  52                   push edx
// 0084beab  50                   push eax
// 0084beac  e80fe5ffff           call 0x84a3c0
// 0084beb1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084beb5  50                   push eax
// 0084beb6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084beba  2bc8                 sub ecx, eax
// 0084bebc  51                   push ecx
// 0084bebd  6a01                 push 1
// 0084bebf  50                   push eax
// 0084bec0  56                   push esi
// 0084bec1  8bcb                 mov ecx, ebx
// 0084bec3  e8cea50d00           call 0x926496
// 0084bec8  46                   inc esi
// 0084bec9  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0084becd  7cb1                 jl 0x84be80
// 0084becf  5f                   pop edi
// 0084bed0  5e                   pop esi
// 0084bed1  5d                   pop ebp
// 0084bed2  5b                   pop ebx
// 0084bed3  83c414               add esp, 0x14
// 0084bed6  c21400               ret 0x14
// 0084bed9  8b742418             mov esi, dword ptr [esp + 0x18]
// 0084bedd  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0084bee1  7d5d                 jge 0x84bf40
// 0084bee3  db442410             fild dword ptr [esp + 0x10]
// 0084bee7  d95c2428             fstp dword ptr [esp + 0x28]
// 0084beeb  eb03                 jmp 0x84bef0
// 0084beed  8d4900               lea ecx, [ecx]
// 0084bef0  8b442434             mov eax, dword ptr [esp + 0x34]
// 0084bef4  8bd6                 mov edx, esi
// 0084bef6  2b5704               sub edx, dword ptr [edi + 4]
// 0084bef9  51                   push ecx
// 0084befa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084befe  89542430             mov dword ptr [esp + 0x30], edx
// 0084bf02  db442430             fild dword ptr [esp + 0x30]
// 0084bf06  d874242c             fdiv dword ptr [esp + 0x2c]
// 0084bf0a  d9e8                 fld1 
// 0084bf0c  dee1                 fsubrp st(1)
// 0084bf0e  d95c2430             fstp dword ptr [esp + 0x30]
// 0084bf12  d9442430             fld dword ptr [esp + 0x30]
// 0084bf16  d91c24               fstp dword ptr [esp]
// 0084bf19  50                   push eax
// 0084bf1a  51                   push ecx
// 0084bf1b  8bcd                 mov ecx, ebp
// 0084bf1d  e89ee4ffff           call 0x84a3c0
// 0084bf22  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084bf26  50                   push eax
// 0084bf27  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084bf2b  6a01                 push 1
// 0084bf2d  2bd0                 sub edx, eax
// 0084bf2f  52                   push edx
// 0084bf30  56                   push esi
// 0084bf31  50                   push eax
// 0084bf32  8bcb                 mov ecx, ebx
// 0084bf34  e85da50d00           call 0x926496
// 0084bf39  46                   inc esi
// 0084bf3a  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0084bf3e  7cb0                 jl 0x84bef0
// 0084bf40  5f                   pop edi
// 0084bf41  5e                   pop esi
// 0084bf42  5d                   pop ebp
// 0084bf43  5b                   pop ebx
// 0084bf44  83c414               add esp, 0x14
// 0084bf47  c21400               ret 0x14
// copied from an identical function in another client (function ?GradientFillSlow@CXTPDrawHelpers@@AAEXPAVCDC@@PBUtagRECT@@KKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp