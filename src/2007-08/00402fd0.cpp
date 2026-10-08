// from server: 66% by colin
// roc 2007-08 00402fd0  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402fd0
//
// 00402fd0  b803400080           mov eax, 0x80004003
// 00402fd5  e844da2200           call 0x630a1e
// 00402fda  83c418               add esp, 0x18
// 00402fdd  c20c00               ret 0xc

struct S_func_00402fd0 {
    int f(int, int, int);
};

int S_func_00402fd0::f(int, int, int)
{
    return 0x80004003;
}
