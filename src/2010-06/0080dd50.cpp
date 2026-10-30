// roc 2010-06 0080dd50  unit: CXTPTabClientWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080dd50
//
// 0080dd50  51                   push ecx
// 0080dd51  53                   push ebx
// 0080dd52  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0080dd56  56                   push esi
// 0080dd57  8d442408             lea eax, [esp + 8]
// 0080dd5b  50                   push eax
// 0080dd5c  53                   push ebx
// 0080dd5d  8bf1                 mov esi, ecx
// 0080dd5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080dd67  e884f7ffff           call 0x80d4f0
// 0080dd6c  85c0                 test eax, eax
// 0080dd6e  7473                 je 0x80dde3
// 0080dd70  57                   push edi
// 0080dd71  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0080dd75  85ff                 test edi, edi
// 0080dd77  7469                 je 0x80dde2
// 0080dd79  8d833ddcffff         lea eax, [ebx - 0x23c3]
// 0080dd7f  83f803               cmp eax, 3
// 0080dd82  775e                 ja 0x80dde2
// 0080dd84  ff2485ecdd8000       jmp dword ptr [eax*4 + 0x80ddec]
// 0080dd8b  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0080dd8e  6a04                 push 4
// 0080dd90  51                   push ecx
// 0080dd91  57                   push edi
// 0080dd92  8bce                 mov ecx, esi
// 0080dd94  e837f8ffff           call 0x80d5d0
// 0080dd99  5f                   pop edi
// 0080dd9a  5e                   pop esi
// 0080dd9b  5b                   pop ebx
// 0080dd9c  59                   pop ecx
// 0080dd9d  c20400               ret 4
// 0080dda0  8b5760               mov edx, dword ptr [edi + 0x60]
// 0080dda3  6a03                 push 3
// 0080dda5  52                   push edx
// 0080dda6  57                   push edi
// 0080dda7  8bce                 mov ecx, esi
// 0080dda9  e822f8ffff           call 0x80d5d0
// 0080ddae  5f                   pop edi
// 0080ddaf  5e                   pop esi
// 0080ddb0  5b                   pop ebx
// 0080ddb1  59                   pop ecx
// 0080ddb2  c20400               ret 4
// 0080ddb5  8b4760               mov eax, dword ptr [edi + 0x60]
// 0080ddb8  50                   push eax
// 0080ddb9  8bce                 mov ecx, esi
// 0080ddbb  e850e8ffff           call 0x80c610
// 0080ddc0  48                   dec eax
// 0080ddc1  eb0c                 jmp 0x80ddcf
// 0080ddc3  8b4760               mov eax, dword ptr [edi + 0x60]
// 0080ddc6  50                   push eax
// 0080ddc7  8bce                 mov ecx, esi
// 0080ddc9  e842e8ffff           call 0x80c610
// 0080ddce  40                   inc eax
// 0080ddcf  6a02                 push 2
// 0080ddd1  50                   push eax
// 0080ddd2  8bce                 mov ecx, esi
// 0080ddd4  e8e7d6ffff           call 0x80b4c0
// 0080ddd9  50                   push eax
// 0080ddda  57                   push edi
// 0080dddb  8bce                 mov ecx, esi
// 0080dddd  e8eef7ffff           call 0x80d5d0
// 0080dde2  5f                   pop edi
// 0080dde3  5e                   pop esi
// 0080dde4  5b                   pop ebx
// 0080dde5  59                   pop ecx
// 0080dde6  c20400               ret 4
// 0080dde9  8d4900               lea ecx, [ecx]
// 0080ddec  b5dd                 mov ch, 0xdd
// 0080ddee  8000c3               add byte ptr [eax], 0xc3
// 0080ddf1  dd8000a0dd80         fld qword ptr [eax - 0x7f226000]
// copied from an identical function in another client (function ?OnWorkspaceCommand@CXTPTabClientWnd@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp