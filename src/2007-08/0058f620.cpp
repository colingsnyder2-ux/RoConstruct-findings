// roc 2007-08 0058f620  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058f620
//
// 0058f620  56                   push esi
// 0058f621  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0058f624  56                   push esi
// 0058f625  e8062cfbff           call 0x542230
// 0058f62a  83c404               add esp, 4
// 0058f62d  85f6                 test esi, esi
// 0058f62f  740a                 je 0x58f63b
// 0058f631  8b06                 mov eax, dword ptr [esi]
// 0058f633  8b10                 mov edx, dword ptr [eax]
// 0058f635  6a01                 push 1
// 0058f637  8bce                 mov ecx, esi
// 0058f639  ffd2                 call edx
// 0058f63b  5e                   pop esi
// 0058f63c  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?dispose@?$sp_counted_impl_pd@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@2@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
