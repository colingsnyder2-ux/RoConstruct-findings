// roc 2007-03 0072f660  unit: seg_00720000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f660
//
// 0072f660  56                   push esi
// 0072f661  8bf1                 mov esi, ecx
// 0072f663  8b4620               mov eax, dword ptr [esi + 0x20]
// 0072f666  57                   push edi
// 0072f667  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0072f66b  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0072f66e  7544                 jne 0x72f6b4
// 0072f670  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0072f673  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 0072f676  753c                 jne 0x72f6b4
// 0072f678  8b5628               mov edx, dword ptr [esi + 0x28]
// 0072f67b  3b5728               cmp edx, dword ptr [edi + 0x28]
// 0072f67e  7534                 jne 0x72f6b4
// 0072f680  8d4704               lea eax, [edi + 4]
// 0072f683  50                   push eax
// 0072f684  8d4e04               lea ecx, [esi + 4]
// 0072f687  51                   push ecx
// 0072f688  ff15ece67700         call dword ptr [0x77e6ec]
// 0072f68e  83c408               add esp, 8
// 0072f691  84c0                 test al, al
// 0072f693  741f                 je 0x72f6b4
// 0072f695  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0072f698  3b572c               cmp edx, dword ptr [edi + 0x2c]
// 0072f69b  7517                 jne 0x72f6b4
// 0072f69d  dd4730               fld qword ptr [edi + 0x30]
// 0072f6a0  dc5e30               fcomp qword ptr [esi + 0x30]
// 0072f6a3  dfe0                 fnstsw ax
// 0072f6a5  f6c444               test ah, 0x44
// 0072f6a8  7a0a                 jp 0x72f6b4
// 0072f6aa  5f                   pop edi
// 0072f6ab  b801000000           mov eax, 1
// 0072f6b0  5e                   pop esi
// 0072f6b1  c20400               ret 4
// 0072f6b4  5f                   pop edi
// 0072f6b5  33c0                 xor eax, eax
// 0072f6b7  5e                   pop esi
// 0072f6b8  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ??8TextureArgs@TextureManager@G3D@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
