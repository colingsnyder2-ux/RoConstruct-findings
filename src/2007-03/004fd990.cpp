// roc 2007-03 004fd990  unit: seg_004f0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd990
//
// 004fd990  56                   push esi
// 004fd991  8bf1                 mov esi, ecx
// 004fd993  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fd996  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004fd999  83c004               add eax, 4
// 004fd99c  3bc8                 cmp ecx, eax
// 004fd99e  7c02                 jl 0x4fd9a2
// 004fd9a0  8bc1                 mov eax, ecx
// 004fd9a2  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004fd9a5  894634               mov dword ptr [esi + 0x34], eax
// 004fd9a8  7e0a                 jle 0x4fd9b4
// 004fd9aa  51                   push ecx
// 004fd9ab  6a04                 push 4
// 004fd9ad  8bce                 mov ecx, esi
// 004fd9af  e8dcfeffff           call 0x4fd890
// 004fd9b4  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 004fd9b8  743b                 je 0x4fd9f5
// 004fd9ba  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fd9bd  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004fd9c0  8a54240b             mov dl, byte ptr [esp + 0xb]
// 004fd9c4  881408               mov byte ptr [eax + ecx], dl
// 004fd9c7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fd9ca  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004fd9cd  8a54240a             mov dl, byte ptr [esp + 0xa]
// 004fd9d1  88540801             mov byte ptr [eax + ecx + 1], dl
// 004fd9d5  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fd9d8  8b5630               mov edx, dword ptr [esi + 0x30]
// 004fd9db  8b442408             mov eax, dword ptr [esp + 8]
// 004fd9df  88641102             mov byte ptr [ecx + edx + 2], ah
// 004fd9e3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fd9e6  8b5630               mov edx, dword ptr [esi + 0x30]
// 004fd9e9  88441103             mov byte ptr [ecx + edx + 3], al
// 004fd9ed  83463c04             add dword ptr [esi + 0x3c], 4
// 004fd9f1  5e                   pop esi
// 004fd9f2  c20400               ret 4
// 004fd9f5  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fd9f8  8b4630               mov eax, dword ptr [esi + 0x30]
// 004fd9fb  8b542408             mov edx, dword ptr [esp + 8]
// 004fd9ff  891408               mov dword ptr [eax + ecx], edx
// 004fda02  83463c04             add dword ptr [esi + 0x3c], 4
// 004fda06  5e                   pop esi
// 004fda07  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?writeUInt32@BinaryOutput@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
