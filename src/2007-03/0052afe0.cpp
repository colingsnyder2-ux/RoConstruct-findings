// roc 2007-03 0052afe0  unit: seg_00520000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052afe0
//
// 0052afe0  53                   push ebx
// 0052afe1  56                   push esi
// 0052afe2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052afe6  8b4604               mov eax, dword ptr [esi + 4]
// 0052afe9  8b08                 mov ecx, dword ptr [eax]
// 0052afeb  57                   push edi
// 0052afec  6a20                 push 0x20
// 0052afee  6a01                 push 1
// 0052aff0  56                   push esi
// 0052aff1  ffd1                 call ecx
// 0052aff3  8bf8                 mov edi, eax
// 0052aff5  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 0052affb  33db                 xor ebx, ebx
// 0052affd  83c40c               add esp, 0xc
// 0052b000  c70790ad5200         mov dword ptr [edi], 0x52ad90
// 0052b006  c7470440af5200       mov dword ptr [edi + 4], 0x52af40
// 0052b00d  c7470870af5200       mov dword ptr [edi + 8], 0x52af70
// 0052b014  885f0d               mov byte ptr [edi + 0xd], bl
// 0052b017  e8d4f4ffff           call 0x52a4f0
// 0052b01c  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 0052b022  7407                 je 0x52b02b
// 0052b024  e8a7f6ffff           call 0x52a6d0
// 0052b029  eb10                 jmp 0x52b03b
// 0052b02b  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 0052b031  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 0052b03b  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 0052b041  7407                 je 0x52b04a
// 0052b043  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 0052b04a  385c2414             cmp byte ptr [esp + 0x14], bl
// 0052b04e  7412                 je 0x52b062
// 0052b050  8a96b2000000         mov dl, byte ptr [esi + 0xb2]
// 0052b056  f6da                 neg dl
// 0052b058  1bd2                 sbb edx, edx
// 0052b05a  83c202               add edx, 2
// 0052b05d  895710               mov dword ptr [edi + 0x10], edx
// 0052b060  eb03                 jmp 0x52b065
// 0052b062  895f10               mov dword ptr [edi + 0x10], ebx
// 0052b065  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0052b068  895f14               mov dword ptr [edi + 0x14], ebx
// 0052b06b  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 0052b071  740f                 je 0x52b082
// 0052b073  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0052b079  03c0                 add eax, eax
// 0052b07b  894718               mov dword ptr [edi + 0x18], eax
// 0052b07e  5f                   pop edi
// 0052b07f  5e                   pop esi
// 0052b080  5b                   pop ebx
// 0052b081  c3                   ret 
// 0052b082  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0052b088  894f18               mov dword ptr [edi + 0x18], ecx
// 0052b08b  5f                   pop edi
// 0052b08c  5e                   pop esi
// 0052b08d  5b                   pop ebx
// 0052b08e  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
