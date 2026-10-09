// from server: 47% by colin
// roc 2007-08 004fc2a0  unit: RBX::Render::AggregateChunk  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc2a0
//
// 004fc2a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fc2a4  83ec0c               sub esp, 0xc
// 004fc2a7  85c9                 test ecx, ecx
// 004fc2a9  7712                 ja 0x4fc2bd
// 004fc2ab  33c9                 xor ecx, ecx
// 004fc2ad  c1e105               shl ecx, 5
// 004fc2b0  51                   push ecx
// 004fc2b1  e8403c1300           call 0x62fef6
// 004fc2b6  83c404               add esp, 4
// 004fc2b9  83c40c               add esp, 0xc
// 004fc2bc  c3                   ret 
// 004fc2bd  83c8ff               or eax, 0xffffffff
// 004fc2c0  33d2                 xor edx, edx
// 004fc2c2  f7f1                 div ecx
// 004fc2c4  83f820               cmp eax, 0x20
// 004fc2c7  73e4                 jae 0x4fc2ad
// 004fc2c9  8d442410             lea eax, [esp + 0x10]
// 004fc2cd  50                   push eax
// 004fc2ce  8d4c2404             lea ecx, [esp + 4]
// 004fc2d2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004fc2da  ff15ece67700         call dword ptr [0x77e6ec]
// 004fc2e0  687cf18300           push 0x83f17c
// 004fc2e5  8d4c2404             lea ecx, [esp + 4]
// 004fc2e9  51                   push ecx
// 004fc2ea  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 004fc2f2  e8a7481300           call 0x630b9e

struct T_func_004fc2a0 {
    void m(unsigned int n);
};

extern "C" void __cdecl sub_0062fef6(unsigned int);
extern "C" void __cdecl sub_00630b9e(void*, void*);
extern "C" void __stdcall sub_0077e6ec(void*, void*);

void T_func_004fc2a0::m(unsigned int n)
{
    if (n > 0) {
        unsigned int q = 0xffffffffu / n;
        if (q < 0x20) {
            void* p = 0;
            sub_0077e6ec(&p, &p);
            void* v = (void*)0x784e54;
            sub_00630b9e(&v, (void*)0x83f17c);
        }
    }
    sub_0062fef6(n << 5);
}
