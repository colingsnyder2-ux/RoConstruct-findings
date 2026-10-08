// from server: 100% by auto
// roc 2010-06 0052caf0  unit: RBX::PartChunk  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052caf0
//
// 0052caf0  56                   push esi
// 0052caf1  8bf1                 mov esi, ecx
// 0052caf3  8b06                 mov eax, dword ptr [esi]
// 0052caf5  85c0                 test eax, eax
// 0052caf7  7429                 je 0x52cb22
// 0052caf9  83c004               add eax, 4
// 0052cafc  50                   push eax
// 0052cafd  ff157ca39e00         call dword ptr [0x9ea37c]
// 0052cb03  85c0                 test eax, eax
// 0052cb05  7515                 jne 0x52cb1c
// 0052cb07  8b0e                 mov ecx, dword ptr [esi]
// 0052cb09  e81270f5ff           call 0x483b20
// 0052cb0e  8b0e                 mov ecx, dword ptr [esi]
// 0052cb10  85c9                 test ecx, ecx
// 0052cb12  7408                 je 0x52cb1c
// 0052cb14  8b01                 mov eax, dword ptr [ecx]
// 0052cb16  8b10                 mov edx, dword ptr [eax]
// 0052cb18  6a01                 push 1
// 0052cb1a  ffd2                 call edx
// 0052cb1c  c70600000000         mov dword ptr [esi], 0
// 0052cb22  5e                   pop esi
// 0052cb23  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
