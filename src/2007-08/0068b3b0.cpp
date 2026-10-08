// from server: 93% by colin
// roc 2007-08 0068b3b0  unit: CXTPTabClientWnd  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b3b0
//
// 0068b3b0  56                   push esi
// 0068b3b1  8bf1                 mov esi, ecx
// 0068b3b3  e8864efaff           call 0x63023e
// 0068b3b8  8b06                 mov eax, dword ptr [esi]
// 0068b3ba  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0068b3c0  8bce                 mov ecx, esi
// 0068b3c2  c7466001000000       mov dword ptr [esi + 0x60], 1
// 0068b3c9  ffd2                 call edx
// 0068b3cb  5e                   pop esi
// 0068b3cc  c20c00               ret 0xc

struct CXTPTabClientWnd {
    void f(int, int, int);
};

extern "C" void __stdcall sub_63023e();

void CXTPTabClientWnd::f(int a, int b, int c)
{
    sub_63023e();
    int* vt = *(int**)this;
    void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))*(int*)((char*)vt + 0x13c);
    *(int*)((char*)this + 0x60) = 1;
    fn(this);
}
