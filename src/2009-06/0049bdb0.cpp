// roc 2009-06 0049bdb0  unit: G3D::Texture  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049bdb0
//
// 0049bdb0  6aff                 push -1
// 0049bdb2  68816c8500           push 0x856c81
// 0049bdb7  64a100000000         mov eax, dword ptr fs:[0]
// 0049bdbd  50                   push eax
// 0049bdbe  64892500000000       mov dword ptr fs:[0], esp
// 0049bdc5  83ec1c               sub esp, 0x1c
// 0049bdc8  53                   push ebx
// 0049bdc9  56                   push esi
// 0049bdca  33db                 xor ebx, ebx
// 0049bdcc  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049bdd0  6a01                 push 1
// 0049bdd2  6a01                 push 1
// 0049bdd4  8d4c2420             lea ecx, [esp + 0x20]
// 0049bdd8  895c2424             mov dword ptr [esp + 0x24], ebx
// 0049bddc  895c2428             mov dword ptr [esp + 0x28], ebx
// 0049bde0  895c2420             mov dword ptr [esp + 0x20], ebx
// 0049bde4  e857feffff           call 0x49bc40
// 0049bde9  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0049bded  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0049bdf5  83f905               cmp ecx, 5
// 0049bdf8  7505                 jne 0x49bdff
// 0049bdfa  8d5306               lea edx, [ebx + 6]
// 0049bdfd  eb0f                 jmp 0x49be0e
// 0049bdff  8bd1                 mov edx, ecx
// 0049be01  83ea07               sub edx, 7
// 0049be04  f7da                 neg edx
// 0049be06  1bd2                 sbb edx, edx
// 0049be08  83e2fb               and edx, 0xfffffffb
// 0049be0b  83c206               add edx, 6
// 0049be0e  33c0                 xor eax, eax
// 0049be10  3bd3                 cmp edx, ebx
// 0049be12  89542408             mov dword ptr [esp + 8], edx
// 0049be16  8944240c             mov dword ptr [esp + 0xc], eax
// 0049be1a  7e77                 jle 0x49be93
// 0049be1c  55                   push ebp
// 0049be1d  57                   push edi
// 0049be1e  8bff                 mov edi, edi
// 0049be20  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0049be24  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0049be27  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049be2b  8b4104               mov eax, dword ptr [ecx + 4]
// 0049be2e  3b4108               cmp eax, dword ptr [ecx + 8]
// 0049be31  8d7104               lea esi, [ecx + 4]
// 0049be34  8be9                 mov ebp, ecx
// 0049be36  7d0f                 jge 0x49be47
// 0049be38  8b09                 mov ecx, dword ptr [ecx]
// 0049be3a  8d0481               lea eax, [ecx + eax*4]
// 0049be3d  3bc3                 cmp eax, ebx
// 0049be3f  7402                 je 0x49be43
// 0049be41  8938                 mov dword ptr [eax], edi
// 0049be43  ff06                 inc dword ptr [esi]
// 0049be45  eb37                 jmp 0x49be7e
// 0049be47  8b11                 mov edx, dword ptr [ecx]
// 0049be49  8d5c2418             lea ebx, [esp + 0x18]
// 0049be4d  3bda                 cmp ebx, edx
// 0049be4f  7217                 jb 0x49be68
// 0049be51  8d1482               lea edx, [edx + eax*4]
// 0049be54  3bda                 cmp ebx, edx
// 0049be56  7310                 jae 0x49be68
// 0049be58  8d442418             lea eax, [esp + 0x18]
// 0049be5c  50                   push eax
// 0049be5d  897c241c             mov dword ptr [esp + 0x1c], edi
// 0049be61  e82afcffff           call 0x49ba90
// 0049be66  eb12                 jmp 0x49be7a
// 0049be68  6a00                 push 0
// 0049be6a  40                   inc eax
// 0049be6b  50                   push eax
// 0049be6c  e87ff5ffff           call 0x49b3f0
// 0049be71  8b0e                 mov ecx, dword ptr [esi]
// 0049be73  8b5500               mov edx, dword ptr [ebp]
// 0049be76  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 0049be7a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049be7e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049be82  40                   inc eax
// 0049be83  33db                 xor ebx, ebx
// 0049be85  3bc2                 cmp eax, edx
// 0049be87  89442414             mov dword ptr [esp + 0x14], eax
// 0049be8b  7c93                 jl 0x49be20
// 0049be8d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0049be91  5f                   pop edi
// 0049be92  5d                   pop ebp
// 0049be93  d9442468             fld dword ptr [esp + 0x68]
// 0049be97  8b442460             mov eax, dword ptr [esp + 0x60]
// 0049be9b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0049be9f  83ec08               sub esp, 8
// 0049bea2  d95c2404             fstp dword ptr [esp + 4]
// 0049bea6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0049beaa  d944246c             fld dword ptr [esp + 0x6c]
// 0049beae  d91c24               fstp dword ptr [esp]
// 0049beb1  50                   push eax
// 0049beb2  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0049beb6  51                   push ecx
// 0049beb7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0049bebb  51                   push ecx
// 0049bebc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0049bec0  52                   push edx
// 0049bec1  8b542460             mov edx, dword ptr [esp + 0x60]
// 0049bec5  50                   push eax
// 0049bec6  8b442460             mov eax, dword ptr [esp + 0x60]
// 0049beca  51                   push ecx
// 0049becb  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0049becf  52                   push edx
// 0049bed0  50                   push eax
// 0049bed1  8b442460             mov eax, dword ptr [esp + 0x60]
// 0049bed5  51                   push ecx
// 0049bed6  8d542444             lea edx, [esp + 0x44]
// 0049beda  52                   push edx
// 0049bedb  50                   push eax
// 0049bedc  56                   push esi
// 0049bedd  e8fef7ffff           call 0x49b6e0
// 0049bee2  83c438               add esp, 0x38
// 0049bee5  8d4c2418             lea ecx, [esp + 0x18]
// 0049bee9  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0049bef1  885c242c             mov byte ptr [esp + 0x2c], bl
// 0049bef5  e846fbffff           call 0x49ba40
// 0049befa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049befe  8bc6                 mov eax, esi
// 0049bf00  5e                   pop esi
// 0049bf01  5b                   pop ebx
// 0049bf02  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bf09  83c428               add esp, 0x28
// 0049bf0c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
