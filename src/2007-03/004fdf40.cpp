// roc 2007-03 004fdf40  unit: seg_004f0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fdf40
//
// 004fdf40  56                   push esi
// 004fdf41  8bf1                 mov esi, ecx
// 004fdf43  8b4604               mov eax, dword ptr [esi + 4]
// 004fdf46  3b4608               cmp eax, dword ptr [esi + 8]
// 004fdf49  8b0e                 mov ecx, dword ptr [esi]
// 004fdf4b  7d14                 jge 0x4fdf61
// 004fdf4d  03c8                 add ecx, eax
// 004fdf4f  7408                 je 0x4fdf59
// 004fdf51  8b442408             mov eax, dword ptr [esp + 8]
// 004fdf55  8a10                 mov dl, byte ptr [eax]
// 004fdf57  8811                 mov byte ptr [ecx], dl
// 004fdf59  83460401             add dword ptr [esi + 4], 1
// 004fdf5d  5e                   pop esi
// 004fdf5e  c20400               ret 4
// 004fdf61  57                   push edi
// 004fdf62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fdf66  3bf9                 cmp edi, ecx
// 004fdf68  721d                 jb 0x4fdf87
// 004fdf6a  03c8                 add ecx, eax
// 004fdf6c  3bf9                 cmp edi, ecx
// 004fdf6e  7317                 jae 0x4fdf87
// 004fdf70  8a07                 mov al, byte ptr [edi]
// 004fdf72  8d4c240c             lea ecx, [esp + 0xc]
// 004fdf76  51                   push ecx
// 004fdf77  8bce                 mov ecx, esi
// 004fdf79  88442410             mov byte ptr [esp + 0x10], al
// 004fdf7d  e8beffffff           call 0x4fdf40
// 004fdf82  5f                   pop edi
// 004fdf83  5e                   pop esi
// 004fdf84  c20400               ret 4
// 004fdf87  6a00                 push 0
// 004fdf89  83c001               add eax, 1
// 004fdf8c  50                   push eax
// 004fdf8d  8bce                 mov ecx, esi
// 004fdf8f  e89cfeffff           call 0x4fde30
// 004fdf94  8a0f                 mov cl, byte ptr [edi]
// 004fdf96  8b5604               mov edx, dword ptr [esi + 4]
// 004fdf99  8b06                 mov eax, dword ptr [esi]
// 004fdf9b  5f                   pop edi
// 004fdf9c  884c02ff             mov byte ptr [edx + eax - 1], cl
// 004fdfa0  5e                   pop esi
// 004fdfa1  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextOutput.cpp
