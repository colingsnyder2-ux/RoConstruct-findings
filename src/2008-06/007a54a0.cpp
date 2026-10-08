// from server: 100% by auto
// roc 2008-06 007a54a0  unit: CXTIconHandle  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a54a0
//
// 007a54a0  83ec08               sub esp, 8
// 007a54a3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a54a7  53                   push ebx
// 007a54a8  55                   push ebp
// 007a54a9  57                   push edi
// 007a54aa  8b38                 mov edi, dword ptr [eax]
// 007a54ac  8b4008               mov eax, dword ptr [eax + 8]
// 007a54af  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007a54b2  8b10                 mov edx, dword ptr [eax]
// 007a54b4  33db                 xor ebx, ebx
// 007a54b6  83cdff               or ebp, 0xffffffff
// 007a54b9  33c0                 xor eax, eax
// 007a54bb  3bcb                 cmp ecx, ebx
// 007a54bd  894c2410             mov dword ptr [esp + 0x10], ecx
// 007a54c1  896c240c             mov dword ptr [esp + 0xc], ebp
// 007a54c5  899e50140000         mov dword ptr [esi + 0x1450], ebx
// 007a54cb  c786541400003d020000 mov dword ptr [esi + 0x1454], 0x23d
// 007a54d5  7e36                 jle 0x7a550d
// 007a54d7  66391c87             cmp word ptr [edi + eax*4], bx
// 007a54db  7422                 je 0x7a54ff
// 007a54dd  ff8650140000         inc dword ptr [esi + 0x1450]
// 007a54e3  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 007a54e9  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 007a54f0  8944240c             mov dword ptr [esp + 0xc], eax
// 007a54f4  889c3058140000       mov byte ptr [eax + esi + 0x1458], bl
// 007a54fb  8be8                 mov ebp, eax
// 007a54fd  eb07                 jmp 0x7a5506
// 007a54ff  33c9                 xor ecx, ecx
// 007a5501  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 007a5506  40                   inc eax
// 007a5507  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007a550b  7cca                 jl 0x7a54d7
// 007a550d  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007a5514  7d51                 jge 0x7a5567
// 007a5516  83fd02               cmp ebp, 2
// 007a5519  7d05                 jge 0x7a5520
// 007a551b  45                   inc ebp
// 007a551c  8bc5                 mov eax, ebp
// 007a551e  eb02                 jmp 0x7a5522
// 007a5520  33c0                 xor eax, eax
// 007a5522  ff8650140000         inc dword ptr [esi + 0x1450]
// 007a5528  8b8e50140000         mov ecx, dword ptr [esi + 0x1450]
// 007a552e  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 007a5535  b901000000           mov ecx, 1
// 007a553a  66890c87             mov word ptr [edi + eax*4], cx
// 007a553e  889c0658140000       mov byte ptr [esi + eax + 0x1458], bl
// 007a5545  ff8ea8160000         dec dword ptr [esi + 0x16a8]
// 007a554b  3bd3                 cmp edx, ebx
// 007a554d  740b                 je 0x7a555a
// 007a554f  0fb7448202           movzx eax, word ptr [edx + eax*4 + 2]
// 007a5554  2986ac160000         sub dword ptr [esi + 0x16ac], eax
// 007a555a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007a5561  7cb3                 jl 0x7a5516
// 007a5563  896c240c             mov dword ptr [esp + 0xc], ebp
// 007a5567  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a556b  896904               mov dword ptr [ecx + 4], ebp
// 007a556e  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 007a5574  99                   cdq 
// 007a5575  2bc2                 sub eax, edx
// 007a5577  8be8                 mov ebp, eax
// 007a5579  d1fd                 sar ebp, 1
// 007a557b  83fd01               cmp ebp, 1
// 007a557e  7c11                 jl 0x7a5591
// 007a5580  55                   push ebp
// 007a5581  8bc6                 mov eax, esi
// 007a5583  e888ecffff           call 0x7a4210
// 007a5588  4d                   dec ebp
// 007a5589  83c404               add esp, 4
// 007a558c  83fd01               cmp ebp, 1
// 007a558f  7def                 jge 0x7a5580
// 007a5591  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a5595  eb09                 jmp 0x7a55a0
// 007a5597  8da42400000000       lea esp, [esp]
// 007a559e  8bff                 mov edi, edi
// 007a55a0  8b8650140000         mov eax, dword ptr [esi + 0x1450]
// 007a55a6  8b94865c0b0000       mov edx, dword ptr [esi + eax*4 + 0xb5c]
// 007a55ad  8bae600b0000         mov ebp, dword ptr [esi + 0xb60]
// 007a55b3  48                   dec eax
// 007a55b4  898650140000         mov dword ptr [esi + 0x1450], eax
// 007a55ba  6a01                 push 1
// 007a55bc  8bc6                 mov eax, esi
// 007a55be  8996600b0000         mov dword ptr [esi + 0xb60], edx
// 007a55c4  e847ecffff           call 0x7a4210
// 007a55c9  8b86600b0000         mov eax, dword ptr [esi + 0xb60]
// 007a55cf  83caff               or edx, 0xffffffff
// 007a55d2  019654140000         add dword ptr [esi + 0x1454], edx
// 007a55d8  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 007a55de  89ac8e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], ebp
// 007a55e5  019654140000         add dword ptr [esi + 0x1454], edx
// 007a55eb  8b8e54140000         mov ecx, dword ptr [esi + 0x1454]
// 007a55f1  89848e5c0b0000       mov dword ptr [esi + ecx*4 + 0xb5c], eax
// 007a55f8  668b0c87             mov cx, word ptr [edi + eax*4]
// 007a55fc  66030caf             add cx, word ptr [edi + ebp*4]
// 007a5600  83c404               add esp, 4
// 007a5603  66890c9f             mov word ptr [edi + ebx*4], cx
// 007a5607  8a8c0658140000       mov cl, byte ptr [esi + eax + 0x1458]
// 007a560e  8a942e58140000       mov dl, byte ptr [esi + ebp + 0x1458]
// 007a5615  3ad1                 cmp dl, cl
// 007a5617  7205                 jb 0x7a561e
// 007a5619  0fb6ca               movzx ecx, dl
// 007a561c  eb03                 jmp 0x7a5621
// 007a561e  0fb6c9               movzx ecx, cl
// 007a5621  fec1                 inc cl
// 007a5623  888c1e58140000       mov byte ptr [esi + ebx + 0x1458], cl
// 007a562a  0fb7cb               movzx ecx, bx
// 007a562d  66894c8702           mov word ptr [edi + eax*4 + 2], cx
// 007a5632  66894caf02           mov word ptr [edi + ebp*4 + 2], cx
// 007a5637  899e600b0000         mov dword ptr [esi + 0xb60], ebx
// 007a563d  6a01                 push 1
// 007a563f  8bc6                 mov eax, esi
// 007a5641  43                   inc ebx
// 007a5642  e8c9ebffff           call 0x7a4210
// 007a5647  83c404               add esp, 4
// 007a564a  83be5014000002       cmp dword ptr [esi + 0x1450], 2
// 007a5651  0f8d49ffffff         jge 0x7a55a0
// 007a5657  ff8e54140000         dec dword ptr [esi + 0x1454]
// 007a565d  8b8654140000         mov eax, dword ptr [esi + 0x1454]
// 007a5663  8b96600b0000         mov edx, dword ptr [esi + 0xb60]
// 007a5669  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a566d  8994865c0b0000       mov dword ptr [esi + eax*4 + 0xb5c], edx
// 007a5674  8bc6                 mov eax, esi
// 007a5676  e865ecffff           call 0x7a42e0
// 007a567b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007a567f  8d963c0b0000         lea edx, [esi + 0xb3c]
// 007a5685  e896fdffff           call 0x7a5420
// 007a568a  5f                   pop edi
// 007a568b  5d                   pop ebp
// 007a568c  5b                   pop ebx
// 007a568d  83c408               add esp, 8
// 007a5690  c3                   ret 
// library zlib-1.2.3/trees.c (function _build_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
