// roc 2007-08 006978f0  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006978f0
//
// 006978f0  6aff                 push -1
// 006978f2  680e377600           push 0x76370e
// 006978f7  64a100000000         mov eax, dword ptr fs:[0]
// 006978fd  50                   push eax
// 006978fe  a188518b00           mov eax, dword ptr [0x8b5188]
// 00697903  33c4                 xor eax, esp
// 00697905  50                   push eax
// 00697906  8d442404             lea eax, [esp + 4]
// 0069790a  64a300000000         mov dword ptr fs:[0], eax
// 00697910  b801000000           mov eax, 1
// 00697915  8405d8908c00         test byte ptr [0x8c90d8], al
// 0069791b  7525                 jne 0x697942
// 0069791d  0905d8908c00         or dword ptr [0x8c90d8], eax
// 00697923  b9808f8c00           mov ecx, 0x8c8f80
// 00697928  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00697930  e8ebfdffff           call 0x697720
// 00697935  6860cc7700           push 0x77cc60
// 0069793a  e8e493f9ff           call 0x630d23
// 0069793f  83c404               add esp, 4
// 00697942  b8808f8c00           mov eax, 0x8c8f80
// 00697947  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0069794b  64890d00000000       mov dword ptr fs:[0], ecx
// 00697952  59                   pop ecx
// 00697953  83c40c               add esp, 0xc
// 00697956  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
