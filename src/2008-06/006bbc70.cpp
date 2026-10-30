// from server: 100% by auto
// roc 2008-06 006bbc70  unit: CXTPImageManagerResource::CBitmapDC  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bbc70
//
// 006bbc70  55                   push ebp
// 006bbc71  8bec                 mov ebp, esp
// 006bbc73  6aff                 push -1
// 006bbc75  6810007e00           push 0x7e0010
// 006bbc7a  64a100000000         mov eax, dword ptr fs:[0]
// 006bbc80  50                   push eax
// 006bbc81  83ec58               sub esp, 0x58
// 006bbc84  53                   push ebx
// 006bbc85  56                   push esi
// 006bbc86  57                   push edi
// 006bbc87  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006bbc8c  33c5                 xor eax, ebp
// 006bbc8e  50                   push eax
// 006bbc8f  8d45f4               lea eax, [ebp - 0xc]
// 006bbc92  64a300000000         mov dword ptr fs:[0], eax
// 006bbc98  8965f0               mov dword ptr [ebp - 0x10], esp
// 006bbc9b  33f6                 xor esi, esi
// 006bbc9d  397510               cmp dword ptr [ebp + 0x10], esi
// 006bbca0  7516                 jne 0x6bbcb8
// 006bbca2  33c0                 xor eax, eax
// 006bbca4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006bbca7  64890d00000000       mov dword ptr fs:[0], ecx
// 006bbcae  59                   pop ecx
// 006bbcaf  5f                   pop edi
// 006bbcb0  5e                   pop esi
// 006bbcb1  5b                   pop ebx
// 006bbcb2  8be5                 mov esp, ebp
// 006bbcb4  5d                   pop ebp
// 006bbcb5  c20c00               ret 0xc
// 006bbcb8  6a2c                 push 0x2c
// 006bbcba  8d459c               lea eax, [ebp - 0x64]
// 006bbcbd  56                   push esi
// 006bbcbe  50                   push eax
// 006bbcbf  e8405afeff           call 0x6a1704
// 006bbcc4  83c40c               add esp, 0xc
// 006bbcc7  8d4dc8               lea ecx, [ebp - 0x38]
// 006bbcca  c7459c28000000       mov dword ptr [ebp - 0x64], 0x28
// 006bbcd1  e882031000           call 0x7bc058
// 006bbcd6  56                   push esi
// 006bbcd7  8975fc               mov dword ptr [ebp - 4], esi
// 006bbcda  ff15d0208000         call dword ptr [0x8020d0]
// 006bbce0  50                   push eax
// 006bbce1  8d4dc8               lea ecx, [ebp - 0x38]
// 006bbce4  e85d031000           call 0x7bc046
// 006bbce9  8d4dd8               lea ecx, [ebp - 0x28]
// 006bbcec  8975e8               mov dword ptr [ebp - 0x18], esi
// 006bbcef  8975ec               mov dword ptr [ebp - 0x14], esi
// 006bbcf2  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 006bbcf9  e814041000           call 0x7bc112
// 006bbcfe  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006bbd01  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 006bbd04  56                   push esi
// 006bbd05  8d4d9c               lea ecx, [ebp - 0x64]
// 006bbd08  51                   push ecx
// 006bbd09  56                   push esi
// 006bbd0a  56                   push esi
// 006bbd0b  56                   push esi
// 006bbd0c  53                   push ebx
// 006bbd0d  52                   push edx
// 006bbd0e  c645fc02             mov byte ptr [ebp - 4], 2
// 006bbd12  ff157c208000         call dword ptr [0x80207c]
// 006bbd18  85c0                 test eax, eax
// 006bbd1a  7505                 jne 0x6bbd21
// 006bbd1c  e86549feff           call 0x6a0686
// 006bbd21  8b45a0               mov eax, dword ptr [ebp - 0x60]
// 006bbd24  0faf45a4             imul eax, dword ptr [ebp - 0x5c]
// 006bbd28  8b3db0288000         mov edi, dword ptr [0x8028b0]
// 006bbd2e  03c0                 add eax, eax
// 006bbd30  03c0                 add eax, eax
// 006bbd32  50                   push eax
// 006bbd33  ffd7                 call edi
// 006bbd35  8bf0                 mov esi, eax
// 006bbd37  83c404               add esp, 4
// 006bbd3a  8975e8               mov dword ptr [ebp - 0x18], esi
// 006bbd3d  85f6                 test esi, esi
// 006bbd3f  7505                 jne 0x6bbd46
// 006bbd41  e84049feff           call 0x6a0686
// 006bbd46  6a34                 push 0x34
// 006bbd48  ffd7                 call edi
// 006bbd4a  8bf8                 mov edi, eax
// 006bbd4c  83c404               add esp, 4
// 006bbd4f  897dec               mov dword ptr [ebp - 0x14], edi
// 006bbd52  85ff                 test edi, edi
// 006bbd54  7505                 jne 0x6bbd5b
// 006bbd56  e82b49feff           call 0x6a0686
// 006bbd5b  6a28                 push 0x28
// 006bbd5d  8d459c               lea eax, [ebp - 0x64]
// 006bbd60  50                   push eax
// 006bbd61  6a28                 push 0x28
// 006bbd63  57                   push edi
// 006bbd64  ff15ac288000         call dword ptr [0x8028ac]
// 006bbd6a  8b4da4               mov ecx, dword ptr [ebp - 0x5c]
// 006bbd6d  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 006bbd70  83c410               add esp, 0x10
// 006bbd73  6a00                 push 0
// 006bbd75  57                   push edi
// 006bbd76  56                   push esi
// 006bbd77  51                   push ecx
// 006bbd78  6a00                 push 0
// 006bbd7a  53                   push ebx
// 006bbd7b  52                   push edx
// 006bbd7c  ff157c208000         call dword ptr [0x80207c]
// 006bbd82  85c0                 test eax, eax
// 006bbd84  7505                 jne 0x6bbd8b
// 006bbd86  e8fb48feff           call 0x6a0686
// 006bbd8b  8b4704               mov eax, dword ptr [edi + 4]
// 006bbd8e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006bbd91  99                   cdq 
// 006bbd92  f7f9                 idiv ecx
// 006bbd94  33d2                 xor edx, edx
// 006bbd96  33db                 xor ebx, ebx
// 006bbd98  894704               mov dword ptr [edi + 4], eax
// 006bbd9b  8b4714               mov eax, dword ptr [edi + 0x14]
// 006bbd9e  f7f1                 div ecx
// 006bbda0  894714               mov dword ptr [edi + 0x14], eax
// 006bbda3  8bc1                 mov eax, ecx
// 006bbda5  b904000000           mov ecx, 4
// 006bbdaa  f7e1                 mul ecx
// 006bbdac  0f90c3               seto bl
// 006bbdaf  f7db                 neg ebx
// 006bbdb1  0bd8                 or ebx, eax
// 006bbdb3  53                   push ebx
// 006bbdb4  e89d4bfeff           call 0x6a0956
// 006bbdb9  83c404               add esp, 4
// 006bbdbc  8bf0                 mov esi, eax
// 006bbdbe  33db                 xor ebx, ebx
// 006bbdc0  3b5d0c               cmp ebx, dword ptr [ebp + 0xc]
// 006bbdc3  7d46                 jge 0x6bbe0b
// 006bbdc5  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 006bbdc8  6a00                 push 0
// 006bbdca  6a00                 push 0
// 006bbdcc  8d149e               lea edx, [esi + ebx*4]
// 006bbdcf  52                   push edx
// 006bbdd0  6a00                 push 0
// 006bbdd2  57                   push edi
// 006bbdd3  50                   push eax
// 006bbdd4  ff154c218000         call dword ptr [0x80214c]
// 006bbdda  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006bbddd  890499               mov dword ptr [ecx + ebx*4], eax
// 006bbde0  85c0                 test eax, eax
// 006bbde2  7524                 jne 0x6bbe08
// 006bbde4  33ff                 xor edi, edi
// 006bbde6  3bfb                 cmp edi, ebx
// 006bbde8  7d10                 jge 0x6bbdfa
// 006bbdea  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006bbded  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006bbdf0  50                   push eax
// 006bbdf1  ff1550218000         call dword ptr [0x802150]
// 006bbdf7  47                   inc edi
// 006bbdf8  ebec                 jmp 0x6bbde6
// 006bbdfa  56                   push esi
// 006bbdfb  e84a4bfeff           call 0x6a094a
// 006bbe00  83c404               add esp, 4
// 006bbe03  e87e48feff           call 0x6a0686
// 006bbe08  43                   inc ebx
// 006bbe09  ebb5                 jmp 0x6bbdc0
// 006bbe0b  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 006bbe0e  c7451000000000       mov dword ptr [ebp + 0x10], 0
// 006bbe15  8b5510               mov edx, dword ptr [ebp + 0x10]
// 006bbe18  3b5708               cmp edx, dword ptr [edi + 8]
// 006bbe1b  7d2b                 jge 0x6bbe48
// 006bbe1d  33c0                 xor eax, eax
// 006bbe1f  90                   nop 
// 006bbe20  3b450c               cmp eax, dword ptr [ebp + 0xc]
// 006bbe23  7d1e                 jge 0x6bbe43
// 006bbe25  33d2                 xor edx, edx
// 006bbe27  3b5704               cmp edx, dword ptr [edi + 4]
// 006bbe2a  7d14                 jge 0x6bbe40
// 006bbe2c  8b3c86               mov edi, dword ptr [esi + eax*4]
// 006bbe2f  8b19                 mov ebx, dword ptr [ecx]
// 006bbe31  891f                 mov dword ptr [edi], ebx
// 006bbe33  83048604             add dword ptr [esi + eax*4], 4
// 006bbe37  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 006bbe3a  83c104               add ecx, 4
// 006bbe3d  42                   inc edx
// 006bbe3e  ebe7                 jmp 0x6bbe27
// 006bbe40  40                   inc eax
// 006bbe41  ebdd                 jmp 0x6bbe20
// 006bbe43  ff4510               inc dword ptr [ebp + 0x10]
// 006bbe46  ebcd                 jmp 0x6bbe15
// 006bbe48  56                   push esi
// 006bbe49  e8fc4afeff           call 0x6a094a
// 006bbe4e  83c404               add esp, 4
// 006bbe51  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006bbe58  eb1d                 jmp 0x6bbe77
// 006bbe5a  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 006bbe5d  8945dc               mov dword ptr [ebp - 0x24], eax
// 006bbe60  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 006bbe67  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006bbe6e  b874be6b00           mov eax, 0x6bbe74
// 006bbe73  c3                   ret 
// 006bbe74  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 006bbe77  c645fc00             mov byte ptr [ebp - 4], 0
// 006bbe7b  e880021000           call 0x7bc100
// 006bbe80  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 006bbe83  85c0                 test eax, eax
// 006bbe85  740a                 je 0x6bbe91
// 006bbe87  50                   push eax
// 006bbe88  ff15c0288000         call dword ptr [0x8028c0]
// 006bbe8e  83c404               add esp, 4
// 006bbe91  85ff                 test edi, edi
// 006bbe93  740a                 je 0x6bbe9f
// 006bbe95  57                   push edi
// 006bbe96  ff15c0288000         call dword ptr [0x8028c0]
// 006bbe9c  83c404               add esp, 4
// 006bbe9f  8d4dc8               lea ecx, [ebp - 0x38]
// 006bbea2  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006bbea9  e8a4011000           call 0x7bc052
// 006bbeae  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 006bbeb1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006bbeb4  64890d00000000       mov dword ptr fs:[0], ecx
// 006bbebb  59                   pop ecx
// 006bbebc  5f                   pop edi
// 006bbebd  5e                   pop esi
// 006bbebe  5b                   pop ebx
// 006bbebf  8be5                 mov esp, ebp
// 006bbec1  5d                   pop ebp
// 006bbec2  c20c00               ret 0xc

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPImageManager.cpp
