// roc 2009-12 0082f330  unit: CXTPReportSelectedRows  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f330
//
// 0082f330  8b442404             mov eax, dword ptr [esp + 4]
// 0082f334  8d50e2               lea edx, [eax - 0x1e]
// 0082f337  83fa20               cmp edx, 0x20
// 0082f33a  771a                 ja 0x82f356
// 0082f33c  8b948164030000       mov edx, dword ptr [ecx + eax*4 + 0x364]
// 0082f343  83faff               cmp edx, -1
// 0082f346  7509                 jne 0x82f351
// 0082f348  89442404             mov dword ptr [esp + 4], eax
// 0082f34c  e9affdffff           jmp 0x82f100
// 0082f351  8bc2                 mov eax, edx
// 0082f353  c20400               ret 4
// 0082f356  89442404             mov dword ptr [esp + 4], eax
// 0082f35a  e9a1fdffff           jmp 0x82f100
// copied from an identical function in another client (function ?GetLunaColor@CXTPColorManager@@QBEKH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp