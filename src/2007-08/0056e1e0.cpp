// roc 2007-08 0056e1e0  unit: RBX::VContentId::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e1e0
//
// 0056e1e0  56                   push esi
// 0056e1e1  6a10                 push 0x10
// 0056e1e3  8bf1                 mov esi, ecx
// 0056e1e5  e80c1d0c00           call 0x62fef6
// 0056e1ea  83c404               add esp, 4
// 0056e1ed  85c0                 test eax, eax
// 0056e1ef  7411                 je 0x56e202
// 0056e1f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056e1f5  c700b49f7a00         mov dword ptr [eax], 0x7a9fb4
// 0056e1fb  dd01                 fld qword ptr [ecx]
// 0056e1fd  dd5808               fstp qword ptr [eax + 8]
// 0056e200  eb02                 jmp 0x56e204
// 0056e202  33c0                 xor eax, eax
// 0056e204  8b0e                 mov ecx, dword ptr [esi]
// 0056e206  85c9                 test ecx, ecx
// 0056e208  8906                 mov dword ptr [esi], eax
// 0056e20a  7408                 je 0x56e214
// 0056e20c  8b11                 mov edx, dword ptr [ecx]
// 0056e20e  8b02                 mov eax, dword ptr [edx]
// 0056e210  6a01                 push 1
// 0056e212  ffd0                 call eax
// 0056e214  8bc6                 mov eax, esi
// 0056e216  5e                   pop esi
// 0056e217  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4N@any@boost@@QAEAAV01@ABN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
