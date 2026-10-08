// from server: 21% by colin
// roc 2007-08 00558500  unit: RBX::DataModel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558500
//
// 00558500  55                   push ebp
// 00558501  8bec                 mov ebp, esp
// 00558503  6aff                 push -1
// 00558505  68c1327500           push 0x7532c1
// 0055850a  64a100000000         mov eax, dword ptr fs:[0]
// 00558510  50                   push eax
// 00558511  64892500000000       mov dword ptr fs:[0], esp
// 00558518  83ec2c               sub esp, 0x2c
// 0055851b  53                   push ebx
// 0055851c  56                   push esi
// 0055851d  33c0                 xor eax, eax
// 0055851f  3bc8                 cmp ecx, eax
// 00558521  57                   push edi
// 00558522  8965f0               mov dword ptr [ebp - 0x10], esp
// 00558525  8945fc               mov dword ptr [ebp - 4], eax
// 00558528  7406                 je 0x558530
// 0055852a  8d8118ffffff         lea eax, [ecx - 0xe8]
// 00558530  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00558533  8b7508               mov esi, dword ptr [ebp + 8]
// 00558536  8b11                 mov edx, dword ptr [ecx]
// 00558538  56                   push esi
// 00558539  50                   push eax
// 0055853a  8b02                 mov eax, dword ptr [edx]
// 0055853c  ffd0                 call eax

struct DataModel_00558500 {
    void f(void* a1, void* a2);
};

void DataModel_00558500::f(void* a1, void* a2)
{
    char* p = (char*)this;
    if (p != 0)
        p -= 0xe8;
    void** vtbl = *(void***)a2;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0];
    fn(p, a1);
}
