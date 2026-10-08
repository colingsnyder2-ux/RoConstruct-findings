// from server: 100% by auto
// roc 2008-06 00486eb0  unit: G3D::Shader  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486eb0
//
// 00486eb0  6aff                 push -1
// 00486eb2  6858577c00           push 0x7c5758
// 00486eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00486ebd  50                   push eax
// 00486ebe  64892500000000       mov dword ptr fs:[0], esp
// 00486ec5  83ec48               sub esp, 0x48
// 00486ec8  d9ee                 fldz 
// 00486eca  55                   push ebp
// 00486ecb  d9542410             fst dword ptr [esp + 0x10]
// 00486ecf  56                   push esi
// 00486ed0  d9542410             fst dword ptr [esp + 0x10]
// 00486ed4  57                   push edi
// 00486ed5  d9542410             fst dword ptr [esp + 0x10]
// 00486ed9  8bf9                 mov edi, ecx
// 00486edb  d954240c             fst dword ptr [esp + 0xc]
// 00486edf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00486ee7  d9542428             fst dword ptr [esp + 0x28]
// 00486eeb  d9542424             fst dword ptr [esp + 0x24]
// 00486eef  d9542420             fst dword ptr [esp + 0x20]
// 00486ef3  d954241c             fst dword ptr [esp + 0x1c]
// 00486ef7  d9542438             fst dword ptr [esp + 0x38]
// 00486efb  d9542434             fst dword ptr [esp + 0x34]
// 00486eff  d9542430             fst dword ptr [esp + 0x30]
// 00486f03  d954242c             fst dword ptr [esp + 0x2c]
// 00486f07  d9542448             fst dword ptr [esp + 0x48]
// 00486f0b  d9542444             fst dword ptr [esp + 0x44]
// 00486f0f  d9542440             fst dword ptr [esp + 0x40]
// 00486f13  d95c243c             fstp dword ptr [esp + 0x3c]
// 00486f17  8b742468             mov esi, dword ptr [esp + 0x68]
// 00486f1b  8b0e                 mov ecx, dword ptr [esi]
// 00486f1d  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00486f25  e8d6c7feff           call 0x473700
// 00486f2a  8b36                 mov esi, dword ptr [esi]
// 00486f2c  8b2dac218000         mov ebp, dword ptr [0x8021ac]
// 00486f32  89442450             mov dword ptr [esp + 0x50], eax
// 00486f36  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00486f3a  3bf0                 cmp esi, eax
// 00486f3c  7441                 je 0x486f7f
// 00486f3e  85c0                 test eax, eax
// 00486f40  742b                 je 0x486f6d
// 00486f42  83c004               add eax, 4
// 00486f45  50                   push eax
// 00486f46  ffd5                 call ebp
// 00486f48  85c0                 test eax, eax
// 00486f4a  7519                 jne 0x486f65
// 00486f4c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00486f50  e83b3efdff           call 0x45ad90
// 00486f55  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00486f59  85c9                 test ecx, ecx
// 00486f5b  7408                 je 0x486f65
// 00486f5d  8b01                 mov eax, dword ptr [ecx]
// 00486f5f  8b10                 mov edx, dword ptr [eax]
// 00486f61  6a01                 push 1
// 00486f63  ffd2                 call edx
// 00486f65  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00486f6d  85f6                 test esi, esi
// 00486f6f  740e                 je 0x486f7f
// 00486f71  8d4604               lea eax, [esi + 4]
// 00486f74  50                   push eax
// 00486f75  89742450             mov dword ptr [esp + 0x50], esi
// 00486f79  ff15b0218000         call dword ptr [0x8021b0]
// 00486f7f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00486f83  8d44240c             lea eax, [esp + 0xc]
// 00486f87  50                   push eax
// 00486f88  51                   push ecx
// 00486f89  8bcf                 mov ecx, edi
// 00486f8b  e800faffff           call 0x486990
// 00486f90  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00486f94  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00486f9c  85c0                 test eax, eax
// 00486f9e  7423                 je 0x486fc3
// 00486fa0  83c004               add eax, 4
// 00486fa3  50                   push eax
// 00486fa4  ffd5                 call ebp
// 00486fa6  85c0                 test eax, eax
// 00486fa8  7519                 jne 0x486fc3
// 00486faa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00486fae  e8dd3dfdff           call 0x45ad90
// 00486fb3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00486fb7  85c9                 test ecx, ecx
// 00486fb9  7408                 je 0x486fc3
// 00486fbb  8b11                 mov edx, dword ptr [ecx]
// 00486fbd  8b02                 mov eax, dword ptr [edx]
// 00486fbf  6a01                 push 1
// 00486fc1  ffd0                 call eax
// 00486fc3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00486fc7  5f                   pop edi
// 00486fc8  5e                   pop esi
// 00486fc9  5d                   pop ebp
// 00486fca  64890d00000000       mov dword ptr fs:[0], ecx
// 00486fd1  83c454               add esp, 0x54
// 00486fd4  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
