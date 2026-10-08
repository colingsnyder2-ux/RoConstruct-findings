// roc 2009-06 00624780  unit: RBX::StarterGear  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624780
//
// 00624780  8b442404             mov eax, dword ptr [esp + 4]
// 00624784  6a00                 push 0
// 00624786  6804a2a000           push 0xa0a204
// 0062478b  6840be9d00           push 0x9dbe40
// 00624790  6a00                 push 0
// 00624792  50                   push eax
// 00624793  e8e2540f00           call 0x719c7a
// 00624798  83c414               add esp, 0x14
// 0062479b  f7d8                 neg eax
// 0062479d  1bc0                 sbb eax, eax
// 0062479f  f7d8                 neg eax
// 006247a1  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?askAddChild@Hopper@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
