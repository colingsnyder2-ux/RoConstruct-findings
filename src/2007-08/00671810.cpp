// roc 2007-08 00671810  unit: CXTPAccessible::XAccessible  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671810
//
// 00671810  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671814  56                   push esi
// 00671815  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00671819  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067181c  8b5240               mov edx, dword ptr [edx + 0x40]
// 0067181f  83ec10               sub esp, 0x10
// 00671822  8bc4                 mov eax, esp
// 00671824  8930                 mov dword ptr [eax], esi
// 00671826  8b742430             mov esi, dword ptr [esp + 0x30]
// 0067182a  897004               mov dword ptr [eax + 4], esi
// 0067182d  8b742434             mov esi, dword ptr [esp + 0x34]
// 00671831  897008               mov dword ptr [eax + 8], esi
// 00671834  8b742438             mov esi, dword ptr [esp + 0x38]
// 00671838  89700c               mov dword ptr [eax + 0xc], esi
// 0067183b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0067183f  50                   push eax
// 00671840  8b442428             mov eax, dword ptr [esp + 0x28]
// 00671844  50                   push eax
// 00671845  8b442428             mov eax, dword ptr [esp + 0x28]
// 00671849  83c1fc               add ecx, -4
// 0067184c  50                   push eax
// 0067184d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00671851  50                   push eax
// 00671852  ffd2                 call edx
// 00671854  5e                   pop esi
// 00671855  c22400               ret 0x24
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?accLocation@XAccessible@CXTPAccessible@@UAGJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
