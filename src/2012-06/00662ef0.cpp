// roc 2012-06 00662ef0  unit: seg_00660000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662ef0
//
// 00662ef0  83ec14               sub esp, 0x14
// 00662ef3  53                   push ebx
// 00662ef4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00662ef8  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 00662efe  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 00662f04  55                   push ebp
// 00662f05  33ed                 xor ebp, ebp
// 00662f07  396b24               cmp dword ptr [ebx + 0x24], ebp
// 00662f0a  896c240c             mov dword ptr [esp + 0xc], ebp
// 00662f0e  896c2408             mov dword ptr [esp + 8], ebp
// 00662f12  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662f16  0f8ec4020000         jle 0x6631e0
// 00662f1c  56                   push esi
// 00662f1d  8d702c               lea esi, [eax + 0x2c]
// 00662f20  57                   push edi
// 00662f21  8d7924               lea edi, [ecx + 0x24]
// 00662f24  89742418             mov dword ptr [esp + 0x18], esi
// 00662f28  8b07                 mov eax, dword ptr [edi]
// 00662f2a  48                   dec eax
// 00662f2b  83f807               cmp eax, 7
// 00662f2e  0f8797000000         ja 0x662fcb
// 00662f34  ff2485e8316600       jmp dword ptr [eax*4 + 0x6631e8]
// 00662f3b  33ed                 xor ebp, ebp
// 00662f3d  c744241050cf6600     mov dword ptr [esp + 0x10], 0x66cf50
// 00662f45  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662f49  e997000000           jmp 0x662fe5
// 00662f4e  33ed                 xor ebp, ebp
// 00662f50  c7442410e0ca6600     mov dword ptr [esp + 0x10], 0x66cae0
// 00662f58  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662f5c  e984000000           jmp 0x662fe5
// 00662f61  33ed                 xor ebp, ebp
// 00662f63  c7442410d0c76600     mov dword ptr [esp + 0x10], 0x66c7d0
// 00662f6b  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662f6f  eb74                 jmp 0x662fe5
// 00662f71  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00662f74  83e800               sub eax, 0
// 00662f77  7442                 je 0x662fbb
// 00662f79  83e801               sub eax, 1
// 00662f7c  742a                 je 0x662fa8
// 00662f7e  83e801               sub eax, 1
// 00662f81  7412                 je 0x662f95
// 00662f83  8b03                 mov eax, dword ptr [ebx]
// 00662f85  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 00662f8c  8b0b                 mov ecx, dword ptr [ebx]
// 00662f8e  8b11                 mov edx, dword ptr [ecx]
// 00662f90  53                   push ebx
// 00662f91  ffd2                 call edx
// 00662f93  eb4d                 jmp 0x662fe2
// 00662f95  bd02000000           mov ebp, 2
// 00662f9a  c744241090c36600     mov dword ptr [esp + 0x10], 0x66c390
// 00662fa2  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662fa6  eb3d                 jmp 0x662fe5
// 00662fa8  bd01000000           mov ebp, 1
// 00662fad  c7442410b0bf6600     mov dword ptr [esp + 0x10], 0x66bfb0
// 00662fb5  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662fb9  eb2a                 jmp 0x662fe5
// 00662fbb  33ed                 xor ebp, ebp
// 00662fbd  c7442410a0ba6600     mov dword ptr [esp + 0x10], 0x66baa0
// 00662fc5  896c2414             mov dword ptr [esp + 0x14], ebp
// 00662fc9  eb1a                 jmp 0x662fe5
// 00662fcb  8b03                 mov eax, dword ptr [ebx]
// 00662fcd  c7401407000000       mov dword ptr [eax + 0x14], 7
// 00662fd4  8b0b                 mov ecx, dword ptr [ebx]
// 00662fd6  8b17                 mov edx, dword ptr [edi]
// 00662fd8  895118               mov dword ptr [ecx + 0x18], edx
// 00662fdb  8b03                 mov eax, dword ptr [ebx]
// 00662fdd  8b08                 mov ecx, dword ptr [eax]
// 00662fdf  53                   push ebx
// 00662fe0  ffd1                 call ecx
// 00662fe2  83c404               add esp, 4
// 00662fe5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00662fe9  8956d8               mov dword ptr [esi - 0x28], edx
// 00662fec  807f0c00             cmp byte ptr [edi + 0xc], 0
// 00662ff0  0f84c8010000         je 0x6631be
// 00662ff6  392e                 cmp dword ptr [esi], ebp
// 00662ff8  0f84c0010000         je 0x6631be
// 00662ffe  8b7728               mov esi, dword ptr [edi + 0x28]
// 00663001  85f6                 test esi, esi
// 00663003  0f84b5010000         je 0x6631be
// 00663009  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066300d  8928                 mov dword ptr [eax], ebp
// 0066300f  8bc5                 mov eax, ebp
// 00663011  83e800               sub eax, 0
// 00663014  0f8492010000         je 0x6631ac
// 0066301a  83e801               sub eax, 1
// 0066301d  0f84fa000000         je 0x66311d
// 00663023  83e801               sub eax, 1
// 00663026  7418                 je 0x663040
// 00663028  8b0b                 mov ecx, dword ptr [ebx]
// 0066302a  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 00663031  8b13                 mov edx, dword ptr [ebx]
// 00663033  8b02                 mov eax, dword ptr [edx]
// 00663035  53                   push ebx
// 00663036  ffd0                 call eax
// 00663038  83c404               add esp, 4
// 0066303b  e97e010000           jmp 0x6631be
// 00663040  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00663043  8d5108               lea edx, [ecx + 8]
// 00663046  b858bfb800           mov eax, 0xb8bf58
// 0066304b  8d4e04               lea ecx, [esi + 4]
// 0066304e  8bff                 mov edi, edi
// 00663050  0fb771fc             movzx esi, word ptr [ecx - 4]
// 00663054  89742420             mov dword ptr [esp + 0x20], esi
// 00663058  83c008               add eax, 8
// 0066305b  83c110               add ecx, 0x10
// 0066305e  db442420             fild dword ptr [esp + 0x20]
// 00663062  83c220               add edx, 0x20
// 00663065  3d98bfb800           cmp eax, 0xb8bf98
// 0066306a  dc48f8               fmul qword ptr [eax - 8]
// 0066306d  d95ad8               fstp dword ptr [edx - 0x28]
// 00663070  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 00663074  89742420             mov dword ptr [esp + 0x20], esi
// 00663078  db442420             fild dword ptr [esp + 0x20]
// 0066307c  dc48f8               fmul qword ptr [eax - 8]
// 0066307f  dc0d60bfb800         fmul qword ptr [0xb8bf60]
// 00663085  d95adc               fstp dword ptr [edx - 0x24]
// 00663088  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 0066308c  89742420             mov dword ptr [esp + 0x20], esi
// 00663090  db442420             fild dword ptr [esp + 0x20]
// 00663094  dc48f8               fmul qword ptr [eax - 8]
// 00663097  dc0d68bfb800         fmul qword ptr [0xb8bf68]
// 0066309d  d95ae0               fstp dword ptr [edx - 0x20]
// 006630a0  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 006630a4  89742420             mov dword ptr [esp + 0x20], esi
// 006630a8  db442420             fild dword ptr [esp + 0x20]
// 006630ac  dc48f8               fmul qword ptr [eax - 8]
// 006630af  dc0d70bfb800         fmul qword ptr [0xb8bf70]
// 006630b5  d95ae4               fstp dword ptr [edx - 0x1c]
// 006630b8  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 006630bc  89742420             mov dword ptr [esp + 0x20], esi
// 006630c0  db442420             fild dword ptr [esp + 0x20]
// 006630c4  dc48f8               fmul qword ptr [eax - 8]
// 006630c7  d95ae8               fstp dword ptr [edx - 0x18]
// 006630ca  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 006630ce  89742420             mov dword ptr [esp + 0x20], esi
// 006630d2  db442420             fild dword ptr [esp + 0x20]
// 006630d6  dc48f8               fmul qword ptr [eax - 8]
// 006630d9  dc0d80bfb800         fmul qword ptr [0xb8bf80]
// 006630df  d95aec               fstp dword ptr [edx - 0x14]
// 006630e2  0fb771f8             movzx esi, word ptr [ecx - 8]
// 006630e6  89742420             mov dword ptr [esp + 0x20], esi
// 006630ea  db442420             fild dword ptr [esp + 0x20]
// 006630ee  dc48f8               fmul qword ptr [eax - 8]
// 006630f1  dc0d88bfb800         fmul qword ptr [0xb8bf88]
// 006630f7  d95af0               fstp dword ptr [edx - 0x10]
// 006630fa  0fb771fa             movzx esi, word ptr [ecx - 6]
// 006630fe  89742420             mov dword ptr [esp + 0x20], esi
// 00663102  db442420             fild dword ptr [esp + 0x20]
// 00663106  dc48f8               fmul qword ptr [eax - 8]
// 00663109  dc0d90bfb800         fmul qword ptr [0xb8bf90]
// 0066310f  d95af4               fstp dword ptr [edx - 0xc]
// 00663112  0f8c38ffffff         jl 0x663050
// 00663118  e9a1000000           jmp 0x6631be
// 0066311d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00663120  8d4808               lea ecx, [eax + 8]
// 00663123  8d4604               lea eax, [esi + 4]
// 00663126  badabeb800           mov edx, 0xb8beda
// 0066312b  f7de                 neg esi
// 0066312d  8d4900               lea ecx, [ecx]
// 00663130  0fb768fc             movzx ebp, word ptr [eax - 4]
// 00663134  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 00663138  0fafdd               imul ebx, ebp
// 0066313b  81c300080000         add ebx, 0x800
// 00663141  c1fb0c               sar ebx, 0xc
// 00663144  8959f8               mov dword ptr [ecx - 8], ebx
// 00663147  0fbf2a               movsx ebp, word ptr [edx]
// 0066314a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 0066314e  0fafdd               imul ebx, ebp
// 00663151  81c300080000         add ebx, 0x800
// 00663157  c1fb0c               sar ebx, 0xc
// 0066315a  8959fc               mov dword ptr [ecx - 4], ebx
// 0066315d  0fb728               movzx ebp, word ptr [eax]
// 00663160  0fbf9c06d8beb800     movsx ebx, word ptr [esi + eax + 0xb8bed8]
// 00663168  0fafdd               imul ebx, ebp
// 0066316b  81c300080000         add ebx, 0x800
// 00663171  c1fb0c               sar ebx, 0xc
// 00663174  8919                 mov dword ptr [ecx], ebx
// 00663176  0fbf9c06dabeb800     movsx ebx, word ptr [esi + eax + 0xb8beda]
// 0066317e  0fb76802             movzx ebp, word ptr [eax + 2]
// 00663182  0fafdd               imul ebx, ebp
// 00663185  81c300080000         add ebx, 0x800
// 0066318b  c1fb0c               sar ebx, 0xc
// 0066318e  895904               mov dword ptr [ecx + 4], ebx
// 00663191  83c208               add edx, 8
// 00663194  83c110               add ecx, 0x10
// 00663197  83c008               add eax, 8
// 0066319a  81fa5abfb800         cmp edx, 0xb8bf5a
// 006631a0  7c8e                 jl 0x663130
// 006631a2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006631a6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006631aa  eb12                 jmp 0x6631be
// 006631ac  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006631af  33c0                 xor eax, eax
// 006631b1  0fb71446             movzx edx, word ptr [esi + eax*2]
// 006631b5  891481               mov dword ptr [ecx + eax*4], edx
// 006631b8  40                   inc eax
// 006631b9  83f840               cmp eax, 0x40
// 006631bc  7cf3                 jl 0x6631b1
// 006631be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006631c2  8b742418             mov esi, dword ptr [esp + 0x18]
// 006631c6  40                   inc eax
// 006631c7  83c604               add esi, 4
// 006631ca  83c754               add edi, 0x54
// 006631cd  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 006631d0  8944241c             mov dword ptr [esp + 0x1c], eax
// 006631d4  89742418             mov dword ptr [esp + 0x18], esi
// 006631d8  0f8c4afdffff         jl 0x662f28
// 006631de  5f                   pop edi
// 006631df  5e                   pop esi
// 006631e0  5d                   pop ebp
// 006631e1  5b                   pop ebx
// 006631e2  83c414               add esp, 0x14
// 006631e5  c3                   ret 
// 006631e6  8bff                 mov edi, edi
// 006631e8  3b2f                 cmp ebp, dword ptr [edi]
// 006631ea  66004e2f             add byte ptr [esi + 0x2f], cl
// 006631ee  6600cb               add bl, cl
// 006631f1  2f                   das 
// 006631f2  6600612f             add byte ptr [ecx + 0x2f], ah
// 006631f6  6600cb               add bl, cl
// 006631f9  2f                   das 
// 006631fa  6600cb               add bl, cl
// 006631fd  2f                   das 
// 006631fe  6600cb               add bl, cl
// 00663201  2f                   das 
// 00663202  6600712f             add byte ptr [ecx + 0x2f], dh
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
