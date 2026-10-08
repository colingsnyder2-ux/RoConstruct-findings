// roc 2007-08 005deff0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005deff0
//
// 005deff0  53                   push ebx
// 005deff1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005deff5  8b03                 mov eax, dword ptr [ebx]
// 005deff7  56                   push esi
// 005deff8  69c05df4ffff         imul eax, eax, 0xfffff45d
// 005deffe  8b7304               mov esi, dword ptr [ebx + 4]
// 005df001  69f69f400000         imul esi, esi, 0x409f
// 005df007  57                   push edi
// 005df008  8bf9                 mov edi, ecx
// 005df00a  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005df00d  6bc9b7               imul ecx, ecx, -0x49
// 005df010  33f0                 xor esi, eax
// 005df012  33f1                 xor esi, ecx
// 005df014  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005df017  81e6ffff0000         and esi, 0xffff
// 005df01d  85c9                 test ecx, ecx
// 005df01f  740c                 je 0x5df02d
// 005df021  8b4710               mov eax, dword ptr [edi + 0x10]
// 005df024  2bc1                 sub eax, ecx
// 005df026  c1f802               sar eax, 2
// 005df029  3bf0                 cmp esi, eax
// 005df02b  7206                 jb 0x5df033
// 005df02d  ff15d8e67700         call dword ptr [0x77e6d8]
// 005df033  8b570c               mov edx, dword ptr [edi + 0xc]
// 005df036  8b34b2               mov esi, dword ptr [edx + esi*4]
// 005df039  85f6                 test esi, esi
// 005df03b  7474                 je 0x5df0b1
// 005df03d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005df041  8b4614               mov eax, dword ptr [esi + 0x14]
// 005df044  3b03                 cmp eax, dword ptr [ebx]
// 005df046  7562                 jne 0x5df0aa
// 005df048  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005df04b  3b4b04               cmp ecx, dword ptr [ebx + 4]
// 005df04e  755a                 jne 0x5df0aa
// 005df050  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005df053  3b5308               cmp edx, dword ptr [ebx + 8]
// 005df056  7552                 jne 0x5df0aa
// 005df058  8b4704               mov eax, dword ptr [edi + 4]
// 005df05b  3b4708               cmp eax, dword ptr [edi + 8]
// 005df05e  8b0f                 mov ecx, dword ptr [edi]
// 005df060  7d11                 jge 0x5df073
// 005df062  8d0481               lea eax, [ecx + eax*4]
// 005df065  85c0                 test eax, eax
// 005df067  7404                 je 0x5df06d
// 005df069  8b16                 mov edx, dword ptr [esi]
// 005df06b  8910                 mov dword ptr [eax], edx
// 005df06d  83470401             add dword ptr [edi + 4], 1
// 005df071  eb37                 jmp 0x5df0aa
// 005df073  3bf1                 cmp esi, ecx
// 005df075  721b                 jb 0x5df092
// 005df077  8d0c81               lea ecx, [ecx + eax*4]
// 005df07a  3bf1                 cmp esi, ecx
// 005df07c  7314                 jae 0x5df092
// 005df07e  8b16                 mov edx, dword ptr [esi]
// 005df080  8d442410             lea eax, [esp + 0x10]
// 005df084  50                   push eax
// 005df085  8bcf                 mov ecx, edi
// 005df087  89542414             mov dword ptr [esp + 0x14], edx
// 005df08b  e8405cf9ff           call 0x574cd0
// 005df090  eb18                 jmp 0x5df0aa
// 005df092  6a00                 push 0
// 005df094  83c001               add eax, 1
// 005df097  50                   push eax
// 005df098  8bcf                 mov ecx, edi
// 005df09a  e8d152f9ff           call 0x574370
// 005df09f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005df0a2  8b17                 mov edx, dword ptr [edi]
// 005df0a4  8b06                 mov eax, dword ptr [esi]
// 005df0a6  89448afc             mov dword ptr [edx + ecx*4 - 4], eax
// 005df0aa  8b7604               mov esi, dword ptr [esi + 4]
// 005df0ad  85f6                 test esi, esi
// 005df0af  7590                 jne 0x5df041
// 005df0b1  5f                   pop edi
// 005df0b2  5e                   pop esi
// 005df0b3  5b                   pop ebx
// 005df0b4  c20800               ret 8
// library openrbx-client/App\v8world\SpatialHash.cpp (function ?getPrimitivesInGrid@SpatialHash@RBX@@QAEXABVVector3int32@2@AAV?$Array@PAVPrimitive@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SpatialHash.cpp
