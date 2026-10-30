// roc 2009-12 00868260  unit: CXTPPropertyGridView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868260
//
// 00868260  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00868266  8b542404             mov edx, dword ptr [esp + 4]
// 0086826a  56                   push esi
// 0086826b  894210               mov dword ptr [edx + 0x10], eax
// 0086826e  e8ddf6ffff           call 0x867950
// 00868273  8b30                 mov esi, dword ptr [eax]
// 00868275  52                   push edx
// 00868276  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00868279  8bc8                 mov ecx, eax
// 0086827b  ffd2                 call edx
// 0086827d  5e                   pop esi
// 0086827e  c20400               ret 4
// copied from an identical function in another client (function ?MeasureItem@CXTPPropertyGridView@@MAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp