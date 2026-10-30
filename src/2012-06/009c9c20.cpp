// from server: 100% by auto
// roc 2012-06 009c9c20  unit: CXTPAccessible::XAccessible  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9c20
//
// 009c9c20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9c24  56                   push esi
// 009c9c25  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009c9c29  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9c2c  8b5240               mov edx, dword ptr [edx + 0x40]
// 009c9c2f  83ec10               sub esp, 0x10
// 009c9c32  8bc4                 mov eax, esp
// 009c9c34  8930                 mov dword ptr [eax], esi
// 009c9c36  8b742430             mov esi, dword ptr [esp + 0x30]
// 009c9c3a  897004               mov dword ptr [eax + 4], esi
// 009c9c3d  8b742434             mov esi, dword ptr [esp + 0x34]
// 009c9c41  897008               mov dword ptr [eax + 8], esi
// 009c9c44  8b742438             mov esi, dword ptr [esp + 0x38]
// 009c9c48  89700c               mov dword ptr [eax + 0xc], esi
// 009c9c4b  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c9c4f  50                   push eax
// 009c9c50  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c9c54  50                   push eax
// 009c9c55  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c9c59  83c1fc               add ecx, -4
// 009c9c5c  50                   push eax
// 009c9c5d  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c9c61  50                   push eax
// 009c9c62  ffd2                 call edx
// 009c9c64  5e                   pop esi
// 009c9c65  c22400               ret 0x24
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accLocation@XAccessible@CXTPAccessible@@UAGJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
