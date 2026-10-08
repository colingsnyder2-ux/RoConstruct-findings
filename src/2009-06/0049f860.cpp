// from server: 100% by auto
// roc 2009-06 0049f860  unit: G3D::VARArea  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f860
//
// 0049f860  56                   push esi
// 0049f861  8bf1                 mov esi, ecx
// 0049f863  8b06                 mov eax, dword ptr [esi]
// 0049f865  57                   push edi
// 0049f866  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049f86a  3bf8                 cmp edi, eax
// 0049f86c  743d                 je 0x49f8ab
// 0049f86e  85c0                 test eax, eax
// 0049f870  7429                 je 0x49f89b
// 0049f872  83c004               add eax, 4
// 0049f875  50                   push eax
// 0049f876  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049f87c  85c0                 test eax, eax
// 0049f87e  7515                 jne 0x49f895
// 0049f880  8b0e                 mov ecx, dword ptr [esi]
// 0049f882  e8f954faff           call 0x444d80
// 0049f887  8b0e                 mov ecx, dword ptr [esi]
// 0049f889  85c9                 test ecx, ecx
// 0049f88b  7408                 je 0x49f895
// 0049f88d  8b01                 mov eax, dword ptr [ecx]
// 0049f88f  8b10                 mov edx, dword ptr [eax]
// 0049f891  6a01                 push 1
// 0049f893  ffd2                 call edx
// 0049f895  c70600000000         mov dword ptr [esi], 0
// 0049f89b  85ff                 test edi, edi
// 0049f89d  740c                 je 0x49f8ab
// 0049f89f  893e                 mov dword ptr [esi], edi
// 0049f8a1  83c704               add edi, 4
// 0049f8a4  57                   push edi
// 0049f8a5  ff15d0e18900         call dword ptr [0x89e1d0]
// 0049f8ab  5f                   pop edi
// 0049f8ac  5e                   pop esi
// 0049f8ad  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?setPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXPAVRenderbuffer@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
