// roc 2007-08 005085b0  unit: G3D::GCamera  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005085b0
//
// 005085b0  53                   push ebx
// 005085b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005085b5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005085b8  55                   push ebp
// 005085b9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005085bd  394514               cmp dword ptr [ebp + 0x14], eax
// 005085c0  7259                 jb 0x50861b
// 005085c2  56                   push esi
// 005085c3  33f6                 xor esi, esi
// 005085c5  85c0                 test eax, eax
// 005085c7  57                   push edi
// 005085c8  7e43                 jle 0x50860d
// 005085ca  3bf0                 cmp esi, eax
// 005085cc  7606                 jbe 0x5085d4
// 005085ce  ff15d8e67700         call dword ptr [0x77e6d8]
// 005085d4  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005085d8  7205                 jb 0x5085df
// 005085da  8b7b04               mov edi, dword ptr [ebx + 4]
// 005085dd  eb03                 jmp 0x5085e2
// 005085df  8d7b04               lea edi, [ebx + 4]
// 005085e2  3b7514               cmp esi, dword ptr [ebp + 0x14]
// 005085e5  7606                 jbe 0x5085ed
// 005085e7  ff15d8e67700         call dword ptr [0x77e6d8]
// 005085ed  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005085f1  7205                 jb 0x5085f8
// 005085f3  8b4504               mov eax, dword ptr [ebp + 4]
// 005085f6  eb03                 jmp 0x5085fb
// 005085f8  8d4504               lea eax, [ebp + 4]
// 005085fb  8a0c37               mov cl, byte ptr [edi + esi]
// 005085fe  3a0c30               cmp cl, byte ptr [eax + esi]
// 00508601  7511                 jne 0x508614
// 00508603  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00508606  83c601               add esi, 1
// 00508609  3bf0                 cmp esi, eax
// 0050860b  7cbf                 jl 0x5085cc
// 0050860d  5f                   pop edi
// 0050860e  5e                   pop esi
// 0050860f  5d                   pop ebp
// 00508610  b001                 mov al, 1
// 00508612  5b                   pop ebx
// 00508613  c3                   ret 
// 00508614  5f                   pop edi
// 00508615  5e                   pop esi
// 00508616  5d                   pop ebp
// 00508617  32c0                 xor al, al
// 00508619  5b                   pop ebx
// 0050861a  c3                   ret 
// 0050861b  5d                   pop ebp
// 0050861c  32c0                 xor al, al
// 0050861e  5b                   pop ebx
// 0050861f  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?beginsWith@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
