// roc 2010-06 00581530  unit: seg_00580000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581530
//
// 00581530  83ec14               sub esp, 0x14
// 00581533  53                   push ebx
// 00581534  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581538  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 0058153e  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 00581544  55                   push ebp
// 00581545  33ed                 xor ebp, ebp
// 00581547  396b24               cmp dword ptr [ebx + 0x24], ebp
// 0058154a  896c240c             mov dword ptr [esp + 0xc], ebp
// 0058154e  896c2408             mov dword ptr [esp + 8], ebp
// 00581552  896c2414             mov dword ptr [esp + 0x14], ebp
// 00581556  0f8ec4020000         jle 0x581820
// 0058155c  56                   push esi
// 0058155d  8d702c               lea esi, [eax + 0x2c]
// 00581560  57                   push edi
// 00581561  8d7924               lea edi, [ecx + 0x24]
// 00581564  89742418             mov dword ptr [esp + 0x18], esi
// 00581568  8b07                 mov eax, dword ptr [edi]
// 0058156a  48                   dec eax
// 0058156b  83f807               cmp eax, 7
// 0058156e  0f8797000000         ja 0x58160b
// 00581574  ff248528185800       jmp dword ptr [eax*4 + 0x581828]
// 0058157b  33ed                 xor ebp, ebp
// 0058157d  c744241050b55800     mov dword ptr [esp + 0x10], 0x58b550
// 00581585  896c2414             mov dword ptr [esp + 0x14], ebp
// 00581589  e997000000           jmp 0x581625
// 0058158e  33ed                 xor ebp, ebp
// 00581590  c7442410e0b05800     mov dword ptr [esp + 0x10], 0x58b0e0
// 00581598  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058159c  e984000000           jmp 0x581625
// 005815a1  33ed                 xor ebp, ebp
// 005815a3  c7442410d0ad5800     mov dword ptr [esp + 0x10], 0x58add0
// 005815ab  896c2414             mov dword ptr [esp + 0x14], ebp
// 005815af  eb74                 jmp 0x581625
// 005815b1  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005815b4  83e800               sub eax, 0
// 005815b7  7442                 je 0x5815fb
// 005815b9  83e801               sub eax, 1
// 005815bc  742a                 je 0x5815e8
// 005815be  83e801               sub eax, 1
// 005815c1  7412                 je 0x5815d5
// 005815c3  8b03                 mov eax, dword ptr [ebx]
// 005815c5  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 005815cc  8b0b                 mov ecx, dword ptr [ebx]
// 005815ce  8b11                 mov edx, dword ptr [ecx]
// 005815d0  53                   push ebx
// 005815d1  ffd2                 call edx
// 005815d3  eb4d                 jmp 0x581622
// 005815d5  bd02000000           mov ebp, 2
// 005815da  c744241090a95800     mov dword ptr [esp + 0x10], 0x58a990
// 005815e2  896c2414             mov dword ptr [esp + 0x14], ebp
// 005815e6  eb3d                 jmp 0x581625
// 005815e8  bd01000000           mov ebp, 1
// 005815ed  c7442410b0a55800     mov dword ptr [esp + 0x10], 0x58a5b0
// 005815f5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005815f9  eb2a                 jmp 0x581625
// 005815fb  33ed                 xor ebp, ebp
// 005815fd  c7442410a0a05800     mov dword ptr [esp + 0x10], 0x58a0a0
// 00581605  896c2414             mov dword ptr [esp + 0x14], ebp
// 00581609  eb1a                 jmp 0x581625
// 0058160b  8b03                 mov eax, dword ptr [ebx]
// 0058160d  c7401407000000       mov dword ptr [eax + 0x14], 7
// 00581614  8b0b                 mov ecx, dword ptr [ebx]
// 00581616  8b17                 mov edx, dword ptr [edi]
// 00581618  895118               mov dword ptr [ecx + 0x18], edx
// 0058161b  8b03                 mov eax, dword ptr [ebx]
// 0058161d  8b08                 mov ecx, dword ptr [eax]
// 0058161f  53                   push ebx
// 00581620  ffd1                 call ecx
// 00581622  83c404               add esp, 4
// 00581625  8b542410             mov edx, dword ptr [esp + 0x10]
// 00581629  8956d8               mov dword ptr [esi - 0x28], edx
// 0058162c  807f0c00             cmp byte ptr [edi + 0xc], 0
// 00581630  0f84c8010000         je 0x5817fe
// 00581636  392e                 cmp dword ptr [esi], ebp
// 00581638  0f84c0010000         je 0x5817fe
// 0058163e  8b7728               mov esi, dword ptr [edi + 0x28]
// 00581641  85f6                 test esi, esi
// 00581643  0f84b5010000         je 0x5817fe
// 00581649  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058164d  8928                 mov dword ptr [eax], ebp
// 0058164f  8bc5                 mov eax, ebp
// 00581651  83e800               sub eax, 0
// 00581654  0f8492010000         je 0x5817ec
// 0058165a  83e801               sub eax, 1
// 0058165d  0f84fa000000         je 0x58175d
// 00581663  83e801               sub eax, 1
// 00581666  7418                 je 0x581680
// 00581668  8b0b                 mov ecx, dword ptr [ebx]
// 0058166a  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 00581671  8b13                 mov edx, dword ptr [ebx]
// 00581673  8b02                 mov eax, dword ptr [edx]
// 00581675  53                   push ebx
// 00581676  ffd0                 call eax
// 00581678  83c404               add esp, 4
// 0058167b  e97e010000           jmp 0x5817fe
// 00581680  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00581683  8d5108               lea edx, [ecx + 8]
// 00581686  b8d087a200           mov eax, 0xa287d0
// 0058168b  8d4e04               lea ecx, [esi + 4]
// 0058168e  8bff                 mov edi, edi
// 00581690  0fb771fc             movzx esi, word ptr [ecx - 4]
// 00581694  89742420             mov dword ptr [esp + 0x20], esi
// 00581698  83c008               add eax, 8
// 0058169b  83c110               add ecx, 0x10
// 0058169e  db442420             fild dword ptr [esp + 0x20]
// 005816a2  83c220               add edx, 0x20
// 005816a5  3d1088a200           cmp eax, 0xa28810
// 005816aa  dc48f8               fmul qword ptr [eax - 8]
// 005816ad  d95ad8               fstp dword ptr [edx - 0x28]
// 005816b0  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 005816b4  89742420             mov dword ptr [esp + 0x20], esi
// 005816b8  db442420             fild dword ptr [esp + 0x20]
// 005816bc  dc48f8               fmul qword ptr [eax - 8]
// 005816bf  dc0dd887a200         fmul qword ptr [0xa287d8]
// 005816c5  d95adc               fstp dword ptr [edx - 0x24]
// 005816c8  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 005816cc  89742420             mov dword ptr [esp + 0x20], esi
// 005816d0  db442420             fild dword ptr [esp + 0x20]
// 005816d4  dc48f8               fmul qword ptr [eax - 8]
// 005816d7  dc0de087a200         fmul qword ptr [0xa287e0]
// 005816dd  d95ae0               fstp dword ptr [edx - 0x20]
// 005816e0  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 005816e4  89742420             mov dword ptr [esp + 0x20], esi
// 005816e8  db442420             fild dword ptr [esp + 0x20]
// 005816ec  dc48f8               fmul qword ptr [eax - 8]
// 005816ef  dc0de887a200         fmul qword ptr [0xa287e8]
// 005816f5  d95ae4               fstp dword ptr [edx - 0x1c]
// 005816f8  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 005816fc  89742420             mov dword ptr [esp + 0x20], esi
// 00581700  db442420             fild dword ptr [esp + 0x20]
// 00581704  dc48f8               fmul qword ptr [eax - 8]
// 00581707  d95ae8               fstp dword ptr [edx - 0x18]
// 0058170a  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 0058170e  89742420             mov dword ptr [esp + 0x20], esi
// 00581712  db442420             fild dword ptr [esp + 0x20]
// 00581716  dc48f8               fmul qword ptr [eax - 8]
// 00581719  dc0df887a200         fmul qword ptr [0xa287f8]
// 0058171f  d95aec               fstp dword ptr [edx - 0x14]
// 00581722  0fb771f8             movzx esi, word ptr [ecx - 8]
// 00581726  89742420             mov dword ptr [esp + 0x20], esi
// 0058172a  db442420             fild dword ptr [esp + 0x20]
// 0058172e  dc48f8               fmul qword ptr [eax - 8]
// 00581731  dc0d0088a200         fmul qword ptr [0xa28800]
// 00581737  d95af0               fstp dword ptr [edx - 0x10]
// 0058173a  0fb771fa             movzx esi, word ptr [ecx - 6]
// 0058173e  89742420             mov dword ptr [esp + 0x20], esi
// 00581742  db442420             fild dword ptr [esp + 0x20]
// 00581746  dc48f8               fmul qword ptr [eax - 8]
// 00581749  dc0d0888a200         fmul qword ptr [0xa28808]
// 0058174f  d95af4               fstp dword ptr [edx - 0xc]
// 00581752  0f8c38ffffff         jl 0x581690
// 00581758  e9a1000000           jmp 0x5817fe
// 0058175d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00581760  8d4808               lea ecx, [eax + 8]
// 00581763  8d4604               lea eax, [esi + 4]
// 00581766  ba5287a200           mov edx, 0xa28752
// 0058176b  f7de                 neg esi
// 0058176d  8d4900               lea ecx, [ecx]
// 00581770  0fb768fc             movzx ebp, word ptr [eax - 4]
// 00581774  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 00581778  0fafdd               imul ebx, ebp
// 0058177b  81c300080000         add ebx, 0x800
// 00581781  c1fb0c               sar ebx, 0xc
// 00581784  8959f8               mov dword ptr [ecx - 8], ebx
// 00581787  0fbf2a               movsx ebp, word ptr [edx]
// 0058178a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 0058178e  0fafdd               imul ebx, ebp
// 00581791  81c300080000         add ebx, 0x800
// 00581797  c1fb0c               sar ebx, 0xc
// 0058179a  8959fc               mov dword ptr [ecx - 4], ebx
// 0058179d  0fb728               movzx ebp, word ptr [eax]
// 005817a0  0fbf9c065087a200     movsx ebx, word ptr [esi + eax + 0xa28750]
// 005817a8  0fafdd               imul ebx, ebp
// 005817ab  81c300080000         add ebx, 0x800
// 005817b1  c1fb0c               sar ebx, 0xc
// 005817b4  8919                 mov dword ptr [ecx], ebx
// 005817b6  0fbf9c065287a200     movsx ebx, word ptr [esi + eax + 0xa28752]
// 005817be  0fb76802             movzx ebp, word ptr [eax + 2]
// 005817c2  0fafdd               imul ebx, ebp
// 005817c5  81c300080000         add ebx, 0x800
// 005817cb  c1fb0c               sar ebx, 0xc
// 005817ce  895904               mov dword ptr [ecx + 4], ebx
// 005817d1  83c208               add edx, 8
// 005817d4  83c110               add ecx, 0x10
// 005817d7  83c008               add eax, 8
// 005817da  81fad287a200         cmp edx, 0xa287d2
// 005817e0  7c8e                 jl 0x581770
// 005817e2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005817e6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 005817ea  eb12                 jmp 0x5817fe
// 005817ec  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 005817ef  33c0                 xor eax, eax
// 005817f1  0fb71446             movzx edx, word ptr [esi + eax*2]
// 005817f5  891481               mov dword ptr [ecx + eax*4], edx
// 005817f8  40                   inc eax
// 005817f9  83f840               cmp eax, 0x40
// 005817fc  7cf3                 jl 0x5817f1
// 005817fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00581802  8b742418             mov esi, dword ptr [esp + 0x18]
// 00581806  40                   inc eax
// 00581807  83c604               add esi, 4
// 0058180a  83c754               add edi, 0x54
// 0058180d  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 00581810  8944241c             mov dword ptr [esp + 0x1c], eax
// 00581814  89742418             mov dword ptr [esp + 0x18], esi
// 00581818  0f8c4afdffff         jl 0x581568
// 0058181e  5f                   pop edi
// 0058181f  5e                   pop esi
// 00581820  5d                   pop ebp
// 00581821  5b                   pop ebx
// 00581822  83c414               add esp, 0x14
// 00581825  c3                   ret 
// 00581826  8bff                 mov edi, edi
// 00581828  7b15                 jnp 0x58183f
// 0058182a  58                   pop eax
// 0058182b  008e1558000b         add byte ptr [esi + 0xb005815], cl
// 00581831  16                   push ss
// 00581832  58                   pop eax
// 00581833  00a11558000b         add byte ptr [ecx + 0xb005815], ah
// 00581839  16                   push ss
// 0058183a  58                   pop eax
// 0058183b  000b                 add byte ptr [ebx], cl
// 0058183d  16                   push ss
// 0058183e  58                   pop eax
// 0058183f  000b                 add byte ptr [ebx], cl
// 00581841  16                   push ss
// 00581842  58                   pop eax
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
