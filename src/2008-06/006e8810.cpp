// roc 2008-06 006e8810  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8810
//
// 006e8810  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e8814  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8818  8b51fc               mov edx, dword ptr [ecx - 4]
// 006e881b  8b5254               mov edx, dword ptr [edx + 0x54]
// 006e881e  56                   push esi
// 006e881f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e8823  50                   push eax
// 006e8824  83ec10               sub esp, 0x10
// 006e8827  8bc4                 mov eax, esp
// 006e8829  8930                 mov dword ptr [eax], esi
// 006e882b  8b742424             mov esi, dword ptr [esp + 0x24]
// 006e882f  897004               mov dword ptr [eax + 4], esi
// 006e8832  8b742428             mov esi, dword ptr [esp + 0x28]
// 006e8836  83c1fc               add ecx, -4
// 006e8839  897008               mov dword ptr [eax + 8], esi
// 006e883c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006e8840  89700c               mov dword ptr [eax + 0xc], esi
// 006e8843  ffd2                 call edx
// 006e8845  5e                   pop esi
// 006e8846  c21800               ret 0x18
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?put_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
