// roc 2007-08 004f9ec0  unit: G3D::Lighting  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f9ec0
//
// 004f9ec0  53                   push ebx
// 004f9ec1  55                   push ebp
// 004f9ec2  56                   push esi
// 004f9ec3  8bf1                 mov esi, ecx
// 004f9ec5  57                   push edi
// 004f9ec6  8dbe68020000         lea edi, [esi + 0x268]
// 004f9ecc  8bcf                 mov ecx, edi
// 004f9ece  e8ede20000           call 0x5081c0
// 004f9ed3  6a00                 push 0
// 004f9ed5  8d5e0c               lea ebx, [esi + 0xc]
// 004f9ed8  6a00                 push 0
// 004f9eda  8bcb                 mov ecx, ebx
// 004f9edc  e84fe0ffff           call 0x4f7f30
// 004f9ee1  6a00                 push 0
// 004f9ee3  6a00                 push 0
// 004f9ee5  8d4e30               lea ecx, [esi + 0x30]
// 004f9ee8  e803edffff           call 0x4f8bf0
// 004f9eed  6a00                 push 0
// 004f9eef  8d6e18               lea ebp, [esi + 0x18]
// 004f9ef2  6a00                 push 0
// 004f9ef4  8bcd                 mov ecx, ebp
// 004f9ef6  e835e0ffff           call 0x4f7f30
// 004f9efb  6a00                 push 0
// 004f9efd  8d4e24               lea ecx, [esi + 0x24]
// 004f9f00  6a00                 push 0
// 004f9f02  e829e0ffff           call 0x4f7f30
// 004f9f07  6a00                 push 0
// 004f9f09  6a00                 push 0
// 004f9f0b  8bce                 mov ecx, esi
// 004f9f0d  e8deecffff           call 0x4f8bf0
// 004f9f12  6a00                 push 0
// 004f9f14  6a00                 push 0
// 004f9f16  8d4e3c               lea ecx, [esi + 0x3c]
// 004f9f19  e84259ffff           call 0x4ef860
// 004f9f1e  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f9f22  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f9f26  50                   push eax
// 004f9f27  51                   push ecx
// 004f9f28  8bce                 mov ecx, esi
// 004f9f2a  e821f9ffff           call 0x4f9850
// 004f9f2f  8bce                 mov ecx, esi
// 004f9f31  e88aebffff           call 0x4f8ac0
// 004f9f36  8d8e60010000         lea ecx, [esi + 0x160]
// 004f9f3c  e87fe20000           call 0x5081c0
// 004f9f41  53                   push ebx
// 004f9f42  e8b9330000           call 0x4fd300
// 004f9f47  55                   push ebp
// 004f9f48  e8e3330000           call 0x4fd330
// 004f9f4d  8d4624               lea eax, [esi + 0x24]
// 004f9f50  50                   push eax
// 004f9f51  e80a340000           call 0x4fd360
// 004f9f56  83c40c               add esp, 0xc
// 004f9f59  8d8e60010000         lea ecx, [esi + 0x160]
// 004f9f5f  e86ce30000           call 0x5082d0
// 004f9f64  8bcf                 mov ecx, edi
// 004f9f66  e865e30000           call 0x5082d0
// 004f9f6b  8b5610               mov edx, dword ptr [esi + 0x10]
// 004f9f6e  5f                   pop edi
// 004f9f6f  8996d0020000         mov dword ptr [esi + 0x2d0], edx
// 004f9f75  5e                   pop esi
// 004f9f76  5d                   pop ebp
// 004f9f77  5b                   pop ebx
// 004f9f78  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?computeProxyArrays@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@ABVGCamera@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
