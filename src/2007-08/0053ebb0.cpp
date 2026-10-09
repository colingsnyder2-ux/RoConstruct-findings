// from server: 27% by colin
// roc 2007-08 0053ebb0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ebb0
//
// 0053ebb0  55                   push ebp
// 0053ebb1  8bec                 mov ebp, esp
// 0053ebb3  6aff                 push -1
// 0053ebb5  6871137500           push 0x751371
// 0053ebba  64a100000000         mov eax, dword ptr fs:[0]
// 0053ebc0  50                   push eax
// 0053ebc1  64892500000000       mov dword ptr fs:[0], esp
// 0053ebc8  83ec24               sub esp, 0x24
// 0053ebcb  53                   push ebx
// 0053ebcc  56                   push esi
// 0053ebcd  33d2                 xor edx, edx
// 0053ebcf  3bca                 cmp ecx, edx
// 0053ebd1  57                   push edi
// 0053ebd2  8965f0               mov dword ptr [ebp - 0x10], esp
// 0053ebd5  8955fc               mov dword ptr [ebp - 4], edx
// 0053ebd8  7403                 je 0x53ebdd
// 0053ebda  8d518c               lea edx, [ecx - 0x74]
// 0053ebdd  8b7d08               mov edi, dword ptr [ebp + 8]
// 0053ebe0  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0053ebe3  8b31                 mov esi, dword ptr [ecx]
// 0053ebe5  83ec0c               sub esp, 0xc
// 0053ebe8  8bc4                 mov eax, esp
// 0053ebea  8938                 mov dword ptr [eax], edi
// 0053ebec  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0053ebef  897804               mov dword ptr [eax + 4], edi
// 0053ebf2  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0053ebf5  897808               mov dword ptr [eax + 8], edi
// 0053ebf8  8b06                 mov eax, dword ptr [esi]
// 0053ebfa  52                   push edx
// 0053ebfb  ffd0                 call eax

struct S_func_0053ebb0 {
    int f(int a1, int a2, int a3, int* a4);
};

int S_func_0053ebb0::f(int a1, int a2, int a3, int* a4)
{
    int* p = a4;
    int v = *p;
    int* q = (int*)v;
    int r = *q;
    int args[3];
    args[0] = a1;
    args[1] = a2;
    args[2] = a3;
    int self = (int)this;
    if (self != 0)
        self -= 0x74;
    return ((int (__stdcall*)(int, int, int, int))r)(self, args[0], args[1], args[2]);
}
