// from server: 100% by tester
// roc 2008-06 005faa90  unit: UString_sink::?$stream_buffer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faa90
//
// 005faa90  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005faa93  8b4804               mov ecx, dword ptr [eax + 4]
// 005faa96  8b5028               mov edx, dword ptr [eax + 0x28]
// 005faa99  8d0c49               lea ecx, [ecx + ecx*2]
// 005faa9c  8d044a               lea eax, [edx + ecx*2]
// 005faa9f  c3                   ret 

struct S_func_006a7e30 {
    char pad0[0x10];
    int* m_p;
    int* f();
};

int* S_func_006a7e30::f()
{
    int* p = m_p;
    int a = *(int*)((char*)p + 4);
    int b = *(int*)((char*)p + 0x28);
    return (int*)(b + (a + a * 2) * 2);
}