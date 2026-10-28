// roc 2007-08 00534300  unit: RBX::ScriptContext  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534300
//
// 00534300  6aff                 push -1
// 00534302  68b2417500           push 0x7541b2
// 00534307  64a100000000         mov eax, dword ptr fs:[0]
// 0053430d  50                   push eax
// 0053430e  64892500000000       mov dword ptr fs:[0], esp
// 00534315  83ec44               sub esp, 0x44
// 00534318  6880617900           push 0x796180
// 0053431d  8d4c2404             lea ecx, [esp + 4]
// 00534321  ff1598e67700         call dword ptr [0x77e698]
// 00534327  8d4c241c             lea ecx, [esp + 0x1c]
// 0053432b  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00534333  ff15f8e67700         call dword ptr [0x77e6f8]
// 00534339  8d0424               lea eax, [esp]
// 0053433c  50                   push eax
// 0053433d  8d4c242c             lea ecx, [esp + 0x2c]
// 00534341  c644245001           mov byte ptr [esp + 0x50], 1
// 00534346  c7442420604e7800     mov dword ptr [esp + 0x20], 0x784e60
// 0053434e  ff159ce67700         call dword ptr [0x77e69c]
// 00534354  6864f38300           push 0x83f364
// 00534359  8d4c2420             lea ecx, [esp + 0x20]
// 0053435d  51                   push ecx
// 0053435e  c644245400           mov byte ptr [esp + 0x54], 0
// 00534363  c7442424784e7800     mov dword ptr [esp + 0x24], 0x784e78
// 0053436b  e82ec80f00           call 0x630b9e
// standard library vector<char> (function ?_Xran@?$vector@DV?$allocator@D@std@@@std@@KAXXZ)

// stl: vector<char>
typedef char E;
#include <vector>
template class std::vector<E>;
