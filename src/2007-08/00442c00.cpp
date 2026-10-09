// from server: 59% by colin
// roc 2007-08 00442c00  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442c00
//
// 00442c00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00442c04  83ec0c               sub esp, 0xc
// 00442c07  85c9                 test ecx, ecx
// 00442c09  7712                 ja 0x442c1d
// 00442c0b  33c9                 xor ecx, ecx
// 00442c0d  c1e104               shl ecx, 4
// 00442c10  51                   push ecx
// 00442c11  e8e0d21e00           call 0x62fef6
// 00442c16  83c404               add esp, 4
// 00442c19  83c40c               add esp, 0xc
// 00442c1c  c3                   ret 
// 00442c1d  83c8ff               or eax, 0xffffffff
// 00442c20  33d2                 xor edx, edx
// 00442c22  f7f1                 div ecx
// 00442c24  83f810               cmp eax, 0x10
// 00442c27  73e4                 jae 0x442c0d
// 00442c29  8d442410             lea eax, [esp + 0x10]
// 00442c2d  50                   push eax
// 00442c2e  8d4c2404             lea ecx, [esp + 4]
// 00442c32  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00442c3a  ff15ece67700         call dword ptr [0x77e6ec]
// 00442c40  687cf18300           push 0x83f17c
// 00442c45  8d4c2404             lea ecx, [esp + 4]
// 00442c49  51                   push ecx
// 00442c4a  c7442408544e7800     mov dword ptr [esp + 8], 0x784e54
// 00442c52  e847df1e00           call 0x630b9e

extern "C" void __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_00630b9e(void*, void*);
extern "C" void __stdcall func_0077e6ec(void*);

struct S {
    void f(unsigned int n);
};

void S::f(unsigned int n)
{
    if (n <= 0) {
        func_0062fef6(0);
        return;
    }
    unsigned int q = 0xffffffffu / n;
    if (q >= 0x10) {
        func_0062fef6(0);
        return;
    }
    void* p = 0;
    func_0077e6ec(&p);
    func_00630b9e(&p, (void*)0x784e54);
    func_00630b9e((void*)0x83f17c, &p);
}
