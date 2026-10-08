// roc 2009-06 007aab90  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007aab90
//
// 007aab90  83ec30               sub esp, 0x30
// 007aab93  837c245000           cmp dword ptr [esp + 0x50], 0
// 007aab98  53                   push ebx
// 007aab99  55                   push ebp
// 007aab9a  56                   push esi
// 007aab9b  57                   push edi
// 007aab9c  8bf9                 mov edi, ecx
// 007aab9e  0f8452010000         je 0x7aacf6
// 007aaba4  8b542458             mov edx, dword ptr [esp + 0x58]
// 007aaba8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007aabac  2b542450             sub edx, dword ptr [esp + 0x50]
// 007aabb0  b801000000           mov eax, 1
// 007aabb5  41                   inc ecx
// 007aabb6  894c2418             mov dword ptr [esp + 0x18], ecx
// 007aabba  03d0                 add edx, eax
// 007aabbc  6a29                 push 0x29
// 007aabbe  8bcf                 mov ecx, edi
// 007aabc0  89442414             mov dword ptr [esp + 0x14], eax
// 007aabc4  89442418             mov dword ptr [esp + 0x18], eax
// 007aabc8  89542420             mov dword ptr [esp + 0x20], edx
// 007aabcc  e8af7bf7ff           call 0x722780
// 007aabd1  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007aabd5  50                   push eax
// 007aabd6  8d442414             lea eax, [esp + 0x14]
// 007aabda  50                   push eax
// 007aabdb  8bcb                 mov ecx, ebx
// 007aabdd  e8eeebf6ff           call 0x7197d0
// 007aabe2  6aff                 push -1
// 007aabe4  6aff                 push -1
// 007aabe6  8d4c2418             lea ecx, [esp + 0x18]
// 007aabea  51                   push ecx
// 007aabeb  ff15bced8900         call dword ptr [0x89edbc]
// 007aabf1  8b442454             mov eax, dword ptr [esp + 0x54]
// 007aabf5  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007aabf9  bd20000000           mov ebp, 0x20
// 007aabfe  99                   cdq 
// 007aabff  2bc2                 sub eax, edx
// 007aac01  d1f8                 sar eax, 1
// 007aac03  8d48f6               lea ecx, [eax - 0xa]
// 007aac06  83f920               cmp ecx, 0x20
// 007aac09  7f02                 jg 0x7aac0d
// 007aac0b  8be9                 mov ebp, ecx
// 007aac0d  8b542410             mov edx, dword ptr [esp + 0x10]
// 007aac11  8b442418             mov eax, dword ptr [esp + 0x18]
// 007aac15  03c2                 add eax, edx
// 007aac17  99                   cdq 
// 007aac18  2bc2                 sub eax, edx
// 007aac1a  d1f8                 sar eax, 1
// 007aac1c  8bf0                 mov esi, eax
// 007aac1e  2bf5                 sub esi, ebp
// 007aac20  83f920               cmp ecx, 0x20
// 007aac23  7e05                 jle 0x7aac2a
// 007aac25  b920000000           mov ecx, 0x20
// 007aac2a  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 007aac2f  8d2c08               lea ebp, [eax + ecx]
// 007aac32  742e                 je 0x7aac62
// 007aac34  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007aac38  8b542414             mov edx, dword ptr [esp + 0x14]
// 007aac3c  6a1f                 push 0x1f
// 007aac3e  6a20                 push 0x20
// 007aac40  83ec10               sub esp, 0x10
// 007aac43  8bc4                 mov eax, esp
// 007aac45  8908                 mov dword ptr [eax], ecx
// 007aac47  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007aac4b  895004               mov dword ptr [eax + 4], edx
// 007aac4e  8b542434             mov edx, dword ptr [esp + 0x34]
// 007aac52  894808               mov dword ptr [eax + 8], ecx
// 007aac55  53                   push ebx
// 007aac56  8bcf                 mov ecx, edi
// 007aac58  89500c               mov dword ptr [eax + 0xc], edx
// 007aac5b  e8908bf7ff           call 0x7237f0
// 007aac60  eb1e                 jmp 0x7aac80
// 007aac62  8b873c050000         mov eax, dword ptr [edi + 0x53c]
// 007aac68  83f8ff               cmp eax, -1
// 007aac6b  7506                 jne 0x7aac73
// 007aac6d  8b8738050000         mov eax, dword ptr [edi + 0x538]
// 007aac73  50                   push eax
// 007aac74  8d442414             lea eax, [esp + 0x14]
// 007aac78  50                   push eax
// 007aac79  8bcb                 mov ecx, ebx
// 007aac7b  e850ebf6ff           call 0x7197d0
// 007aac80  3bf5                 cmp esi, ebp
// 007aac82  7d72                 jge 0x7aacf6
// 007aac84  83c603               add esi, 3
// 007aac87  8d4efe               lea ecx, [esi - 2]
// 007aac8a  894c2420             mov dword ptr [esp + 0x20], ecx
// 007aac8e  6a14                 push 0x14
// 007aac90  8bcf                 mov ecx, edi
// 007aac92  c744242805000000     mov dword ptr [esp + 0x28], 5
// 007aac9a  8974242c             mov dword ptr [esp + 0x2c], esi
// 007aac9e  c744243007000000     mov dword ptr [esp + 0x30], 7
// 007aaca6  e8d57af7ff           call 0x722780
// 007aacab  50                   push eax
// 007aacac  8d542424             lea edx, [esp + 0x24]
// 007aacb0  52                   push edx
// 007aacb1  8bcb                 mov ecx, ebx
// 007aacb3  e818ebf6ff           call 0x7197d0
// 007aacb8  8d4eff               lea ecx, [esi - 1]
// 007aacbb  8d46fd               lea eax, [esi - 3]
// 007aacbe  894c2438             mov dword ptr [esp + 0x38], ecx
// 007aacc2  6a26                 push 0x26
// 007aacc4  8bcf                 mov ecx, edi
// 007aacc6  89442434             mov dword ptr [esp + 0x34], eax
// 007aacca  c744243804000000     mov dword ptr [esp + 0x38], 4
// 007aacd2  c744244006000000     mov dword ptr [esp + 0x40], 6
// 007aacda  e8a17af7ff           call 0x722780
// 007aacdf  50                   push eax
// 007aace0  8d542434             lea edx, [esp + 0x34]
// 007aace4  52                   push edx
// 007aace5  8bcb                 mov ecx, ebx
// 007aace7  e8e4eaf6ff           call 0x7197d0
// 007aacec  83c604               add esi, 4
// 007aacef  8d46fd               lea eax, [esi - 3]
// 007aacf2  3bc5                 cmp eax, ebp
// 007aacf4  7c91                 jl 0x7aac87
// 007aacf6  8b442444             mov eax, dword ptr [esp + 0x44]
// 007aacfa  5f                   pop edi
// 007aacfb  5e                   pop esi
// 007aacfc  5d                   pop ebp
// 007aacfd  c70000000000         mov dword ptr [eax], 0
// 007aad03  c7400409000000       mov dword ptr [eax + 4], 9
// 007aad0a  5b                   pop ebx
// 007aad0b  83c430               add esp, 0x30
// 007aad0e  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawTearOffGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
