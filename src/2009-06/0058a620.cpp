// roc 2009-06 0058a620  unit: seg_00580000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a620
//
// 0058a620  83ec24               sub esp, 0x24
// 0058a623  53                   push ebx
// 0058a624  56                   push esi
// 0058a625  57                   push edi
// 0058a626  8bf1                 mov esi, ecx
// 0058a628  e803e1feff           call 0x578730
// 0058a62d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0058a631  50                   push eax
// 0058a632  8bcb                 mov ecx, ebx
// 0058a634  e847f9f0ff           call 0x499f80
// 0058a639  56                   push esi
// 0058a63a  8d4c2410             lea ecx, [esp + 0x10]
// 0058a63e  e8cdddfeff           call 0x578410
// 0058a643  8bf0                 mov esi, eax
// 0058a645  8bfb                 mov edi, ebx
// 0058a647  b909000000           mov ecx, 9
// 0058a64c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0058a64e  5f                   pop edi
// 0058a64f  5e                   pop esi
// 0058a650  8bc3                 mov eax, ebx
// 0058a652  5b                   pop ebx
// 0058a653  83c424               add esp, 0x24
// 0058a656  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
