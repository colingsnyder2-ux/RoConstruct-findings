// roc 2009-12 00912c00  unit: Ogre::RbxMeshLoader  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00912c00
//
// 00912c00  51                   push ecx
// 00912c01  80790400             cmp byte ptr [ecx + 4], 0
// 00912c05  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00912c09  56                   push esi
// 00912c0a  c744240400000000     mov dword ptr [esp + 4], 0
// 00912c12  7409                 je 0x912c1d
// 00912c14  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 00912c1b  7409                 je 0x912c26
// 00912c1d  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 00912c24  751c                 jne 0x912c42
// 00912c26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00912c2a  c70600000000         mov dword ptr [esi], 0
// 00912c30  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00912c33  50                   push eax
// 00912c34  8bce                 mov ecx, esi
// 00912c36  e8358fb3ff           call 0x44bb70
// 00912c3b  8bc6                 mov eax, esi
// 00912c3d  5e                   pop esi
// 00912c3e  59                   pop ecx
// 00912c3f  c20800               ret 8
// 00912c42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00912c46  c70600000000         mov dword ptr [esi], 0
// 00912c4c  8b4908               mov ecx, dword ptr [ecx + 8]
// 00912c4f  51                   push ecx
// 00912c50  8bce                 mov ecx, esi
// 00912c52  e8198fb3ff           call 0x44bb70
// 00912c57  8bc6                 mov eax, esi
// 00912c59  5e                   pop esi
// 00912c5a  59                   pop ecx
// 00912c5b  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
