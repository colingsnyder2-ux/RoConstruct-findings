// from server: 100% by auto
// roc 2011-06 00851730  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851730
//
// 00851730  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851734  8b51fc               mov edx, dword ptr [ecx - 4]
// 00851737  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0085173a  56                   push esi
// 0085173b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085173f  83ec10               sub esp, 0x10
// 00851742  8bc4                 mov eax, esp
// 00851744  8930                 mov dword ptr [eax], esi
// 00851746  8b742424             mov esi, dword ptr [esp + 0x24]
// 0085174a  897004               mov dword ptr [eax + 4], esi
// 0085174d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00851751  897008               mov dword ptr [eax + 8], esi
// 00851754  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00851758  83c1fc               add ecx, -4
// 0085175b  89700c               mov dword ptr [eax + 0xc], esi
// 0085175e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00851762  50                   push eax
// 00851763  ffd2                 call edx
// 00851765  5e                   pop esi
// 00851766  c21800               ret 0x18
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?accSelect@XAccessible@CXTPAccessible@@UAGJJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
