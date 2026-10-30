// roc 2010-06 00852050  unit: CXTPReportPaintManager  size: 746 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00852050
//
// 00852050  6aff                 push -1
// 00852052  68687d9b00           push 0x9b7d68
// 00852057  64a100000000         mov eax, dword ptr fs:[0]
// 0085205d  50                   push eax
// 0085205e  83ec50               sub esp, 0x50
// 00852061  53                   push ebx
// 00852062  55                   push ebp
// 00852063  56                   push esi
// 00852064  57                   push edi
// 00852065  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085206a  33c4                 xor eax, esp
// 0085206c  50                   push eax
// 0085206d  8d442464             lea eax, [esp + 0x64]
// 00852071  64a300000000         mov dword ptr fs:[0], eax
// 00852077  8bf9                 mov edi, ecx
// 00852079  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0085207d  53                   push ebx
// 0085207e  8d4c2418             lea ecx, [esp + 0x18]
// 00852082  e889d2faff           call 0x7ff310
// 00852087  83bf5c02000000       cmp dword ptr [edi + 0x25c], 0
// 0085208e  0f8452010000         je 0x8521e6
// 00852094  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 00852098  7559                 jne 0x8520f3
// 0085209a  8db7d8020000         lea esi, [edi + 0x2d8]
// 008520a0  8bce                 mov ecx, esi
// 008520a2  e819dbfcff           call 0x81fbc0
// 008520a7  85c0                 test eax, eax
// 008520a9  7448                 je 0x8520f3
// 008520ab  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 008520b2  7410                 je 0x8520c4
// 008520b4  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 008520bb  7407                 je 0x8520c4
// 008520bd  b901000000           mov ecx, 1
// 008520c2  eb02                 jmp 0x8520c6
// 008520c4  33c9                 xor ecx, ecx
// 008520c6  8b442474             mov eax, dword ptr [esp + 0x74]
// 008520ca  85c0                 test eax, eax
// 008520cc  7403                 je 0x8520d1
// 008520ce  8b4004               mov eax, dword ptr [eax + 4]
// 008520d1  6a00                 push 0
// 008520d3  8d542418             lea edx, [esp + 0x18]
// 008520d7  52                   push edx
// 008520d8  33d2                 xor edx, edx
// 008520da  85c9                 test ecx, ecx
// 008520dc  0f95c2               setne dl
// 008520df  8bce                 mov ecx, esi
// 008520e1  8d541201             lea edx, [edx + edx + 1]
// 008520e5  52                   push edx
// 008520e6  6a01                 push 1
// 008520e8  50                   push eax
// 008520e9  e852d7fcff           call 0x81f840
// 008520ee  e931020000           jmp 0x852324
// 008520f3  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 008520f7  0f85e9000000         jne 0x8521e6
// 008520fd  8dafcc020000         lea ebp, [edi + 0x2cc]
// 00852103  8bcd                 mov ecx, ebp
// 00852105  e8b6dafcff           call 0x81fbc0
// 0085210a  85c0                 test eax, eax
// 0085210c  0f84d4000000         je 0x8521e6
// 00852112  e8091af9ff           call 0x7e3b20
// 00852117  6a0f                 push 0xf
// 00852119  8bc8                 mov ecx, eax
// 0085211b  e89011f9ff           call 0x7e32b0
// 00852120  8b742474             mov esi, dword ptr [esp + 0x74]
// 00852124  50                   push eax
// 00852125  8d442418             lea eax, [esp + 0x18]
// 00852129  50                   push eax
// 0085212a  8bce                 mov ecx, esi
// 0085212c  e80d66f5ff           call 0x7a873e
// 00852131  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 00852138  7410                 je 0x85214a
// 0085213a  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 00852141  7407                 je 0x85214a
// 00852143  b903000000           mov ecx, 3
// 00852148  eb1a                 jmp 0x852164
// 0085214a  ff1580ba9e00         call dword ptr [0x9eba80]
// 00852150  50                   push eax
// 00852151  e8145bf5ff           call 0x7a7c6a
// 00852156  33c9                 xor ecx, ecx
// 00852158  3bc3                 cmp eax, ebx
// 0085215a  0f94c1               sete cl
// 0085215d  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 00852164  85f6                 test esi, esi
// 00852166  7504                 jne 0x85216c
// 00852168  33c0                 xor eax, eax
// 0085216a  eb03                 jmp 0x85216f
// 0085216c  8b4604               mov eax, dword ptr [esi + 4]
// 0085216f  6a00                 push 0
// 00852171  8d542418             lea edx, [esp + 0x18]
// 00852175  52                   push edx
// 00852176  51                   push ecx
// 00852177  6a01                 push 1
// 00852179  50                   push eax
// 0085217a  8bcd                 mov ecx, ebp
// 0085217c  e8bfd6fcff           call 0x81f840
// 00852181  8b442420             mov eax, dword ptr [esp + 0x20]
// 00852185  8b3d08a19e00         mov edi, dword ptr [0x9ea108]
// 0085218b  8d48fd               lea ecx, [eax - 3]
// 0085218e  51                   push ecx
// 0085218f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00852193  8d5105               lea edx, [ecx + 5]
// 00852196  52                   push edx
// 00852197  83c0fb               add eax, -5
// 0085219a  50                   push eax
// 0085219b  8b4604               mov eax, dword ptr [esi + 4]
// 0085219e  83c103               add ecx, 3
// 008521a1  51                   push ecx
// 008521a2  50                   push eax
// 008521a3  ffd7                 call edi
// 008521a5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008521a9  8d48fd               lea ecx, [eax - 3]
// 008521ac  51                   push ecx
// 008521ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008521b1  8d5109               lea edx, [ecx + 9]
// 008521b4  52                   push edx
// 008521b5  83c0fb               add eax, -5
// 008521b8  50                   push eax
// 008521b9  8b4604               mov eax, dword ptr [esi + 4]
// 008521bc  83c107               add ecx, 7
// 008521bf  51                   push ecx
// 008521c0  50                   push eax
// 008521c1  ffd7                 call edi
// 008521c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008521c7  8d48fd               lea ecx, [eax - 3]
// 008521ca  51                   push ecx
// 008521cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008521cf  8d510d               lea edx, [ecx + 0xd]
// 008521d2  52                   push edx
// 008521d3  83c0fb               add eax, -5
// 008521d6  50                   push eax
// 008521d7  8b4604               mov eax, dword ptr [esi + 4]
// 008521da  83c10b               add ecx, 0xb
// 008521dd  51                   push ecx
// 008521de  50                   push eax
// 008521df  ffd7                 call edi
// 008521e1  e93e010000           jmp 0x852324
// 008521e6  8b17                 mov edx, dword ptr [edi]
// 008521e8  8b742474             mov esi, dword ptr [esp + 0x74]
// 008521ec  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008521f2  53                   push ebx
// 008521f3  56                   push esi
// 008521f4  8bcf                 mov ecx, edi
// 008521f6  ffd0                 call eax
// 008521f8  e82319f9ff           call 0x7e3b20
// 008521fd  6a12                 push 0x12
// 008521ff  8bc8                 mov ecx, eax
// 00852201  e8aa10f9ff           call 0x7e32b0
// 00852206  85f6                 test esi, esi
// 00852208  7504                 jne 0x85220e
// 0085220a  33c9                 xor ecx, ecx
// 0085220c  eb03                 jmp 0x852211
// 0085220e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00852211  50                   push eax
// 00852212  51                   push ecx
// 00852213  8d4c2440             lea ecx, [esp + 0x40]
// 00852217  e824d5faff           call 0x7ff740
// 0085221c  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00852224  e8f718f9ff           call 0x7e3b20
// 00852229  6a12                 push 0x12
// 0085222b  8bc8                 mov ecx, eax
// 0085222d  e87e10f9ff           call 0x7e32b0
// 00852232  85f6                 test esi, esi
// 00852234  7504                 jne 0x85223a
// 00852236  33c9                 xor ecx, ecx
// 00852238  eb03                 jmp 0x85223d
// 0085223a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085223d  50                   push eax
// 0085223e  51                   push ecx
// 0085223f  8d4c242c             lea ecx, [esp + 0x2c]
// 00852243  e8b8d5faff           call 0x7ff800
// 00852248  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 0085224c  7556                 jne 0x8522a4
// 0085224e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00852252  8b542418             mov edx, dword ptr [esp + 0x18]
// 00852256  8d040a               lea eax, [edx + ecx]
// 00852259  99                   cdq 
// 0085225a  2bc2                 sub eax, edx
// 0085225c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00852260  8bc8                 mov ecx, eax
// 00852262  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852266  03c2                 add eax, edx
// 00852268  99                   cdq 
// 00852269  2bc2                 sub eax, edx
// 0085226b  d1f8                 sar eax, 1
// 0085226d  d1f9                 sar ecx, 1
// 0085226f  8d78fd               lea edi, [eax - 3]
// 00852272  8d51ff               lea edx, [ecx - 1]
// 00852275  897c244c             mov dword ptr [esp + 0x4c], edi
// 00852279  8d7803               lea edi, [eax + 3]
// 0085227c  83c102               add ecx, 2
// 0085227f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00852283  6a03                 push 3
// 00852285  8d442450             lea eax, [esp + 0x50]
// 00852289  894c2464             mov dword ptr [esp + 0x64], ecx
// 0085228d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00852290  50                   push eax
// 00852291  51                   push ecx
// 00852292  8954245c             mov dword ptr [esp + 0x5c], edx
// 00852296  897c2460             mov dword ptr [esp + 0x60], edi
// 0085229a  89542464             mov dword ptr [esp + 0x64], edx
// 0085229e  ff1568a19e00         call dword ptr [0x9ea168]
// 008522a4  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 008522a8  7560                 jne 0x85230a
// 008522aa  8b442420             mov eax, dword ptr [esp + 0x20]
// 008522ae  8b542414             mov edx, dword ptr [esp + 0x14]
// 008522b2  8d48fd               lea ecx, [eax - 3]
// 008522b5  8d7a05               lea edi, [edx + 5]
// 008522b8  51                   push ecx
// 008522b9  57                   push edi
// 008522ba  8b3d08a19e00         mov edi, dword ptr [0x9ea108]
// 008522c0  83c0fb               add eax, -5
// 008522c3  83c203               add edx, 3
// 008522c6  50                   push eax
// 008522c7  52                   push edx
// 008522c8  8b5604               mov edx, dword ptr [esi + 4]
// 008522cb  52                   push edx
// 008522cc  ffd7                 call edi
// 008522ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 008522d2  8b542414             mov edx, dword ptr [esp + 0x14]
// 008522d6  8d48fd               lea ecx, [eax - 3]
// 008522d9  51                   push ecx
// 008522da  8d5a09               lea ebx, [edx + 9]
// 008522dd  53                   push ebx
// 008522de  83c0fb               add eax, -5
// 008522e1  50                   push eax
// 008522e2  8b4604               mov eax, dword ptr [esi + 4]
// 008522e5  83c207               add edx, 7
// 008522e8  52                   push edx
// 008522e9  50                   push eax
// 008522ea  ffd7                 call edi
// 008522ec  8b442420             mov eax, dword ptr [esp + 0x20]
// 008522f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 008522f4  8d48fd               lea ecx, [eax - 3]
// 008522f7  51                   push ecx
// 008522f8  8b4e04               mov ecx, dword ptr [esi + 4]
// 008522fb  8d5a0d               lea ebx, [edx + 0xd]
// 008522fe  53                   push ebx
// 008522ff  83c0fb               add eax, -5
// 00852302  50                   push eax
// 00852303  83c20b               add edx, 0xb
// 00852306  52                   push edx
// 00852307  51                   push ecx
// 00852308  ffd7                 call edi
// 0085230a  8d4c2424             lea ecx, [esp + 0x24]
// 0085230e  e87dd5faff           call 0x7ff890
// 00852313  8d4c2438             lea ecx, [esp + 0x38]
// 00852317  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0085231f  e8acd4faff           call 0x7ff7d0
// 00852324  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00852328  64890d00000000       mov dword ptr fs:[0], ecx
// 0085232f  59                   pop ecx
// 00852330  5f                   pop edi
// 00852331  5e                   pop esi
// 00852332  5d                   pop ebp
// 00852333  5b                   pop ebx
// 00852334  83c45c               add esp, 0x5c
// 00852337  c20800               ret 8
// copied from an identical function in another client (function ?DrawInplaceButton@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp