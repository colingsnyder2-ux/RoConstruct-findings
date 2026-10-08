// from server: 26% by colin
// roc 2007-08 005585c0  unit: RBX::DataModel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005585c0
//
// 005585c0  55                   push ebp
// 005585c1  8bec                 mov ebp, esp
// 005585c3  6aff                 push -1
// 005585c5  68e1327500           push 0x7532e1
// 005585ca  64a100000000         mov eax, dword ptr fs:[0]
// 005585d0  50                   push eax
// 005585d1  64892500000000       mov dword ptr fs:[0], esp
// 005585d8  83ec2c               sub esp, 0x2c
// 005585db  53                   push ebx
// 005585dc  56                   push esi
// 005585dd  33c0                 xor eax, eax
// 005585df  3bc8                 cmp ecx, eax
// 005585e1  57                   push edi
// 005585e2  8965f0               mov dword ptr [ebp - 0x10], esp
// 005585e5  8945fc               mov dword ptr [ebp - 4], eax
// 005585e8  7406                 je 0x5585f0
// 005585ea  8d812cfdffff         lea eax, [ecx - 0x2d4]
// 005585f0  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005585f3  8b7508               mov esi, dword ptr [ebp + 8]
// 005585f6  8b11                 mov edx, dword ptr [ecx]
// 005585f8  56                   push esi
// 005585f9  50                   push eax
// 005585fa  8b02                 mov eax, dword ptr [edx]
// 005585fc  ffd0                 call eax

struct DataModel {
    void f(int, void*);
};

void DataModel::f(int a, void* b)
{
    DataModel* p = this;
    if (p != 0)
        p = (DataModel*)((char*)p - 0x2d4);
    void** vt = *(void***)b;
    void (*fn)(void*, DataModel*) = (void (*)(void*, DataModel*))vt[0];
    fn(b, p);
}
