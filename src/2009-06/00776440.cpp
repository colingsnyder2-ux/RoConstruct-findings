// roc 2009-06 00776440  unit: CXTPPropExchange  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00776440
//
// 00776440  6aff                 push -1
// 00776442  6842968700           push 0x879642
// 00776447  64a100000000         mov eax, dword ptr fs:[0]
// 0077644d  50                   push eax
// 0077644e  51                   push ecx
// 0077644f  53                   push ebx
// 00776450  55                   push ebp
// 00776451  56                   push esi
// 00776452  57                   push edi
// 00776453  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00776458  33c4                 xor eax, esp
// 0077645a  50                   push eax
// 0077645b  8d442418             lea eax, [esp + 0x18]
// 0077645f  64a300000000         mov dword ptr fs:[0], eax
// 00776465  8be9                 mov ebp, ecx
// 00776467  837d2800             cmp dword ptr [ebp + 0x28], 0
// 0077646b  8d4c2414             lea ecx, [esp + 0x14]
// 0077646f  0f858c000000         jne 0x776501
// 00776475  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0077647b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0077647f  8b07                 mov eax, dword ptr [edi]
// 00776481  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00776489  85c0                 test eax, eax
// 0077648b  7657                 jbe 0x7764e4
// 0077648d  8d440001             lea eax, [eax + eax + 1]
// 00776491  50                   push eax
// 00776492  e88328faff           call 0x718d1a
// 00776497  8bf0                 mov esi, eax
// 00776499  33c0                 xor eax, eax
// 0077649b  83c404               add esp, 4
// 0077649e  3907                 cmp dword ptr [edi], eax
// 007764a0  7628                 jbe 0x7764ca
// 007764a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007764a6  8b11                 mov edx, dword ptr [ecx]
// 007764a8  0fb61410             movzx edx, byte ptr [eax + edx]
// 007764ac  80e20f               and dl, 0xf
// 007764af  80c241               add dl, 0x41
// 007764b2  881446               mov byte ptr [esi + eax*2], dl
// 007764b5  8b11                 mov edx, dword ptr [ecx]
// 007764b7  0fb61410             movzx edx, byte ptr [eax + edx]
// 007764bb  c0ea04               shr dl, 4
// 007764be  80c241               add dl, 0x41
// 007764c1  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 007764c5  40                   inc eax
// 007764c6  3b07                 cmp eax, dword ptr [edi]
// 007764c8  72dc                 jb 0x7764a6
// 007764ca  8b07                 mov eax, dword ptr [edi]
// 007764cc  56                   push esi
// 007764cd  8d4c2418             lea ecx, [esp + 0x18]
// 007764d1  c6044600             mov byte ptr [esi + eax*2], 0
// 007764d5  ff15acfc8900         call dword ptr [0x89fcac]
// 007764db  56                   push esi
// 007764dc  e8fd27faff           call 0x718cde
// 007764e1  83c404               add esp, 4
// 007764e4  8b542428             mov edx, dword ptr [esp + 0x28]
// 007764e8  6816d28a00           push 0x8ad216
// 007764ed  8d4c2418             lea ecx, [esp + 0x18]
// 007764f1  51                   push ecx
// 007764f2  52                   push edx
// 007764f3  55                   push ebp
// 007764f4  e867f8ffff           call 0x775d60
// 007764f9  83c410               add esp, 0x10
// 007764fc  e9d5000000           jmp 0x7765d6
// 00776501  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00776507  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077650b  8d442414             lea eax, [esp + 0x14]
// 0077650f  50                   push eax
// 00776510  51                   push ecx
// 00776511  55                   push ebp
// 00776512  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0077651a  e811f8ffff           call 0x775d30
// 0077651f  83c40c               add esp, 0xc
// 00776522  8d4c2414             lea ecx, [esp + 0x14]
// 00776526  85c0                 test eax, eax
// 00776528  745d                 je 0x776587
// 0077652a  ff1554fb8900         call dword ptr [0x89fb54]
// 00776530  85c0                 test eax, eax
// 00776532  0f8e9e000000         jle 0x7765d6
// 00776538  8d4c2414             lea ecx, [esp + 0x14]
// 0077653c  ff1554fb8900         call dword ptr [0x89fb54]
// 00776542  8bf8                 mov edi, eax
// 00776544  85ff                 test edi, edi
// 00776546  743b                 je 0x776583
// 00776548  8bd7                 mov edx, edi
// 0077654a  81e201000080         and edx, 0x80000001
// 00776550  7905                 jns 0x776557
// 00776552  4a                   dec edx
// 00776553  83cafe               or edx, 0xfffffffe
// 00776556  42                   inc edx
// 00776557  752a                 jne 0x776583
// 00776559  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0077655d  99                   cdq 
// 0077655e  2bc2                 sub eax, edx
// 00776560  8bf0                 mov esi, eax
// 00776562  d1fe                 sar esi, 1
// 00776564  837d0000             cmp dword ptr [ebp], 0
// 00776568  7527                 jne 0x776591
// 0077656a  56                   push esi
// 0077656b  ff1594e98900         call dword ptr [0x89e994]
// 00776571  894500               mov dword ptr [ebp], eax
// 00776574  8b442434             mov eax, dword ptr [esp + 0x34]
// 00776578  83c404               add esp, 4
// 0077657b  8930                 mov dword ptr [eax], esi
// 0077657d  837d0000             cmp dword ptr [ebp], 0
// 00776581  7516                 jne 0x776599
// 00776583  8d4c2414             lea ecx, [esp + 0x14]
// 00776587  ff1510fd8900         call dword ptr [0x89fd10]
// 0077658d  33c0                 xor eax, eax
// 0077658f  eb54                 jmp 0x7765e5
// 00776591  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00776595  3931                 cmp dword ptr [ecx], esi
// 00776597  72ea                 jb 0x776583
// 00776599  33f6                 xor esi, esi
// 0077659b  85ff                 test edi, edi
// 0077659d  7e37                 jle 0x7765d6
// 0077659f  90                   nop 
// 007765a0  8d5601               lea edx, [esi + 1]
// 007765a3  52                   push edx
// 007765a4  8d4c2418             lea ecx, [esp + 0x18]
// 007765a8  ff15e0f98900         call dword ptr [0x89f9e0]
// 007765ae  8ad8                 mov bl, al
// 007765b0  fecb                 dec bl
// 007765b2  c0e304               shl bl, 4
// 007765b5  56                   push esi
// 007765b6  8d4c2418             lea ecx, [esp + 0x18]
// 007765ba  80eb41               sub bl, 0x41
// 007765bd  ff15e0f98900         call dword ptr [0x89f9e0]
// 007765c3  8b5500               mov edx, dword ptr [ebp]
// 007765c6  8bce                 mov ecx, esi
// 007765c8  02c3                 add al, bl
// 007765ca  d1e9                 shr ecx, 1
// 007765cc  83c602               add esi, 2
// 007765cf  3bf7                 cmp esi, edi
// 007765d1  880411               mov byte ptr [ecx + edx], al
// 007765d4  7cca                 jl 0x7765a0
// 007765d6  8d4c2414             lea ecx, [esp + 0x14]
// 007765da  ff1510fd8900         call dword ptr [0x89fd10]
// 007765e0  b801000000           mov eax, 1
// 007765e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007765e9  64890d00000000       mov dword ptr fs:[0], ecx
// 007765f0  59                   pop ecx
// 007765f1  5f                   pop edi
// 007765f2  5e                   pop esi
// 007765f3  5d                   pop ebp
// 007765f4  5b                   pop ebx
// 007765f5  83c410               add esp, 0x10
// 007765f8  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchange@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp