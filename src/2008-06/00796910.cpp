// roc 2008-06 00796910  unit: CXTPRibbonGroupPopupToolBar  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796910
//
// 00796910  56                   push esi
// 00796911  8bf1                 mov esi, ecx
// 00796913  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00796919  57                   push edi
// 0079691a  e8a1b7f8ff           call 0x7220c0
// 0079691f  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 00796925  8b10                 mov edx, dword ptr [eax]
// 00796927  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079692b  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00796931  56                   push esi
// 00796932  51                   push ecx
// 00796933  57                   push edi
// 00796934  8bc8                 mov ecx, eax
// 00796936  ffd2                 call edx
// 00796938  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 0079693e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00796942  8b11                 mov edx, dword ptr [ecx]
// 00796944  83ec10               sub esp, 0x10
// 00796947  8bc4                 mov eax, esp
// 00796949  8930                 mov dword ptr [eax], esi
// 0079694b  8b742424             mov esi, dword ptr [esp + 0x24]
// 0079694f  897004               mov dword ptr [eax + 4], esi
// 00796952  8b742428             mov esi, dword ptr [esp + 0x28]
// 00796956  897008               mov dword ptr [eax + 8], esi
// 00796959  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0079695d  89700c               mov dword ptr [eax + 0xc], esi
// 00796960  8b4260               mov eax, dword ptr [edx + 0x60]
// 00796963  57                   push edi
// 00796964  ffd0                 call eax
// 00796966  5f                   pop edi
// 00796967  5e                   pop esi
// 00796968  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?DrawCommandBar@CXTPRibbonGroupPopupToolBar@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
