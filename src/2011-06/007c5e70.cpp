// from server: 18% by atomic.potato
// roc 2011-06 007c5e70  unit: RBX::EdgeEdgePair  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c5e70
//
// 007c5e70  55                   push ebp
// 007c5e71  8bec                 mov ebp, esp
// 007c5e73  51                   push ecx
// 007c5e74  894dfc               mov dword ptr [ebp - 4], ecx
// 007c5e77  8b45fc               mov eax, dword ptr [ebp - 4]
// 007c5e7a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 007c5e7d  8b4008               mov eax, dword ptr [eax + 8]
// 007c5e80  2b4104               sub eax, dword ptr [ecx + 4]
// 007c5e83  99                   cdq 
// 007c5e84  b914000000           mov ecx, 0x14
// 007c5e89  f7f9                 idiv ecx
// 007c5e8b  8be5                 mov esp, ebp
// 007c5e8d  5d                   pop ebp
// 007c5e8e  c3                   ret 

struct S
{
    int f();
    int a;
    int b;
};

int S::f()
{
    volatile int x = b;
    volatile int y = a;
    return (x - y) / 20;
}
