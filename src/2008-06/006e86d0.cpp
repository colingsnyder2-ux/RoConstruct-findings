// from server: 100% by auto
// roc 2008-06 006e86d0  unit: CXTPAccessible::XAccessible  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e86d0
//
// 006e86d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e86d4  56                   push esi
// 006e86d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006e86d9  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e86dc  8b5240               mov edx, dword ptr [edx + 0x40]
// 006e86df  83ec10               sub esp, 0x10
// 006e86e2  8bc4                 mov eax, esp
// 006e86e4  8930                 mov dword ptr [eax], esi
// 006e86e6  8b742430             mov esi, dword ptr [esp + 0x30]
// 006e86ea  897004               mov dword ptr [eax + 4], esi
// 006e86ed  8b742434             mov esi, dword ptr [esp + 0x34]
// 006e86f1  897008               mov dword ptr [eax + 8], esi
// 006e86f4  8b742438             mov esi, dword ptr [esp + 0x38]
// 006e86f8  89700c               mov dword ptr [eax + 0xc], esi
// 006e86fb  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e86ff  50                   push eax
// 006e8700  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e8704  50                   push eax
// 006e8705  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e8709  83c1fc               add ecx, -4
// 006e870c  50                   push eax
// 006e870d  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e8711  50                   push eax
// 006e8712  ffd2                 call edx
// 006e8714  5e                   pop esi
// 006e8715  c22400               ret 0x24
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?accLocation@XAccessible@CXTPAccessible@@UAGJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
