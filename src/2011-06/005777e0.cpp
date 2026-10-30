// roc 2011-06 005777e0  unit: seg_00570000  size: 792 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005777e0
//
// 005777e0  83ec14               sub esp, 0x14
// 005777e3  53                   push ebx
// 005777e4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005777e8  8b839c010000         mov eax, dword ptr [ebx + 0x19c]
// 005777ee  8b8bc4000000         mov ecx, dword ptr [ebx + 0xc4]
// 005777f4  55                   push ebp
// 005777f5  33ed                 xor ebp, ebp
// 005777f7  396b24               cmp dword ptr [ebx + 0x24], ebp
// 005777fa  896c240c             mov dword ptr [esp + 0xc], ebp
// 005777fe  896c2408             mov dword ptr [esp + 8], ebp
// 00577802  896c2414             mov dword ptr [esp + 0x14], ebp
// 00577806  0f8ec4020000         jle 0x577ad0
// 0057780c  56                   push esi
// 0057780d  8d702c               lea esi, [eax + 0x2c]
// 00577810  57                   push edi
// 00577811  8d7924               lea edi, [ecx + 0x24]
// 00577814  89742418             mov dword ptr [esp + 0x18], esi
// 00577818  8b07                 mov eax, dword ptr [edi]
// 0057781a  48                   dec eax
// 0057781b  83f807               cmp eax, 7
// 0057781e  0f8797000000         ja 0x5778bb
// 00577824  ff2485d87a5700       jmp dword ptr [eax*4 + 0x577ad8]
// 0057782b  33ed                 xor ebp, ebp
// 0057782d  c744241040185800     mov dword ptr [esp + 0x10], 0x581840
// 00577835  896c2414             mov dword ptr [esp + 0x14], ebp
// 00577839  e997000000           jmp 0x5778d5
// 0057783e  33ed                 xor ebp, ebp
// 00577840  c7442410d0135800     mov dword ptr [esp + 0x10], 0x5813d0
// 00577848  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057784c  e984000000           jmp 0x5778d5
// 00577851  33ed                 xor ebp, ebp
// 00577853  c7442410c0105800     mov dword ptr [esp + 0x10], 0x5810c0
// 0057785b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057785f  eb74                 jmp 0x5778d5
// 00577861  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00577864  83e800               sub eax, 0
// 00577867  7442                 je 0x5778ab
// 00577869  83e801               sub eax, 1
// 0057786c  742a                 je 0x577898
// 0057786e  83e801               sub eax, 1
// 00577871  7412                 je 0x577885
// 00577873  8b03                 mov eax, dword ptr [ebx]
// 00577875  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0057787c  8b0b                 mov ecx, dword ptr [ebx]
// 0057787e  8b11                 mov edx, dword ptr [ecx]
// 00577880  53                   push ebx
// 00577881  ffd2                 call edx
// 00577883  eb4d                 jmp 0x5778d2
// 00577885  bd02000000           mov ebp, 2
// 0057788a  c7442410800c5800     mov dword ptr [esp + 0x10], 0x580c80
// 00577892  896c2414             mov dword ptr [esp + 0x14], ebp
// 00577896  eb3d                 jmp 0x5778d5
// 00577898  bd01000000           mov ebp, 1
// 0057789d  c7442410a0085800     mov dword ptr [esp + 0x10], 0x5808a0
// 005778a5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005778a9  eb2a                 jmp 0x5778d5
// 005778ab  33ed                 xor ebp, ebp
// 005778ad  c744241090035800     mov dword ptr [esp + 0x10], 0x580390
// 005778b5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005778b9  eb1a                 jmp 0x5778d5
// 005778bb  8b03                 mov eax, dword ptr [ebx]
// 005778bd  c7401407000000       mov dword ptr [eax + 0x14], 7
// 005778c4  8b0b                 mov ecx, dword ptr [ebx]
// 005778c6  8b17                 mov edx, dword ptr [edi]
// 005778c8  895118               mov dword ptr [ecx + 0x18], edx
// 005778cb  8b03                 mov eax, dword ptr [ebx]
// 005778cd  8b08                 mov ecx, dword ptr [eax]
// 005778cf  53                   push ebx
// 005778d0  ffd1                 call ecx
// 005778d2  83c404               add esp, 4
// 005778d5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005778d9  8956d8               mov dword ptr [esi - 0x28], edx
// 005778dc  807f0c00             cmp byte ptr [edi + 0xc], 0
// 005778e0  0f84c8010000         je 0x577aae
// 005778e6  392e                 cmp dword ptr [esi], ebp
// 005778e8  0f84c0010000         je 0x577aae
// 005778ee  8b7728               mov esi, dword ptr [edi + 0x28]
// 005778f1  85f6                 test esi, esi
// 005778f3  0f84b5010000         je 0x577aae
// 005778f9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005778fd  8928                 mov dword ptr [eax], ebp
// 005778ff  8bc5                 mov eax, ebp
// 00577901  83e800               sub eax, 0
// 00577904  0f8492010000         je 0x577a9c
// 0057790a  83e801               sub eax, 1
// 0057790d  0f84fa000000         je 0x577a0d
// 00577913  83e801               sub eax, 1
// 00577916  7418                 je 0x577930
// 00577918  8b0b                 mov ecx, dword ptr [ebx]
// 0057791a  c7411430000000       mov dword ptr [ecx + 0x14], 0x30
// 00577921  8b13                 mov edx, dword ptr [ebx]
// 00577923  8b02                 mov eax, dword ptr [edx]
// 00577925  53                   push ebx
// 00577926  ffd0                 call eax
// 00577928  83c404               add esp, 4
// 0057792b  e97e010000           jmp 0x577aae
// 00577930  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00577933  8d5108               lea edx, [ecx + 8]
// 00577936  b80881a800           mov eax, 0xa88108
// 0057793b  8d4e04               lea ecx, [esi + 4]
// 0057793e  8bff                 mov edi, edi
// 00577940  0fb771fc             movzx esi, word ptr [ecx - 4]
// 00577944  89742420             mov dword ptr [esp + 0x20], esi
// 00577948  83c008               add eax, 8
// 0057794b  83c110               add ecx, 0x10
// 0057794e  db442420             fild dword ptr [esp + 0x20]
// 00577952  83c220               add edx, 0x20
// 00577955  3d4881a800           cmp eax, 0xa88148
// 0057795a  dc48f8               fmul qword ptr [eax - 8]
// 0057795d  d95ad8               fstp dword ptr [edx - 0x28]
// 00577960  0fb771ee             movzx esi, word ptr [ecx - 0x12]
// 00577964  89742420             mov dword ptr [esp + 0x20], esi
// 00577968  db442420             fild dword ptr [esp + 0x20]
// 0057796c  dc48f8               fmul qword ptr [eax - 8]
// 0057796f  dc0d1081a800         fmul qword ptr [0xa88110]
// 00577975  d95adc               fstp dword ptr [edx - 0x24]
// 00577978  0fb771f0             movzx esi, word ptr [ecx - 0x10]
// 0057797c  89742420             mov dword ptr [esp + 0x20], esi
// 00577980  db442420             fild dword ptr [esp + 0x20]
// 00577984  dc48f8               fmul qword ptr [eax - 8]
// 00577987  dc0d1881a800         fmul qword ptr [0xa88118]
// 0057798d  d95ae0               fstp dword ptr [edx - 0x20]
// 00577990  0fb771f2             movzx esi, word ptr [ecx - 0xe]
// 00577994  89742420             mov dword ptr [esp + 0x20], esi
// 00577998  db442420             fild dword ptr [esp + 0x20]
// 0057799c  dc48f8               fmul qword ptr [eax - 8]
// 0057799f  dc0d2081a800         fmul qword ptr [0xa88120]
// 005779a5  d95ae4               fstp dword ptr [edx - 0x1c]
// 005779a8  0fb771f4             movzx esi, word ptr [ecx - 0xc]
// 005779ac  89742420             mov dword ptr [esp + 0x20], esi
// 005779b0  db442420             fild dword ptr [esp + 0x20]
// 005779b4  dc48f8               fmul qword ptr [eax - 8]
// 005779b7  d95ae8               fstp dword ptr [edx - 0x18]
// 005779ba  0fb771f6             movzx esi, word ptr [ecx - 0xa]
// 005779be  89742420             mov dword ptr [esp + 0x20], esi
// 005779c2  db442420             fild dword ptr [esp + 0x20]
// 005779c6  dc48f8               fmul qword ptr [eax - 8]
// 005779c9  dc0d3081a800         fmul qword ptr [0xa88130]
// 005779cf  d95aec               fstp dword ptr [edx - 0x14]
// 005779d2  0fb771f8             movzx esi, word ptr [ecx - 8]
// 005779d6  89742420             mov dword ptr [esp + 0x20], esi
// 005779da  db442420             fild dword ptr [esp + 0x20]
// 005779de  dc48f8               fmul qword ptr [eax - 8]
// 005779e1  dc0d3881a800         fmul qword ptr [0xa88138]
// 005779e7  d95af0               fstp dword ptr [edx - 0x10]
// 005779ea  0fb771fa             movzx esi, word ptr [ecx - 6]
// 005779ee  89742420             mov dword ptr [esp + 0x20], esi
// 005779f2  db442420             fild dword ptr [esp + 0x20]
// 005779f6  dc48f8               fmul qword ptr [eax - 8]
// 005779f9  dc0d4081a800         fmul qword ptr [0xa88140]
// 005779ff  d95af4               fstp dword ptr [edx - 0xc]
// 00577a02  0f8c38ffffff         jl 0x577940
// 00577a08  e9a1000000           jmp 0x577aae
// 00577a0d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00577a10  8d4808               lea ecx, [eax + 8]
// 00577a13  8d4604               lea eax, [esi + 4]
// 00577a16  ba8a80a800           mov edx, 0xa8808a
// 00577a1b  f7de                 neg esi
// 00577a1d  8d4900               lea ecx, [ecx]
// 00577a20  0fb768fc             movzx ebp, word ptr [eax - 4]
// 00577a24  0fbf5afe             movsx ebx, word ptr [edx - 2]
// 00577a28  0fafdd               imul ebx, ebp
// 00577a2b  81c300080000         add ebx, 0x800
// 00577a31  c1fb0c               sar ebx, 0xc
// 00577a34  8959f8               mov dword ptr [ecx - 8], ebx
// 00577a37  0fbf2a               movsx ebp, word ptr [edx]
// 00577a3a  0fb758fe             movzx ebx, word ptr [eax - 2]
// 00577a3e  0fafdd               imul ebx, ebp
// 00577a41  81c300080000         add ebx, 0x800
// 00577a47  c1fb0c               sar ebx, 0xc
// 00577a4a  8959fc               mov dword ptr [ecx - 4], ebx
// 00577a4d  0fb728               movzx ebp, word ptr [eax]
// 00577a50  0fbf9c068880a800     movsx ebx, word ptr [esi + eax + 0xa88088]
// 00577a58  0fafdd               imul ebx, ebp
// 00577a5b  81c300080000         add ebx, 0x800
// 00577a61  c1fb0c               sar ebx, 0xc
// 00577a64  8919                 mov dword ptr [ecx], ebx
// 00577a66  0fbf9c068a80a800     movsx ebx, word ptr [esi + eax + 0xa8808a]
// 00577a6e  0fb76802             movzx ebp, word ptr [eax + 2]
// 00577a72  0fafdd               imul ebx, ebp
// 00577a75  81c300080000         add ebx, 0x800
// 00577a7b  c1fb0c               sar ebx, 0xc
// 00577a7e  895904               mov dword ptr [ecx + 4], ebx
// 00577a81  83c208               add edx, 8
// 00577a84  83c110               add ecx, 0x10
// 00577a87  83c008               add eax, 8
// 00577a8a  81fa0a81a800         cmp edx, 0xa8810a
// 00577a90  7c8e                 jl 0x577a20
// 00577a92  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00577a96  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00577a9a  eb12                 jmp 0x577aae
// 00577a9c  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00577a9f  33c0                 xor eax, eax
// 00577aa1  0fb71446             movzx edx, word ptr [esi + eax*2]
// 00577aa5  891481               mov dword ptr [ecx + eax*4], edx
// 00577aa8  40                   inc eax
// 00577aa9  83f840               cmp eax, 0x40
// 00577aac  7cf3                 jl 0x577aa1
// 00577aae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00577ab2  8b742418             mov esi, dword ptr [esp + 0x18]
// 00577ab6  40                   inc eax
// 00577ab7  83c604               add esi, 4
// 00577aba  83c754               add edi, 0x54
// 00577abd  3b4324               cmp eax, dword ptr [ebx + 0x24]
// 00577ac0  8944241c             mov dword ptr [esp + 0x1c], eax
// 00577ac4  89742418             mov dword ptr [esp + 0x18], esi
// 00577ac8  0f8c4afdffff         jl 0x577818
// 00577ace  5f                   pop edi
// 00577acf  5e                   pop esi
// 00577ad0  5d                   pop ebp
// 00577ad1  5b                   pop ebx
// 00577ad2  83c414               add esp, 0x14
// 00577ad5  c3                   ret 
// 00577ad6  8bff                 mov edi, edi
// 00577ad8  2b7857               sub edi, dword ptr [eax + 0x57]
// 00577adb  003e                 add byte ptr [esi], bh
// 00577add  7857                 js 0x577b36
// 00577adf  00bb78570051         add byte ptr [ebx + 0x51005778], bh
// 00577ae5  7857                 js 0x577b3e
// 00577ae7  00bb785700bb         add byte ptr [ebx - 0x44ffa888], bh
// 00577aed  7857                 js 0x577b46
// 00577aef  00bb78570061         add byte ptr [ebx + 0x61005778], bh
// 00577af5  7857                 js 0x577b4e
// library jpeg-6b/jddctmgr.c (function _start_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
