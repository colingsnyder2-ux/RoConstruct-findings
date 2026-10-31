// roc 2011-06 00407250  unit: VCApp::?$CComObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407250
//
// 00407250  55                   push ebp
// 00407251  8bec                 mov ebp, esp
// 00407253  6aff                 push -1
// 00407255  6803d39c00           push 0x9cd303
// 0040725a  64a100000000         mov eax, dword ptr fs:[0]
// 00407260  50                   push eax
// 00407261  64892500000000       mov dword ptr fs:[0], esp
// 00407268  83ec1c               sub esp, 0x1c
// 0040726b  53                   push ebx
// 0040726c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040726f  8b03                 mov eax, dword ptr [ebx]
// 00407271  8b500c               mov edx, dword ptr [eax + 0xc]
// 00407274  56                   push esi
// 00407275  57                   push edi
// 00407276  8bf9                 mov edi, ecx
// 00407278  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040727b  8d4de0               lea ecx, [ebp - 0x20]
// 0040727e  51                   push ecx
// 0040727f  53                   push ebx
// 00407280  897ddc               mov dword ptr [ebp - 0x24], edi
// 00407283  ffd2                 call edx
// 00407285  33c9                 xor ecx, ecx
// 00407287  3bc1                 cmp eax, ecx
// 00407289  0f8c3b010000         jl 0x4073ca
// 0040728f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00407292  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00407296  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00407299  895718               mov dword ptr [edi + 0x18], edx
// 0040729c  894f14               mov dword ptr [edi + 0x14], ecx
// 0040729f  3bd1                 cmp edx, ecx
// 004072a1  7468                 je 0x40730b
// 004072a3  8bfa                 mov edi, edx
// 004072a5  8bc7                 mov eax, edi
// 004072a7  ba0c000000           mov edx, 0xc
// 004072ac  f7e2                 mul edx
// 004072ae  894dfc               mov dword ptr [ebp - 4], ecx
// 004072b1  0f90c1               seto cl
// 004072b4  f7d9                 neg ecx
// 004072b6  0bc8                 or ecx, eax
// 004072b8  33c0                 xor eax, eax
// 004072ba  83c104               add ecx, 4
// 004072bd  0f92c0               setb al
// 004072c0  f7d8                 neg eax
// 004072c2  0bc1                 or eax, ecx
// 004072c4  50                   push eax
// 004072c5  e876304000           call 0x80a340
// 004072ca  83c404               add esp, 4
// 004072cd  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004072d0  c645fc01             mov byte ptr [ebp - 4], 1
// 004072d4  85c0                 test eax, eax
// 004072d6  741a                 je 0x4072f2
// 004072d8  6890234000           push 0x402390
// 004072dd  6820714000           push 0x407120
// 004072e2  57                   push edi
// 004072e3  8d7004               lea esi, [eax + 4]
// 004072e6  6a0c                 push 0xc
// 004072e8  56                   push esi
// 004072e9  8938                 mov dword ptr [eax], edi
// 004072eb  e800404000           call 0x80b2f0
// 004072f0  eb02                 jmp 0x4072f4
// 004072f2  33f6                 xor esi, esi
// 004072f4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004072f7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004072fe  85f6                 test esi, esi
// 00407300  0f84f1000000         je 0x4073f7
// 00407306  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00407309  33c9                 xor ecx, ecx
// 0040730b  394f18               cmp dword ptr [edi + 0x18], ecx
// 0040730e  894de8               mov dword ptr [ebp - 0x18], ecx
// 00407311  0f8ea1000000         jle 0x4073b8
// 00407317  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 0040731a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040731d  8b0b                 mov ecx, dword ptr [ebx]
// 0040731f  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00407322  8d55ec               lea edx, [ebp - 0x14]
// 00407325  52                   push edx
// 00407326  50                   push eax
// 00407327  53                   push ebx
// 00407328  ffd1                 call ecx
// 0040732a  85c0                 test eax, eax
// 0040732c  7c77                 jl 0x4073a5
// 0040732e  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407335  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00407338  8b13                 mov edx, dword ptr [ebx]
// 0040733a  6a00                 push 0
// 0040733c  6a00                 push 0
// 0040733e  6a00                 push 0
// 00407340  8d4508               lea eax, [ebp + 8]
// 00407343  50                   push eax
// 00407344  8b01                 mov eax, dword ptr [ecx]
// 00407346  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00407349  50                   push eax
// 0040734a  53                   push ebx
// 0040734b  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00407352  ffd1                 call ecx
// 00407354  85c0                 test eax, eax
// 00407356  7c30                 jl 0x407388
// 00407358  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040735b  8b06                 mov eax, dword ptr [esi]
// 0040735d  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407364  3bc7                 cmp eax, edi
// 00407366  7409                 je 0x407371
// 00407368  50                   push eax
// 00407369  ff15000ba400         call dword ptr [0xa40b00]
// 0040736f  893e                 mov dword ptr [esi], edi
// 00407371  8b06                 mov eax, dword ptr [esi]
// 00407373  50                   push eax
// 00407374  ff15ec0aa400         call dword ptr [0xa40aec]
// 0040737a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040737d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00407380  894604               mov dword ptr [esi + 4], eax
// 00407383  8b02                 mov eax, dword ptr [edx]
// 00407385  894608               mov dword ptr [esi + 8], eax
// 00407388  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040738b  8b0b                 mov ecx, dword ptr [ebx]
// 0040738d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00407390  52                   push edx
// 00407391  53                   push ebx
// 00407392  ffd0                 call eax
// 00407394  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00407397  51                   push ecx
// 00407398  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040739f  ff15000ba400         call dword ptr [0xa40b00]
// 004073a5  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004073a8  40                   inc eax
// 004073a9  83c60c               add esi, 0xc
// 004073ac  3b4718               cmp eax, dword ptr [edi + 0x18]
// 004073af  8945e8               mov dword ptr [ebp - 0x18], eax
// 004073b2  0f8c62ffffff         jl 0x40731a
// 004073b8  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 004073bb  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004073be  895714               mov dword ptr [edi + 0x14], edx
// 004073c1  8b03                 mov eax, dword ptr [ebx]
// 004073c3  8b504c               mov edx, dword ptr [eax + 0x4c]
// 004073c6  51                   push ecx
// 004073c7  53                   push ebx
// 004073c8  ffd2                 call edx
// 004073ca  33c0                 xor eax, eax
// 004073cc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004073cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004073d6  5f                   pop edi
// 004073d7  5e                   pop esi
// 004073d8  5b                   pop ebx
// 004073d9  8be5                 mov esp, ebp
// 004073db  5d                   pop ebp
// 004073dc  c20400               ret 4
// 004073df  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004073e2  e8532f4000           call 0x80a33a
// 004073e7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004073ee  b8f4734000           mov eax, 0x4073f4
// 004073f3  c3                   ret 
// 004073f4  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004073f7  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004073fa  8b0b                 mov ecx, dword ptr [ebx]
// 004073fc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004073ff  52                   push edx
// 00407400  53                   push ebx
// 00407401  ffd0                 call eax
// 00407403  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407406  5f                   pop edi
// 00407407  5e                   pop esi
// 00407408  b80e000780           mov eax, 0x8007000e
// 0040740d  64890d00000000       mov dword ptr fs:[0], ecx
// 00407414  5b                   pop ebx
// 00407415  8be5                 mov esp, ebp
// 00407417  5d                   pop ebp
// 00407418  c20400               ret 4
// copied from an identical function in another client (function ?LoadNameCache@CComTypeInfoHolder@ATL@@QAEJPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_namecachemfcearly_8ee13228801bbb3a.cpp