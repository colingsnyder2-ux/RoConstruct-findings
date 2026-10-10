// roc 2008-06 0073f080  unit: XTPPaintThemes::CXTPOfficeTheme  size: 961 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073f080
//
// 0073f080  83ec48               sub esp, 0x48
// 0073f083  53                   push ebx
// 0073f084  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0073f088  55                   push ebp
// 0073f089  56                   push esi
// 0073f08a  57                   push edi
// 0073f08b  8bf9                 mov edi, ecx
// 0073f08d  85db                 test ebx, ebx
// 0073f08f  7523                 jne 0x73f0b4
// 0073f091  8b442464             mov eax, dword ptr [esp + 0x64]
// 0073f095  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0073f099  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0073f09d  53                   push ebx
// 0073f09e  50                   push eax
// 0073f09f  51                   push ecx
// 0073f0a0  56                   push esi
// 0073f0a1  8bcf                 mov ecx, edi
// 0073f0a3  e8c817f7ff           call 0x6b0870
// 0073f0a8  8bc6                 mov eax, esi
// 0073f0aa  5f                   pop edi
// 0073f0ab  5e                   pop esi
// 0073f0ac  5d                   pop ebp
// 0073f0ad  5b                   pop ebx
// 0073f0ae  83c448               add esp, 0x48
// 0073f0b1  c21000               ret 0x10
// 0073f0b4  8b742464             mov esi, dword ptr [esp + 0x64]
// 0073f0b8  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0073f0be  33c0                 xor eax, eax
// 0073f0c0  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 0073f0c7  8b16                 mov edx, dword ptr [esi]
// 0073f0c9  0f94c0               sete al
// 0073f0cc  8bce                 mov ecx, esi
// 0073f0ce  89442410             mov dword ptr [esp + 0x10], eax
// 0073f0d2  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0073f0d5  ffd0                 call eax
// 0073f0d7  89442468             mov dword ptr [esp + 0x68], eax
// 0073f0db  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0073f0e1  83f8ff               cmp eax, -1
// 0073f0e4  750f                 jne 0x73f0f5
// 0073f0e6  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0073f0ec  85c9                 test ecx, ecx
// 0073f0ee  7405                 je 0x73f0f5
// 0073f0f0  e8cbc6f6ff           call 0x6ab7c0
// 0073f0f5  53                   push ebx
// 0073f0f6  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0073f0fa  56                   push esi
// 0073f0fb  53                   push ebx
// 0073f0fc  8d4c2424             lea ecx, [esp + 0x24]
// 0073f100  51                   push ecx
// 0073f101  8bcf                 mov ecx, edi
// 0073f103  89442474             mov dword ptr [esp + 0x74], eax
// 0073f107  e86417f7ff           call 0x6b0870
// 0073f10c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0073f112  038e80010000         add ecx, dword ptr [esi + 0x180]
// 0073f118  837c246400           cmp dword ptr [esp + 0x64], 0
// 0073f11d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 0073f123  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0073f129  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0073f12f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0073f133  89542420             mov dword ptr [esp + 0x20], edx
// 0073f137  89442424             mov dword ptr [esp + 0x24], eax
// 0073f13b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0073f13f  754e                 jne 0x73f18f
// 0073f141  8b442468             mov eax, dword ptr [esp + 0x68]
// 0073f145  41                   inc ecx
// 0073f146  83f802               cmp eax, 2
// 0073f149  7409                 je 0x73f154
// 0073f14b  83f803               cmp eax, 3
// 0073f14e  7404                 je 0x73f154
// 0073f150  33c0                 xor eax, eax
// 0073f152  eb05                 jmp 0x73f159
// 0073f154  b801000000           mov eax, 1
// 0073f159  33d2                 xor edx, edx
// 0073f15b  85c0                 test eax, eax
// 0073f15d  0f94c2               sete dl
// 0073f160  6a0f                 push 0xf
// 0073f162  8d14d520000000       lea edx, [edx*8 + 0x20]
// 0073f169  52                   push edx
// 0073f16a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073f16e  83ec10               sub esp, 0x10
// 0073f171  8bc4                 mov eax, esp
// 0073f173  8908                 mov dword ptr [eax], ecx
// 0073f175  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073f179  896804               mov dword ptr [eax + 4], ebp
// 0073f17c  894808               mov dword ptr [eax + 8], ecx
// 0073f17f  53                   push ebx
// 0073f180  8bcf                 mov ecx, edi
// 0073f182  89500c               mov dword ptr [eax + 0xc], edx
// 0073f185  e846fff6ff           call 0x6af0d0
// 0073f18a  e99a000000           jmp 0x73f229
// 0073f18f  8baeac010000         mov ebp, dword ptr [esi + 0x1ac]
// 0073f195  6a05                 push 5
// 0073f197  8bcf                 mov ecx, edi
// 0073f199  e8d2eef6ff           call 0x6ae070
// 0073f19e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073f1a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073f1a6  50                   push eax
// 0073f1a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073f1ab  2bc8                 sub ecx, eax
// 0073f1ad  83e902               sub ecx, 2
// 0073f1b0  f7dd                 neg ebp
// 0073f1b2  1bed                 sbb ebp, ebp
// 0073f1b4  83e510               and ebp, 0x10
// 0073f1b7  83c502               add ebp, 2
// 0073f1ba  2bd5                 sub edx, ebp
// 0073f1bc  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0073f1c0  51                   push ecx
// 0073f1c1  2bd5                 sub edx, ebp
// 0073f1c3  52                   push edx
// 0073f1c4  40                   inc eax
// 0073f1c5  50                   push eax
// 0073f1c6  8d4501               lea eax, [ebp + 1]
// 0073f1c9  50                   push eax
// 0073f1ca  8bcb                 mov ecx, ebx
// 0073f1cc  e86fce0700           call 0x7bc040
// 0073f1d1  837c246800           cmp dword ptr [esp + 0x68], 0
// 0073f1d6  7422                 je 0x73f1fa
// 0073f1d8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073f1dc  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073f1e0  6a20                 push 0x20
// 0073f1e2  6a20                 push 0x20
// 0073f1e4  83ec10               sub esp, 0x10
// 0073f1e7  8bc4                 mov eax, esp
// 0073f1e9  8928                 mov dword ptr [eax], ebp
// 0073f1eb  894804               mov dword ptr [eax + 4], ecx
// 0073f1ee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073f1f2  895008               mov dword ptr [eax + 8], edx
// 0073f1f5  89480c               mov dword ptr [eax + 0xc], ecx
// 0073f1f8  eb27                 jmp 0x73f221
// 0073f1fa  837c241000           cmp dword ptr [esp + 0x10], 0
// 0073f1ff  7428                 je 0x73f229
// 0073f201  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073f205  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073f209  6a35                 push 0x35
// 0073f20b  6a35                 push 0x35
// 0073f20d  83ec10               sub esp, 0x10
// 0073f210  8bc4                 mov eax, esp
// 0073f212  8928                 mov dword ptr [eax], ebp
// 0073f214  895004               mov dword ptr [eax + 4], edx
// 0073f217  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073f21b  894808               mov dword ptr [eax + 8], ecx
// 0073f21e  89500c               mov dword ptr [eax + 0xc], edx
// 0073f221  53                   push ebx
// 0073f222  8bcf                 mov ecx, edi
// 0073f224  e847f0f6ff           call 0x6ae270
// 0073f229  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 0073f230  0f84f0010000         je 0x73f426
// 0073f236  8b06                 mov eax, dword ptr [esi]
// 0073f238  8b5078               mov edx, dword ptr [eax + 0x78]
// 0073f23b  8bce                 mov ecx, esi
// 0073f23d  ffd2                 call edx
// 0073f23f  89442460             mov dword ptr [esp + 0x60], eax
// 0073f243  8d442428             lea eax, [esp + 0x28]
// 0073f247  50                   push eax
// 0073f248  8bce                 mov ecx, esi
// 0073f24a  e8e1310000           call 0x742430
// 0073f24f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0073f253  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073f257  8b742428             mov esi, dword ptr [esp + 0x28]
// 0073f25b  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0073f25f  8944243c             mov dword ptr [esp + 0x3c], eax
// 0073f263  03c1                 add eax, ecx
// 0073f265  99                   cdq 
// 0073f266  2bc2                 sub eax, edx
// 0073f268  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073f26c  8bc8                 mov ecx, eax
// 0073f26e  d1f9                 sar ecx, 1
// 0073f270  837c246400           cmp dword ptr [esp + 0x64], 0
// 0073f275  89742438             mov dword ptr [esp + 0x38], esi
// 0073f279  896c2440             mov dword ptr [esp + 0x40], ebp
// 0073f27d  894c2444             mov dword ptr [esp + 0x44], ecx
// 0073f281  89742448             mov dword ptr [esp + 0x48], esi
// 0073f285  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0073f289  896c2450             mov dword ptr [esp + 0x50], ebp
// 0073f28d  89542454             mov dword ptr [esp + 0x54], edx
// 0073f291  0f84c5000000         je 0x73f35c
// 0073f297  837c246800           cmp dword ptr [esp + 0x68], 0
// 0073f29c  8bcf                 mov ecx, edi
// 0073f29e  7523                 jne 0x73f2c3
// 0073f2a0  6a05                 push 5
// 0073f2a2  e8c9edf6ff           call 0x6ae070
// 0073f2a7  50                   push eax
// 0073f2a8  6a05                 push 5
// 0073f2aa  8bcf                 mov ecx, edi
// 0073f2ac  e8bfedf6ff           call 0x6ae070
// 0073f2b1  50                   push eax
// 0073f2b2  8d442430             lea eax, [esp + 0x30]
// 0073f2b6  50                   push eax
// 0073f2b7  8bcb                 mov ecx, ebx
// 0073f2b9  e89a20f6ff           call 0x6a1358
// 0073f2be  e995000000           jmp 0x73f358
// 0073f2c3  6a1f                 push 0x1f
// 0073f2c5  e8a6edf6ff           call 0x6ae070
// 0073f2ca  50                   push eax
// 0073f2cb  8d4c242c             lea ecx, [esp + 0x2c]
// 0073f2cf  51                   push ecx
// 0073f2d0  8bcb                 mov ecx, ebx
// 0073f2d2  e88720f6ff           call 0x6a135e
// 0073f2d7  8b442460             mov eax, dword ptr [esp + 0x60]
// 0073f2db  83f803               cmp eax, 3
// 0073f2de  7511                 jne 0x73f2f1
// 0073f2e0  6a21                 push 0x21
// 0073f2e2  8bcf                 mov ecx, edi
// 0073f2e4  e887edf6ff           call 0x6ae070
// 0073f2e9  50                   push eax
// 0073f2ea  8d54243c             lea edx, [esp + 0x3c]
// 0073f2ee  52                   push edx
// 0073f2ef  eb14                 jmp 0x73f305
// 0073f2f1  83f804               cmp eax, 4
// 0073f2f4  7516                 jne 0x73f30c
// 0073f2f6  6a21                 push 0x21
// 0073f2f8  8bcf                 mov ecx, edi
// 0073f2fa  e871edf6ff           call 0x6ae070
// 0073f2ff  50                   push eax
// 0073f300  8d44244c             lea eax, [esp + 0x4c]
// 0073f304  50                   push eax
// 0073f305  8bcb                 mov ecx, ebx
// 0073f307  e85220f6ff           call 0x6a135e
// 0073f30c  8b742434             mov esi, dword ptr [esp + 0x34]
// 0073f310  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 0073f314  6a20                 push 0x20
// 0073f316  8bcf                 mov ecx, edi
// 0073f318  e853edf6ff           call 0x6ae070
// 0073f31d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0073f321  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073f325  50                   push eax
// 0073f326  56                   push esi
// 0073f327  6a01                 push 1
// 0073f329  51                   push ecx
// 0073f32a  52                   push edx
// 0073f32b  8bcb                 mov ecx, ebx
// 0073f32d  e80ecd0700           call 0x7bc040
// 0073f332  8b742430             mov esi, dword ptr [esp + 0x30]
// 0073f336  2b742428             sub esi, dword ptr [esp + 0x28]
// 0073f33a  6a20                 push 0x20
// 0073f33c  8bcf                 mov ecx, edi
// 0073f33e  e82dedf6ff           call 0x6ae070
// 0073f343  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073f347  50                   push eax
// 0073f348  8b442450             mov eax, dword ptr [esp + 0x50]
// 0073f34c  6a01                 push 1
// 0073f34e  56                   push esi
// 0073f34f  50                   push eax
// 0073f350  51                   push ecx
// 0073f351  8bcb                 mov ecx, ebx
// 0073f353  e8e8cc0700           call 0x7bc040
// 0073f358  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073f35c  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073f360  8b442438             mov eax, dword ptr [esp + 0x38]
// 0073f364  03c2                 add eax, edx
// 0073f366  99                   cdq 
// 0073f367  2bc2                 sub eax, edx
// 0073f369  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073f36d  8bf0                 mov esi, eax
// 0073f36f  8d040a               lea eax, [edx + ecx]
// 0073f372  99                   cdq 
// 0073f373  2bc2                 sub eax, edx
// 0073f375  8be8                 mov ebp, eax
// 0073f377  d1fe                 sar esi, 1
// 0073f379  8d4602               lea eax, [esi + 2]
// 0073f37c  89442410             mov dword ptr [esp + 0x10], eax
// 0073f380  33c0                 xor eax, eax
// 0073f382  d1fd                 sar ebp, 1
// 0073f384  39442464             cmp dword ptr [esp + 0x64], eax
// 0073f388  8d4d02               lea ecx, [ebp + 2]
// 0073f38b  0f95c0               setne al
// 0073f38e  894c2460             mov dword ptr [esp + 0x60], ecx
// 0073f392  8d56fe               lea edx, [esi - 2]
// 0073f395  8bcf                 mov ecx, edi
// 0073f397  89542418             mov dword ptr [esp + 0x18], edx
// 0073f39b  83c011               add eax, 0x11
// 0073f39e  50                   push eax
// 0073f39f  89442468             mov dword ptr [esp + 0x68], eax
// 0073f3a3  e8c8ecf6ff           call 0x6ae070
// 0073f3a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073f3ac  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f3b0  50                   push eax
// 0073f3b1  8b442464             mov eax, dword ptr [esp + 0x64]
// 0073f3b5  50                   push eax
// 0073f3b6  51                   push ecx
// 0073f3b7  50                   push eax
// 0073f3b8  52                   push edx
// 0073f3b9  55                   push ebp
// 0073f3ba  56                   push esi
// 0073f3bb  53                   push ebx
// 0073f3bc  e84f96fbff           call 0x6f8a10
// 0073f3c1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0073f3c5  8b442468             mov eax, dword ptr [esp + 0x68]
// 0073f3c9  03c1                 add eax, ecx
// 0073f3cb  99                   cdq 
// 0073f3cc  2bc2                 sub eax, edx
// 0073f3ce  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0073f3d2  8bf0                 mov esi, eax
// 0073f3d4  8b442474             mov eax, dword ptr [esp + 0x74]
// 0073f3d8  03c2                 add eax, edx
// 0073f3da  99                   cdq 
// 0073f3db  2bc2                 sub eax, edx
// 0073f3dd  d1fe                 sar esi, 1
// 0073f3df  8be8                 mov ebp, eax
// 0073f3e1  8d4e02               lea ecx, [esi + 2]
// 0073f3e4  894c2438             mov dword ptr [esp + 0x38], ecx
// 0073f3e8  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0073f3ef  83c420               add esp, 0x20
// 0073f3f2  d1fd                 sar ebp, 1
// 0073f3f4  8d55fe               lea edx, [ebp - 2]
// 0073f3f7  8d46fe               lea eax, [esi - 2]
// 0073f3fa  51                   push ecx
// 0073f3fb  8bcf                 mov ecx, edi
// 0073f3fd  89542464             mov dword ptr [esp + 0x64], edx
// 0073f401  89442414             mov dword ptr [esp + 0x14], eax
// 0073f405  e866ecf6ff           call 0x6ae070
// 0073f40a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073f40e  50                   push eax
// 0073f40f  8b442464             mov eax, dword ptr [esp + 0x64]
// 0073f413  50                   push eax
// 0073f414  52                   push edx
// 0073f415  50                   push eax
// 0073f416  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073f41a  50                   push eax
// 0073f41b  55                   push ebp
// 0073f41c  56                   push esi
// 0073f41d  53                   push ebx
// 0073f41e  e8ed95fbff           call 0x6f8a10
// 0073f423  83c420               add esp, 0x20
// 0073f426  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0073f42a  5f                   pop edi
// 0073f42b  5e                   pop esi
// 0073f42c  5d                   pop ebp
// 0073f42d  c70000000000         mov dword ptr [eax], 0
// 0073f433  c7400400000000       mov dword ptr [eax + 4], 0
// 0073f43a  5b                   pop ebx
// 0073f43b  83c448               add esp, 0x48
// 0073f43e  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawControlEdit@CXTPOfficeTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp
