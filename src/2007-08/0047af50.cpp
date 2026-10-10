// from server: 100% by tester
// roc 2007-03 00730850  unit: seg_00730000  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00730850
//
// 00730850  6aff                 push -1
// 00730852  68c0ce7600           push 0x76cec0
// 00730857  64a100000000         mov eax, dword ptr fs:[0]
// 0073085d  50                   push eax
// 0073085e  83ec3c               sub esp, 0x3c
// 00730861  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00730866  33c4                 xor eax, esp
// 00730868  89442438             mov dword ptr [esp + 0x38], eax
// 0073086c  56                   push esi
// 0073086d  57                   push edi
// 0073086e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00730873  33c4                 xor eax, esp
// 00730875  50                   push eax
// 00730876  8d442448             lea eax, [esp + 0x48]
// 0073087a  64a300000000         mov dword ptr fs:[0], eax
// 00730880  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00730884  8bf1                 mov esi, ecx
// 00730886  8b442460             mov eax, dword ptr [esp + 0x60]
// 0073088a  50                   push eax
// 0073088b  8d4c2410             lea ecx, [esp + 0x10]
// 0073088f  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00730897  e824f0ffff           call 0x72f8c0
// 0073089c  57                   push edi
// 0073089d  8d4c2414             lea ecx, [esp + 0x14]
// 007308a1  c644245401           mov byte ptr [esp + 0x54], 1
// 007308a6  ff154ce77700         call dword ptr [0x77e74c]
// 007308ac  dd442470             fld qword ptr [esp + 0x70]
// 007308b0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007308b4  dd5c243c             fstp qword ptr [esp + 0x3c]
// 007308b8  8b542468             mov edx, dword ptr [esp + 0x68]
// 007308bc  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007308c0  894c2430             mov dword ptr [esp + 0x30], ecx
// 007308c4  8d4c240c             lea ecx, [esp + 0xc]
// 007308c8  51                   push ecx
// 007308c9  8bce                 mov ecx, esi
// 007308cb  89542438             mov dword ptr [esp + 0x38], edx
// 007308cf  8944243c             mov dword ptr [esp + 0x3c], eax
// 007308d3  e8e8edffff           call 0x72f6c0
// 007308d8  84c0                 test al, al
// 007308da  8d4c240c             lea ecx, [esp + 0xc]
// 007308de  743d                 je 0x73091d
// 007308e0  c644245000           mov byte ptr [esp + 0x50], 0
// 007308e5  e83616d9ff           call 0x4c1f20
// 007308ea  8b742458             mov esi, dword ptr [esp + 0x58]
// 007308ee  85f6                 test esi, esi
// 007308f0  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007308f8  741f                 je 0x730919
// 007308fa  8d5604               lea edx, [esi + 4]
// 007308fd  52                   push edx
// 007308fe  ff15a8d27700         call dword ptr [0x77d2a8]
// 00730904  85c0                 test eax, eax
// 00730906  7511                 jne 0x730919
// 00730908  8bce                 mov ecx, esi
// 0073090a  e8b12ad3ff           call 0x4633c0
// 0073090f  8b06                 mov eax, dword ptr [esi]
// 00730911  8b10                 mov edx, dword ptr [eax]
// 00730913  6a01                 push 1
// 00730915  8bce                 mov ecx, esi
// 00730917  ffd2                 call edx
// 00730919  32c0                 xor al, al
// 0073091b  eb5d                 jmp 0x73097a
// 0073091d  8d442458             lea eax, [esp + 0x58]
// 00730921  50                   push eax
// 00730922  51                   push ecx
// 00730923  8bce                 mov ecx, esi
// 00730925  e826f7ffff           call 0x730050
// 0073092a  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0073092e  8bcf                 mov ecx, edi
// 00730930  e8fbf9d3ff           call 0x470330
// 00730935  014610               add dword ptr [esi + 0x10], eax
// 00730938  8bce                 mov ecx, esi
// 0073093a  e891fdffff           call 0x7306d0
// 0073093f  8d4c240c             lea ecx, [esp + 0xc]
// 00730943  c644245000           mov byte ptr [esp + 0x50], 0
// 00730948  e8d315d9ff           call 0x4c1f20
// 0073094d  85ff                 test edi, edi
// 0073094f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00730957  741f                 je 0x730978
// 00730959  8d5704               lea edx, [edi + 4]
// 0073095c  52                   push edx
// 0073095d  ff15a8d27700         call dword ptr [0x77d2a8]
// 00730963  85c0                 test eax, eax
// 00730965  7511                 jne 0x730978
// 00730967  8bcf                 mov ecx, edi
// 00730969  e8522ad3ff           call 0x4633c0
// 0073096e  8b07                 mov eax, dword ptr [edi]
// 00730970  8b10                 mov edx, dword ptr [eax]
// 00730972  6a01                 push 1
// 00730974  8bcf                 mov ecx, edi
// 00730976  ffd2                 call edx
// 00730978  b001                 mov al, 1
// 0073097a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0073097e  64890d00000000       mov dword ptr fs:[0], ecx
// 00730985  59                   pop ecx
// 00730986  5f                   pop edi
// 00730987  5e                   pop esi
// 00730988  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073098c  33cc                 xor ecx, esp
// 0073098e  e813e5eeff           call 0x61eea6
// 00730993  83c448               add esp, 0x48
// 00730996  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
