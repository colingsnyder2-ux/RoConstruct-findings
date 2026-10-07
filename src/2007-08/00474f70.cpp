// roc 2007-08 00474f70  unit: CInstanceRecord::CNameItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474f70
//
// 00474f70  56                   push esi
// 00474f71  8bf1                 mov esi, ecx
// 00474f73  8b06                 mov eax, dword ptr [esi]
// 00474f75  57                   push edi
// 00474f76  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00474f7a  3bf8                 cmp edi, eax
// 00474f7c  743d                 je 0x474fbb
// 00474f7e  85c0                 test eax, eax
// 00474f80  7429                 je 0x474fab
// 00474f82  83c004               add eax, 4
// 00474f85  50                   push eax
// 00474f86  ff15e8d27700         call dword ptr [0x77d2e8]
// 00474f8c  85c0                 test eax, eax
// 00474f8e  7515                 jne 0x474fa5
// 00474f90  8b0e                 mov ecx, dword ptr [esi]
// 00474f92  e8392efeff           call 0x457dd0
// 00474f97  8b0e                 mov ecx, dword ptr [esi]
// 00474f99  85c9                 test ecx, ecx
// 00474f9b  7408                 je 0x474fa5
// 00474f9d  8b01                 mov eax, dword ptr [ecx]
// 00474f9f  8b10                 mov edx, dword ptr [eax]
// 00474fa1  6a01                 push 1
// 00474fa3  ffd2                 call edx
// 00474fa5  c70600000000         mov dword ptr [esi], 0
// 00474fab  85ff                 test edi, edi
// 00474fad  740c                 je 0x474fbb
// 00474faf  893e                 mov dword ptr [esi], edi
// 00474fb1  83c704               add edi, 4
// 00474fb4  57                   push edi
// 00474fb5  ff15ecd27700         call dword ptr [0x77d2ec]
// 00474fbb  5f                   pop edi
// 00474fbc  5e                   pop esi
// 00474fbd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?setPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXPAVRenderbuffer@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
