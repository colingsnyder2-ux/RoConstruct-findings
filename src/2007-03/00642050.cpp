// roc 2007-03 00642050  unit: seg_00640000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00642050
//
// 00642050  8b442404             mov eax, dword ptr [esp + 4]
// 00642054  85c0                 test eax, eax
// 00642056  7c0e                 jl 0x642066
// 00642058  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0064205b  7d09                 jge 0x642066
// 0064205d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00642060  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00642063  c20400               ret 4
// 00642066  e843c3fdff           call 0x61e3ae
// copied from an identical function in another client (function ?GetConstraintAt@CXTPPropertyGridItemConstraints@@QBEPAVCXTPPropertyGridItemConstraint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp