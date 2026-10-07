// roc 2008-06 00474690  unit: G3D::Texture  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474690
//
// 00474690  6aff                 push -1
// 00474692  6851467c00           push 0x7c4651
// 00474697  64a100000000         mov eax, dword ptr fs:[0]
// 0047469d  50                   push eax
// 0047469e  64892500000000       mov dword ptr fs:[0], esp
// 004746a5  83ec1c               sub esp, 0x1c
// 004746a8  53                   push ebx
// 004746a9  56                   push esi
// 004746aa  33db                 xor ebx, ebx
// 004746ac  895c2414             mov dword ptr [esp + 0x14], ebx
// 004746b0  6a01                 push 1
// 004746b2  6a01                 push 1
// 004746b4  8d4c2420             lea ecx, [esp + 0x20]
// 004746b8  895c2424             mov dword ptr [esp + 0x24], ebx
// 004746bc  895c2428             mov dword ptr [esp + 0x28], ebx
// 004746c0  895c2420             mov dword ptr [esp + 0x20], ebx
// 004746c4  e857feffff           call 0x474520
// 004746c9  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004746cd  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004746d5  83f905               cmp ecx, 5
// 004746d8  7505                 jne 0x4746df
// 004746da  8d5306               lea edx, [ebx + 6]
// 004746dd  eb0f                 jmp 0x4746ee
// 004746df  8bd1                 mov edx, ecx
// 004746e1  83ea07               sub edx, 7
// 004746e4  f7da                 neg edx
// 004746e6  1bd2                 sbb edx, edx
// 004746e8  83e2fb               and edx, 0xfffffffb
// 004746eb  83c206               add edx, 6
// 004746ee  33c0                 xor eax, eax
// 004746f0  3bd3                 cmp edx, ebx
// 004746f2  89542408             mov dword ptr [esp + 8], edx
// 004746f6  8944240c             mov dword ptr [esp + 0xc], eax
// 004746fa  7e77                 jle 0x474773
// 004746fc  55                   push ebp
// 004746fd  57                   push edi
// 004746fe  8bff                 mov edi, edi
// 00474700  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00474704  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00474707  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047470b  8b4104               mov eax, dword ptr [ecx + 4]
// 0047470e  3b4108               cmp eax, dword ptr [ecx + 8]
// 00474711  8d7104               lea esi, [ecx + 4]
// 00474714  8be9                 mov ebp, ecx
// 00474716  7d0f                 jge 0x474727
// 00474718  8b09                 mov ecx, dword ptr [ecx]
// 0047471a  8d0481               lea eax, [ecx + eax*4]
// 0047471d  3bc3                 cmp eax, ebx
// 0047471f  7402                 je 0x474723
// 00474721  8938                 mov dword ptr [eax], edi
// 00474723  ff06                 inc dword ptr [esi]
// 00474725  eb37                 jmp 0x47475e
// 00474727  8b11                 mov edx, dword ptr [ecx]
// 00474729  8d5c2418             lea ebx, [esp + 0x18]
// 0047472d  3bda                 cmp ebx, edx
// 0047472f  7217                 jb 0x474748
// 00474731  8d1482               lea edx, [edx + eax*4]
// 00474734  3bda                 cmp ebx, edx
// 00474736  7310                 jae 0x474748
// 00474738  8d442418             lea eax, [esp + 0x18]
// 0047473c  50                   push eax
// 0047473d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00474741  e82afcffff           call 0x474370
// 00474746  eb12                 jmp 0x47475a
// 00474748  6a00                 push 0
// 0047474a  40                   inc eax
// 0047474b  50                   push eax
// 0047474c  e87ff5ffff           call 0x473cd0
// 00474751  8b0e                 mov ecx, dword ptr [esi]
// 00474753  8b5500               mov edx, dword ptr [ebp]
// 00474756  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 0047475a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0047475e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00474762  40                   inc eax
// 00474763  33db                 xor ebx, ebx
// 00474765  3bc2                 cmp eax, edx
// 00474767  89442414             mov dword ptr [esp + 0x14], eax
// 0047476b  7c93                 jl 0x474700
// 0047476d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00474771  5f                   pop edi
// 00474772  5d                   pop ebp
// 00474773  d9442468             fld dword ptr [esp + 0x68]
// 00474777  8b442460             mov eax, dword ptr [esp + 0x60]
// 0047477b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0047477f  83ec08               sub esp, 8
// 00474782  d95c2404             fstp dword ptr [esp + 4]
// 00474786  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0047478a  d944246c             fld dword ptr [esp + 0x6c]
// 0047478e  d91c24               fstp dword ptr [esp]
// 00474791  50                   push eax
// 00474792  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00474796  51                   push ecx
// 00474797  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047479b  51                   push ecx
// 0047479c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004747a0  52                   push edx
// 004747a1  8b542460             mov edx, dword ptr [esp + 0x60]
// 004747a5  50                   push eax
// 004747a6  8b442460             mov eax, dword ptr [esp + 0x60]
// 004747aa  51                   push ecx
// 004747ab  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004747af  52                   push edx
// 004747b0  50                   push eax
// 004747b1  8b442460             mov eax, dword ptr [esp + 0x60]
// 004747b5  51                   push ecx
// 004747b6  8d542444             lea edx, [esp + 0x44]
// 004747ba  52                   push edx
// 004747bb  50                   push eax
// 004747bc  56                   push esi
// 004747bd  e8fef7ffff           call 0x473fc0
// 004747c2  83c438               add esp, 0x38
// 004747c5  8d4c2418             lea ecx, [esp + 0x18]
// 004747c9  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004747d1  885c242c             mov byte ptr [esp + 0x2c], bl
// 004747d5  e846fbffff           call 0x474320
// 004747da  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004747de  8bc6                 mov eax, esi
// 004747e0  5e                   pop esi
// 004747e1  5b                   pop ebx
// 004747e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004747e9  83c428               add esp, 0x28
// 004747ec  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
