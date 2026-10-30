// roc 2009-12 008711e0  unit: CXTPRibbonTheme  size: 1133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008711e0
//
// 008711e0  6aff                 push -1
// 008711e2  6820fe9500           push 0x95fe20
// 008711e7  64a100000000         mov eax, dword ptr fs:[0]
// 008711ed  50                   push eax
// 008711ee  83ec08               sub esp, 8
// 008711f1  53                   push ebx
// 008711f2  56                   push esi
// 008711f3  57                   push edi
// 008711f4  a10052b600           mov eax, dword ptr [0xb65200]
// 008711f9  33c4                 xor eax, esp
// 008711fb  50                   push eax
// 008711fc  8d442418             lea eax, [esp + 0x18]
// 00871200  64a300000000         mov dword ptr fs:[0], eax
// 00871206  8bf1                 mov esi, ecx
// 00871208  e863de0000           call 0x87f070
// 0087120d  8bce                 mov ecx, esi
// 0087120f  e8dcda0000           call 0x87ecf0
// 00871214  51                   push ecx
// 00871215  8bcc                 mov ecx, esp
// 00871217  89642414             mov dword ptr [esp + 0x14], esp
// 0087121b  68080fa000           push 0xa00f08
// 00871220  8bf8                 mov edi, eax
// 00871222  ff15b8de9800         call dword ptr [0x98deb8]
// 00871228  51                   push ecx
// 00871229  8bcc                 mov ecx, esp
// 0087122b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087122f  68000fa000           push 0xa00f00
// 00871234  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0087123c  ff15b8de9800         call dword ptr [0x98deb8]
// 00871242  8bce                 mov ecx, esi
// 00871244  c644242801           mov byte ptr [esp + 0x28], 1
// 00871249  e8a2da0000           call 0x87ecf0
// 0087124e  83cbff               or ebx, 0xffffffff
// 00871251  8bc8                 mov ecx, eax
// 00871253  895c2428             mov dword ptr [esp + 0x28], ebx
// 00871257  e8a4fe0600           call 0x8e1100
// 0087125c  51                   push ecx
// 0087125d  8bcc                 mov ecx, esp
// 0087125f  89642418             mov dword ptr [esp + 0x18], esp
// 00871263  68f00ea000           push 0xa00ef0
// 00871268  89866c060000         mov dword ptr [esi + 0x66c], eax
// 0087126e  ff15b8de9800         call dword ptr [0x98deb8]
// 00871274  51                   push ecx
// 00871275  8bcc                 mov ecx, esp
// 00871277  89642418             mov dword ptr [esp + 0x18], esp
// 0087127b  68000fa000           push 0xa00f00
// 00871280  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00871288  ff15b8de9800         call dword ptr [0x98deb8]
// 0087128e  8bcf                 mov ecx, edi
// 00871290  895c2428             mov dword ptr [esp + 0x28], ebx
// 00871294  e867fe0600           call 0x8e1100
// 00871299  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 0087129f  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008712a5  51                   push ecx
// 008712a6  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 008712ac  8bcc                 mov ecx, esp
// 008712ae  89642418             mov dword ptr [esp + 0x18], esp
// 008712b2  68f00ea000           push 0xa00ef0
// 008712b7  ff15b8de9800         call dword ptr [0x98deb8]
// 008712bd  51                   push ecx
// 008712be  8bcc                 mov ecx, esp
// 008712c0  89642418             mov dword ptr [esp + 0x18], esp
// 008712c4  68000fa000           push 0xa00f00
// 008712c9  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 008712d1  ff15b8de9800         call dword ptr [0x98deb8]
// 008712d7  8bcf                 mov ecx, edi
// 008712d9  895c2428             mov dword ptr [esp + 0x28], ebx
// 008712dd  e81efe0600           call 0x8e1100
// 008712e2  8b9668060000         mov edx, dword ptr [esi + 0x668]
// 008712e8  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008712ee  51                   push ecx
// 008712ef  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 008712f5  8bcc                 mov ecx, esp
// 008712f7  89642418             mov dword ptr [esp + 0x18], esp
// 008712fb  68e00ea000           push 0xa00ee0
// 00871300  ff15b8de9800         call dword ptr [0x98deb8]
// 00871306  51                   push ecx
// 00871307  8bcc                 mov ecx, esp
// 00871309  89642418             mov dword ptr [esp + 0x18], esp
// 0087130d  68000fa000           push 0xa00f00
// 00871312  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0087131a  ff15b8de9800         call dword ptr [0x98deb8]
// 00871320  8bcf                 mov ecx, edi
// 00871322  895c2428             mov dword ptr [esp + 0x28], ebx
// 00871326  e8d5fd0600           call 0x8e1100
// 0087132b  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 00871331  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00871337  51                   push ecx
// 00871338  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0087133e  8bcc                 mov ecx, esp
// 00871340  89642418             mov dword ptr [esp + 0x18], esp
// 00871344  68cc0ea000           push 0xa00ecc
// 00871349  ff15b8de9800         call dword ptr [0x98deb8]
// 0087134f  51                   push ecx
// 00871350  8bcc                 mov ecx, esp
// 00871352  89642418             mov dword ptr [esp + 0x18], esp
// 00871356  68000fa000           push 0xa00f00
// 0087135b  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 00871363  ff15b8de9800         call dword ptr [0x98deb8]
// 00871369  8bcf                 mov ecx, edi
// 0087136b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0087136f  e88cfd0600           call 0x8e1100
// 00871374  51                   push ecx
// 00871375  8bcc                 mov ecx, esp
// 00871377  89642418             mov dword ptr [esp + 0x18], esp
// 0087137b  68bc0ea000           push 0xa00ebc
// 00871380  898674060000         mov dword ptr [esi + 0x674], eax
// 00871386  ff15b8de9800         call dword ptr [0x98deb8]
// 0087138c  51                   push ecx
// 0087138d  8bcc                 mov ecx, esp
// 0087138f  89642418             mov dword ptr [esp + 0x18], esp
// 00871393  68000fa000           push 0xa00f00
// 00871398  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 008713a0  ff15b8de9800         call dword ptr [0x98deb8]
// 008713a6  8bcf                 mov ecx, edi
// 008713a8  895c2428             mov dword ptr [esp + 0x28], ebx
// 008713ac  e84ffd0600           call 0x8e1100
// 008713b1  51                   push ecx
// 008713b2  8bcc                 mov ecx, esp
// 008713b4  89642418             mov dword ptr [esp + 0x18], esp
// 008713b8  68b00ea000           push 0xa00eb0
// 008713bd  898690030000         mov dword ptr [esi + 0x390], eax
// 008713c3  ff15b8de9800         call dword ptr [0x98deb8]
// 008713c9  51                   push ecx
// 008713ca  8bcc                 mov ecx, esp
// 008713cc  89642418             mov dword ptr [esp + 0x18], esp
// 008713d0  68000fa000           push 0xa00f00
// 008713d5  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 008713dd  ff15b8de9800         call dword ptr [0x98deb8]
// 008713e3  8bcf                 mov ecx, edi
// 008713e5  895c2428             mov dword ptr [esp + 0x28], ebx
// 008713e9  e812fd0600           call 0x8e1100
// 008713ee  51                   push ecx
// 008713ef  8bcc                 mov ecx, esp
// 008713f1  89642418             mov dword ptr [esp + 0x18], esp
// 008713f5  689c0ea000           push 0xa00e9c
// 008713fa  898670060000         mov dword ptr [esi + 0x670], eax
// 00871400  ff15b8de9800         call dword ptr [0x98deb8]
// 00871406  51                   push ecx
// 00871407  8bcc                 mov ecx, esp
// 00871409  89642418             mov dword ptr [esp + 0x18], esp
// 0087140d  68000fa000           push 0xa00f00
// 00871412  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 0087141a  ff15b8de9800         call dword ptr [0x98deb8]
// 00871420  8bcf                 mov ecx, edi
// 00871422  895c2428             mov dword ptr [esp + 0x28], ebx
// 00871426  e8d5fc0600           call 0x8e1100
// 0087142b  51                   push ecx
// 0087142c  8bcc                 mov ecx, esp
// 0087142e  89642418             mov dword ptr [esp + 0x18], esp
// 00871432  68800ea000           push 0xa00e80
// 00871437  898678060000         mov dword ptr [esi + 0x678], eax
// 0087143d  ff15b8de9800         call dword ptr [0x98deb8]
// 00871443  51                   push ecx
// 00871444  8bcc                 mov ecx, esp
// 00871446  89642418             mov dword ptr [esp + 0x18], esp
// 0087144a  68000fa000           push 0xa00f00
// 0087144f  c744242c09000000     mov dword ptr [esp + 0x2c], 9
// 00871457  ff15b8de9800         call dword ptr [0x98deb8]
// 0087145d  8bcf                 mov ecx, edi
// 0087145f  895c2428             mov dword ptr [esp + 0x28], ebx
// 00871463  e898fc0600           call 0x8e1100
// 00871468  51                   push ecx
// 00871469  89867c060000         mov dword ptr [esi + 0x67c], eax
// 0087146f  8bcc                 mov ecx, esp
// 00871471  89642418             mov dword ptr [esp + 0x18], esp
// 00871475  68640ea000           push 0xa00e64
// 0087147a  ff15b8de9800         call dword ptr [0x98deb8]
// 00871480  51                   push ecx
// 00871481  8bcc                 mov ecx, esp
// 00871483  89642418             mov dword ptr [esp + 0x18], esp
// 00871487  68000fa000           push 0xa00f00
// 0087148c  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 00871494  ff15b8de9800         call dword ptr [0x98deb8]
// 0087149a  8bcf                 mov ecx, edi
// 0087149c  895c2428             mov dword ptr [esp + 0x28], ebx
// 008714a0  e85bfc0600           call 0x8e1100
// 008714a5  51                   push ecx
// 008714a6  8bcc                 mov ecx, esp
// 008714a8  89642418             mov dword ptr [esp + 0x18], esp
// 008714ac  68540ea000           push 0xa00e54
// 008714b1  898680060000         mov dword ptr [esi + 0x680], eax
// 008714b7  ff15b8de9800         call dword ptr [0x98deb8]
// 008714bd  51                   push ecx
// 008714be  8bcc                 mov ecx, esp
// 008714c0  89642418             mov dword ptr [esp + 0x18], esp
// 008714c4  68000fa000           push 0xa00f00
// 008714c9  c744242c0b000000     mov dword ptr [esp + 0x2c], 0xb
// 008714d1  ff15b8de9800         call dword ptr [0x98deb8]
// 008714d7  8bcf                 mov ecx, edi
// 008714d9  895c2428             mov dword ptr [esp + 0x28], ebx
// 008714dd  e81efc0600           call 0x8e1100
// 008714e2  51                   push ecx
// 008714e3  8bcc                 mov ecx, esp
// 008714e5  89642418             mov dword ptr [esp + 0x18], esp
// 008714e9  68400ea000           push 0xa00e40
// 008714ee  898678030000         mov dword ptr [esi + 0x378], eax
// 008714f4  ff15b8de9800         call dword ptr [0x98deb8]
// 008714fa  51                   push ecx
// 008714fb  8bcc                 mov ecx, esp
// 008714fd  89642418             mov dword ptr [esp + 0x18], esp
// 00871501  68000fa000           push 0xa00f00
// 00871506  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 0087150e  ff15b8de9800         call dword ptr [0x98deb8]
// 00871514  8bcf                 mov ecx, edi
// 00871516  895c2428             mov dword ptr [esp + 0x28], ebx
// 0087151a  e8e1fb0600           call 0x8e1100
// 0087151f  50                   push eax
// 00871520  8d8e84060000         lea ecx, [esi + 0x684]
// 00871526  e8f5e3fbff           call 0x82f920
// 0087152b  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00871531  83ec08               sub esp, 8
// 00871534  d95c2404             fstp dword ptr [esp + 4]
// 00871538  8bcc                 mov ecx, esp
// 0087153a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0087153e  68200ea000           push 0xa00e20
// 00871543  ff15b8de9800         call dword ptr [0x98deb8]
// 00871549  51                   push ecx
// 0087154a  8bcc                 mov ecx, esp
// 0087154c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00871550  68000fa000           push 0xa00f00
// 00871555  c74424300d000000     mov dword ptr [esp + 0x30], 0xd
// 0087155d  ff15b8de9800         call dword ptr [0x98deb8]
// 00871563  8bcf                 mov ecx, edi
// 00871565  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00871569  e892fb0600           call 0x8e1100
// 0087156e  50                   push eax
// 0087156f  51                   push ecx
// 00871570  8bcc                 mov ecx, esp
// 00871572  89642420             mov dword ptr [esp + 0x20], esp
// 00871576  68000ea000           push 0xa00e00
// 0087157b  ff15b8de9800         call dword ptr [0x98deb8]
// 00871581  51                   push ecx
// 00871582  8bcc                 mov ecx, esp
// 00871584  89642420             mov dword ptr [esp + 0x20], esp
// 00871588  68000fa000           push 0xa00f00
// 0087158d  c74424340e000000     mov dword ptr [esp + 0x34], 0xe
// 00871595  ff15b8de9800         call dword ptr [0x98deb8]
// 0087159b  8bcf                 mov ecx, edi
// 0087159d  895c2430             mov dword ptr [esp + 0x30], ebx
// 008715a1  e85afb0600           call 0x8e1100
// 008715a6  50                   push eax
// 008715a7  8d8edc040000         lea ecx, [esi + 0x4dc]
// 008715ad  e8aed8fbff           call 0x82ee60
// 008715b2  51                   push ecx
// 008715b3  8bcc                 mov ecx, esp
// 008715b5  89642418             mov dword ptr [esp + 0x18], esp
// 008715b9  68e80da000           push 0xa00de8
// 008715be  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008715c5  c7860c030000a7a7a700 mov dword ptr [esi + 0x30c], 0xa7a7a7
// 008715cf  ff15b8de9800         call dword ptr [0x98deb8]
// 008715d5  51                   push ecx
// 008715d6  8bcc                 mov ecx, esp
// 008715d8  89642418             mov dword ptr [esp + 0x18], esp
// 008715dc  68000fa000           push 0xa00f00
// 008715e1  c744242c0f000000     mov dword ptr [esp + 0x2c], 0xf
// 008715e9  ff15b8de9800         call dword ptr [0x98deb8]
// 008715ef  8bcf                 mov ecx, edi
// 008715f1  895c2428             mov dword ptr [esp + 0x28], ebx
// 008715f5  e806fb0600           call 0x8e1100
// 008715fa  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00871600  51                   push ecx
// 00871601  d91c24               fstp dword ptr [esp]
// 00871604  68e9eeee00           push 0xeeeee9
// 00871609  68e9eeee00           push 0xeeeee9
// 0087160e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00871614  898684030000         mov dword ptr [esi + 0x384], eax
// 0087161a  c7866c03000086868600 mov dword ptr [esi + 0x36c], 0x868686
// 00871624  c78654030000fafafa00 mov dword ptr [esi + 0x354], 0xfafafa
// 0087162e  e82dd8fbff           call 0x82ee60
// 00871633  8bce                 mov ecx, esi
// 00871635  e8a6390100           call 0x884fe0
// 0087163a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087163e  64890d00000000       mov dword ptr fs:[0], ecx
// 00871645  59                   pop ecx
// 00871646  5f                   pop edi
// 00871647  5e                   pop esi
// 00871648  5b                   pop ebx
// 00871649  83c414               add esp, 0x14
// 0087164c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPRibbonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp