// roc 2009-12 008eedb0  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eedb0
//
// 008eedb0  56                   push esi
// 008eedb1  8bf1                 mov esi, ecx
// 008eedb3  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008eedb9  57                   push edi
// 008eedba  e8b15efaff           call 0x894c70
// 008eedbf  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eedc5  8b10                 mov edx, dword ptr [eax]
// 008eedc7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008eedcb  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008eedd1  56                   push esi
// 008eedd2  51                   push ecx
// 008eedd3  57                   push edi
// 008eedd4  8bc8                 mov ecx, eax
// 008eedd6  ffd2                 call edx
// 008eedd8  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008eedde  8b742410             mov esi, dword ptr [esp + 0x10]
// 008eede2  8b11                 mov edx, dword ptr [ecx]
// 008eede4  83ec10               sub esp, 0x10
// 008eede7  8bc4                 mov eax, esp
// 008eede9  8930                 mov dword ptr [eax], esi
// 008eedeb  8b742424             mov esi, dword ptr [esp + 0x24]
// 008eedef  897004               mov dword ptr [eax + 4], esi
// 008eedf2  8b742428             mov esi, dword ptr [esp + 0x28]
// 008eedf6  897008               mov dword ptr [eax + 8], esi
// 008eedf9  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008eedfd  89700c               mov dword ptr [eax + 0xc], esi
// 008eee00  8b4260               mov eax, dword ptr [edx + 0x60]
// 008eee03  57                   push edi
// 008eee04  ffd0                 call eax
// 008eee06  5f                   pop edi
// 008eee07  5e                   pop esi
// 008eee08  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBar@CXTPRibbonGroupPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp