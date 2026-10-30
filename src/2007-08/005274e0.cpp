// roc 2007-08 005274e0  unit: G3D::Line  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005274e0
//
// 005274e0  83ec14               sub esp, 0x14
// 005274e3  53                   push ebx
// 005274e4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005274e8  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 005274ee  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 005274f4  55                   push ebp
// 005274f5  33ed                 xor ebp, ebp
// 005274f7  396b24               cmp dword ptr [ebx + 0x24], ebp
// 005274fa  896c240c             mov dword ptr [esp + 0xc], ebp
// 005274fe  896c2408             mov dword ptr [esp + 8], ebp
// 00527502  896c2414             mov dword ptr [esp + 0x14], ebp
// 00527506  0f8ec8020000         jle 0x5277d4
// 0052750c  56                   push esi
// 0052750d  8d702c               lea esi, [eax + 0x2c]
// 00527510  57                   push edi
// 00527511  8d7924               lea edi, [ecx + 0x24]
// 00527514  89742418             mov dword ptr [esp + 0x18], esi
// 00527518  8b07                 mov eax, dword ptr [edi]
// 0052751a  83c0ff               add eax, -1
// 0052751d  83f807               cmp eax, 7
// 00527520  0f8797000000         ja 0x5275bd
// 00527526  ff2485dc775200       jmp dword ptr [eax*4 + 0x5277dc]
// 0052752d  33ed                 xor ebp, ebp
// 0052752f  c744241090c65200     mov dword ptr [esp + 0x10], 0x52c690
// 00527537  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052753b  e997000000           jmp 0x5275d7
// 00527540  33ed                 xor ebp, ebp
// 00527542  c744241020c25200     mov dword ptr [esp + 0x10], 0x52c220
// 0052754a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052754e  e984000000           jmp 0x5275d7
// 00527553  33ed                 xor ebp, ebp
// 00527555  c744241000bf5200     mov dword ptr [esp + 0x10], 0x52bf00
// 0052755d  896c2414             mov dword ptr [esp + 0x14], ebp
// 00527561  eb74                 jmp 0x5275d7
// 00527563  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00527566  83e800               sub eax, 0
// 00527569  7442                 je 0x5275ad
// 0052756b  83e801               sub eax, 1
// 0052756e  742a                 je 0x52759a
// 00527570  83e801               sub eax, 1
// 00527573  7412                 je 0x527587
// 00527575  8b03                 mov eax, dword ptr [ebx]
// 00527577  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0052757e  8b0b                 mov ecx, dword ptr [ebx]
// 00527580  8b11                 mov edx, dword ptr [ecx]
// 00527582  53                   push ebx
// 00527583  ffd2                 call edx
// 00527585  eb4d                 jmp 0x5275d4
// 00527587  bd02000000           mov ebp, 2
// 0052758c  c7442410b0b95200     mov dword ptr [esp + 0x10], 0x52b9b0
// 00527594  896c2414             mov dword ptr [esp + 0x14], ebp
// 00527598  eb3d                 jmp 0x5275d7
// 0052759a  bd01000000           mov ebp, 1
// 0052759f  c7442410d0b55200     mov dword ptr [esp + 0x10], 0x52b5d0
// 005275a7  896c2414             mov dword ptr [esp + 0x14], ebp
// 005275ab  eb2a                 jmp 0x5275d7
// 005275ad  33ed                 xor ebp, ebp
// 005275af  c7442410b0b05200     mov dword ptr [esp + 0x10], 0x52b0b0
// 005275b7  896c2414             mov dword ptr [esp + 0x14], ebp
// 005275bb  eb1a                 jmp 0x5275d7
// 005275bd  8b03                 mov eax, dword ptr [ebx]
// 005275bf  c7401407000000       mov dword ptr [eax + 0x14], 7
// 005275c6  8b0b                 mov ecx, dword ptr [ebx]
// 005275c8  8b17                 mov edx, dword ptr [edi]
// 005275ca  895118               mov dword ptr [ecx + 0x18], edx
// 005275cd  8b03                 mov eax, dword ptr [ebx]
// 005275cf  8b08                 mov ecx, dword ptr [eax]
// 005275d1  53                   push ebx
// 005275d2  ffd1                 call ecx
// 005275d4  83c404               add esp, 4
// 005275d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 005275db  8956d8               mov dword ptr [esi - 0x28], edx
// 005275de  807f0c00             cmp byte ptr [edi + 0xc], 0
// 005275e2  0f84c8010000         je 0x5277b0
// 005275e8  392e                 cmp dword ptr [esi], ebp
// 005275ea  0f84c0010000         je 0x5277b0
// 005275f0  8b7728               mov esi, dword ptr [edi + 0x28]
// 005275f3  85f6                 test esi, esi
// 005275f5  0f84b5010000         je 0x5277b0
// 005275fb  8b442418             mov eax, dword ptr [esp + 0x18]
// 005275ff  8928                 mov dword ptr [eax], ebp
// 00527601  8bc5                 mov eax, ebp
// 00527603  83e800               sub eax, 0
// 00527606  0f8490010000         je 0x52779c
// 0052760c  83e801               sub eax, 1
// 0052760f  0f84f8000000         je 0x52770d
// 00527615  83e801               sub eax, 1
// 00527618  7418                 je 0x527632
// 0052761a  8b0b                 mov ecx, dword ptr [ebx]
// 0052761c  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 00527623  8b13                 mov edx, dword ptr [ebx]
// 00527625  8b02                 mov eax, dword ptr [edx]
// 00527627  53                   push ebx
// 00527628  ffd0                 call eax
// 0052762a  83c404               add esp, 4
// 0052762d  e97e010000           jmp 0x5277b0
// 00527632  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00527635  8d5108               lea edx, [ecx + 8]
// 00527638  b828467a00           mov eax, 0x7a4628
// 0052763d  8d4e04               lea ecx, [esi + 4]
// 00527640  0fb771fc             movzx esi, word ptr [ecx - 4]
// 00527644  89742420             mov dword ptr [esp + 0x20], esi
// 00527648  83c008               add eax, 8
// 0052764b  83c110               add ecx, 0x10
// 0052764e  db442420             fild dword ptr [esp + 0x20]
// 00527652  83c220               add edx, 0x20
// 00527655  3d68467a00           cmp eax, 0x7a4668
// 0052765a  dc48f8               fmul qword ptr [eax - 8]
// 0052765d  d95ad8               fstp dword ptr [edx - 0x28]
// 00527660  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 00527664  89742420             mov dword ptr [esp + 0x20], esi
// 00527668  db442420             fild dword ptr [esp + 0x20]
// 0052766c  dc48f8               fmul qword ptr [eax - 8]
// 0052766f  dc0d30467a00         fmul qword ptr [0x7a4630]
// 00527675  d95adc               fstp dword ptr [edx - 0x24]
// 00527678  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 0052767c  89742420             mov dword ptr [esp + 0x20], esi
// 00527680  db442420             fild dword ptr [esp + 0x20]
// 00527684  dc48f8               fmul qword ptr [eax - 8]
// 00527687  dc0d38467a00         fmul qword ptr [0x7a4638]
// 0052768d  d95ae0               fstp dword ptr [edx - 0x20]
// 00527690  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 00527694  89742420             mov dword ptr [esp + 0x20], esi
// 00527698  db442420             fild dword ptr [esp + 0x20]
// 0052769c  dc48f8               fmul qword ptr [eax - 8]
// 0052769f  dc0d40467a00         fmul qword ptr [0x7a4640]
// 005276a5  d95ae4               fstp dword ptr [edx - 0x1c]
// 005276a8  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 005276ac  89742420             mov dword ptr [esp + 0x20], esi
// 005276b0  db442420             fild dword ptr [esp + 0x20]
// 005276b4  dc48f8               fmul qword ptr [eax - 8]
// 005276b7  d95ae8               fstp dword ptr [edx - 0x18]
// 005276ba  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 005276be  89742420             mov dword ptr [esp + 0x20], esi
// 005276c2  db442420             fild dword ptr [esp + 0x20]
// 005276c6  dc48f8               fmul qword ptr [eax - 8]
// 005276c9  dc0d50467a00         fmul qword ptr [0x7a4650]
// 005276cf  d95aec               fstp dword ptr [edx - 0x14]
// 005276d2  0fb771f8             movzx esi, word ptr [ecx - 8]
// 005276d6  89742420             mov dword ptr [esp + 0x20], esi
// 005276da  db442420             fild dword ptr [esp + 0x20]
// 005276de  dc48f8               fmul qword ptr [eax - 8]
// 005276e1  dc0d58467a00         fmul qword ptr [0x7a4658]
// 005276e7  d95af0               fstp dword ptr [edx - 0x10]
// 005276ea  0fb771fa             movzx esi, word ptr [ecx - 6]
// 005276ee  89742420             mov dword ptr [esp + 0x20], esi
// 005276f2  db442420             fild dword ptr [esp + 0x20]
// 005276f6  dc48f8               fmul qword ptr [eax - 8]
// 005276f9  dc0d60467a00         fmul qword ptr [0x7a4660]
// 005276ff  d95af4               fstp dword ptr [edx - 0xc]
// 00527702  0f8c38ffffff         jl 0x527640
// 00527708  e9a3000000           jmp 0x5277b0
// 0052770d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00527710  8d4808               lea ecx, [eax + 8]
// 00527713  8d4604               lea eax, [esi + 4]
// 00527716  baaa457a00           mov edx, 0x7a45aa
// 0052771b  f7de                 neg esi
// 0052771d  8d4900               lea ecx, [ecx]
// 00527720  0fb768fc             movzx ebp, word ptr [eax - 4]
// 00527724  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 00527728  0fafdd               imul ebx, ebp
// 0052772b  81c300080000         add ebx, 0x800
// 00527731  c1fb0c               sar ebx, 0xc
// 00527734  8959f8               mov dword ptr [ecx - 8], ebx
// 00527737  0fbf2a               movsx ebp, word ptr [edx]
// 0052773a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 0052773e  0fafdd               imul ebx, ebp
// 00527741  81c300080000         add ebx, 0x800
// 00527747  c1fb0c               sar ebx, 0xc
// 0052774a  8959fc               mov dword ptr [ecx - 4], ebx
// 0052774d  0fb728               movzx ebp, word ptr [eax]
// 00527750  0fbf9c06a8457a00     movsx ebx, word ptr [esi + eax + 0x7a45a8]
// 00527758  0fafdd               imul ebx, ebp
// 0052775b  81c300080000         add ebx, 0x800
// 00527761  c1fb0c               sar ebx, 0xc
// 00527764  8919                 mov dword ptr [ecx], ebx
// 00527766  0fbf9c06aa457a00     movsx ebx, word ptr [esi + eax + 0x7a45aa]
// 0052776e  0fb76802             movzx ebp, word ptr [eax + 2]
// 00527772  0fafdd               imul ebx, ebp
// 00527775  81c300080000         add ebx, 0x800
// 0052777b  c1fb0c               sar ebx, 0xc
// 0052777e  895904               mov dword ptr [ecx + 4], ebx
// 00527781  83c208               add edx, 8
// 00527784  83c110               add ecx, 0x10
// 00527787  83c008               add eax, 8
// 0052778a  81fa2a467a00         cmp edx, 0x7a462a
// 00527790  7c8e                 jl 0x527720
// 00527792  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00527796  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052779a  eb14                 jmp 0x5277b0
// 0052779c  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0052779f  33c0                 xor eax, eax
// 005277a1  0fb71446             movzx edx, word ptr [esi + eax*2]
// 005277a5  891481               mov dword ptr [ecx + eax*4], edx
// 005277a8  83c001               add eax, 1
// 005277ab  83f840               cmp eax, 0x40
// 005277ae  7cf1                 jl 0x5277a1
// 005277b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005277b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005277b8  83c001               add eax, 1
// 005277bb  83c604               add esi, 4
// 005277be  83c754               add edi, 0x54
// 005277c1  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 005277c4  8944241c             mov dword ptr [esp + 0x1c], eax
// 005277c8  89742418             mov dword ptr [esp + 0x18], esi
// 005277cc  0f8c46fdffff         jl 0x527518
// 005277d2  5f                   pop edi
// 005277d3  5e                   pop esi
// 005277d4  5d                   pop ebp
// 005277d5  5b                   pop ebx
// 005277d6  83c414               add esp, 0x14
// 005277d9  c3                   ret 
// 005277da  8bff                 mov edi, edi
// 005277dc  2d75520040           sub eax, 0x40005275
// 005277e1  7552                 jne 0x527835
// 005277e3  00bd75520053         add byte ptr [ebp + 0x53005275], bh
// 005277e9  7552                 jne 0x52783d
// 005277eb  00bd755200bd         add byte ptr [ebp - 0x42ffad8b], bh
// 005277f1  7552                 jne 0x527845
// 005277f3  00bd75520063         add byte ptr [ebp + 0x63005275], bh
// 005277f9  7552                 jne 0x52784d
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
