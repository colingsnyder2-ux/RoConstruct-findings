// roc 2008-06 005336c0  unit: seg_00530000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005336c0
//
// 005336c0  83ec14               sub esp, 0x14
// 005336c3  53                   push ebx
// 005336c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005336c8  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 005336ce  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 005336d4  55                   push ebp
// 005336d5  33ed                 xor ebp, ebp
// 005336d7  396b24               cmp dword ptr [ebx + 0x24], ebp
// 005336da  896c240c             mov dword ptr [esp + 0xc], ebp
// 005336de  896c2408             mov dword ptr [esp + 8], ebp
// 005336e2  896c2414             mov dword ptr [esp + 0x14], ebp
// 005336e6  0f8ec4020000         jle 0x5339b0
// 005336ec  56                   push esi
// 005336ed  8d702c               lea esi, [eax + 0x2c]
// 005336f0  57                   push edi
// 005336f1  8d7924               lea edi, [ecx + 0x24]
// 005336f4  89742418             mov dword ptr [esp + 0x18], esi
// 005336f8  8b07                 mov eax, dword ptr [edi]
// 005336fa  48                   dec eax
// 005336fb  83f807               cmp eax, 7
// 005336fe  0f8797000000         ja 0x53379b
// 00533704  ff2485b8395300       jmp dword ptr [eax*4 + 0x5339b8]
// 0053370b  33ed                 xor ebp, ebp
// 0053370d  c7442410b0d65300     mov dword ptr [esp + 0x10], 0x53d6b0
// 00533715  896c2414             mov dword ptr [esp + 0x14], ebp
// 00533719  e997000000           jmp 0x5337b5
// 0053371e  33ed                 xor ebp, ebp
// 00533720  c744241040d25300     mov dword ptr [esp + 0x10], 0x53d240
// 00533728  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053372c  e984000000           jmp 0x5337b5
// 00533731  33ed                 xor ebp, ebp
// 00533733  c744241030cf5300     mov dword ptr [esp + 0x10], 0x53cf30
// 0053373b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053373f  eb74                 jmp 0x5337b5
// 00533741  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00533744  83e800               sub eax, 0
// 00533747  7442                 je 0x53378b
// 00533749  83e801               sub eax, 1
// 0053374c  742a                 je 0x533778
// 0053374e  83e801               sub eax, 1
// 00533751  7412                 je 0x533765
// 00533753  8b03                 mov eax, dword ptr [ebx]
// 00533755  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0053375c  8b0b                 mov ecx, dword ptr [ebx]
// 0053375e  8b11                 mov edx, dword ptr [ecx]
// 00533760  53                   push ebx
// 00533761  ffd2                 call edx
// 00533763  eb4d                 jmp 0x5337b2
// 00533765  bd02000000           mov ebp, 2
// 0053376a  c7442410a0cb5300     mov dword ptr [esp + 0x10], 0x53cba0
// 00533772  896c2414             mov dword ptr [esp + 0x14], ebp
// 00533776  eb3d                 jmp 0x5337b5
// 00533778  bd01000000           mov ebp, 1
// 0053377d  c7442410c0c75300     mov dword ptr [esp + 0x10], 0x53c7c0
// 00533785  896c2414             mov dword ptr [esp + 0x14], ebp
// 00533789  eb2a                 jmp 0x5337b5
// 0053378b  33ed                 xor ebp, ebp
// 0053378d  c7442410b0c25300     mov dword ptr [esp + 0x10], 0x53c2b0
// 00533795  896c2414             mov dword ptr [esp + 0x14], ebp
// 00533799  eb1a                 jmp 0x5337b5
// 0053379b  8b03                 mov eax, dword ptr [ebx]
// 0053379d  c7401407000000       mov dword ptr [eax + 0x14], 7
// 005337a4  8b0b                 mov ecx, dword ptr [ebx]
// 005337a6  8b17                 mov edx, dword ptr [edi]
// 005337a8  895118               mov dword ptr [ecx + 0x18], edx
// 005337ab  8b03                 mov eax, dword ptr [ebx]
// 005337ad  8b08                 mov ecx, dword ptr [eax]
// 005337af  53                   push ebx
// 005337b0  ffd1                 call ecx
// 005337b2  83c404               add esp, 4
// 005337b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005337b9  8956d8               mov dword ptr [esi - 0x28], edx
// 005337bc  807f0c00             cmp byte ptr [edi + 0xc], 0
// 005337c0  0f84c8010000         je 0x53398e
// 005337c6  392e                 cmp dword ptr [esi], ebp
// 005337c8  0f84c0010000         je 0x53398e
// 005337ce  8b7728               mov esi, dword ptr [edi + 0x28]
// 005337d1  85f6                 test esi, esi
// 005337d3  0f84b5010000         je 0x53398e
// 005337d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005337dd  8928                 mov dword ptr [eax], ebp
// 005337df  8bc5                 mov eax, ebp
// 005337e1  83e800               sub eax, 0
// 005337e4  0f8492010000         je 0x53397c
// 005337ea  83e801               sub eax, 1
// 005337ed  0f84fa000000         je 0x5338ed
// 005337f3  83e801               sub eax, 1
// 005337f6  7418                 je 0x533810
// 005337f8  8b0b                 mov ecx, dword ptr [ebx]
// 005337fa  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 00533801  8b13                 mov edx, dword ptr [ebx]
// 00533803  8b02                 mov eax, dword ptr [edx]
// 00533805  53                   push ebx
// 00533806  ffd0                 call eax
// 00533808  83c404               add esp, 4
// 0053380b  e97e010000           jmp 0x53398e
// 00533810  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00533813  8d5108               lea edx, [ecx + 8]
// 00533816  b8c8cb8200           mov eax, 0x82cbc8
// 0053381b  8d4e04               lea ecx, [esi + 4]
// 0053381e  8bff                 mov edi, edi
// 00533820  0fb771fc             movzx esi, word ptr [ecx - 4]
// 00533824  89742420             mov dword ptr [esp + 0x20], esi
// 00533828  83c008               add eax, 8
// 0053382b  83c110               add ecx, 0x10
// 0053382e  db442420             fild dword ptr [esp + 0x20]
// 00533832  83c220               add edx, 0x20
// 00533835  3d08cc8200           cmp eax, 0x82cc08
// 0053383a  dc48f8               fmul qword ptr [eax - 8]
// 0053383d  d95ad8               fstp dword ptr [edx - 0x28]
// 00533840  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 00533844  89742420             mov dword ptr [esp + 0x20], esi
// 00533848  db442420             fild dword ptr [esp + 0x20]
// 0053384c  dc48f8               fmul qword ptr [eax - 8]
// 0053384f  dc0dd0cb8200         fmul qword ptr [0x82cbd0]
// 00533855  d95adc               fstp dword ptr [edx - 0x24]
// 00533858  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 0053385c  89742420             mov dword ptr [esp + 0x20], esi
// 00533860  db442420             fild dword ptr [esp + 0x20]
// 00533864  dc48f8               fmul qword ptr [eax - 8]
// 00533867  dc0dd8cb8200         fmul qword ptr [0x82cbd8]
// 0053386d  d95ae0               fstp dword ptr [edx - 0x20]
// 00533870  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 00533874  89742420             mov dword ptr [esp + 0x20], esi
// 00533878  db442420             fild dword ptr [esp + 0x20]
// 0053387c  dc48f8               fmul qword ptr [eax - 8]
// 0053387f  dc0de0cb8200         fmul qword ptr [0x82cbe0]
// 00533885  d95ae4               fstp dword ptr [edx - 0x1c]
// 00533888  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 0053388c  89742420             mov dword ptr [esp + 0x20], esi
// 00533890  db442420             fild dword ptr [esp + 0x20]
// 00533894  dc48f8               fmul qword ptr [eax - 8]
// 00533897  d95ae8               fstp dword ptr [edx - 0x18]
// 0053389a  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 0053389e  89742420             mov dword ptr [esp + 0x20], esi
// 005338a2  db442420             fild dword ptr [esp + 0x20]
// 005338a6  dc48f8               fmul qword ptr [eax - 8]
// 005338a9  dc0df0cb8200         fmul qword ptr [0x82cbf0]
// 005338af  d95aec               fstp dword ptr [edx - 0x14]
// 005338b2  0fb771f8             movzx esi, word ptr [ecx - 8]
// 005338b6  89742420             mov dword ptr [esp + 0x20], esi
// 005338ba  db442420             fild dword ptr [esp + 0x20]
// 005338be  dc48f8               fmul qword ptr [eax - 8]
// 005338c1  dc0df8cb8200         fmul qword ptr [0x82cbf8]
// 005338c7  d95af0               fstp dword ptr [edx - 0x10]
// 005338ca  0fb771fa             movzx esi, word ptr [ecx - 6]
// 005338ce  89742420             mov dword ptr [esp + 0x20], esi
// 005338d2  db442420             fild dword ptr [esp + 0x20]
// 005338d6  dc48f8               fmul qword ptr [eax - 8]
// 005338d9  dc0d00cc8200         fmul qword ptr [0x82cc00]
// 005338df  d95af4               fstp dword ptr [edx - 0xc]
// 005338e2  0f8c38ffffff         jl 0x533820
// 005338e8  e9a1000000           jmp 0x53398e
// 005338ed  8b472c               mov eax, dword ptr [edi + 0x2c]
// 005338f0  8d4808               lea ecx, [eax + 8]
// 005338f3  8d4604               lea eax, [esi + 4]
// 005338f6  ba4acb8200           mov edx, 0x82cb4a
// 005338fb  f7de                 neg esi
// 005338fd  8d4900               lea ecx, [ecx]
// 00533900  0fb768fc             movzx ebp, word ptr [eax - 4]
// 00533904  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 00533908  0fafdd               imul ebx, ebp
// 0053390b  81c300080000         add ebx, 0x800
// 00533911  c1fb0c               sar ebx, 0xc
// 00533914  8959f8               mov dword ptr [ecx - 8], ebx
// 00533917  0fbf2a               movsx ebp, word ptr [edx]
// 0053391a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 0053391e  0fafdd               imul ebx, ebp
// 00533921  81c300080000         add ebx, 0x800
// 00533927  c1fb0c               sar ebx, 0xc
// 0053392a  8959fc               mov dword ptr [ecx - 4], ebx
// 0053392d  0fb728               movzx ebp, word ptr [eax]
// 00533930  0fbf9c0648cb8200     movsx ebx, word ptr [esi + eax + 0x82cb48]
// 00533938  0fafdd               imul ebx, ebp
// 0053393b  81c300080000         add ebx, 0x800
// 00533941  c1fb0c               sar ebx, 0xc
// 00533944  8919                 mov dword ptr [ecx], ebx
// 00533946  0fbf9c064acb8200     movsx ebx, word ptr [esi + eax + 0x82cb4a]
// 0053394e  0fb76802             movzx ebp, word ptr [eax + 2]
// 00533952  0fafdd               imul ebx, ebp
// 00533955  81c300080000         add ebx, 0x800
// 0053395b  c1fb0c               sar ebx, 0xc
// 0053395e  895904               mov dword ptr [ecx + 4], ebx
// 00533961  83c208               add edx, 8
// 00533964  83c110               add ecx, 0x10
// 00533967  83c008               add eax, 8
// 0053396a  81facacb8200         cmp edx, 0x82cbca
// 00533970  7c8e                 jl 0x533900
// 00533972  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00533976  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0053397a  eb12                 jmp 0x53398e
// 0053397c  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0053397f  33c0                 xor eax, eax
// 00533981  0fb71446             movzx edx, word ptr [esi + eax*2]
// 00533985  891481               mov dword ptr [ecx + eax*4], edx
// 00533988  40                   inc eax
// 00533989  83f840               cmp eax, 0x40
// 0053398c  7cf3                 jl 0x533981
// 0053398e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00533992  8b742418             mov esi, dword ptr [esp + 0x18]
// 00533996  40                   inc eax
// 00533997  83c604               add esi, 4
// 0053399a  83c754               add edi, 0x54
// 0053399d  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 005339a0  8944241c             mov dword ptr [esp + 0x1c], eax
// 005339a4  89742418             mov dword ptr [esp + 0x18], esi
// 005339a8  0f8c4afdffff         jl 0x5336f8
// 005339ae  5f                   pop edi
// 005339af  5e                   pop esi
// 005339b0  5d                   pop ebp
// 005339b1  5b                   pop ebx
// 005339b2  83c414               add esp, 0x14
// 005339b5  c3                   ret 
// 005339b6  8bff                 mov edi, edi
// 005339b8  0b37                 or esi, dword ptr [edi]
// 005339ba  53                   push ebx
// 005339bb  001e                 add byte ptr [esi], bl
// 005339bd  37                   aaa 
// 005339be  53                   push ebx
// 005339bf  009b37530031         add byte ptr [ebx + 0x31005337], bl
// 005339c5  37                   aaa 
// 005339c6  53                   push ebx
// 005339c7  009b3753009b         add byte ptr [ebx - 0x64ffacc9], bl
// 005339cd  37                   aaa 
// 005339ce  53                   push ebx
// 005339cf  009b37530041         add byte ptr [ebx + 0x41005337], bl
// 005339d5  37                   aaa 
// 005339d6  53                   push ebx
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
