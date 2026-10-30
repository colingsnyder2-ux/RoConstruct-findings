// roc 2011-06 00868f70  unit: CXTPTabClientWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00868f70
//
// 00868f70  51                   push ecx
// 00868f71  53                   push ebx
// 00868f72  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00868f76  56                   push esi
// 00868f77  8d442408             lea eax, [esp + 8]
// 00868f7b  50                   push eax
// 00868f7c  53                   push ebx
// 00868f7d  8bf1                 mov esi, ecx
// 00868f7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00868f87  e884f7ffff           call 0x868710
// 00868f8c  85c0                 test eax, eax
// 00868f8e  7473                 je 0x869003
// 00868f90  57                   push edi
// 00868f91  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00868f95  85ff                 test edi, edi
// 00868f97  7469                 je 0x869002
// 00868f99  8d833ddcffff         lea eax, [ebx - 0x23c3]
// 00868f9f  83f803               cmp eax, 3
// 00868fa2  775e                 ja 0x869002
// 00868fa4  ff24850c908600       jmp dword ptr [eax*4 + 0x86900c]
// 00868fab  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00868fae  6a04                 push 4
// 00868fb0  51                   push ecx
// 00868fb1  57                   push edi
// 00868fb2  8bce                 mov ecx, esi
// 00868fb4  e837f8ffff           call 0x8687f0
// 00868fb9  5f                   pop edi
// 00868fba  5e                   pop esi
// 00868fbb  5b                   pop ebx
// 00868fbc  59                   pop ecx
// 00868fbd  c20400               ret 4
// 00868fc0  8b5760               mov edx, dword ptr [edi + 0x60]
// 00868fc3  6a03                 push 3
// 00868fc5  52                   push edx
// 00868fc6  57                   push edi
// 00868fc7  8bce                 mov ecx, esi
// 00868fc9  e822f8ffff           call 0x8687f0
// 00868fce  5f                   pop edi
// 00868fcf  5e                   pop esi
// 00868fd0  5b                   pop ebx
// 00868fd1  59                   pop ecx
// 00868fd2  c20400               ret 4
// 00868fd5  8b4760               mov eax, dword ptr [edi + 0x60]
// 00868fd8  50                   push eax
// 00868fd9  8bce                 mov ecx, esi
// 00868fdb  e850e8ffff           call 0x867830
// 00868fe0  48                   dec eax
// 00868fe1  eb0c                 jmp 0x868fef
// 00868fe3  8b4760               mov eax, dword ptr [edi + 0x60]
// 00868fe6  50                   push eax
// 00868fe7  8bce                 mov ecx, esi
// 00868fe9  e842e8ffff           call 0x867830
// 00868fee  40                   inc eax
// 00868fef  6a02                 push 2
// 00868ff1  50                   push eax
// 00868ff2  8bce                 mov ecx, esi
// 00868ff4  e8e7d6ffff           call 0x8666e0
// 00868ff9  50                   push eax
// 00868ffa  57                   push edi
// 00868ffb  8bce                 mov ecx, esi
// 00868ffd  e8eef7ffff           call 0x8687f0
// 00869002  5f                   pop edi
// 00869003  5e                   pop esi
// 00869004  5b                   pop ebx
// 00869005  59                   pop ecx
// 00869006  c20400               ret 4
// 00869009  8d4900               lea ecx, [ecx]
// 0086900c  d58f                 aad 0x8f
// 0086900e  8600                 xchg byte ptr [eax], al
// 00869010  e38f                 jecxz 0x868fa1
// 00869012  8600                 xchg byte ptr [eax], al
// 00869014  c08f8600ab8f86       ror byte ptr [edi - 0x7054ff7a], 0x86
// copied from an identical function in another client (function ?OnWorkspaceCommand@CXTPTabClientWnd@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp