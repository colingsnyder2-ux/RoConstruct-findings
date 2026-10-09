// roc 2007-03 004f0250  unit: seg_004f0000  size: 415 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0250
//
// 004f0250  83ec18               sub esp, 0x18
// 004f0253  53                   push ebx
// 004f0254  55                   push ebp
// 004f0255  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 004f025b  8d5908               lea ebx, [ecx + 8]
// 004f025e  56                   push esi
// 004f025f  8b7304               mov esi, dword ptr [ebx + 4]
// 004f0262  3b7308               cmp esi, dword ptr [ebx + 8]
// 004f0265  57                   push edi
// 004f0266  894c2410             mov dword ptr [esp + 0x10], ecx
// 004f026a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004f0272  7602                 jbe 0x4f0276
// 004f0274  ffd5                 call ebp
// 004f0276  8b7b08               mov edi, dword ptr [ebx + 8]
// 004f0279  397b04               cmp dword ptr [ebx + 4], edi
// 004f027c  7602                 jbe 0x4f0280
// 004f027e  ffd5                 call ebp
// 004f0280  3bdb                 cmp ebx, ebx
// 004f0282  7402                 je 0x4f0286
// 004f0284  ffd5                 call ebp
// 004f0286  3bf7                 cmp esi, edi
// 004f0288  741a                 je 0x4f02a4
// 004f028a  3b7308               cmp esi, dword ptr [ebx + 8]
// 004f028d  7202                 jb 0x4f0291
// 004f028f  ffd5                 call ebp
// 004f0291  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 004f0298  3b7308               cmp esi, dword ptr [ebx + 8]
// 004f029b  7202                 jb 0x4f029f
// 004f029d  ffd5                 call ebp
// 004f029f  83c620               add esi, 0x20
// 004f02a2  ebd2                 jmp 0x4f0276
// 004f02a4  8b7304               mov esi, dword ptr [ebx + 4]
// 004f02a7  3b7308               cmp esi, dword ptr [ebx + 8]
// 004f02aa  7602                 jbe 0x4f02ae
// 004f02ac  ffd5                 call ebp
// 004f02ae  8bee                 mov ebp, esi
// 004f02b0  8b7308               mov esi, dword ptr [ebx + 8]
// 004f02b3  397304               cmp dword ptr [ebx + 4], esi
// 004f02b6  7606                 jbe 0x4f02be
// 004f02b8  ff1544e97700         call dword ptr [0x77e944]
// 004f02be  3bdb                 cmp ebx, ebx
// 004f02c0  7406                 je 0x4f02c8
// 004f02c2  ff1544e97700         call dword ptr [0x77e944]
// 004f02c8  3bee                 cmp ebp, esi
// 004f02ca  0f8413010000         je 0x4f03e3
// 004f02d0  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004f02d3  7206                 jb 0x4f02db
// 004f02d5  ff1544e97700         call dword ptr [0x77e944]
// 004f02db  8d750c               lea esi, [ebp + 0xc]
// 004f02de  8bff                 mov edi, edi
// 004f02e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f02e3  85c9                 test ecx, ecx
// 004f02e5  0f84de000000         je 0x4f03c9
// 004f02eb  8b4608               mov eax, dword ptr [esi + 8]
// 004f02ee  8b7d1c               mov edi, dword ptr [ebp + 0x1c]
// 004f02f1  2bc1                 sub eax, ecx
// 004f02f3  c1f802               sar eax, 2
// 004f02f6  3bf8                 cmp edi, eax
// 004f02f8  0f83cb000000         jae 0x4f03c9
// 004f02fe  85c9                 test ecx, ecx
// 004f0300  740c                 je 0x4f030e
// 004f0302  8b4608               mov eax, dword ptr [esi + 8]
// 004f0305  2bc1                 sub eax, ecx
// 004f0307  c1f802               sar eax, 2
// 004f030a  3bf8                 cmp edi, eax
// 004f030c  7206                 jb 0x4f0314
// 004f030e  ff1544e97700         call dword ptr [0x77e944]
// 004f0314  8b4604               mov eax, dword ptr [esi + 4]
// 004f0317  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 004f031a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f031e  57                   push edi
// 004f031f  897c2420             mov dword ptr [esp + 0x20], edi
// 004f0323  e848fbffff           call 0x4efe70
// 004f0328  3bc5                 cmp eax, ebp
// 004f032a  89442418             mov dword ptr [esp + 0x18], eax
// 004f032e  0f848c000000         je 0x4f03c0
// 004f0334  8b5e08               mov ebx, dword ptr [esi + 8]
// 004f0337  395e04               cmp dword ptr [esi + 4], ebx
// 004f033a  7606                 jbe 0x4f0342
// 004f033c  ff1544e97700         call dword ptr [0x77e944]
// 004f0342  8d43fc               lea eax, [ebx - 4]
// 004f0345  3b4608               cmp eax, dword ptr [esi + 8]
// 004f0348  895c2424             mov dword ptr [esp + 0x24], ebx
// 004f034c  7705                 ja 0x4f0353
// 004f034e  3b4604               cmp eax, dword ptr [esi + 4]
// 004f0351  7306                 jae 0x4f0359
// 004f0353  ff1544e97700         call dword ptr [0x77e944]
// 004f0359  8d7bfc               lea edi, [ebx - 4]
// 004f035c  3b7e08               cmp edi, dword ptr [esi + 8]
// 004f035f  7206                 jb 0x4f0367
// 004f0361  ff1544e97700         call dword ptr [0x77e944]
// 004f0367  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f036a  85c9                 test ecx, ecx
// 004f036c  8b5d1c               mov ebx, dword ptr [ebp + 0x1c]
// 004f036f  740c                 je 0x4f037d
// 004f0371  8b4608               mov eax, dword ptr [esi + 8]
// 004f0374  2bc1                 sub eax, ecx
// 004f0376  c1f802               sar eax, 2
// 004f0379  3bd8                 cmp ebx, eax
// 004f037b  7206                 jb 0x4f0383
// 004f037d  ff1544e97700         call dword ptr [0x77e944]
// 004f0383  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f0386  8b17                 mov edx, dword ptr [edi]
// 004f0388  891499               mov dword ptr [ecx + ebx*4], edx
// 004f038b  8b4604               mov eax, dword ptr [esi + 4]
// 004f038e  85c0                 test eax, eax
// 004f0390  7412                 je 0x4f03a4
// 004f0392  8b4e08               mov ecx, dword ptr [esi + 8]
// 004f0395  8bd1                 mov edx, ecx
// 004f0397  2bd0                 sub edx, eax
// 004f0399  c1fa02               sar edx, 2
// 004f039c  7406                 je 0x4f03a4
// 004f039e  83c1fc               add ecx, -4
// 004f03a1  894e08               mov dword ptr [esi + 8], ecx
// 004f03a4  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f03a8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f03ac  50                   push eax
// 004f03ad  51                   push ecx
// 004f03ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f03b2  e8d9fdffff           call 0x4f0190
// 004f03b7  01442414             add dword ptr [esp + 0x14], eax
// 004f03bb  e920ffffff           jmp 0x4f02e0
// 004f03c0  83451c01             add dword ptr [ebp + 0x1c], 1
// 004f03c4  e917ffffff           jmp 0x4f02e0
// 004f03c9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f03cd  83c308               add ebx, 8
// 004f03d0  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004f03d3  7206                 jb 0x4f03db
// 004f03d5  ff1544e97700         call dword ptr [0x77e944]
// 004f03db  83c520               add ebp, 0x20
// 004f03de  e9cdfeffff           jmp 0x4f02b0
// 004f03e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f03e7  5f                   pop edi
// 004f03e8  5e                   pop esi
// 004f03e9  5d                   pop ebp
// 004f03ea  5b                   pop ebx
// 004f03eb  83c418               add esp, 0x18
// 004f03ee  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ?moveSamples@Clusterer@Render@RBX@@AAEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp
