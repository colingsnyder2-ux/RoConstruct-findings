// roc 2007-03 004fd870  unit: seg_004f0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd870
//
// 004fd870  56                   push esi
// 004fd871  8bf1                 mov esi, ecx
// 004fd873  e8a866ffff           call 0x4f3f20
// 004fd878  39442408             cmp dword ptr [esp + 8], eax
// 004fd87c  0f95c0               setne al
// 004fd87f  88462c               mov byte ptr [esi + 0x2c], al
// 004fd882  5e                   pop esi
// 004fd883  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?setEndian@BinaryOutput@G3D@@QAEXW4G3DEndian@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
