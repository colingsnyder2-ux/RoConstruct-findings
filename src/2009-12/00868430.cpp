// roc 2009-12 00868430  unit: CXTPPropertyGridView  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868430
//
// 00868430  6aff                 push -1
// 00868432  68c8f39500           push 0x95f3c8
// 00868437  64a100000000         mov eax, dword ptr fs:[0]
// 0086843d  50                   push eax
// 0086843e  83ec24               sub esp, 0x24
// 00868441  56                   push esi
// 00868442  a10052b600           mov eax, dword ptr [0xb65200]
// 00868447  33c4                 xor eax, esp
// 00868449  50                   push eax
// 0086844a  8d44242c             lea eax, [esp + 0x2c]
// 0086844e  64a300000000         mov dword ptr fs:[0], eax
// 00868454  8bf1                 mov esi, ecx
// 00868456  e8d5b9f8ff           call 0x7f3e30
// 0086845b  56                   push esi
// 0086845c  8d4c241c             lea ecx, [esp + 0x1c]
// 00868460  e825e00b00           call 0x92648a
// 00868465  56                   push esi
// 00868466  8d4c240c             lea ecx, [esp + 0xc]
// 0086846a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00868472  e8f92dfeff           call 0x84b270
// 00868477  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086847b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086847f  f7d8                 neg eax
// 00868481  50                   push eax
// 00868482  f7d9                 neg ecx
// 00868484  51                   push ecx
// 00868485  8d442410             lea eax, [esp + 0x10]
// 00868489  50                   push eax
// 0086848a  ff156ccc9800         call dword ptr [0x98cc6c]
// 00868490  8bce                 mov ecx, esi
// 00868492  e8b9f4ffff           call 0x867950
// 00868497  8b10                 mov edx, dword ptr [eax]
// 00868499  8b5218               mov edx, dword ptr [edx + 0x18]
// 0086849c  6a00                 push 0
// 0086849e  8d4c240c             lea ecx, [esp + 0xc]
// 008684a2  51                   push ecx
// 008684a3  8d4c2420             lea ecx, [esp + 0x20]
// 008684a7  51                   push ecx
// 008684a8  8bc8                 mov ecx, eax
// 008684aa  ffd2                 call edx
// 008684ac  8d4c2418             lea ecx, [esp + 0x18]
// 008684b0  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008684b8  e8c7df0b00           call 0x926484
// 008684bd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008684c1  64890d00000000       mov dword ptr fs:[0], ecx
// 008684c8  59                   pop ecx
// 008684c9  5e                   pop esi
// 008684ca  83c430               add esp, 0x30
// 008684cd  c3                   ret 
// copied from an identical function in another client (function ?OnNcPaint@CXTPPropertyGridView@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp