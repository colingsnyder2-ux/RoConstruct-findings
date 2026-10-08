// from server: 100% by auto
// roc 2009-06 005936b0  unit: seg_00590000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005936b0
//
// 005936b0  51                   push ecx
// 005936b1  53                   push ebx
// 005936b2  57                   push edi
// 005936b3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 005936b9  56                   push esi
// 005936ba  e831fdffff           call 0x5933f0
// 005936bf  83c404               add esp, 4
// 005936c2  8bde                 mov ebx, esi
// 005936c4  e857ffffff           call 0x593620
// 005936c9  33db                 xor ebx, ebx
// 005936cb  8bd6                 mov edx, esi
// 005936cd  895f0c               mov dword ptr [edi + 0xc], ebx
// 005936d0  e89bfcffff           call 0x593370
// 005936d5  884710               mov byte ptr [edi + 0x10], al
// 005936d8  895f14               mov dword ptr [edi + 0x14], ebx
// 005936db  895f18               mov dword ptr [edi + 0x18], ebx
// 005936de  8a464a               mov al, byte ptr [esi + 0x4a]
// 005936e1  3ac3                 cmp al, bl
// 005936e3  7405                 je 0x5936ea
// 005936e5  385e40               cmp byte ptr [esi + 0x40], bl
// 005936e8  7509                 jne 0x5936f3
// 005936ea  885e58               mov byte ptr [esi + 0x58], bl
// 005936ed  885e59               mov byte ptr [esi + 0x59], bl
// 005936f0  885e5a               mov byte ptr [esi + 0x5a], bl
// 005936f3  3ac3                 cmp al, bl
// 005936f5  745e                 je 0x593755
// 005936f7  385e41               cmp byte ptr [esi + 0x41], bl
// 005936fa  7413                 je 0x59370f
// 005936fc  8b06                 mov eax, dword ptr [esi]
// 005936fe  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00593705  8b0e                 mov ecx, dword ptr [esi]
// 00593707  8b11                 mov edx, dword ptr [ecx]
// 00593709  56                   push esi
// 0059370a  ffd2                 call edx
// 0059370c  83c404               add esp, 4
// 0059370f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00593713  7455                 je 0x59376a
// 00593715  885e59               mov byte ptr [esi + 0x59], bl
// 00593718  885e5a               mov byte ptr [esi + 0x5a], bl
// 0059371b  895e74               mov dword ptr [esi + 0x74], ebx
// 0059371e  c6465801             mov byte ptr [esi + 0x58], 1
// 00593722  385e58               cmp byte ptr [esi + 0x58], bl
// 00593725  7412                 je 0x593739
// 00593727  56                   push esi
// 00593728  e823da0000           call 0x5a1150
// 0059372d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00593733  83c404               add esp, 4
// 00593736  894714               mov dword ptr [edi + 0x14], eax
// 00593739  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0059373c  7505                 jne 0x593743
// 0059373e  385e59               cmp byte ptr [esi + 0x59], bl
// 00593741  7412                 je 0x593755
// 00593743  56                   push esi
// 00593744  e8a7cd0000           call 0x5a04f0
// 00593749  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0059374f  83c404               add esp, 4
// 00593752  894f18               mov dword ptr [edi + 0x18], ecx
// 00593755  385e41               cmp byte ptr [esi + 0x41], bl
// 00593758  7542                 jne 0x59379c
// 0059375a  56                   push esi
// 0059375b  385f10               cmp byte ptr [edi + 0x10], bl
// 0059375e  7420                 je 0x593780
// 00593760  e82bbb0000           call 0x59f290
// 00593765  83c404               add esp, 4
// 00593768  eb24                 jmp 0x59378e
// 0059376a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0059376d  7406                 je 0x593775
// 0059376f  c6465901             mov byte ptr [esi + 0x59], 1
// 00593773  ebad                 jmp 0x593722
// 00593775  385e50               cmp byte ptr [esi + 0x50], bl
// 00593778  74a4                 je 0x59371e
// 0059377a  c6465a01             mov byte ptr [esi + 0x5a], 1
// 0059377e  eba2                 jmp 0x593722
// 00593780  e81bb40000           call 0x59eba0
// 00593785  56                   push esi
// 00593786  e8c5ad0000           call 0x59e550
// 0059378b  83c408               add esp, 8
// 0059378e  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 00593792  52                   push edx
// 00593793  56                   push esi
// 00593794  e867a80000           call 0x59e000
// 00593799  83c408               add esp, 8
// 0059379c  56                   push esi
// 0059379d  e81ea50000           call 0x59dcc0
// 005937a2  83c404               add esp, 4
// 005937a5  56                   push esi
// 005937a6  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 005937ac  7411                 je 0x5937bf
// 005937ae  8b06                 mov eax, dword ptr [esi]
// 005937b0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005937b7  8b0e                 mov ecx, dword ptr [esi]
// 005937b9  8b11                 mov edx, dword ptr [ecx]
// 005937bb  ffd2                 call edx
// 005937bd  eb14                 jmp 0x5937d3
// 005937bf  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 005937c5  7407                 je 0x5937ce
// 005937c7  e864a10000           call 0x59d930
// 005937cc  eb05                 jmp 0x5937d3
// 005937ce  e8ed940000           call 0x59ccc0
// 005937d3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005937d9  83c404               add esp, 4
// 005937dc  385810               cmp byte ptr [eax + 0x10], bl
// 005937df  7509                 jne 0x5937ea
// 005937e1  885c2408             mov byte ptr [esp + 8], bl
// 005937e5  385e40               cmp byte ptr [esi + 0x40], bl
// 005937e8  7405                 je 0x5937ef
// 005937ea  c644240801           mov byte ptr [esp + 8], 1
// 005937ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005937f3  51                   push ecx
// 005937f4  56                   push esi
// 005937f5  e8c6880000           call 0x59c0c0
// 005937fa  83c408               add esp, 8
// 005937fd  385e41               cmp byte ptr [esi + 0x41], bl
// 00593800  750a                 jne 0x59380c
// 00593802  53                   push ebx
// 00593803  56                   push esi
// 00593804  e897790000           call 0x59b1a0
// 00593809  83c408               add esp, 8
// 0059380c  8b5604               mov edx, dword ptr [esi + 4]
// 0059380f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00593812  56                   push esi
// 00593813  ffd0                 call eax
// 00593815  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0059381b  8b5108               mov edx, dword ptr [ecx + 8]
// 0059381e  56                   push esi
// 0059381f  ffd2                 call edx
// 00593821  8b4e08               mov ecx, dword ptr [esi + 8]
// 00593824  83c408               add esp, 8
// 00593827  3bcb                 cmp ecx, ebx
// 00593829  744b                 je 0x593876
// 0059382b  385e40               cmp byte ptr [esi + 0x40], bl
// 0059382e  7546                 jne 0x593876
// 00593830  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00593836  385810               cmp byte ptr [eax + 0x10], bl
// 00593839  743b                 je 0x593876
// 0059383b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0059383e  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00593844  7404                 je 0x59384a
// 00593846  8d444002             lea eax, [eax + eax*2 + 2]
// 0059384a  895904               mov dword ptr [ecx + 4], ebx
// 0059384d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00593853  8b5608               mov edx, dword ptr [esi + 8]
// 00593856  0fafc8               imul ecx, eax
// 00593859  894a08               mov dword ptr [edx + 8], ecx
// 0059385c  8b4608               mov eax, dword ptr [esi + 8]
// 0059385f  89580c               mov dword ptr [eax + 0xc], ebx
// 00593862  8b5608               mov edx, dword ptr [esi + 8]
// 00593865  33c9                 xor ecx, ecx
// 00593867  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0059386a  0f95c1               setne cl
// 0059386d  83c102               add ecx, 2
// 00593870  894a10               mov dword ptr [edx + 0x10], ecx
// 00593873  ff470c               inc dword ptr [edi + 0xc]
// 00593876  5f                   pop edi
// 00593877  5b                   pop ebx
// 00593878  59                   pop ecx
// 00593879  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
