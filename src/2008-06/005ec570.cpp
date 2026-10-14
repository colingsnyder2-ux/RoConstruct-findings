// roc 2008-06 005ec570  unit: RBX::Sky  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ec570
//
// 005ec570  8b442404             mov eax, dword ptr [esp + 4]
// 005ec574  83f805               cmp eax, 5
// 005ec577  0f8718010000         ja 0x5ec695
// 005ec57d  ff2485c4c65e00       jmp dword ptr [eax*4 + 0x5ec6c4]
// 005ec584  b801000000           mov eax, 1
// 005ec589  840548ae9700         test byte ptr [0x97ae48], al
// 005ec58f  7515                 jne 0x5ec5a6
// 005ec591  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec597  6a00                 push 0
// 005ec599  683cae9700           push 0x97ae3c
// 005ec59e  e89dfcffff           call 0x5ec240
// 005ec5a3  83c408               add esp, 8
// 005ec5a6  b83cae9700           mov eax, 0x97ae3c
// 005ec5ab  c3                   ret 
// 005ec5ac  b802000000           mov eax, 2
// 005ec5b1  840548ae9700         test byte ptr [0x97ae48], al
// 005ec5b7  7515                 jne 0x5ec5ce
// 005ec5b9  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec5bf  6a01                 push 1
// 005ec5c1  6830ae9700           push 0x97ae30
// 005ec5c6  e875fcffff           call 0x5ec240
// 005ec5cb  83c408               add esp, 8
// 005ec5ce  b830ae9700           mov eax, 0x97ae30
// 005ec5d3  c3                   ret 
// 005ec5d4  b804000000           mov eax, 4
// 005ec5d9  840548ae9700         test byte ptr [0x97ae48], al
// 005ec5df  7515                 jne 0x5ec5f6
// 005ec5e1  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec5e7  6a02                 push 2
// 005ec5e9  6824ae9700           push 0x97ae24
// 005ec5ee  e84dfcffff           call 0x5ec240
// 005ec5f3  83c408               add esp, 8
// 005ec5f6  b824ae9700           mov eax, 0x97ae24
// 005ec5fb  c3                   ret 
// 005ec5fc  b808000000           mov eax, 8
// 005ec601  840548ae9700         test byte ptr [0x97ae48], al
// 005ec607  7520                 jne 0x5ec629
// 005ec609  d9ee                 fldz 
// 005ec60b  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec611  d9151cae9700         fst dword ptr [0x97ae1c]
// 005ec617  d91d20ae9700         fstp dword ptr [0x97ae20]
// 005ec61d  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ec623  d91d18ae9700         fstp dword ptr [0x97ae18]
// 005ec629  b818ae9700           mov eax, 0x97ae18
// 005ec62e  c3                   ret 
// 005ec62f  b810000000           mov eax, 0x10
// 005ec634  840548ae9700         test byte ptr [0x97ae48], al
// 005ec63a  7520                 jne 0x5ec65c
// 005ec63c  d9ee                 fldz 
// 005ec63e  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec644  d9150cae9700         fst dword ptr [0x97ae0c]
// 005ec64a  d91d14ae9700         fstp dword ptr [0x97ae14]
// 005ec650  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ec656  d91d10ae9700         fstp dword ptr [0x97ae10]
// 005ec65c  b80cae9700           mov eax, 0x97ae0c
// 005ec661  c3                   ret 
// 005ec662  b820000000           mov eax, 0x20
// 005ec667  840548ae9700         test byte ptr [0x97ae48], al
// 005ec66d  7520                 jne 0x5ec68f
// 005ec66f  d9ee                 fldz 
// 005ec671  090548ae9700         or dword ptr [0x97ae48], eax
// 005ec677  d91500ae9700         fst dword ptr [0x97ae00]
// 005ec67d  d91d04ae9700         fstp dword ptr [0x97ae04]
// 005ec683  d905b8c38100         fld dword ptr [0x81c3b8]
// 005ec689  d91d08ae9700         fstp dword ptr [0x97ae08]
// 005ec68f  b800ae9700           mov eax, 0x97ae00
// 005ec694  c3                   ret 
// 005ec695  b801000000           mov eax, 1
// 005ec69a  840550f09600         test byte ptr [0x96f050], al
// 005ec6a0  751a                 jne 0x5ec6bc
// 005ec6a2  d9ee                 fldz 
// 005ec6a4  090550f09600         or dword ptr [0x96f050], eax
// 005ec6aa  d91544f09600         fst dword ptr [0x96f044]
// 005ec6b0  d91548f09600         fst dword ptr [0x96f048]
// 005ec6b6  d91d4cf09600         fstp dword ptr [0x96f04c]
// 005ec6bc  b844f09600           mov eax, 0x96f044
// 005ec6c1  c3                   ret 
// 005ec6c2  8bff                 mov edi, edi
// 005ec6c4  84c5                 test ch, al
// 005ec6c6  5e                   pop esi
// 005ec6c7  00acc55e00d4c5       add byte ptr [ebp + eax*8 - 0x3a2bffa2], ch
// 005ec6ce  5e                   pop esi
// 005ec6cf  00fc                 add ah, bh
// 005ec6d1  c55e00               lds ebx, ptr [esi]
// 005ec6d4  2f                   das 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToVector3@RBX@@YAABVVector3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
