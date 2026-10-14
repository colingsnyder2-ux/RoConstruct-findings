// roc 2008-06 00477f00  unit: G3D::VARArea  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477f00
//
// 00477f00  8b442404             mov eax, dword ptr [esp + 4]
// 00477f04  83f807               cmp eax, 7
// 00477f07  7775                 ja 0x477f7e
// 00477f09  ff2485847f4700       jmp dword ptr [eax*4 + 0x477f84]
// 00477f10  8b442408             mov eax, dword ptr [esp + 8]
// 00477f14  99                   cdq 
// 00477f15  2bc2                 sub eax, edx
// 00477f17  d1f8                 sar eax, 1
// 00477f19  01413c               add dword ptr [ecx + 0x3c], eax
// 00477f1c  c20800               ret 8
// 00477f1f  8b442408             mov eax, dword ptr [esp + 8]
// 00477f23  48                   dec eax
// 00477f24  01413c               add dword ptr [ecx + 0x3c], eax
// 00477f27  c20800               ret 8
// 00477f2a  8b542408             mov edx, dword ptr [esp + 8]
// 00477f2e  b856555555           mov eax, 0x55555556
// 00477f33  f7ea                 imul edx
// 00477f35  8bc2                 mov eax, edx
// 00477f37  c1e81f               shr eax, 0x1f
// 00477f3a  03c2                 add eax, edx
// 00477f3c  01413c               add dword ptr [ecx + 0x3c], eax
// 00477f3f  c20800               ret 8
// 00477f42  8b542408             mov edx, dword ptr [esp + 8]
// 00477f46  83c2fe               add edx, -2
// 00477f49  01513c               add dword ptr [ecx + 0x3c], edx
// 00477f4c  c20800               ret 8
// 00477f4f  8b442408             mov eax, dword ptr [esp + 8]
// 00477f53  99                   cdq 
// 00477f54  83e203               and edx, 3
// 00477f57  03c2                 add eax, edx
// 00477f59  c1f802               sar eax, 2
// 00477f5c  03c0                 add eax, eax
// 00477f5e  01413c               add dword ptr [ecx + 0x3c], eax
// 00477f61  c20800               ret 8
// 00477f64  8b442408             mov eax, dword ptr [esp + 8]
// 00477f68  99                   cdq 
// 00477f69  2bc2                 sub eax, edx
// 00477f6b  d1f8                 sar eax, 1
// 00477f6d  8d4400fe             lea eax, [eax + eax - 2]
// 00477f71  01413c               add dword ptr [ecx + 0x3c], eax
// 00477f74  c20800               ret 8
// 00477f77  8b542408             mov edx, dword ptr [esp + 8]
// 00477f7b  01513c               add dword ptr [ecx + 0x3c], edx
// 00477f7e  c20800               ret 8
// 00477f81  8d4900               lea ecx, [ecx]
// 00477f84  107f47               adc byte ptr [edi + 0x47], bh
// 00477f87  001f                 add byte ptr [edi], bl
// 00477f89  7f47                 jg 0x477fd2
// 00477f8b  002a                 add byte ptr [edx], ch
// 00477f8d  7f47                 jg 0x477fd6
// 00477f8f  00427f               add byte ptr [edx + 0x7f], al
// 00477f92  47                   inc edi
// 00477f93  00427f               add byte ptr [edx + 0x7f], al
// 00477f96  47                   inc edi
// 00477f97  004f7f               add byte ptr [edi + 0x7f], cl
// 00477f9a  47                   inc edi
// 00477f9b  00647f47             add byte ptr [edi + edi*2 + 0x47], ah
// 00477f9f  00777f               add byte ptr [edi + 0x7f], dh
// 00477fa2  47                   inc edi
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?countTriangles@RenderDevice@G3D@@AAEXW4Primitive@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
