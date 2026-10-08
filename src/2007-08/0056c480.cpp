// from server: 7% by colin
// roc 2007-08 0056c480  unit: RBX::StandardOut  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c480
//
// 0056c480  55                   push ebp
// 0056c481  8bec                 mov ebp, esp
// 0056c483  6aff                 push -1
// 0056c485  6848487500           push 0x754848
// 0056c48a  64a100000000         mov eax, dword ptr fs:[0]
// 0056c490  50                   push eax
// 0056c491  64892500000000       mov dword ptr fs:[0], esp
// 0056c498  83ec10               sub esp, 0x10
// 0056c49b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0056c49e  53                   push ebx
// 0056c49f  56                   push esi
// 0056c4a0  57                   push edi
// 0056c4a1  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056c4a4  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0056c4ab  e840ecebff           call 0x42b0f0

struct StandardOut {
    void construct();
};

void StandardOut::construct()
{
    int* p = (int*)0x754848;
    (void)p;
    void (*fn)() = (void (*)())0x42b0f0;
    fn();
}
