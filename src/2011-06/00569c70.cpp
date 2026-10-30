// from server: 100% by auto
// roc 2011-06 00569c70  unit: seg_00560000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569c70
//
// 00569c70  51                   push ecx
// 00569c71  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00569c76  53                   push ebx
// 00569c77  56                   push esi
// 00569c78  8bf0                 mov esi, eax
// 00569c7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569c7e  740d                 je 0x569c8d
// 00569c80  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 00569c84  83c010               add eax, 0x10
// 00569c87  89442410             mov dword ptr [esp + 0x10], eax
// 00569c8b  eb04                 jmp 0x569c91
// 00569c8d  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 00569c91  895c2408             mov dword ptr [esp + 8], ebx
// 00569c95  85db                 test ebx, ebx
// 00569c97  751c                 jne 0x569cb5
// 00569c99  8b0e                 mov ecx, dword ptr [esi]
// 00569c9b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569c9f  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 00569ca6  8b16                 mov edx, dword ptr [esi]
// 00569ca8  894218               mov dword ptr [edx + 0x18], eax
// 00569cab  8b0e                 mov ecx, dword ptr [esi]
// 00569cad  8b11                 mov edx, dword ptr [ecx]
// 00569caf  56                   push esi
// 00569cb0  ffd2                 call edx
// 00569cb2  83c404               add esp, 4
// 00569cb5  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 00569cbc  0f850f010000         jne 0x569dd1
// 00569cc2  55                   push ebp
// 00569cc3  57                   push edi
// 00569cc4  68c4000000           push 0xc4
// 00569cc9  e8e2fcffff           call 0x5699b0
// 00569cce  83c404               add esp, 4
// 00569cd1  33ed                 xor ebp, ebp
// 00569cd3  33ff                 xor edi, edi
// 00569cd5  33d2                 xor edx, edx
// 00569cd7  33c9                 xor ecx, ecx
// 00569cd9  8d4302               lea eax, [ebx + 2]
// 00569cdc  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 00569ce4  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 00569ce8  03eb                 add ebp, ebx
// 00569cea  0fb618               movzx ebx, byte ptr [eax]
// 00569ced  03cb                 add ecx, ebx
// 00569cef  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00569cf3  03d3                 add edx, ebx
// 00569cf5  0fb65802             movzx ebx, byte ptr [eax + 2]
// 00569cf9  03fb                 add edi, ebx
// 00569cfb  83c004               add eax, 4
// 00569cfe  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00569d03  75df                 jne 0x569ce4
// 00569d05  03fa                 add edi, edx
// 00569d07  03f9                 add edi, ecx
// 00569d09  03ef                 add ebp, edi
// 00569d0b  8d5d13               lea ebx, [ebp + 0x13]
// 00569d0e  e80dfdffff           call 0x569a20
// 00569d13  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569d16  8b08                 mov ecx, dword ptr [eax]
// 00569d18  8a542418             mov dl, byte ptr [esp + 0x18]
// 00569d1c  8811                 mov byte ptr [ecx], dl
// 00569d1e  ff00                 inc dword ptr [eax]
// 00569d20  834004ff             add dword ptr [eax + 4], -1
// 00569d24  7520                 jne 0x569d46
// 00569d26  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569d29  56                   push esi
// 00569d2a  ffd0                 call eax
// 00569d2c  83c404               add esp, 4
// 00569d2f  84c0                 test al, al
// 00569d31  7513                 jne 0x569d46
// 00569d33  8b0e                 mov ecx, dword ptr [esi]
// 00569d35  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569d3c  8b16                 mov edx, dword ptr [esi]
// 00569d3e  8b02                 mov eax, dword ptr [edx]
// 00569d40  56                   push esi
// 00569d41  ffd0                 call eax
// 00569d43  83c404               add esp, 4
// 00569d46  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00569d4a  bf01000000           mov edi, 1
// 00569d4f  90                   nop 
// 00569d50  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569d53  8a141f               mov dl, byte ptr [edi + ebx]
// 00569d56  8b08                 mov ecx, dword ptr [eax]
// 00569d58  8811                 mov byte ptr [ecx], dl
// 00569d5a  ff00                 inc dword ptr [eax]
// 00569d5c  834004ff             add dword ptr [eax + 4], -1
// 00569d60  7520                 jne 0x569d82
// 00569d62  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569d65  56                   push esi
// 00569d66  ffd0                 call eax
// 00569d68  83c404               add esp, 4
// 00569d6b  84c0                 test al, al
// 00569d6d  7513                 jne 0x569d82
// 00569d6f  8b0e                 mov ecx, dword ptr [esi]
// 00569d71  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569d78  8b16                 mov edx, dword ptr [esi]
// 00569d7a  8b02                 mov eax, dword ptr [edx]
// 00569d7c  56                   push esi
// 00569d7d  ffd0                 call eax
// 00569d7f  83c404               add esp, 4
// 00569d82  47                   inc edi
// 00569d83  83ff10               cmp edi, 0x10
// 00569d86  7ec8                 jle 0x569d50
// 00569d88  33ff                 xor edi, edi
// 00569d8a  85ed                 test ebp, ebp
// 00569d8c  7e3a                 jle 0x569dc8
// 00569d8e  8bff                 mov edi, edi
// 00569d90  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569d93  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 00569d97  8b08                 mov ecx, dword ptr [eax]
// 00569d99  8811                 mov byte ptr [ecx], dl
// 00569d9b  ff00                 inc dword ptr [eax]
// 00569d9d  834004ff             add dword ptr [eax + 4], -1
// 00569da1  7520                 jne 0x569dc3
// 00569da3  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569da6  56                   push esi
// 00569da7  ffd0                 call eax
// 00569da9  83c404               add esp, 4
// 00569dac  84c0                 test al, al
// 00569dae  7513                 jne 0x569dc3
// 00569db0  8b0e                 mov ecx, dword ptr [esi]
// 00569db2  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569db9  8b16                 mov edx, dword ptr [esi]
// 00569dbb  8b02                 mov eax, dword ptr [edx]
// 00569dbd  56                   push esi
// 00569dbe  ffd0                 call eax
// 00569dc0  83c404               add esp, 4
// 00569dc3  47                   inc edi
// 00569dc4  3bfd                 cmp edi, ebp
// 00569dc6  7cc8                 jl 0x569d90
// 00569dc8  5f                   pop edi
// 00569dc9  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 00569dd0  5d                   pop ebp
// 00569dd1  5e                   pop esi
// 00569dd2  5b                   pop ebx
// 00569dd3  59                   pop ecx
// 00569dd4  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
