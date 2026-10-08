// roc 2007-08 004d09f0  unit: RBX::View::PartChunk  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d09f0
//
// 004d09f0  6aff                 push -1
// 004d09f2  6829c37400           push 0x74c329
// 004d09f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d09fd  50                   push eax
// 004d09fe  64892500000000       mov dword ptr fs:[0], esp
// 004d0a05  51                   push ecx
// 004d0a06  56                   push esi
// 004d0a07  8bf1                 mov esi, ecx
// 004d0a09  89742404             mov dword ptr [esp + 4], esi
// 004d0a0d  e82ef3ffff           call 0x4cfd40
// 004d0a12  33c0                 xor eax, eax
// 004d0a14  c70648f17900         mov dword ptr [esi], 0x79f148
// 004d0a1a  89442410             mov dword ptr [esp + 0x10], eax
// 004d0a1e  894628               mov dword ptr [esi + 0x28], eax
// 004d0a21  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d0a25  8a542420             mov dl, byte ptr [esp + 0x20]
// 004d0a29  88462c               mov byte ptr [esi + 0x2c], al
// 004d0a2c  894e30               mov dword ptr [esi + 0x30], ecx
// 004d0a2f  885634               mov byte ptr [esi + 0x34], dl
// 004d0a32  894638               mov dword ptr [esi + 0x38], eax
// 004d0a35  89463c               mov dword ptr [esi + 0x3c], eax
// 004d0a38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d0a3c  50                   push eax
// 004d0a3d  8d4e0c               lea ecx, [esi + 0xc]
// 004d0a40  c644241403           mov byte ptr [esp + 0x14], 3
// 004d0a45  ff1590e67700         call dword ptr [0x77e690]
// 004d0a4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d0a4f  8bc6                 mov eax, esi
// 004d0a51  5e                   pop esi
// 004d0a52  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0a59  83c410               add esp, 0x10
// 004d0a5c  c20c00               ret 0xc
// library openrbx-client/Rendering\AppDraw\AdornG3D.cpp (function ??0TextureProxy@Render@RBX@@QAE@AAVTextureManager@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/AppDraw/AdornG3D.cpp
