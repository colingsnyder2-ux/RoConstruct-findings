// roc 2009-12 0082f9d0  unit: CXTPColorManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f9d0
//
// 0082f9d0  6aff                 push -1
// 0082f9d2  685ebe9500           push 0x95be5e
// 0082f9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0082f9dd  50                   push eax
// 0082f9de  a10052b600           mov eax, dword ptr [0xb65200]
// 0082f9e3  33c4                 xor eax, esp
// 0082f9e5  50                   push eax
// 0082f9e6  8d442404             lea eax, [esp + 4]
// 0082f9ea  64a300000000         mov dword ptr fs:[0], eax
// 0082f9f0  b801000000           mov eax, 1
// 0082f9f5  840564b3b900         test byte ptr [0xb9b364], al
// 0082f9fb  7525                 jne 0x82fa22
// 0082f9fd  090564b3b900         or dword ptr [0xb9b364], eax
// 0082fa03  b9f8aeb900           mov ecx, 0xb9aef8
// 0082fa08  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0082fa10  e89bf4ffff           call 0x82eeb0
// 0082fa15  6870a69800           push 0x98a670
// 0082fa1a  e80a4ffcff           call 0x7f4929
// 0082fa1f  83c404               add esp, 4
// 0082fa22  b8f8aeb900           mov eax, 0xb9aef8
// 0082fa27  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0082fa2b  64890d00000000       mov dword ptr fs:[0], ecx
// 0082fa32  59                   pop ecx
// 0082fa33  83c40c               add esp, 0xc
// 0082fa36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
