// roc 2010-06 00657870  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00657870
//
// 00657870  6aff                 push -1
// 00657872  6858a29900           push 0x99a258
// 00657877  64a100000000         mov eax, dword ptr fs:[0]
// 0065787d  50                   push eax
// 0065787e  64892500000000       mov dword ptr fs:[0], esp
// 00657885  51                   push ecx
// 00657886  56                   push esi
// 00657887  57                   push edi
// 00657888  8bf9                 mov edi, ecx
// 0065788a  6a04                 push 4
// 0065788c  8d7704               lea esi, [edi + 4]
// 0065788f  e80c011500           call 0x7a79a0
// 00657894  33c9                 xor ecx, ecx
// 00657896  83c404               add esp, 4
// 00657899  3bc1                 cmp eax, ecx
// 0065789b  7404                 je 0x6578a1
// 0065789d  8930                 mov dword ptr [eax], esi
// 0065789f  eb02                 jmp 0x6578a3
// 006578a1  33c0                 xor eax, eax
// 006578a3  8906                 mov dword ptr [esi], eax
// 006578a5  894e0c               mov dword ptr [esi + 0xc], ecx
// 006578a8  894e10               mov dword ptr [esi + 0x10], ecx
// 006578ab  894e14               mov dword ptr [esi + 0x14], ecx
// 006578ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006578b2  8bc7                 mov eax, edi
// 006578b4  5f                   pop edi
// 006578b5  5e                   pop esi
// 006578b6  64890d00000000       mov dword ptr fs:[0], ecx
// 006578bd  83c410               add esp, 0x10
// 006578c0  c3                   ret 
// library openrbx-client/App\v8datamodel\RootInstance.cpp (function ??0ICameraOwner@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/RootInstance.cpp
