// roc 2009-12 004c86d0  unit: G3D::Texture  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c86d0
//
// 004c86d0  6aff                 push -1
// 004c86d2  68612b9300           push 0x932b61
// 004c86d7  64a100000000         mov eax, dword ptr fs:[0]
// 004c86dd  50                   push eax
// 004c86de  64892500000000       mov dword ptr fs:[0], esp
// 004c86e5  83ec1c               sub esp, 0x1c
// 004c86e8  53                   push ebx
// 004c86e9  56                   push esi
// 004c86ea  33db                 xor ebx, ebx
// 004c86ec  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c86f0  6a01                 push 1
// 004c86f2  6a01                 push 1
// 004c86f4  8d4c2420             lea ecx, [esp + 0x20]
// 004c86f8  895c2424             mov dword ptr [esp + 0x24], ebx
// 004c86fc  895c2428             mov dword ptr [esp + 0x28], ebx
// 004c8700  895c2420             mov dword ptr [esp + 0x20], ebx
// 004c8704  e837feffff           call 0x4c8540
// 004c8709  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004c870d  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004c8715  83f905               cmp ecx, 5
// 004c8718  7505                 jne 0x4c871f
// 004c871a  8d5306               lea edx, [ebx + 6]
// 004c871d  eb0f                 jmp 0x4c872e
// 004c871f  8bd1                 mov edx, ecx
// 004c8721  83ea07               sub edx, 7
// 004c8724  f7da                 neg edx
// 004c8726  1bd2                 sbb edx, edx
// 004c8728  83e2fb               and edx, 0xfffffffb
// 004c872b  83c206               add edx, 6
// 004c872e  33c0                 xor eax, eax
// 004c8730  3bd3                 cmp edx, ebx
// 004c8732  89542408             mov dword ptr [esp + 8], edx
// 004c8736  8944240c             mov dword ptr [esp + 0xc], eax
// 004c873a  7e77                 jle 0x4c87b3
// 004c873c  55                   push ebp
// 004c873d  57                   push edi
// 004c873e  8bff                 mov edi, edi
// 004c8740  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004c8744  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 004c8747  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c874b  8b4104               mov eax, dword ptr [ecx + 4]
// 004c874e  3b4108               cmp eax, dword ptr [ecx + 8]
// 004c8751  8d7104               lea esi, [ecx + 4]
// 004c8754  8be9                 mov ebp, ecx
// 004c8756  7d0f                 jge 0x4c8767
// 004c8758  8b09                 mov ecx, dword ptr [ecx]
// 004c875a  8d0481               lea eax, [ecx + eax*4]
// 004c875d  3bc3                 cmp eax, ebx
// 004c875f  7402                 je 0x4c8763
// 004c8761  8938                 mov dword ptr [eax], edi
// 004c8763  ff06                 inc dword ptr [esi]
// 004c8765  eb37                 jmp 0x4c879e
// 004c8767  8b11                 mov edx, dword ptr [ecx]
// 004c8769  8d5c2418             lea ebx, [esp + 0x18]
// 004c876d  3bda                 cmp ebx, edx
// 004c876f  7217                 jb 0x4c8788
// 004c8771  8d1482               lea edx, [edx + eax*4]
// 004c8774  3bda                 cmp ebx, edx
// 004c8776  7310                 jae 0x4c8788
// 004c8778  8d442418             lea eax, [esp + 0x18]
// 004c877c  50                   push eax
// 004c877d  897c241c             mov dword ptr [esp + 0x1c], edi
// 004c8781  e80afcffff           call 0x4c8390
// 004c8786  eb12                 jmp 0x4c879a
// 004c8788  6a00                 push 0
// 004c878a  40                   inc eax
// 004c878b  50                   push eax
// 004c878c  e85ff5ffff           call 0x4c7cf0
// 004c8791  8b0e                 mov ecx, dword ptr [esi]
// 004c8793  8b5500               mov edx, dword ptr [ebp]
// 004c8796  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 004c879a  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c879e  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c87a2  40                   inc eax
// 004c87a3  33db                 xor ebx, ebx
// 004c87a5  3bc2                 cmp eax, edx
// 004c87a7  89442414             mov dword ptr [esp + 0x14], eax
// 004c87ab  7c93                 jl 0x4c8740
// 004c87ad  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004c87b1  5f                   pop edi
// 004c87b2  5d                   pop ebp
// 004c87b3  d9442468             fld dword ptr [esp + 0x68]
// 004c87b7  8b442460             mov eax, dword ptr [esp + 0x60]
// 004c87bb  8b542454             mov edx, dword ptr [esp + 0x54]
// 004c87bf  83ec08               sub esp, 8
// 004c87c2  d95c2404             fstp dword ptr [esp + 4]
// 004c87c6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 004c87ca  d944246c             fld dword ptr [esp + 0x6c]
// 004c87ce  d91c24               fstp dword ptr [esp]
// 004c87d1  50                   push eax
// 004c87d2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004c87d6  51                   push ecx
// 004c87d7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004c87db  51                   push ecx
// 004c87dc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004c87e0  52                   push edx
// 004c87e1  8b542460             mov edx, dword ptr [esp + 0x60]
// 004c87e5  50                   push eax
// 004c87e6  8b442460             mov eax, dword ptr [esp + 0x60]
// 004c87ea  51                   push ecx
// 004c87eb  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004c87ef  52                   push edx
// 004c87f0  50                   push eax
// 004c87f1  8b442460             mov eax, dword ptr [esp + 0x60]
// 004c87f5  51                   push ecx
// 004c87f6  8d542444             lea edx, [esp + 0x44]
// 004c87fa  52                   push edx
// 004c87fb  50                   push eax
// 004c87fc  56                   push esi
// 004c87fd  e8def7ffff           call 0x4c7fe0
// 004c8802  83c438               add esp, 0x38
// 004c8805  8d4c2418             lea ecx, [esp + 0x18]
// 004c8809  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004c8811  885c242c             mov byte ptr [esp + 0x2c], bl
// 004c8815  e826fbffff           call 0x4c8340
// 004c881a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004c881e  8bc6                 mov eax, esi
// 004c8820  5e                   pop esi
// 004c8821  5b                   pop ebx
// 004c8822  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8829  83c428               add esp, 0x28
// 004c882c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
