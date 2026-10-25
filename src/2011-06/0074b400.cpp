// from server: 100% by tester
// roc 2011-06 0074b400  unit: RBX::Joint  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074b400
//
// 0074b400  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0074b403  8b4804               mov ecx, dword ptr [eax + 4]
// 0074b406  8b5034               mov edx, dword ptr [eax + 0x34]
// 0074b409  8d0c49               lea ecx, [ecx + ecx*2]
// 0074b40c  8d044a               lea eax, [edx + ecx*2]
// 0074b40f  c3                   ret 

struct S_func_006a7e30 {
    char pad0[0x18];
    int* m_p;
    int* f();
};

int* S_func_006a7e30::f()
{
    int* p = m_p;
    int a = *(int*)((char*)p + 4);
    int b = *(int*)((char*)p + 0x34);
    return (int*)(b + (a + a * 2) * 2);
}