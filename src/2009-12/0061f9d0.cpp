// roc 2009-12 0061f9d0  unit: seg_00610000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f9d0
//
// 0061f9d0  83ec14               sub esp, 0x14
// 0061f9d3  53                   push ebx
// 0061f9d4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0061f9d8  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 0061f9de  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 0061f9e4  55                   push ebp
// 0061f9e5  33ed                 xor ebp, ebp
// 0061f9e7  396b24               cmp dword ptr [ebx + 0x24], ebp
// 0061f9ea  896c240c             mov dword ptr [esp + 0xc], ebp
// 0061f9ee  896c2408             mov dword ptr [esp + 8], ebp
// 0061f9f2  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061f9f6  0f8ec4020000         jle 0x61fcc0
// 0061f9fc  56                   push esi
// 0061f9fd  8d702c               lea esi, [eax + 0x2c]
// 0061fa00  57                   push edi
// 0061fa01  8d7924               lea edi, [ecx + 0x24]
// 0061fa04  89742418             mov dword ptr [esp + 0x18], esi
// 0061fa08  8b07                 mov eax, dword ptr [edi]
// 0061fa0a  48                   dec eax
// 0061fa0b  83f807               cmp eax, 7
// 0061fa0e  0f8797000000         ja 0x61faab
// 0061fa14  ff2485c8fc6100       jmp dword ptr [eax*4 + 0x61fcc8]
// 0061fa1b  33ed                 xor ebp, ebp
// 0061fa1d  c7442410f0996200     mov dword ptr [esp + 0x10], 0x6299f0
// 0061fa25  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061fa29  e997000000           jmp 0x61fac5
// 0061fa2e  33ed                 xor ebp, ebp
// 0061fa30  c744241080956200     mov dword ptr [esp + 0x10], 0x629580
// 0061fa38  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061fa3c  e984000000           jmp 0x61fac5
// 0061fa41  33ed                 xor ebp, ebp
// 0061fa43  c744241070926200     mov dword ptr [esp + 0x10], 0x629270
// 0061fa4b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061fa4f  eb74                 jmp 0x61fac5
// 0061fa51  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0061fa54  83e800               sub eax, 0
// 0061fa57  7442                 je 0x61fa9b
// 0061fa59  83e801               sub eax, 1
// 0061fa5c  742a                 je 0x61fa88
// 0061fa5e  83e801               sub eax, 1
// 0061fa61  7412                 je 0x61fa75
// 0061fa63  8b03                 mov eax, dword ptr [ebx]
// 0061fa65  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0061fa6c  8b0b                 mov ecx, dword ptr [ebx]
// 0061fa6e  8b11                 mov edx, dword ptr [ecx]
// 0061fa70  53                   push ebx
// 0061fa71  ffd2                 call edx
// 0061fa73  eb4d                 jmp 0x61fac2
// 0061fa75  bd02000000           mov ebp, 2
// 0061fa7a  c7442410308e6200     mov dword ptr [esp + 0x10], 0x628e30
// 0061fa82  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061fa86  eb3d                 jmp 0x61fac5
// 0061fa88  bd01000000           mov ebp, 1
// 0061fa8d  c7442410508a6200     mov dword ptr [esp + 0x10], 0x628a50
// 0061fa95  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061fa99  eb2a                 jmp 0x61fac5
// 0061fa9b  33ed                 xor ebp, ebp
// 0061fa9d  c744241040856200     mov dword ptr [esp + 0x10], 0x628540
// 0061faa5  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061faa9  eb1a                 jmp 0x61fac5
// 0061faab  8b03                 mov eax, dword ptr [ebx]
// 0061faad  c7401407000000       mov dword ptr [eax + 0x14], 7
// 0061fab4  8b0b                 mov ecx, dword ptr [ebx]
// 0061fab6  8b17                 mov edx, dword ptr [edi]
// 0061fab8  895118               mov dword ptr [ecx + 0x18], edx
// 0061fabb  8b03                 mov eax, dword ptr [ebx]
// 0061fabd  8b08                 mov ecx, dword ptr [eax]
// 0061fabf  53                   push ebx
// 0061fac0  ffd1                 call ecx
// 0061fac2  83c404               add esp, 4
// 0061fac5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061fac9  8956d8               mov dword ptr [esi - 0x28], edx
// 0061facc  807f0c00             cmp byte ptr [edi + 0xc], 0
// 0061fad0  0f84c8010000         je 0x61fc9e
// 0061fad6  392e                 cmp dword ptr [esi], ebp
// 0061fad8  0f84c0010000         je 0x61fc9e
// 0061fade  8b7728               mov esi, dword ptr [edi + 0x28]
// 0061fae1  85f6                 test esi, esi
// 0061fae3  0f84b5010000         je 0x61fc9e
// 0061fae9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061faed  8928                 mov dword ptr [eax], ebp
// 0061faef  8bc5                 mov eax, ebp
// 0061faf1  83e800               sub eax, 0
// 0061faf4  0f8492010000         je 0x61fc8c
// 0061fafa  83e801               sub eax, 1
// 0061fafd  0f84fa000000         je 0x61fbfd
// 0061fb03  83e801               sub eax, 1
// 0061fb06  7418                 je 0x61fb20
// 0061fb08  8b0b                 mov ecx, dword ptr [ebx]
// 0061fb0a  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 0061fb11  8b13                 mov edx, dword ptr [ebx]
// 0061fb13  8b02                 mov eax, dword ptr [edx]
// 0061fb15  53                   push ebx
// 0061fb16  ffd0                 call eax
// 0061fb18  83c404               add esp, 4
// 0061fb1b  e97e010000           jmp 0x61fc9e
// 0061fb20  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0061fb23  8d5108               lea edx, [ecx + 8]
// 0061fb26  b850aa9c00           mov eax, 0x9caa50
// 0061fb2b  8d4e04               lea ecx, [esi + 4]
// 0061fb2e  8bff                 mov edi, edi
// 0061fb30  0fb771fc             movzx esi, word ptr [ecx - 4]
// 0061fb34  89742420             mov dword ptr [esp + 0x20], esi
// 0061fb38  83c008               add eax, 8
// 0061fb3b  83c110               add ecx, 0x10
// 0061fb3e  db442420             fild dword ptr [esp + 0x20]
// 0061fb42  83c220               add edx, 0x20
// 0061fb45  3d90aa9c00           cmp eax, 0x9caa90
// 0061fb4a  dc48f8               fmul qword ptr [eax - 8]
// 0061fb4d  d95ad8               fstp dword ptr [edx - 0x28]
// 0061fb50  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 0061fb54  89742420             mov dword ptr [esp + 0x20], esi
// 0061fb58  db442420             fild dword ptr [esp + 0x20]
// 0061fb5c  dc48f8               fmul qword ptr [eax - 8]
// 0061fb5f  dc0d58aa9c00         fmul qword ptr [0x9caa58]
// 0061fb65  d95adc               fstp dword ptr [edx - 0x24]
// 0061fb68  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 0061fb6c  89742420             mov dword ptr [esp + 0x20], esi
// 0061fb70  db442420             fild dword ptr [esp + 0x20]
// 0061fb74  dc48f8               fmul qword ptr [eax - 8]
// 0061fb77  dc0d60aa9c00         fmul qword ptr [0x9caa60]
// 0061fb7d  d95ae0               fstp dword ptr [edx - 0x20]
// 0061fb80  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 0061fb84  89742420             mov dword ptr [esp + 0x20], esi
// 0061fb88  db442420             fild dword ptr [esp + 0x20]
// 0061fb8c  dc48f8               fmul qword ptr [eax - 8]
// 0061fb8f  dc0d68aa9c00         fmul qword ptr [0x9caa68]
// 0061fb95  d95ae4               fstp dword ptr [edx - 0x1c]
// 0061fb98  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 0061fb9c  89742420             mov dword ptr [esp + 0x20], esi
// 0061fba0  db442420             fild dword ptr [esp + 0x20]
// 0061fba4  dc48f8               fmul qword ptr [eax - 8]
// 0061fba7  d95ae8               fstp dword ptr [edx - 0x18]
// 0061fbaa  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 0061fbae  89742420             mov dword ptr [esp + 0x20], esi
// 0061fbb2  db442420             fild dword ptr [esp + 0x20]
// 0061fbb6  dc48f8               fmul qword ptr [eax - 8]
// 0061fbb9  dc0d78aa9c00         fmul qword ptr [0x9caa78]
// 0061fbbf  d95aec               fstp dword ptr [edx - 0x14]
// 0061fbc2  0fb771f8             movzx esi, word ptr [ecx - 8]
// 0061fbc6  89742420             mov dword ptr [esp + 0x20], esi
// 0061fbca  db442420             fild dword ptr [esp + 0x20]
// 0061fbce  dc48f8               fmul qword ptr [eax - 8]
// 0061fbd1  dc0d80aa9c00         fmul qword ptr [0x9caa80]
// 0061fbd7  d95af0               fstp dword ptr [edx - 0x10]
// 0061fbda  0fb771fa             movzx esi, word ptr [ecx - 6]
// 0061fbde  89742420             mov dword ptr [esp + 0x20], esi
// 0061fbe2  db442420             fild dword ptr [esp + 0x20]
// 0061fbe6  dc48f8               fmul qword ptr [eax - 8]
// 0061fbe9  dc0d88aa9c00         fmul qword ptr [0x9caa88]
// 0061fbef  d95af4               fstp dword ptr [edx - 0xc]
// 0061fbf2  0f8c38ffffff         jl 0x61fb30
// 0061fbf8  e9a1000000           jmp 0x61fc9e
// 0061fbfd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0061fc00  8d4808               lea ecx, [eax + 8]
// 0061fc03  8d4604               lea eax, [esi + 4]
// 0061fc06  bad2a99c00           mov edx, 0x9ca9d2
// 0061fc0b  f7de                 neg esi
// 0061fc0d  8d4900               lea ecx, [ecx]
// 0061fc10  0fb768fc             movzx ebp, word ptr [eax - 4]
// 0061fc14  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 0061fc18  0fafdd               imul ebx, ebp
// 0061fc1b  81c300080000         add ebx, 0x800
// 0061fc21  c1fb0c               sar ebx, 0xc
// 0061fc24  8959f8               mov dword ptr [ecx - 8], ebx
// 0061fc27  0fbf2a               movsx ebp, word ptr [edx]
// 0061fc2a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 0061fc2e  0fafdd               imul ebx, ebp
// 0061fc31  81c300080000         add ebx, 0x800
// 0061fc37  c1fb0c               sar ebx, 0xc
// 0061fc3a  8959fc               mov dword ptr [ecx - 4], ebx
// 0061fc3d  0fb728               movzx ebp, word ptr [eax]
// 0061fc40  0fbf9c06d0a99c00     movsx ebx, word ptr [esi + eax + 0x9ca9d0]
// 0061fc48  0fafdd               imul ebx, ebp
// 0061fc4b  81c300080000         add ebx, 0x800
// 0061fc51  c1fb0c               sar ebx, 0xc
// 0061fc54  8919                 mov dword ptr [ecx], ebx
// 0061fc56  0fbf9c06d2a99c00     movsx ebx, word ptr [esi + eax + 0x9ca9d2]
// 0061fc5e  0fb76802             movzx ebp, word ptr [eax + 2]
// 0061fc62  0fafdd               imul ebx, ebp
// 0061fc65  81c300080000         add ebx, 0x800
// 0061fc6b  c1fb0c               sar ebx, 0xc
// 0061fc6e  895904               mov dword ptr [ecx + 4], ebx
// 0061fc71  83c208               add edx, 8
// 0061fc74  83c110               add ecx, 0x10
// 0061fc77  83c008               add eax, 8
// 0061fc7a  81fa52aa9c00         cmp edx, 0x9caa52
// 0061fc80  7c8e                 jl 0x61fc10
// 0061fc82  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0061fc86  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0061fc8a  eb12                 jmp 0x61fc9e
// 0061fc8c  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0061fc8f  33c0                 xor eax, eax
// 0061fc91  0fb71446             movzx edx, word ptr [esi + eax*2]
// 0061fc95  891481               mov dword ptr [ecx + eax*4], edx
// 0061fc98  40                   inc eax
// 0061fc99  83f840               cmp eax, 0x40
// 0061fc9c  7cf3                 jl 0x61fc91
// 0061fc9e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061fca2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0061fca6  40                   inc eax
// 0061fca7  83c604               add esi, 4
// 0061fcaa  83c754               add edi, 0x54
// 0061fcad  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 0061fcb0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0061fcb4  89742418             mov dword ptr [esp + 0x18], esi
// 0061fcb8  0f8c4afdffff         jl 0x61fa08
// 0061fcbe  5f                   pop edi
// 0061fcbf  5e                   pop esi
// 0061fcc0  5d                   pop ebp
// 0061fcc1  5b                   pop ebx
// 0061fcc2  83c414               add esp, 0x14
// 0061fcc5  c3                   ret 
// 0061fcc6  8bff                 mov edi, edi
// 0061fcc8  1bfa                 sbb edi, edx
// 0061fcca  61                   popal 
// 0061fccb  002e                 add byte ptr [esi], ch
// 0061fccd  fa                   cli 
// 0061fcce  61                   popal 
// 0061fccf  00abfa610041         add byte ptr [ebx + 0x410061fa], ch
// 0061fcd5  fa                   cli 
// 0061fcd6  61                   popal 
// 0061fcd7  00abfa6100ab         add byte ptr [ebx - 0x54ff9e06], ch
// 0061fcdd  fa                   cli 
// 0061fcde  61                   popal 
// 0061fcdf  00abfa610051         add byte ptr [ebx + 0x510061fa], ch
// 0061fce5  fa                   cli 
// 0061fce6  61                   popal 
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
