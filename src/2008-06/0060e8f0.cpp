// from server: 100% by auto
// roc 2008-06 0060e8f0  unit: RBX::BlockBlockContact  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060e8f0
//
// 0060e8f0  8b442408             mov eax, dword ptr [esp + 8]
// 0060e8f4  83ec30               sub esp, 0x30
// 0060e8f7  56                   push esi
// 0060e8f8  8b742438             mov esi, dword ptr [esp + 0x38]
// 0060e8fc  50                   push eax
// 0060e8fd  56                   push esi
// 0060e8fe  8d54240c             lea edx, [esp + 0xc]
// 0060e902  52                   push edx
// 0060e903  e8289ae6ff           call 0x478330
// 0060e908  8bc8                 mov ecx, eax
// 0060e90a  e8f17de6ff           call 0x476700
// 0060e90f  8bc6                 mov eax, esi
// 0060e911  5e                   pop esi
// 0060e912  83c430               add esp, 0x30
// 0060e915  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
