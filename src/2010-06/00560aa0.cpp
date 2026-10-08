// from server: 100% by auto
// roc 2010-06 00560aa0  unit: G3D::_internal::DialogTemplate  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560aa0
//
// 00560aa0  56                   push esi
// 00560aa1  8bf1                 mov esi, ecx
// 00560aa3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00560aa6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00560aa9  83c004               add eax, 4
// 00560aac  3bc8                 cmp ecx, eax
// 00560aae  7c02                 jl 0x560ab2
// 00560ab0  8bc1                 mov eax, ecx
// 00560ab2  3b4638               cmp eax, dword ptr [esi + 0x38]
// 00560ab5  894634               mov dword ptr [esi + 0x34], eax
// 00560ab8  7e0a                 jle 0x560ac4
// 00560aba  51                   push ecx
// 00560abb  6a04                 push 4
// 00560abd  8bce                 mov ecx, esi
// 00560abf  e85cfeffff           call 0x560920
// 00560ac4  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 00560ac8  743b                 je 0x560b05
// 00560aca  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00560acd  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00560ad0  8a54240b             mov dl, byte ptr [esp + 0xb]
// 00560ad4  881408               mov byte ptr [eax + ecx], dl
// 00560ad7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00560ada  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00560add  8a54240a             mov dl, byte ptr [esp + 0xa]
// 00560ae1  88540801             mov byte ptr [eax + ecx + 1], dl
// 00560ae5  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00560ae8  8b5630               mov edx, dword ptr [esi + 0x30]
// 00560aeb  8b442408             mov eax, dword ptr [esp + 8]
// 00560aef  88641102             mov byte ptr [ecx + edx + 2], ah
// 00560af3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00560af6  8b5630               mov edx, dword ptr [esi + 0x30]
// 00560af9  88441103             mov byte ptr [ecx + edx + 3], al
// 00560afd  83463c04             add dword ptr [esi + 0x3c], 4
// 00560b01  5e                   pop esi
// 00560b02  c20400               ret 4
// 00560b05  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00560b08  8b4630               mov eax, dword ptr [esi + 0x30]
// 00560b0b  8b542408             mov edx, dword ptr [esp + 8]
// 00560b0f  891408               mov dword ptr [eax + ecx], edx
// 00560b12  83463c04             add dword ptr [esi + 0x3c], 4
// 00560b16  5e                   pop esi
// 00560b17  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?writeUInt32@BinaryOutput@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
