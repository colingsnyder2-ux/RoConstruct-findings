// roc 2007-08 0069e740  unit: CXTPPropertyGridItemEnum  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e740
//
// 0069e740  6aff                 push -1
// 0069e742  685e3f7600           push 0x763f5e
// 0069e747  64a100000000         mov eax, dword ptr fs:[0]
// 0069e74d  50                   push eax
// 0069e74e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0069e753  33c4                 xor eax, esp
// 0069e755  50                   push eax
// 0069e756  8d442404             lea eax, [esp + 4]
// 0069e75a  64a300000000         mov dword ptr fs:[0], eax
// 0069e760  b801000000           mov eax, 1
// 0069e765  8405d8928c00         test byte ptr [0x8c92d8], al
// 0069e76b  7518                 jne 0x69e785
// 0069e76d  0905d8928c00         or dword ptr [0x8c92d8], eax
// 0069e773  b900928c00           mov ecx, 0x8c9200
// 0069e778  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0069e780  e87bffffff           call 0x69e700
// 0069e785  b800928c00           mov eax, 0x8c9200
// 0069e78a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069e78e  64890d00000000       mov dword ptr fs:[0], ecx
// 0069e795  59                   pop ecx
// 0069e796  83c40c               add esp, 0xc
// 0069e799  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
