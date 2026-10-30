// roc 2009-12 008684d0  unit: CXTPPropertyGridView  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008684d0
//
// 008684d0  56                   push esi
// 008684d1  8bf1                 mov esi, ecx
// 008684d3  e878f4ffff           call 0x867950
// 008684d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008684dc  8b10                 mov edx, dword ptr [eax]
// 008684de  8b5218               mov edx, dword ptr [edx + 0x18]
// 008684e1  6a01                 push 1
// 008684e3  51                   push ecx
// 008684e4  6a00                 push 0
// 008684e6  8bc8                 mov ecx, eax
// 008684e8  ffd2                 call edx
// 008684ea  8bce                 mov ecx, esi
// 008684ec  e83fb9f8ff           call 0x7f3e30
// 008684f1  5e                   pop esi
// 008684f2  c20800               ret 8
// copied from an identical function in another client (function ?OnNcCalcSize@CXTPPropertyGridView@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp