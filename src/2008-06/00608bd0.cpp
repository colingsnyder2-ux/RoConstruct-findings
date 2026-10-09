// roc 2008-06 00608bd0  unit: RBX::VModelInstance::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608bd0
//
// 00608bd0  b001                 mov al, 1
// 00608bd2  888174010000         mov byte ptr [ecx + 0x174], al
// 00608bd8  888141010000         mov byte ptr [ecx + 0x141], al
// 00608bde  888159010000         mov byte ptr [ecx + 0x159], al
// 00608be4  e9a722f5ff           jmp 0x55ae90
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?onDescendentRemoving@PVInstance@RBX@@MAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
