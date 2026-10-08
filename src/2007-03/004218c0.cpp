// roc 2007-03 004218c0  unit: seg_00420000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004218c0
//
// 004218c0  56                   push esi
// 004218c1  8bf1                 mov esi, ecx
// 004218c3  8b06                 mov eax, dword ptr [esi]
// 004218c5  85c0                 test eax, eax
// 004218c7  57                   push edi
// 004218c8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004218cc  7404                 je 0x4218d2
// 004218ce  3b07                 cmp eax, dword ptr [edi]
// 004218d0  7406                 je 0x4218d8
// 004218d2  ff1544e97700         call dword ptr [0x77e944]
// 004218d8  8b4604               mov eax, dword ptr [esi + 4]
// 004218db  2b4704               sub eax, dword ptr [edi + 4]
// 004218de  5f                   pop edi
// 004218df  c1f803               sar eax, 3
// 004218e2  5e                   pop esi
// 004218e3  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??G?$_Vector_const_iterator@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QBEHABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
