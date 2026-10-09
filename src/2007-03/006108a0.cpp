// roc 2007-03 006108a0  unit: seg_00610000  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006108a0
//
// 006108a0  6aff                 push -1
// 006108a2  6808d67500           push 0x75d608
// 006108a7  64a100000000         mov eax, dword ptr fs:[0]
// 006108ad  50                   push eax
// 006108ae  64892500000000       mov dword ptr fs:[0], esp
// 006108b5  83ec40               sub esp, 0x40
// 006108b8  8b542450             mov edx, dword ptr [esp + 0x50]
// 006108bc  53                   push ebx
// 006108bd  8d442414             lea eax, [esp + 0x14]
// 006108c1  894c240c             mov dword ptr [esp + 0xc], ecx
// 006108c5  33db                 xor ebx, ebx
// 006108c7  50                   push eax
// 006108c8  8d4c2430             lea ecx, [esp + 0x30]
// 006108cc  51                   push ecx
// 006108cd  52                   push edx
// 006108ce  895c2438             mov dword ptr [esp + 0x38], ebx
// 006108d2  895c243c             mov dword ptr [esp + 0x3c], ebx
// 006108d6  895c2440             mov dword ptr [esp + 0x40], ebx
// 006108da  895c2420             mov dword ptr [esp + 0x20], ebx
// 006108de  895c2424             mov dword ptr [esp + 0x24], ebx
// 006108e2  895c2428             mov dword ptr [esp + 0x28], ebx
// 006108e6  e8a5f4ffff           call 0x60fd90
// 006108eb  83c40c               add esp, 0xc
// 006108ee  895c2424             mov dword ptr [esp + 0x24], ebx
// 006108f2  895c2428             mov dword ptr [esp + 0x28], ebx
// 006108f6  895c2420             mov dword ptr [esp + 0x20], ebx
// 006108fa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006108fe  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00610902  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00610906  8bc8                 mov ecx, eax
// 00610908  89442408             mov dword ptr [esp + 8], eax
// 0061090c  0f8f43010000         jg 0x610a55
// 00610912  55                   push ebp
// 00610913  56                   push esi
// 00610914  8b742464             mov esi, dword ptr [esp + 0x64]
// 00610918  57                   push edi
// 00610919  bd01000000           mov ebp, 1
// 0061091e  8bff                 mov edi, edi
// 00610920  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00610924  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00610928  89442410             mov dword ptr [esp + 0x10], eax
// 0061092c  0f8f10010000         jg 0x610a42
// 00610932  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00610936  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0061093a  897c2468             mov dword ptr [esp + 0x68], edi
// 0061093e  0f8fee000000         jg 0x610a32
// 00610944  894c2444             mov dword ptr [esp + 0x44], ecx
// 00610948  89442448             mov dword ptr [esp + 0x48], eax
// 0061094c  8d642400             lea esp, [esp]
// 00610950  53                   push ebx
// 00610951  53                   push ebx
// 00610952  8d4c2434             lea ecx, [esp + 0x34]
// 00610956  e80525f6ff           call 0x572e60
// 0061095b  8d44242c             lea eax, [esp + 0x2c]
// 0061095f  50                   push eax
// 00610960  8d4c2448             lea ecx, [esp + 0x48]
// 00610964  51                   push ecx
// 00610965  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00610969  897c2454             mov dword ptr [esp + 0x54], edi
// 0061096d  e86efeffff           call 0x6107e0
// 00610972  395c2430             cmp dword ptr [esp + 0x30], ebx
// 00610976  0f8e9e000000         jle 0x610a1a
// 0061097c  8d642400             lea esp, [esp]
// 00610980  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00610984  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00610987  3b7c2464             cmp edi, dword ptr [esp + 0x64]
// 0061098b  747b                 je 0x610a08
// 0061098d  33c0                 xor eax, eax
// 0061098f  394604               cmp dword ptr [esi + 4], eax
// 00610992  7e10                 jle 0x6109a4
// 00610994  8b0e                 mov ecx, dword ptr [esi]
// 00610996  3939                 cmp dword ptr [ecx], edi
// 00610998  746e                 je 0x610a08
// 0061099a  03c5                 add eax, ebp
// 0061099c  83c104               add ecx, 4
// 0061099f  3b4604               cmp eax, dword ptr [esi + 4]
// 006109a2  7cf2                 jl 0x610996
// 006109a4  8bcf                 mov ecx, edi
// 006109a6  e815def9ff           call 0x5ae7c0
// 006109ab  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006109af  50                   push eax
// 006109b0  e80b6dfaff           call 0x5b76c0
// 006109b5  84c0                 test al, al
// 006109b7  744f                 je 0x610a08
// 006109b9  8b4604               mov eax, dword ptr [esi + 4]
// 006109bc  3b4608               cmp eax, dword ptr [esi + 8]
// 006109bf  8b0e                 mov ecx, dword ptr [esi]
// 006109c1  7d0e                 jge 0x6109d1
// 006109c3  8d0481               lea eax, [ecx + eax*4]
// 006109c6  85c0                 test eax, eax
// 006109c8  7402                 je 0x6109cc
// 006109ca  8938                 mov dword ptr [eax], edi
// 006109cc  016e04               add dword ptr [esi + 4], ebp
// 006109cf  eb37                 jmp 0x610a08
// 006109d1  8d54241c             lea edx, [esp + 0x1c]
// 006109d5  3bd1                 cmp edx, ecx
// 006109d7  7219                 jb 0x6109f2
// 006109d9  8d0c81               lea ecx, [ecx + eax*4]
// 006109dc  3bd1                 cmp edx, ecx
// 006109de  7312                 jae 0x6109f2
// 006109e0  8d44241c             lea eax, [esp + 0x1c]
// 006109e4  50                   push eax
// 006109e5  8bce                 mov ecx, esi
// 006109e7  897c2420             mov dword ptr [esp + 0x20], edi
// 006109eb  e8d02cf6ff           call 0x5736c0
// 006109f0  eb16                 jmp 0x610a08
// 006109f2  6a00                 push 0
// 006109f4  83c001               add eax, 1
// 006109f7  50                   push eax
// 006109f8  8bce                 mov ecx, esi
// 006109fa  e86124f6ff           call 0x572e60
// 006109ff  8b4e04               mov ecx, dword ptr [esi + 4]
// 00610a02  8b16                 mov edx, dword ptr [esi]
// 00610a04  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 00610a08  03dd                 add ebx, ebp
// 00610a0a  3b5c2430             cmp ebx, dword ptr [esp + 0x30]
// 00610a0e  0f8c6cffffff         jl 0x610980
// 00610a14  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00610a18  33db                 xor ebx, ebx
// 00610a1a  03fd                 add edi, ebp
// 00610a1c  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00610a20  897c2468             mov dword ptr [esp + 0x68], edi
// 00610a24  0f8e26ffffff         jle 0x610950
// 00610a2a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610a2e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00610a32  03c5                 add eax, ebp
// 00610a34  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00610a38  89442410             mov dword ptr [esp + 0x10], eax
// 00610a3c  0f8ef0feffff         jle 0x610932
// 00610a42  03cd                 add ecx, ebp
// 00610a44  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00610a48  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610a4c  0f8ecefeffff         jle 0x610920
// 00610a52  5f                   pop edi
// 00610a53  5e                   pop esi
// 00610a54  5d                   pop ebp
// 00610a55  8b442420             mov eax, dword ptr [esp + 0x20]
// 00610a59  50                   push eax
// 00610a5a  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00610a62  e81929eeff           call 0x4f3380
// 00610a67  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00610a6b  83c404               add esp, 4
// 00610a6e  5b                   pop ebx
// 00610a6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00610a76  83c44c               add esp, 0x4c
// 00610a79  c20c00               ret 0xc
// library openrbx-client/App\v8world\SpatialHash.cpp (function ?getPrimitivesTouchingExtents@SpatialHash@RBX@@QAEXABVExtents@2@PBVPrimitive@2@AAV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp
