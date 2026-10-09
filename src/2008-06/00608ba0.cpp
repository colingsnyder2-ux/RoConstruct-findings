// roc 2008-06 00608ba0  unit: RBX::VModelInstance::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608ba0
//
// 00608ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00608ba4  56                   push esi
// 00608ba5  50                   push eax
// 00608ba6  8bf1                 mov esi, ecx
// 00608ba8  e87322f5ff           call 0x55ae20
// 00608bad  b001                 mov al, 1
// 00608baf  888674010000         mov byte ptr [esi + 0x174], al
// 00608bb5  888641010000         mov byte ptr [esi + 0x141], al
// 00608bbb  888659010000         mov byte ptr [esi + 0x159], al
// 00608bc1  5e                   pop esi
// 00608bc2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?onDescendentAdded@PVInstance@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
