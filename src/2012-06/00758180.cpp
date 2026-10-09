// roc 2012-06 00758180  unit: RBX::PartInstance  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00758180
//
// 00758180  8a442404             mov al, byte ptr [esp + 4]
// 00758184  3a81b0010000         cmp al, byte ptr [ecx + 0x1b0]
// 0075818a  7413                 je 0x75819f
// 0075818c  8881b0010000         mov byte ptr [ecx + 0x1b0], al
// 00758192  c74424041c5fe300     mov dword ptr [esp + 4], 0xe35f1c
// 0075819a  e901cccbff           jmp 0x414da0
// 0075819f  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?setPartLocked@PartInstance@RBX@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
