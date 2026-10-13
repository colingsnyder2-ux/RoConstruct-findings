// roc 2008-06 00473700  unit: G3D::ReferenceCountedObject  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473700
//
// 00473700  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 00473703  8d41fe               lea eax, [ecx - 2]
// 00473706  83f805               cmp eax, 5
// 00473709  7719                 ja 0x473724
// 0047370b  ff248528374700       jmp dword ptr [eax*4 + 0x473728]
// 00473712  b813850000           mov eax, 0x8513
// 00473717  c3                   ret 
// 00473718  b8e10d0000           mov eax, 0xde1
// 0047371d  c3                   ret 
// 0047371e  b8f5840000           mov eax, 0x84f5
// 00473723  c3                   ret 
// 00473724  33c0                 xor eax, eax
// 00473726  c3                   ret 
// 00473727  90                   nop 
// 00473728  1837                 sbb byte ptr [edi], dh
// 0047372a  47                   inc edi
// 0047372b  002437               add byte ptr [edi + esi], ah
// 0047372e  47                   inc edi
// 0047372f  001e                 add byte ptr [esi], bl
// 00473731  37                   aaa 
// 00473732  47                   inc edi
// 00473733  0012                 add byte ptr [edx], dl
// 00473735  37                   aaa 
// 00473736  47                   inc edi
// 00473737  0018                 add byte ptr [eax], bl
// 00473739  37                   aaa 
// 0047373a  47                   inc edi
// 0047373b  0012                 add byte ptr [edx], dl
// 0047373d  37                   aaa 
// 0047373e  47                   inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\Texture.cpp (function ?getOpenGLTextureTarget@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Texture.cpp
