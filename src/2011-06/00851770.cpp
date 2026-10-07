// roc 2011-06 00851770  unit: CXTPAccessible::XAccessible  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851770
//
// 00851770  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851774  56                   push esi
// 00851775  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00851779  8b51fc               mov edx, dword ptr [ecx - 4]
// 0085177c  8b5240               mov edx, dword ptr [edx + 0x40]
// 0085177f  83ec10               sub esp, 0x10
// 00851782  8bc4                 mov eax, esp
// 00851784  8930                 mov dword ptr [eax], esi
// 00851786  8b742430             mov esi, dword ptr [esp + 0x30]
// 0085178a  897004               mov dword ptr [eax + 4], esi
// 0085178d  8b742434             mov esi, dword ptr [esp + 0x34]
// 00851791  897008               mov dword ptr [eax + 8], esi
// 00851794  8b742438             mov esi, dword ptr [esp + 0x38]
// 00851798  89700c               mov dword ptr [eax + 0xc], esi
// 0085179b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085179f  50                   push eax
// 008517a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008517a4  50                   push eax
// 008517a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 008517a9  83c1fc               add ecx, -4
// 008517ac  50                   push eax
// 008517ad  8b442428             mov eax, dword ptr [esp + 0x28]
// 008517b1  50                   push eax
// 008517b2  ffd2                 call edx
// 008517b4  5e                   pop esi
// 008517b5  c22400               ret 0x24
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accLocation@XAccessible@CXTPAccessible@@UAGJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
