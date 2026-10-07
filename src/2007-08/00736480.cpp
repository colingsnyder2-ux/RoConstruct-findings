// roc 2007-08 00736480  unit: G3D::Sky  size: 787 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736480
//
// 00736480  6aff                 push -1
// 00736482  687ec47600           push 0x76c47e
// 00736487  64a100000000         mov eax, dword ptr fs:[0]
// 0073648d  50                   push eax
// 0073648e  83ec10               sub esp, 0x10
// 00736491  53                   push ebx
// 00736492  55                   push ebp
// 00736493  56                   push esi
// 00736494  57                   push edi
// 00736495  a188518b00           mov eax, dword ptr [0x8b5188]
// 0073649a  33c4                 xor eax, esp
// 0073649c  50                   push eax
// 0073649d  8d442424             lea eax, [esp + 0x24]
// 007364a1  64a300000000         mov dword ptr fs:[0], eax
// 007364a7  8bf9                 mov edi, ecx
// 007364a9  897c2420             mov dword ptr [esp + 0x20], edi
// 007364ad  33c0                 xor eax, eax
// 007364af  c70784797900         mov dword ptr [edi], 0x797984
// 007364b5  894704               mov dword ptr [edi + 4], eax
// 007364b8  894708               mov dword ptr [edi + 8], eax
// 007364bb  c7079c8d7e00         mov dword ptr [edi], 0x7e8d9c
// 007364c1  8944242c             mov dword ptr [esp + 0x2c], eax
// 007364c5  898718020000         mov dword ptr [edi + 0x218], eax
// 007364cb  8b442434             mov eax, dword ptr [esp + 0x34]
// 007364cf  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 007364d3  8bce                 mov ecx, esi
// 007364d5  c644242c01           mov byte ptr [esp + 0x2c], 1
// 007364da  89871c020000         mov dword ptr [edi + 0x21c], eax
// 007364e0  e82bb0dcff           call 0x501510
// 007364e5  8d6f0c               lea ebp, [edi + 0xc]
// 007364e8  bb80000000           mov ebx, 0x80
// 007364ed  8d4900               lea ecx, [ecx]
// 007364f0  8b4644               mov eax, dword ptr [esi + 0x44]
// 007364f3  8d4802               lea ecx, [eax + 2]
// 007364f6  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 007364f9  7e0f                 jle 0x73650a
// 007364fb  8b5634               mov edx, dword ptr [esi + 0x34]
// 007364fe  6a02                 push 2
// 00736500  03d0                 add edx, eax
// 00736502  52                   push edx
// 00736503  8bce                 mov ecx, esi
// 00736505  e8b657ddff           call 0x50bcc0
// 0073650a  83464402             add dword ptr [esi + 0x44], 2
// 0073650e  807e2400             cmp byte ptr [esi + 0x24], 0
// 00736512  8b4644               mov eax, dword ptr [esi + 0x44]
// 00736515  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00736518  7418                 je 0x736532
// 0073651a  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 0073651e  03c1                 add eax, ecx
// 00736520  8a40fe               mov al, byte ptr [eax - 2]
// 00736523  88542434             mov byte ptr [esp + 0x34], dl
// 00736527  88442435             mov byte ptr [esp + 0x35], al
// 0073652b  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 00736530  eb05                 jmp 0x736537
// 00736532  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00736537  0fb7d0               movzx edx, ax
// 0073653a  895500               mov dword ptr [ebp], edx
// 0073653d  83c504               add ebp, 4
// 00736540  83eb01               sub ebx, 1
// 00736543  75ab                 jne 0x7364f0
// 00736545  8b4644               mov eax, dword ptr [esi + 0x44]
// 00736548  8d4802               lea ecx, [eax + 2]
// 0073654b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0073654e  7e0f                 jle 0x73655f
// 00736550  8b5634               mov edx, dword ptr [esi + 0x34]
// 00736553  6a02                 push 2
// 00736555  03d0                 add edx, eax
// 00736557  52                   push edx
// 00736558  8bce                 mov ecx, esi
// 0073655a  e86157ddff           call 0x50bcc0
// 0073655f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00736562  bb02000000           mov ebx, 2
// 00736567  015e44               add dword ptr [esi + 0x44], ebx
// 0073656a  807e2400             cmp byte ptr [esi + 0x24], 0
// 0073656e  8b4644               mov eax, dword ptr [esi + 0x44]
// 00736571  7418                 je 0x73658b
// 00736573  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 00736577  03c1                 add eax, ecx
// 00736579  8a40fe               mov al, byte ptr [eax - 2]
// 0073657c  88542434             mov byte ptr [esp + 0x34], dl
// 00736580  88442435             mov byte ptr [esp + 0x35], al
// 00736584  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 00736589  eb05                 jmp 0x736590
// 0073658b  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 00736590  0fb7d0               movzx edx, ax
// 00736593  899714020000         mov dword ptr [edi + 0x214], edx
// 00736599  8b4644               mov eax, dword ptr [esi + 0x44]
// 0073659c  8d4802               lea ecx, [eax + 2]
// 0073659f  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 007365a2  7e0e                 jle 0x7365b2
// 007365a4  8b5634               mov edx, dword ptr [esi + 0x34]
// 007365a7  53                   push ebx
// 007365a8  03d0                 add edx, eax
// 007365aa  52                   push edx
// 007365ab  8bce                 mov ecx, esi
// 007365ad  e80e57ddff           call 0x50bcc0
// 007365b2  015e44               add dword ptr [esi + 0x44], ebx
// 007365b5  807e2400             cmp byte ptr [esi + 0x24], 0
// 007365b9  8b4644               mov eax, dword ptr [esi + 0x44]
// 007365bc  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 007365bf  7418                 je 0x7365d9
// 007365c1  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 007365c5  03c1                 add eax, ecx
// 007365c7  8a40fe               mov al, byte ptr [eax - 2]
// 007365ca  88542434             mov byte ptr [esp + 0x34], dl
// 007365ce  88442435             mov byte ptr [esp + 0x35], al
// 007365d2  0fb7442434           movzx eax, word ptr [esp + 0x34]
// 007365d7  eb05                 jmp 0x7365de
// 007365d9  0fb74401fe           movzx eax, word ptr [ecx + eax - 2]
// 007365de  0fb7c0               movzx eax, ax
// 007365e1  99                   cdq 
// 007365e2  83e20f               and edx, 0xf
// 007365e5  03c2                 add eax, edx
// 007365e7  c1f804               sar eax, 4
// 007365ea  8bc8                 mov ecx, eax
// 007365ec  c1e104               shl ecx, 4
// 007365ef  83e901               sub ecx, 1
// 007365f2  8bd1                 mov edx, ecx
// 007365f4  c1ea10               shr edx, 0x10
// 007365f7  0bca                 or ecx, edx
// 007365f9  8bd1                 mov edx, ecx
// 007365fb  c1ea08               shr edx, 8
// 007365fe  0bca                 or ecx, edx
// 00736600  8bd1                 mov edx, ecx
// 00736602  c1ea04               shr edx, 4
// 00736605  0bca                 or ecx, edx
// 00736607  8bd1                 mov edx, ecx
// 00736609  c1ea02               shr edx, 2
// 0073660c  0bca                 or ecx, edx
// 0073660e  8bd1                 mov edx, ecx
// 00736610  89870c020000         mov dword ptr [edi + 0x20c], eax
// 00736616  898710020000         mov dword ptr [edi + 0x210], eax
// 0073661c  8d04c5ffffffff       lea eax, [eax*8 - 1]
// 00736623  d1ea                 shr edx, 1
// 00736625  0bca                 or ecx, edx
// 00736627  8d5101               lea edx, [ecx + 1]
// 0073662a  8bc8                 mov ecx, eax
// 0073662c  c1e910               shr ecx, 0x10
// 0073662f  0bc1                 or eax, ecx
// 00736631  8bc8                 mov ecx, eax
// 00736633  c1e908               shr ecx, 8
// 00736636  0bc1                 or eax, ecx
// 00736638  8bc8                 mov ecx, eax
// 0073663a  c1e904               shr ecx, 4
// 0073663d  0bc1                 or eax, ecx
// 0073663f  8bc8                 mov ecx, eax
// 00736641  c1e902               shr ecx, 2
// 00736644  0bc1                 or eax, ecx
// 00736646  8bc8                 mov ecx, eax
// 00736648  d1e9                 shr ecx, 1
// 0073664a  0bc1                 or eax, ecx
// 0073664c  8d6801               lea ebp, [eax + 1]
// 0073664f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00736652  85c0                 test eax, eax
// 00736654  7617                 jbe 0x73666d
// 00736656  6808c58400           push 0x84c508
// 0073665b  8d54241c             lea edx, [esp + 0x1c]
// 0073665f  52                   push edx
// 00736660  c7442420c8a47900     mov dword ptr [esp + 0x20], 0x79a4c8
// 00736668  e831a5efff           call 0x630b9e
// 0073666d  d9e8                 fld1 
// 0073666f  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00736672  8b7644               mov esi, dword ptr [esi + 0x44]
// 00736675  83ec08               sub esp, 8
// 00736678  d9542404             fst dword ptr [esp + 4]
// 0073667c  03f0                 add esi, eax
// 0073667e  a1a4db8b00           mov eax, dword ptr [0x8bdba4]
// 00736683  d91c24               fstp dword ptr [esp]
// 00736686  6a00                 push 0
// 00736688  53                   push ebx
// 00736689  6a03                 push 3
// 0073668b  6a00                 push 0
// 0073668d  50                   push eax
// 0073668e  6a01                 push 1
// 00736690  55                   push ebp
// 00736691  52                   push edx
// 00736692  50                   push eax
// 00736693  03f1                 add esi, ecx
// 00736695  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00736699  8d442448             lea eax, [esp + 0x48]
// 0073669d  50                   push eax
// 0073669e  51                   push ecx
// 0073669f  8d542448             lea edx, [esp + 0x48]
// 007366a3  52                   push edx
// 007366a4  89742454             mov dword ptr [esp + 0x54], esi
// 007366a8  e823acd3ff           call 0x4712d0
// 007366ad  83c438               add esp, 0x38
// 007366b0  8b28                 mov ebp, dword ptr [eax]
// 007366b2  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 007366b8  3be8                 cmp ebp, eax
// 007366ba  8b1de8d27700         mov ebx, dword ptr [0x77d2e8]
// 007366c0  c644242c02           mov byte ptr [esp + 0x2c], 2
// 007366c5  7466                 je 0x73672d
// 007366c7  85c0                 test eax, eax
// 007366c9  744e                 je 0x736719
// 007366cb  83c004               add eax, 4
// 007366ce  50                   push eax
// 007366cf  ffd3                 call ebx
// 007366d1  85c0                 test eax, eax
// 007366d3  753a                 jne 0x73670f
// 007366d5  8b8718020000         mov eax, dword ptr [edi + 0x218]
// 007366db  8b7008               mov esi, dword ptr [eax + 8]
// 007366de  85f6                 test esi, esi
// 007366e0  741b                 je 0x7366fd
// 007366e2  8b0e                 mov ecx, dword ptr [esi]
// 007366e4  8b01                 mov eax, dword ptr [ecx]
// 007366e6  8b5004               mov edx, dword ptr [eax + 4]
// 007366e9  ffd2                 call edx
// 007366eb  8bc6                 mov eax, esi
// 007366ed  8b7604               mov esi, dword ptr [esi + 4]
// 007366f0  50                   push eax
// 007366f1  e86c95efff           call 0x62fc62
// 007366f6  83c404               add esp, 4
// 007366f9  85f6                 test esi, esi
// 007366fb  75e5                 jne 0x7366e2
// 007366fd  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 00736703  85c9                 test ecx, ecx
// 00736705  7408                 je 0x73670f
// 00736707  8b01                 mov eax, dword ptr [ecx]
// 00736709  8b10                 mov edx, dword ptr [eax]
// 0073670b  6a01                 push 1
// 0073670d  ffd2                 call edx
// 0073670f  c7871802000000000000 mov dword ptr [edi + 0x218], 0
// 00736719  85ed                 test ebp, ebp
// 0073671b  7410                 je 0x73672d
// 0073671d  8d4504               lea eax, [ebp + 4]
// 00736720  50                   push eax
// 00736721  89af18020000         mov dword ptr [edi + 0x218], ebp
// 00736727  ff15ecd27700         call dword ptr [0x77d2ec]
// 0073672d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00736731  85c0                 test eax, eax
// 00736733  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00736738  7441                 je 0x73677b
// 0073673a  83c004               add eax, 4
// 0073673d  50                   push eax
// 0073673e  ffd3                 call ebx
// 00736740  85c0                 test eax, eax
// 00736742  7537                 jne 0x73677b
// 00736744  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00736748  8b7108               mov esi, dword ptr [ecx + 8]
// 0073674b  85f6                 test esi, esi
// 0073674d  7420                 je 0x73676f
// 0073674f  90                   nop 
// 00736750  8b0e                 mov ecx, dword ptr [esi]
// 00736752  8b01                 mov eax, dword ptr [ecx]
// 00736754  8b5004               mov edx, dword ptr [eax + 4]
// 00736757  ffd2                 call edx
// 00736759  8bc6                 mov eax, esi
// 0073675b  8b7604               mov esi, dword ptr [esi + 4]
// 0073675e  50                   push eax
// 0073675f  e8fe94efff           call 0x62fc62
// 00736764  83c404               add esp, 4
// 00736767  85f6                 test esi, esi
// 00736769  75e5                 jne 0x736750
// 0073676b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073676f  85c9                 test ecx, ecx
// 00736771  7408                 je 0x73677b
// 00736773  8b01                 mov eax, dword ptr [ecx]
// 00736775  8b10                 mov edx, dword ptr [eax]
// 00736777  6a01                 push 1
// 00736779  ffd2                 call edx
// 0073677b  8bc7                 mov eax, edi
// 0073677d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00736781  64890d00000000       mov dword ptr fs:[0], ecx
// 00736788  59                   pop ecx
// 00736789  5f                   pop edi
// 0073678a  5e                   pop esi
// 0073678b  5d                   pop ebp
// 0073678c  5b                   pop ebx
// 0073678d  83c41c               add esp, 0x1c
// 00736790  c20c00               ret 0xc
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??0GFont@G3D@@AAE@PAVRenderDevice@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVBinaryInput@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
