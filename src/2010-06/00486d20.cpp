// from server: 100% by auto
// roc 2010-06 00486d20  unit: G3D::Texture  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00486d20
//
// 00486d20  56                   push esi
// 00486d21  8bf1                 mov esi, ecx
// 00486d23  8b06                 mov eax, dword ptr [esi]
// 00486d25  57                   push edi
// 00486d26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00486d2a  3bf8                 cmp edi, eax
// 00486d2c  743d                 je 0x486d6b
// 00486d2e  85c0                 test eax, eax
// 00486d30  7429                 je 0x486d5b
// 00486d32  83c004               add eax, 4
// 00486d35  50                   push eax
// 00486d36  ff157ca39e00         call dword ptr [0x9ea37c]
// 00486d3c  85c0                 test eax, eax
// 00486d3e  7515                 jne 0x486d55
// 00486d40  8b0e                 mov ecx, dword ptr [esi]
// 00486d42  e8d9cdffff           call 0x483b20
// 00486d47  8b0e                 mov ecx, dword ptr [esi]
// 00486d49  85c9                 test ecx, ecx
// 00486d4b  7408                 je 0x486d55
// 00486d4d  8b01                 mov eax, dword ptr [ecx]
// 00486d4f  8b10                 mov edx, dword ptr [eax]
// 00486d51  6a01                 push 1
// 00486d53  ffd2                 call edx
// 00486d55  c70600000000         mov dword ptr [esi], 0
// 00486d5b  85ff                 test edi, edi
// 00486d5d  740c                 je 0x486d6b
// 00486d5f  893e                 mov dword ptr [esi], edi
// 00486d61  83c704               add edi, 4
// 00486d64  57                   push edi
// 00486d65  ff1580a39e00         call dword ptr [0x9ea380]
// 00486d6b  5f                   pop edi
// 00486d6c  5e                   pop esi
// 00486d6d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?setPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXPAVRenderbuffer@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
