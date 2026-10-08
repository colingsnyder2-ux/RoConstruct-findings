// roc 2007-03 004726a0  unit: seg_00470000  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004726a0
//
// 004726a0  6aff                 push -1
// 004726a2  68e1707400           push 0x7470e1
// 004726a7  64a100000000         mov eax, dword ptr fs:[0]
// 004726ad  50                   push eax
// 004726ae  83ec0c               sub esp, 0xc
// 004726b1  53                   push ebx
// 004726b2  55                   push ebp
// 004726b3  56                   push esi
// 004726b4  57                   push edi
// 004726b5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004726ba  33c4                 xor eax, esp
// 004726bc  50                   push eax
// 004726bd  8d442420             lea eax, [esp + 0x20]
// 004726c1  64a300000000         mov dword ptr fs:[0], eax
// 004726c7  8bf9                 mov edi, ecx
// 004726c9  8b4708               mov eax, dword ptr [edi + 8]
// 004726cc  8b2f                 mov ebp, dword ptr [edi]
// 004726ce  03c0                 add eax, eax
// 004726d0  03c0                 add eax, eax
// 004726d2  6a10                 push 0x10
// 004726d4  50                   push eax
// 004726d5  896c2424             mov dword ptr [esp + 0x24], ebp
// 004726d9  e8f2140800           call 0x4f3bd0
// 004726de  8b4f08               mov ecx, dword ptr [edi + 8]
// 004726e1  8b542438             mov edx, dword ptr [esp + 0x38]
// 004726e5  83c408               add esp, 8
// 004726e8  3bd1                 cmp edx, ecx
// 004726ea  8907                 mov dword ptr [edi], eax
// 004726ec  7d02                 jge 0x4726f0
// 004726ee  8bca                 mov ecx, edx
// 004726f0  8d1c88               lea ebx, [eax + ecx*4]
// 004726f3  8bf0                 mov esi, eax
// 004726f5  3bf3                 cmp esi, ebx
// 004726f7  8bfd                 mov edi, ebp
// 004726f9  7338                 jae 0x472733
// 004726fb  8b2dacd27700         mov ebp, dword ptr [0x77d2ac]
// 00472701  85f6                 test esi, esi
// 00472703  7414                 je 0x472719
// 00472705  c70600000000         mov dword ptr [esi], 0
// 0047270b  8b07                 mov eax, dword ptr [edi]
// 0047270d  85c0                 test eax, eax
// 0047270f  7408                 je 0x472719
// 00472711  8906                 mov dword ptr [esi], eax
// 00472713  83c004               add eax, 4
// 00472716  50                   push eax
// 00472717  ffd5                 call ebp
// 00472719  83c604               add esi, 4
// 0047271c  83c704               add edi, 4
// 0047271f  3bf3                 cmp esi, ebx
// 00472721  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00472729  72d6                 jb 0x472701
// 0047272b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0047272f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00472733  8d5c9500             lea ebx, [ebp + edx*4]
// 00472737  3beb                 cmp ebp, ebx
// 00472739  8bfd                 mov edi, ebp
// 0047273b  7359                 jae 0x472796
// 0047273d  8d4900               lea ecx, [ecx]
// 00472740  8b07                 mov eax, dword ptr [edi]
// 00472742  85c0                 test eax, eax
// 00472744  7449                 je 0x47278f
// 00472746  83c004               add eax, 4
// 00472749  50                   push eax
// 0047274a  ff15a8d27700         call dword ptr [0x77d2a8]
// 00472750  85c0                 test eax, eax
// 00472752  7535                 jne 0x472789
// 00472754  8b0f                 mov ecx, dword ptr [edi]
// 00472756  8b7108               mov esi, dword ptr [ecx + 8]
// 00472759  85f6                 test esi, esi
// 0047275b  741e                 je 0x47277b
// 0047275d  8d4900               lea ecx, [ecx]
// 00472760  8b0e                 mov ecx, dword ptr [esi]
// 00472762  8b11                 mov edx, dword ptr [ecx]
// 00472764  8b4204               mov eax, dword ptr [edx + 4]
// 00472767  ffd0                 call eax
// 00472769  8bc6                 mov eax, esi
// 0047276b  8b7604               mov esi, dword ptr [esi + 4]
// 0047276e  50                   push eax
// 0047276f  e87cb91a00           call 0x61e0f0
// 00472774  83c404               add esp, 4
// 00472777  85f6                 test esi, esi
// 00472779  75e5                 jne 0x472760
// 0047277b  8b0f                 mov ecx, dword ptr [edi]
// 0047277d  85c9                 test ecx, ecx
// 0047277f  7408                 je 0x472789
// 00472781  8b11                 mov edx, dword ptr [ecx]
// 00472783  8b02                 mov eax, dword ptr [edx]
// 00472785  6a01                 push 1
// 00472787  ffd0                 call eax
// 00472789  c70700000000         mov dword ptr [edi], 0
// 0047278f  83c704               add edi, 4
// 00472792  3bfb                 cmp edi, ebx
// 00472794  72aa                 jb 0x472740
// 00472796  55                   push ebp
// 00472797  e8e40b0800           call 0x4f3380
// 0047279c  83c404               add esp, 4
// 0047279f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004727a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004727aa  59                   pop ecx
// 004727ab  5f                   pop edi
// 004727ac  5e                   pop esi
// 004727ad  5d                   pop ebp
// 004727ae  5b                   pop ebx
// 004727af  83c418               add esp, 0x18
// 004727b2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
