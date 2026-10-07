// roc 2011-06 007db4d0  unit: seg_007d0000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db4d0
//
// 007db4d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007db4d4  53                   push ebx
// 007db4d5  55                   push ebp
// 007db4d6  56                   push esi
// 007db4d7  8b7130               mov esi, dword ptr [ecx + 0x30]
// 007db4da  8b1e                 mov ebx, dword ptr [esi]
// 007db4dc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007db4df  8d6b34               lea ebp, [ebx + 0x34]
// 007db4e2  57                   push edi
// 007db4e3  8b7d00               mov edi, dword ptr [ebp]
// 007db4e6  40                   inc eax
// 007db4e7  3bc7                 cmp eax, edi
// 007db4e9  7e24                 jle 0x7db50f
// 007db4eb  8b5310               mov edx, dword ptr [ebx + 0x10]
// 007db4ee  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007db4f1  6810e2ab00           push 0xabe210
// 007db4f6  68ffff0300           push 0x3ffff
// 007db4fb  6a04                 push 4
// 007db4fd  55                   push ebp
// 007db4fe  52                   push edx
// 007db4ff  50                   push eax
// 007db500  e88bf9ffff           call 0x7dae90
// 007db505  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007db509  83c418               add esp, 0x18
// 007db50c  894310               mov dword ptr [ebx + 0x10], eax
// 007db50f  3b7d00               cmp edi, dword ptr [ebp]
// 007db512  7d10                 jge 0x7db524
// 007db514  8b5310               mov edx, dword ptr [ebx + 0x10]
// 007db517  c704ba00000000       mov dword ptr [edx + edi*4], 0
// 007db51e  47                   inc edi
// 007db51f  3b7d00               cmp edi, dword ptr [ebp]
// 007db522  7cf0                 jl 0x7db514
// 007db524  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007db528  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007db52b  8b5310               mov edx, dword ptr [ebx + 0x10]
// 007db52e  8b7d00               mov edi, dword ptr [ebp]
// 007db531  893c82               mov dword ptr [edx + eax*4], edi
// 007db534  ff462c               inc dword ptr [esi + 0x2c]
// 007db537  8b4500               mov eax, dword ptr [ebp]
// 007db53a  f6400503             test byte ptr [eax + 5], 3
// 007db53e  7414                 je 0x7db554
// 007db540  f6430504             test byte ptr [ebx + 5], 4
// 007db544  740e                 je 0x7db554
// 007db546  50                   push eax
// 007db547  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007db54a  53                   push ebx
// 007db54b  50                   push eax
// 007db54c  e83fbdffff           call 0x7d7290
// 007db551  83c40c               add esp, 0xc
// 007db554  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007db557  49                   dec ecx
// 007db558  51                   push ecx
// 007db559  6a00                 push 0
// 007db55b  6a24                 push 0x24
// 007db55d  56                   push esi
// 007db55e  e87d720100           call 0x7f27e0
// 007db563  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007db567  83caff               or edx, 0xffffffff
// 007db56a  895110               mov dword ptr [ecx + 0x10], edx
// 007db56d  895114               mov dword ptr [ecx + 0x14], edx
// 007db570  c7010b000000         mov dword ptr [ecx], 0xb
// 007db576  894108               mov dword ptr [ecx + 8], eax
// 007db579  8b5500               mov edx, dword ptr [ebp]
// 007db57c  33db                 xor ebx, ebx
// 007db57e  83c410               add esp, 0x10
// 007db581  385a48               cmp byte ptr [edx + 0x48], bl
// 007db584  7638                 jbe 0x7db5be
// 007db586  8d7d33               lea edi, [ebp + 0x33]
// 007db589  8da42400000000       lea esp, [esp]
// 007db590  0fb64701             movzx eax, byte ptr [edi + 1]
// 007db594  33c9                 xor ecx, ecx
// 007db596  803f06               cmp byte ptr [edi], 6
// 007db599  6a00                 push 0
// 007db59b  0f94c1               sete cl
// 007db59e  50                   push eax
// 007db59f  6a00                 push 0
// 007db5a1  49                   dec ecx
// 007db5a2  83e104               and ecx, 4
// 007db5a5  51                   push ecx
// 007db5a6  56                   push esi
// 007db5a7  e804720100           call 0x7f27b0
// 007db5ac  8b5500               mov edx, dword ptr [ebp]
// 007db5af  0fb64248             movzx eax, byte ptr [edx + 0x48]
// 007db5b3  43                   inc ebx
// 007db5b4  83c414               add esp, 0x14
// 007db5b7  83c702               add edi, 2
// 007db5ba  3bd8                 cmp ebx, eax
// 007db5bc  7cd2                 jl 0x7db590
// 007db5be  5f                   pop edi
// 007db5bf  5e                   pop esi
// 007db5c0  5d                   pop ebp
// 007db5c1  5b                   pop ebx
// 007db5c2  c3                   ret 
// library lua-5.1.4/lparser.c (function _pushclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
