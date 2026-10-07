// roc 2007-08 00479d60  unit: G3D::TextureManager::TextureArgs  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479d60
//
// 00479d60  56                   push esi
// 00479d61  8bf1                 mov esi, ecx
// 00479d63  8b4620               mov eax, dword ptr [esi + 0x20]
// 00479d66  57                   push edi
// 00479d67  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00479d6b  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00479d6e  7544                 jne 0x479db4
// 00479d70  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00479d73  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 00479d76  753c                 jne 0x479db4
// 00479d78  8b5628               mov edx, dword ptr [esi + 0x28]
// 00479d7b  3b5728               cmp edx, dword ptr [edi + 0x28]
// 00479d7e  7534                 jne 0x479db4
// 00479d80  8d4704               lea eax, [edi + 4]
// 00479d83  50                   push eax
// 00479d84  8d4e04               lea ecx, [esi + 4]
// 00479d87  51                   push ecx
// 00479d88  ff1594e67700         call dword ptr [0x77e694]
// 00479d8e  83c408               add esp, 8
// 00479d91  84c0                 test al, al
// 00479d93  741f                 je 0x479db4
// 00479d95  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00479d98  3b572c               cmp edx, dword ptr [edi + 0x2c]
// 00479d9b  7517                 jne 0x479db4
// 00479d9d  dd4730               fld qword ptr [edi + 0x30]
// 00479da0  dc5e30               fcomp qword ptr [esi + 0x30]
// 00479da3  dfe0                 fnstsw ax
// 00479da5  f6c444               test ah, 0x44
// 00479da8  7a0a                 jp 0x479db4
// 00479daa  5f                   pop edi
// 00479dab  b801000000           mov eax, 1
// 00479db0  5e                   pop esi
// 00479db1  c20400               ret 4
// 00479db4  5f                   pop edi
// 00479db5  33c0                 xor eax, eax
// 00479db7  5e                   pop esi
// 00479db8  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??8TextureArgs@TextureManager@G3D@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
