// roc 2009-06 00841f10  unit: Ogre::RbxSceneNode  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00841f10
//
// 00841f10  51                   push ecx
// 00841f11  80790400             cmp byte ptr [ecx + 4], 0
// 00841f15  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00841f19  56                   push esi
// 00841f1a  c744240400000000     mov dword ptr [esp + 4], 0
// 00841f22  7409                 je 0x841f2d
// 00841f24  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 00841f2b  7409                 je 0x841f36
// 00841f2d  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 00841f34  751c                 jne 0x841f52
// 00841f36  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00841f3a  c70600000000         mov dword ptr [esi], 0
// 00841f40  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00841f43  50                   push eax
// 00841f44  8bce                 mov ecx, esi
// 00841f46  e815d9c5ff           call 0x49f860
// 00841f4b  8bc6                 mov eax, esi
// 00841f4d  5e                   pop esi
// 00841f4e  59                   pop ecx
// 00841f4f  c20800               ret 8
// 00841f52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00841f56  c70600000000         mov dword ptr [esi], 0
// 00841f5c  8b4908               mov ecx, dword ptr [ecx + 8]
// 00841f5f  51                   push ecx
// 00841f60  8bce                 mov ecx, esi
// 00841f62  e8f9d8c5ff           call 0x49f860
// 00841f67  8bc6                 mov eax, esi
// 00841f69  5e                   pop esi
// 00841f6a  59                   pop ecx
// 00841f6b  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
