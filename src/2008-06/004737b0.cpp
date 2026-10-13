// roc 2008-06 004737b0  unit: G3D::GImage::Error  size: 456 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004737b0
//
// 004737b0  6aff                 push -1
// 004737b2  68b4457c00           push 0x7c45b4
// 004737b7  64a100000000         mov eax, dword ptr fs:[0]
// 004737bd  50                   push eax
// 004737be  64892500000000       mov dword ptr fs:[0], esp
// 004737c5  51                   push ecx
// 004737c6  53                   push ebx
// 004737c7  55                   push ebp
// 004737c8  56                   push esi
// 004737c9  57                   push edi
// 004737ca  8bf9                 mov edi, ecx
// 004737cc  33c0                 xor eax, eax
// 004737ce  c707e0e18100         mov dword ptr [edi], 0x81e1e0
// 004737d4  894704               mov dword ptr [edi + 4], eax
// 004737d7  897c2410             mov dword ptr [esp + 0x10], edi
// 004737db  894708               mov dword ptr [edi + 8], eax
// 004737de  d9442444             fld dword ptr [esp + 0x44]
// 004737e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004737e6  d95f14               fstp dword ptr [edi + 0x14]
// 004737e9  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 004737ed  d90534c48100         fld dword ptr [0x81c434]
// 004737f3  894f0c               mov dword ptr [edi + 0xc], ecx
// 004737f6  c7076ce38100         mov dword ptr [edi], 0x81e36c
// 004737fc  895f10               mov dword ptr [edi + 0x10], ebx
// 004737ff  d95f2c               fstp dword ptr [edi + 0x2c]
// 00473802  8d6f20               lea ebp, [edi + 0x20]
// 00473805  8d773c               lea esi, [edi + 0x3c]
// 00473808  8bce                 mov ecx, esi
// 0047380a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047380e  c7450003000000       mov dword ptr [ebp], 3
// 00473815  c7450401000000       mov dword ptr [ebp + 4], 1
// 0047381c  894508               mov dword ptr [ebp + 8], eax
// 0047381f  c6451001             mov byte ptr [ebp + 0x10], 1
// 00473823  c74514e8030000       mov dword ptr [ebp + 0x14], 0x3e8
// 0047382a  c7451818fcffff       mov dword ptr [ebp + 0x18], 0xfffffc18
// 00473831  ff1560248000         call dword ptr [0x802460]
// 00473837  d9442444             fld dword ptr [esp + 0x44]
// 0047383b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047383f  d95f2c               fstp dword ptr [edi + 0x2c]
// 00473842  8a44243c             mov al, byte ptr [esp + 0x3c]
// 00473846  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0047384a  895758               mov dword ptr [edi + 0x58], edx
// 0047384d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00473851  88475c               mov byte ptr [edi + 0x5c], al
// 00473854  8b442438             mov eax, dword ptr [esp + 0x38]
// 00473858  68ffff0f00           push 0xfffff
// 0047385d  c644242001           mov byte ptr [esp + 0x20], 1
// 00473862  894f60               mov dword ptr [edi + 0x60], ecx
// 00473865  895500               mov dword ptr [ebp], edx
// 00473868  894724               mov dword ptr [edi + 0x24], eax
// 0047386b  895f28               mov dword ptr [edi + 0x28], ebx
// 0047386e  c6473001             mov byte ptr [edi + 0x30], 1
// 00473872  ff1564298000         call dword ptr [0x802964]
// 00473878  6aff                 push -1
// 0047387a  ff15b82a8000         call dword ptr [0x802ab8]
// 00473880  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 00473887  740b                 je 0x473894
// 00473889  68c0840000           push 0x84c0
// 0047388e  ff1504f89600         call dword ptr [0x96f804]
// 00473894  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00473898  83c0fe               add eax, -2
// 0047389b  83f805               cmp eax, 5
// 0047389e  7715                 ja 0x4738b5
// 004738a0  ff248560394700       jmp dword ptr [eax*4 + 0x473960]
// 004738a7  bb13850000           mov ebx, 0x8513
// 004738ac  eb0c                 jmp 0x4738ba
// 004738ae  bbf5840000           mov ebx, 0x84f5
// 004738b3  eb05                 jmp 0x4738ba
// 004738b5  bbe10d0000           mov ebx, 0xde1
// 004738ba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004738be  51                   push ecx
// 004738bf  53                   push ebx
// 004738c0  ff15d8298000         call dword ptr [0x8029d8]
// 004738c6  8b542424             mov edx, dword ptr [esp + 0x24]
// 004738ca  52                   push edx
// 004738cb  8bce                 mov ecx, esi
// 004738cd  ff150c248000         call dword ptr [0x80240c]
// 004738d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004738d7  8bf3                 mov esi, ebx
// 004738d9  83f805               cmp eax, 5
// 004738dc  7405                 je 0x4738e3
// 004738de  83f807               cmp eax, 7
// 004738e1  7505                 jne 0x4738e8
// 004738e3  be15850000           mov esi, 0x8515
// 004738e8  8d4764               lea eax, [edi + 0x64]
// 004738eb  50                   push eax
// 004738ec  6800100000           push 0x1000
// 004738f1  6a00                 push 0
// 004738f3  56                   push esi
// 004738f4  ff15a02a8000         call dword ptr [0x802aa0]
// 004738fa  8d4f68               lea ecx, [edi + 0x68]
// 004738fd  51                   push ecx
// 004738fe  6801100000           push 0x1001
// 00473903  6a00                 push 0
// 00473905  56                   push esi
// 00473906  ff15a02a8000         call dword ptr [0x802aa0]
// 0047390c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00473910  8b442438             mov eax, dword ptr [esp + 0x38]
// 00473914  55                   push ebp
// 00473915  8bf3                 mov esi, ebx
// 00473917  c7476c01000000       mov dword ptr [edi + 0x6c], 1
// 0047391e  c6477000             mov byte ptr [edi + 0x70], 0
// 00473922  895718               mov dword ptr [edi + 0x18], edx
// 00473925  89471c               mov dword ptr [edi + 0x1c], eax
// 00473928  e8e3f5ffff           call 0x472f10
// 0047392d  83c404               add esp, 4
// 00473930  ff15bc2a8000         call dword ptr [0x802abc]
// 00473936  ff15b4298000         call dword ptr [0x8029b4]
// 0047393c  8bcf                 mov ecx, edi
// 0047393e  e82dfdffff           call 0x473670
// 00473943  010544ef9600         add dword ptr [0x96ef44], eax
// 00473949  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047394d  8bc7                 mov eax, edi
// 0047394f  5f                   pop edi
// 00473950  5e                   pop esi
// 00473951  5d                   pop ebp
// 00473952  5b                   pop ebx
// 00473953  64890d00000000       mov dword ptr fs:[0], ecx
// 0047395a  83c410               add esp, 0x10
// 0047395d  c22400               ret 0x24
// 00473960  b538                 mov ch, 0x38
// 00473962  47                   inc edi
// 00473963  00b5384700ae         add byte ptr [ebp - 0x51ffb8c8], dh
// 00473969  384700               cmp byte ptr [edi], al
// 0047396c  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0047396d  384700               cmp byte ptr [edi], al
// 00473970  b538                 mov ch, 0x38
// 00473972  47                   inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\roc_export_a69fe47bb0e6952c.cpp (function ??0Texture@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IW4Dimension@01@PBVTextureFormat@1@W4InterpolateMode@01@W4WrapMode@01@_NW4DepthReadMode@01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/roc_export_a69fe47bb0e6952c.cpp
