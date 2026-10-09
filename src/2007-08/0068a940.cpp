// from server: 76% by colin
// roc 2007-08 0068a940  unit: CXTPControlTabWorkspace  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a940
//
// 0068a940  83ec10               sub esp, 0x10
// 0068a943  56                   push esi
// 0068a944  8bf1                 mov esi, ecx
// 0068a946  8b4e94               mov ecx, dword ptr [esi - 0x6c]
// 0068a949  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 0068a953  8b01                 mov eax, dword ptr [ecx]
// 0068a955  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 0068a95b  ffd2                 call edx
// 0068a95d  8b8658ffffff         mov eax, dword ptr [esi - 0xa8]
// 0068a963  8b9660ffffff         mov edx, dword ptr [esi - 0xa0]
// 0068a969  8b8e5cffffff         mov ecx, dword ptr [esi - 0xa4]
// 0068a96f  89442404             mov dword ptr [esp + 4], eax
// 0068a973  8b8664ffffff         mov eax, dword ptr [esi - 0x9c]
// 0068a979  8954240c             mov dword ptr [esp + 0xc], edx
// 0068a97d  8b16                 mov edx, dword ptr [esi]
// 0068a97f  8b5234               mov edx, dword ptr [edx + 0x34]
// 0068a982  89442410             mov dword ptr [esp + 0x10], eax
// 0068a986  6a00                 push 0
// 0068a988  8d442408             lea eax, [esp + 8]
// 0068a98c  894c240c             mov dword ptr [esp + 0xc], ecx
// 0068a990  50                   push eax
// 0068a991  8bce                 mov ecx, esi
// 0068a993  ffd2                 call edx
// 0068a995  5e                   pop esi
// 0068a996  83c410               add esp, 0x10
// 0068a999  c3                   ret 

struct CXTPControlTabWorkspace {
    void f();
};

void CXTPControlTabWorkspace::f() {
    int v[4];
    int* p = (int*)((char*)this - 0x6c);
    int* q = (int*)((char*)this - 0xa8);
    int* obj = (int*)*p;
    *(int*)((char*)this + 0xa8) = 1;
    void (__stdcall *fn)(void) = *(void (__stdcall **)(void))((char*)obj + 0x17c);
    fn();
    v[0] = q[0];
    v[1] = q[1];
    v[2] = q[2];
    v[3] = q[3];
    void (__stdcall *fn2)(int*, int) = *(void (__stdcall **)(int*, int))((char*)*(int*)this + 0x34);
    fn2(v, 0);
}
