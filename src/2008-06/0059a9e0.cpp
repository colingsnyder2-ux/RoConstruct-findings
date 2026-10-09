// roc 2008-06 0059a9e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a9e0
//
// 0059a9e0  51                   push ecx
// 0059a9e1  56                   push esi
// 0059a9e2  8d442404             lea eax, [esp + 4]
// 0059a9e6  50                   push eax
// 0059a9e7  81c170010000         add ecx, 0x170
// 0059a9ed  e8def6ffff           call 0x59a0d0
// 0059a9f2  8b30                 mov esi, dword ptr [eax]
// 0059a9f4  8b442404             mov eax, dword ptr [esp + 4]
// 0059a9f8  85c0                 test eax, eax
// 0059a9fa  7427                 je 0x59aa23
// 0059a9fc  83c004               add eax, 4
// 0059a9ff  50                   push eax
// 0059aa00  ff15ac218000         call dword ptr [0x8021ac]
// 0059aa06  85c0                 test eax, eax
// 0059aa08  7519                 jne 0x59aa23
// 0059aa0a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059aa0e  e87d03ecff           call 0x45ad90
// 0059aa13  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059aa17  85c9                 test ecx, ecx
// 0059aa19  7408                 je 0x59aa23
// 0059aa1b  8b11                 mov edx, dword ptr [ecx]
// 0059aa1d  8b02                 mov eax, dword ptr [edx]
// 0059aa1f  6a01                 push 1
// 0059aa21  ffd0                 call eax
// 0059aa23  85f6                 test esi, esi
// 0059aa25  7405                 je 0x59aa2c
// 0059aa27  8bc6                 mov eax, esi
// 0059aa29  5e                   pop esi
// 0059aa2a  59                   pop ecx
// 0059aa2b  c3                   ret 
// 0059aa2c  5e                   pop esi
// 0059aa2d  83c404               add esp, 4
// 0059aa30  e91bf4ffff           jmp 0x599e50
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?getTopPVController@PVInstance@RBX@@QBEPAVController@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
