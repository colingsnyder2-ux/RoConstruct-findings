// roc 2009-12 006156c0  unit: seg_00610000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006156c0
//
// 006156c0  51                   push ecx
// 006156c1  53                   push ebx
// 006156c2  57                   push edi
// 006156c3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 006156c9  56                   push esi
// 006156ca  e831fdffff           call 0x615400
// 006156cf  83c404               add esp, 4
// 006156d2  8bde                 mov ebx, esi
// 006156d4  e857ffffff           call 0x615630
// 006156d9  33db                 xor ebx, ebx
// 006156db  8bd6                 mov edx, esi
// 006156dd  895f0c               mov dword ptr [edi + 0xc], ebx
// 006156e0  e89bfcffff           call 0x615380
// 006156e5  884710               mov byte ptr [edi + 0x10], al
// 006156e8  895f14               mov dword ptr [edi + 0x14], ebx
// 006156eb  895f18               mov dword ptr [edi + 0x18], ebx
// 006156ee  8a464a               mov al, byte ptr [esi + 0x4a]
// 006156f1  3ac3                 cmp al, bl
// 006156f3  7405                 je 0x6156fa
// 006156f5  385e40               cmp byte ptr [esi + 0x40], bl
// 006156f8  7509                 jne 0x615703
// 006156fa  885e58               mov byte ptr [esi + 0x58], bl
// 006156fd  885e59               mov byte ptr [esi + 0x59], bl
// 00615700  885e5a               mov byte ptr [esi + 0x5a], bl
// 00615703  3ac3                 cmp al, bl
// 00615705  745e                 je 0x615765
// 00615707  385e41               cmp byte ptr [esi + 0x41], bl
// 0061570a  7413                 je 0x61571f
// 0061570c  8b06                 mov eax, dword ptr [esi]
// 0061570e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00615715  8b0e                 mov ecx, dword ptr [esi]
// 00615717  8b11                 mov edx, dword ptr [ecx]
// 00615719  56                   push esi
// 0061571a  ffd2                 call edx
// 0061571c  83c404               add esp, 4
// 0061571f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00615723  7455                 je 0x61577a
// 00615725  885e59               mov byte ptr [esi + 0x59], bl
// 00615728  885e5a               mov byte ptr [esi + 0x5a], bl
// 0061572b  895e74               mov dword ptr [esi + 0x74], ebx
// 0061572e  c6465801             mov byte ptr [esi + 0x58], 1
// 00615732  385e58               cmp byte ptr [esi + 0x58], bl
// 00615735  7412                 je 0x615749
// 00615737  56                   push esi
// 00615738  e843da0000           call 0x623180
// 0061573d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00615743  83c404               add esp, 4
// 00615746  894714               mov dword ptr [edi + 0x14], eax
// 00615749  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0061574c  7505                 jne 0x615753
// 0061574e  385e59               cmp byte ptr [esi + 0x59], bl
// 00615751  7412                 je 0x615765
// 00615753  56                   push esi
// 00615754  e8c7cd0000           call 0x622520
// 00615759  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0061575f  83c404               add esp, 4
// 00615762  894f18               mov dword ptr [edi + 0x18], ecx
// 00615765  385e41               cmp byte ptr [esi + 0x41], bl
// 00615768  7542                 jne 0x6157ac
// 0061576a  56                   push esi
// 0061576b  385f10               cmp byte ptr [edi + 0x10], bl
// 0061576e  7420                 je 0x615790
// 00615770  e84bbb0000           call 0x6212c0
// 00615775  83c404               add esp, 4
// 00615778  eb24                 jmp 0x61579e
// 0061577a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0061577d  7406                 je 0x615785
// 0061577f  c6465901             mov byte ptr [esi + 0x59], 1
// 00615783  ebad                 jmp 0x615732
// 00615785  385e50               cmp byte ptr [esi + 0x50], bl
// 00615788  74a4                 je 0x61572e
// 0061578a  c6465a01             mov byte ptr [esi + 0x5a], 1
// 0061578e  eba2                 jmp 0x615732
// 00615790  e83bb40000           call 0x620bd0
// 00615795  56                   push esi
// 00615796  e8e5ad0000           call 0x620580
// 0061579b  83c408               add esp, 8
// 0061579e  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 006157a2  52                   push edx
// 006157a3  56                   push esi
// 006157a4  e887a80000           call 0x620030
// 006157a9  83c408               add esp, 8
// 006157ac  56                   push esi
// 006157ad  e83ea50000           call 0x61fcf0
// 006157b2  83c404               add esp, 4
// 006157b5  56                   push esi
// 006157b6  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 006157bc  7411                 je 0x6157cf
// 006157be  8b06                 mov eax, dword ptr [esi]
// 006157c0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 006157c7  8b0e                 mov ecx, dword ptr [esi]
// 006157c9  8b11                 mov edx, dword ptr [ecx]
// 006157cb  ffd2                 call edx
// 006157cd  eb14                 jmp 0x6157e3
// 006157cf  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 006157d5  7407                 je 0x6157de
// 006157d7  e884a10000           call 0x61f960
// 006157dc  eb05                 jmp 0x6157e3
// 006157de  e80d950000           call 0x61ecf0
// 006157e3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 006157e9  83c404               add esp, 4
// 006157ec  385810               cmp byte ptr [eax + 0x10], bl
// 006157ef  7509                 jne 0x6157fa
// 006157f1  885c2408             mov byte ptr [esp + 8], bl
// 006157f5  385e40               cmp byte ptr [esi + 0x40], bl
// 006157f8  7405                 je 0x6157ff
// 006157fa  c644240801           mov byte ptr [esp + 8], 1
// 006157ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00615803  51                   push ecx
// 00615804  56                   push esi
// 00615805  e8e6880000           call 0x61e0f0
// 0061580a  83c408               add esp, 8
// 0061580d  385e41               cmp byte ptr [esi + 0x41], bl
// 00615810  750a                 jne 0x61581c
// 00615812  53                   push ebx
// 00615813  56                   push esi
// 00615814  e8b7790000           call 0x61d1d0
// 00615819  83c408               add esp, 8
// 0061581c  8b5604               mov edx, dword ptr [esi + 4]
// 0061581f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00615822  56                   push esi
// 00615823  ffd0                 call eax
// 00615825  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0061582b  8b5108               mov edx, dword ptr [ecx + 8]
// 0061582e  56                   push esi
// 0061582f  ffd2                 call edx
// 00615831  8b4e08               mov ecx, dword ptr [esi + 8]
// 00615834  83c408               add esp, 8
// 00615837  3bcb                 cmp ecx, ebx
// 00615839  744b                 je 0x615886
// 0061583b  385e40               cmp byte ptr [esi + 0x40], bl
// 0061583e  7546                 jne 0x615886
// 00615840  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00615846  385810               cmp byte ptr [eax + 0x10], bl
// 00615849  743b                 je 0x615886
// 0061584b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0061584e  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00615854  7404                 je 0x61585a
// 00615856  8d444002             lea eax, [eax + eax*2 + 2]
// 0061585a  895904               mov dword ptr [ecx + 4], ebx
// 0061585d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00615863  8b5608               mov edx, dword ptr [esi + 8]
// 00615866  0fafc8               imul ecx, eax
// 00615869  894a08               mov dword ptr [edx + 8], ecx
// 0061586c  8b4608               mov eax, dword ptr [esi + 8]
// 0061586f  89580c               mov dword ptr [eax + 0xc], ebx
// 00615872  8b5608               mov edx, dword ptr [esi + 8]
// 00615875  33c9                 xor ecx, ecx
// 00615877  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0061587a  0f95c1               setne cl
// 0061587d  83c102               add ecx, 2
// 00615880  894a10               mov dword ptr [edx + 0x10], ecx
// 00615883  ff470c               inc dword ptr [edi + 0xc]
// 00615886  5f                   pop edi
// 00615887  5b                   pop ebx
// 00615888  59                   pop ecx
// 00615889  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
