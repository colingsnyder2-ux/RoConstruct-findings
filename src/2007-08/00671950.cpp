// from server: 100% by auto
// roc 2007-08 00671950  unit: CXTPAccessible::XAccessible  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671950
//
// 00671950  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671954  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00671958  8b51fc               mov edx, dword ptr [ecx - 4]
// 0067195b  8b5254               mov edx, dword ptr [edx + 0x54]
// 0067195e  56                   push esi
// 0067195f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00671963  50                   push eax
// 00671964  83ec10               sub esp, 0x10
// 00671967  8bc4                 mov eax, esp
// 00671969  8930                 mov dword ptr [eax], esi
// 0067196b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0067196f  897004               mov dword ptr [eax + 4], esi
// 00671972  8b742428             mov esi, dword ptr [esp + 0x28]
// 00671976  83c1fc               add ecx, -4
// 00671979  897008               mov dword ptr [eax + 8], esi
// 0067197c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00671980  89700c               mov dword ptr [eax + 0xc], esi
// 00671983  ffd2                 call edx
// 00671985  5e                   pop esi
// 00671986  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?put_accValue@XAccessible@CXTPAccessible@@UAGJUtagVARIANT@@PA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
