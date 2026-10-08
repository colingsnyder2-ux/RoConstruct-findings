// roc 2009-12 005f9fc0  unit: G3D::LineSegment  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9fc0
//
// 005f9fc0  56                   push esi
// 005f9fc1  8bf1                 mov esi, ecx
// 005f9fc3  8b4604               mov eax, dword ptr [esi + 4]
// 005f9fc6  3b4608               cmp eax, dword ptr [esi + 8]
// 005f9fc9  8b0e                 mov ecx, dword ptr [esi]
// 005f9fcb  7d13                 jge 0x5f9fe0
// 005f9fcd  03c8                 add ecx, eax
// 005f9fcf  7408                 je 0x5f9fd9
// 005f9fd1  8b442408             mov eax, dword ptr [esp + 8]
// 005f9fd5  8a10                 mov dl, byte ptr [eax]
// 005f9fd7  8811                 mov byte ptr [ecx], dl
// 005f9fd9  ff4604               inc dword ptr [esi + 4]
// 005f9fdc  5e                   pop esi
// 005f9fdd  c20400               ret 4
// 005f9fe0  57                   push edi
// 005f9fe1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f9fe5  3bf9                 cmp edi, ecx
// 005f9fe7  721d                 jb 0x5fa006
// 005f9fe9  03c8                 add ecx, eax
// 005f9feb  3bf9                 cmp edi, ecx
// 005f9fed  7317                 jae 0x5fa006
// 005f9fef  8a07                 mov al, byte ptr [edi]
// 005f9ff1  8d4c240c             lea ecx, [esp + 0xc]
// 005f9ff5  51                   push ecx
// 005f9ff6  8bce                 mov ecx, esi
// 005f9ff8  88442410             mov byte ptr [esp + 0x10], al
// 005f9ffc  e8bfffffff           call 0x5f9fc0
// 005fa001  5f                   pop edi
// 005fa002  5e                   pop esi
// 005fa003  c20400               ret 4
// 005fa006  6a00                 push 0
// 005fa008  40                   inc eax
// 005fa009  50                   push eax
// 005fa00a  8bce                 mov ecx, esi
// 005fa00c  e8bffeffff           call 0x5f9ed0
// 005fa011  8a0f                 mov cl, byte ptr [edi]
// 005fa013  8b5604               mov edx, dword ptr [esi + 4]
// 005fa016  8b06                 mov eax, dword ptr [esi]
// 005fa018  5f                   pop edi
// 005fa019  884c02ff             mov byte ptr [edx + eax - 1], cl
// 005fa01d  5e                   pop esi
// 005fa01e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
