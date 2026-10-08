// roc 2007-08 005df6c0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005df6c0
//
// 005df6c0  6aff                 push -1
// 005df6c2  68c8a87500           push 0x75a8c8
// 005df6c7  64a100000000         mov eax, dword ptr fs:[0]
// 005df6cd  50                   push eax
// 005df6ce  64892500000000       mov dword ptr fs:[0], esp
// 005df6d5  83ec40               sub esp, 0x40
// 005df6d8  8b542450             mov edx, dword ptr [esp + 0x50]
// 005df6dc  53                   push ebx
// 005df6dd  8d442414             lea eax, [esp + 0x14]
// 005df6e1  894c240c             mov dword ptr [esp + 0xc], ecx
// 005df6e5  33db                 xor ebx, ebx
// 005df6e7  50                   push eax
// 005df6e8  8d4c2430             lea ecx, [esp + 0x30]
// 005df6ec  51                   push ecx
// 005df6ed  52                   push edx
// 005df6ee  895c2438             mov dword ptr [esp + 0x38], ebx
// 005df6f2  895c243c             mov dword ptr [esp + 0x3c], ebx
// 005df6f6  895c2440             mov dword ptr [esp + 0x40], ebx
// 005df6fa  895c2420             mov dword ptr [esp + 0x20], ebx
// 005df6fe  895c2424             mov dword ptr [esp + 0x24], ebx
// 005df702  895c2428             mov dword ptr [esp + 0x28], ebx
// 005df706  e825e9ffff           call 0x5de030
// 005df70b  83c40c               add esp, 0xc
// 005df70e  895c2424             mov dword ptr [esp + 0x24], ebx
// 005df712  895c2428             mov dword ptr [esp + 0x28], ebx
// 005df716  895c2420             mov dword ptr [esp + 0x20], ebx
// 005df71a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005df71e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005df722  895c244c             mov dword ptr [esp + 0x4c], ebx
// 005df726  8bc8                 mov ecx, eax
// 005df728  89442408             mov dword ptr [esp + 8], eax
// 005df72c  0f8f43010000         jg 0x5df875
// 005df732  55                   push ebp
// 005df733  56                   push esi
// 005df734  8b742464             mov esi, dword ptr [esp + 0x64]
// 005df738  57                   push edi
// 005df739  bd01000000           mov ebp, 1
// 005df73e  8bff                 mov edi, edi
// 005df740  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005df744  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005df748  89442410             mov dword ptr [esp + 0x10], eax
// 005df74c  0f8f10010000         jg 0x5df862
// 005df752  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005df756  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005df75a  897c2468             mov dword ptr [esp + 0x68], edi
// 005df75e  0f8fee000000         jg 0x5df852
// 005df764  894c2444             mov dword ptr [esp + 0x44], ecx
// 005df768  89442448             mov dword ptr [esp + 0x48], eax
// 005df76c  8d642400             lea esp, [esp]
// 005df770  53                   push ebx
// 005df771  53                   push ebx
// 005df772  8d4c2434             lea ecx, [esp + 0x34]
// 005df776  e8f54bf9ff           call 0x574370
// 005df77b  8d44242c             lea eax, [esp + 0x2c]
// 005df77f  50                   push eax
// 005df780  8d4c2448             lea ecx, [esp + 0x48]
// 005df784  51                   push ecx
// 005df785  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005df789  897c2454             mov dword ptr [esp + 0x54], edi
// 005df78d  e85ef8ffff           call 0x5deff0
// 005df792  395c2430             cmp dword ptr [esp + 0x30], ebx
// 005df796  0f8e9e000000         jle 0x5df83a
// 005df79c  8d642400             lea esp, [esp]
// 005df7a0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005df7a4  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 005df7a7  3b7c2464             cmp edi, dword ptr [esp + 0x64]
// 005df7ab  747b                 je 0x5df828
// 005df7ad  33c0                 xor eax, eax
// 005df7af  394604               cmp dword ptr [esi + 4], eax
// 005df7b2  7e10                 jle 0x5df7c4
// 005df7b4  8b0e                 mov ecx, dword ptr [esi]
// 005df7b6  3939                 cmp dword ptr [ecx], edi
// 005df7b8  746e                 je 0x5df828
// 005df7ba  03c5                 add eax, ebp
// 005df7bc  83c104               add ecx, 4
// 005df7bf  3b4604               cmp eax, dword ptr [esi + 4]
// 005df7c2  7cf2                 jl 0x5df7b6
// 005df7c4  8bcf                 mov ecx, edi
// 005df7c6  e8c554fdff           call 0x5b4c90
// 005df7cb  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005df7cf  50                   push eax
// 005df7d0  e8dbcffdff           call 0x5bc7b0
// 005df7d5  84c0                 test al, al
// 005df7d7  744f                 je 0x5df828
// 005df7d9  8b4604               mov eax, dword ptr [esi + 4]
// 005df7dc  3b4608               cmp eax, dword ptr [esi + 8]
// 005df7df  8b0e                 mov ecx, dword ptr [esi]
// 005df7e1  7d0e                 jge 0x5df7f1
// 005df7e3  8d0481               lea eax, [ecx + eax*4]
// 005df7e6  85c0                 test eax, eax
// 005df7e8  7402                 je 0x5df7ec
// 005df7ea  8938                 mov dword ptr [eax], edi
// 005df7ec  016e04               add dword ptr [esi + 4], ebp
// 005df7ef  eb37                 jmp 0x5df828
// 005df7f1  8d54241c             lea edx, [esp + 0x1c]
// 005df7f5  3bd1                 cmp edx, ecx
// 005df7f7  7219                 jb 0x5df812
// 005df7f9  8d0c81               lea ecx, [ecx + eax*4]
// 005df7fc  3bd1                 cmp edx, ecx
// 005df7fe  7312                 jae 0x5df812
// 005df800  8d44241c             lea eax, [esp + 0x1c]
// 005df804  50                   push eax
// 005df805  8bce                 mov ecx, esi
// 005df807  897c2420             mov dword ptr [esp + 0x20], edi
// 005df80b  e8c054f9ff           call 0x574cd0
// 005df810  eb16                 jmp 0x5df828
// 005df812  6a00                 push 0
// 005df814  83c001               add eax, 1
// 005df817  50                   push eax
// 005df818  8bce                 mov ecx, esi
// 005df81a  e8514bf9ff           call 0x574370
// 005df81f  8b4e04               mov ecx, dword ptr [esi + 4]
// 005df822  8b16                 mov edx, dword ptr [esi]
// 005df824  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 005df828  03dd                 add ebx, ebp
// 005df82a  3b5c2430             cmp ebx, dword ptr [esp + 0x30]
// 005df82e  0f8c6cffffff         jl 0x5df7a0
// 005df834  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 005df838  33db                 xor ebx, ebx
// 005df83a  03fd                 add edi, ebp
// 005df83c  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 005df840  897c2468             mov dword ptr [esp + 0x68], edi
// 005df844  0f8e26ffffff         jle 0x5df770
// 005df84a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005df84e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005df852  03c5                 add eax, ebp
// 005df854  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005df858  89442410             mov dword ptr [esp + 0x10], eax
// 005df85c  0f8ef0feffff         jle 0x5df752
// 005df862  03cd                 add ecx, ebp
// 005df864  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 005df868  894c2414             mov dword ptr [esp + 0x14], ecx
// 005df86c  0f8ecefeffff         jle 0x5df740
// 005df872  5f                   pop edi
// 005df873  5e                   pop esi
// 005df874  5d                   pop ebp
// 005df875  8b442420             mov eax, dword ptr [esp + 0x20]
// 005df879  50                   push eax
// 005df87a  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005df882  e889fff1ff           call 0x4ff810
// 005df887  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005df88b  83c404               add esp, 4
// 005df88e  5b                   pop ebx
// 005df88f  64890d00000000       mov dword ptr fs:[0], ecx
// 005df896  83c44c               add esp, 0x4c
// 005df899  c20c00               ret 0xc
// library openrbx-client/App\v8world\SpatialHash.cpp (function ?getPrimitivesTouchingExtents@SpatialHash@RBX@@QAEXABVExtents@2@PBVPrimitive@2@AAV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp
