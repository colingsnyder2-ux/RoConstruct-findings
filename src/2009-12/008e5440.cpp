// roc 2009-12 008e5440  unit: CXTCaptionButton  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5440
//
// 008e5440  6aff                 push -1
// 008e5442  6803e49500           push 0x95e403
// 008e5447  64a100000000         mov eax, dword ptr fs:[0]
// 008e544d  50                   push eax
// 008e544e  81ec88000000         sub esp, 0x88
// 008e5454  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5459  33c4                 xor eax, esp
// 008e545b  89842484000000       mov dword ptr [esp + 0x84], eax
// 008e5462  56                   push esi
// 008e5463  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5468  33c4                 xor eax, esp
// 008e546a  50                   push eax
// 008e546b  8d842490000000       lea eax, [esp + 0x90]
// 008e5472  64a300000000         mov dword ptr fs:[0], eax
// 008e5478  8bf1                 mov esi, ecx
// 008e547a  56                   push esi
// 008e547b  8d4c243c             lea ecx, [esp + 0x3c]
// 008e547f  e86cedf0ff           call 0x7f41f0
// 008e5484  8d442438             lea eax, [esp + 0x38]
// 008e5488  50                   push eax
// 008e5489  8d4c240c             lea ecx, [esp + 0xc]
// 008e548d  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 008e5498  e8635ff6ff           call 0x84b400
// 008e549d  8b16                 mov edx, dword ptr [esi]
// 008e549f  8b92a0010000         mov edx, dword ptr [edx + 0x1a0]
// 008e54a5  8d442408             lea eax, [esp + 8]
// 008e54a9  50                   push eax
// 008e54aa  8bce                 mov ecx, esi
// 008e54ac  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008e54b4  ffd2                 call edx
// 008e54b6  8d4c2408             lea ecx, [esp + 8]
// 008e54ba  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008e54c2  e87960f6ff           call 0x84b540
// 008e54c7  8d4c2438             lea ecx, [esp + 0x38]
// 008e54cb  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 008e54d6  e80fedf0ff           call 0x7f41ea
// 008e54db  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008e54e2  64890d00000000       mov dword ptr fs:[0], ecx
// 008e54e9  59                   pop ecx
// 008e54ea  5e                   pop esi
// 008e54eb  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e54f2  33cc                 xor ecx, esp
// 008e54f4  e8a1fef0ff           call 0x7f539a
// 008e54f9  81c494000000         add esp, 0x94
// 008e54ff  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp