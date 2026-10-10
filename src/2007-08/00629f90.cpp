// from server: 52% by colin
// roc 2007-08 00629f90  unit: RBX::AssemblyStage  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629f90

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall string_copy_ctor(void* dest, const void* src);

struct AssemblyStage {
    int field0;
    int field4;
    int field8;
    char pad_c[0x1c];
    char field28;
    char field29;
};

AssemblyStage* __stdcall makeAssemblyStage(int a, int b, int c, const void* src, char flag)
{
    AssemblyStage* p = (AssemblyStage*)operator_new(0x2c);
    if (p) {
        p->field0 = a;
        p->field4 = b;
        p->field8 = c;
        string_copy_ctor(&p->pad_c[0], src);
        p->field28 = flag;
        p->field29 = 0;
    }
    return p;
}
