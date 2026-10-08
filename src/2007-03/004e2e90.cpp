// roc 2007-03 004e2e90  unit: seg_004e0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2e90
//
// 004e2e90  8b4108               mov eax, dword ptr [ecx + 8]
// 004e2e93  56                   push esi
// 004e2e94  8b742408             mov esi, dword ptr [esp + 8]
// 004e2e98  8b5608               mov edx, dword ptr [esi + 8]
// 004e2e9b  3bc2                 cmp eax, edx
// 004e2e9d  7306                 jae 0x4e2ea5
// 004e2e9f  b001                 mov al, 1
// 004e2ea1  5e                   pop esi
// 004e2ea2  c20400               ret 4
// 004e2ea5  7606                 jbe 0x4e2ead
// 004e2ea7  32c0                 xor al, al
// 004e2ea9  5e                   pop esi
// 004e2eaa  c20400               ret 4
// 004e2ead  8a01                 mov al, byte ptr [ecx]
// 004e2eaf  8a16                 mov dl, byte ptr [esi]
// 004e2eb1  3ac2                 cmp al, dl
// 004e2eb3  72ea                 jb 0x4e2e9f
// 004e2eb5  77f0                 ja 0x4e2ea7
// 004e2eb7  d94104               fld dword ptr [ecx + 4]
// 004e2eba  d94604               fld dword ptr [esi + 4]
// 004e2ebd  ded9                 fcompp 
// 004e2ebf  dfe0                 fnstsw ax
// 004e2ec1  f6c441               test ah, 0x41
// 004e2ec4  74d9                 je 0x4e2e9f
// 004e2ec6  d94104               fld dword ptr [ecx + 4]
// 004e2ec9  d94604               fld dword ptr [esi + 4]
// 004e2ecc  ded9                 fcompp 
// 004e2ece  dfe0                 fnstsw ax
// 004e2ed0  f6c405               test ah, 5
// 004e2ed3  7bd2                 jnp 0x4e2ea7
// 004e2ed5  8a4101               mov al, byte ptr [ecx + 1]
// 004e2ed8  3a4601               cmp al, byte ptr [esi + 1]
// 004e2edb  5e                   pop esi
// 004e2edc  0f92c0               setb al
// 004e2edf  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??MBucketKey@AggregatingSceneManager@Render@RBX@@QBE_NABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
