// roc 2007-08 004ef4a0  unit: RBX::Render::SceneManager  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef4a0
//
// 004ef4a0  8b4108               mov eax, dword ptr [ecx + 8]
// 004ef4a3  56                   push esi
// 004ef4a4  8b742408             mov esi, dword ptr [esp + 8]
// 004ef4a8  8b5608               mov edx, dword ptr [esi + 8]
// 004ef4ab  3bc2                 cmp eax, edx
// 004ef4ad  7306                 jae 0x4ef4b5
// 004ef4af  b001                 mov al, 1
// 004ef4b1  5e                   pop esi
// 004ef4b2  c20400               ret 4
// 004ef4b5  7606                 jbe 0x4ef4bd
// 004ef4b7  32c0                 xor al, al
// 004ef4b9  5e                   pop esi
// 004ef4ba  c20400               ret 4
// 004ef4bd  8a01                 mov al, byte ptr [ecx]
// 004ef4bf  8a16                 mov dl, byte ptr [esi]
// 004ef4c1  3ac2                 cmp al, dl
// 004ef4c3  72ea                 jb 0x4ef4af
// 004ef4c5  77f0                 ja 0x4ef4b7
// 004ef4c7  d94104               fld dword ptr [ecx + 4]
// 004ef4ca  d94604               fld dword ptr [esi + 4]
// 004ef4cd  ded9                 fcompp 
// 004ef4cf  dfe0                 fnstsw ax
// 004ef4d1  f6c441               test ah, 0x41
// 004ef4d4  74d9                 je 0x4ef4af
// 004ef4d6  d94104               fld dword ptr [ecx + 4]
// 004ef4d9  d94604               fld dword ptr [esi + 4]
// 004ef4dc  ded9                 fcompp 
// 004ef4de  dfe0                 fnstsw ax
// 004ef4e0  f6c405               test ah, 5
// 004ef4e3  7bd2                 jnp 0x4ef4b7
// 004ef4e5  8a4101               mov al, byte ptr [ecx + 1]
// 004ef4e8  3a4601               cmp al, byte ptr [esi + 1]
// 004ef4eb  5e                   pop esi
// 004ef4ec  0f92c0               setb al
// 004ef4ef  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??MBucketKey@AggregatingSceneManager@Render@RBX@@QBE_NABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
