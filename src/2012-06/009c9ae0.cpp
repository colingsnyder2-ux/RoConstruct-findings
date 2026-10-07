// roc 2012-06 009c9ae0  unit: CXTPAccessible::XAccessible  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9ae0
//
// 009c9ae0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c9ae4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9ae8  8b51fc               mov edx, dword ptr [ecx - 4]
// 009c9aeb  8b5228               mov edx, dword ptr [edx + 0x28]
// 009c9aee  56                   push esi
// 009c9aef  8b742410             mov esi, dword ptr [esp + 0x10]
// 009c9af3  50                   push eax
// 009c9af4  83ec10               sub esp, 0x10
// 009c9af7  8bc4                 mov eax, esp
// 009c9af9  8930                 mov dword ptr [eax], esi
// 009c9afb  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c9aff  897004               mov dword ptr [eax + 4], esi
// 009c9b02  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009c9b06  897008               mov dword ptr [eax + 8], esi
// 009c9b09  8b742430             mov esi, dword ptr [esp + 0x30]
// 009c9b0d  83c1fc               add ecx, -4
// 009c9b10  89700c               mov dword ptr [eax + 0xc], esi
// 009c9b13  8b442420             mov eax, dword ptr [esp + 0x20]
// 009c9b17  50                   push eax
// 009c9b18  ffd2                 call edx
// 009c9b1a  5e                   pop esi
// 009c9b1b  c21c00               ret 0x1c
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?get_accHelpTopic@XAccessible@CXTPAccessible@@UAGJPAPA_WUtagVARIANT@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
