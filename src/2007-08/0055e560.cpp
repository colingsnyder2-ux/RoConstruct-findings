// from server: 61% by colin
// roc 2007-08 0055e560  unit: RBX::CameraTiltUpCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e560
//
// 0055e560  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055e563  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055e569  8b5004               mov edx, dword ptr [eax + 4]
// 0055e56c  81c128020000         add ecx, 0x228
// 0055e572  ffd2                 call edx
// 0055e574  6aff                 push -1
// 0055e576  8bc8                 mov ecx, eax
// 0055e578  e8f3af0300           call 0x599570
// 0055e57d  c3                   ret 

struct Inner {
    char pad0[0x228];
    void* m_vt;
};

struct Outer {
    char pad0[0xc];
    Inner* m_inner;
    void f();
};

extern void __stdcall G1_func_00599570(int);

void Outer::f()
{
    Inner* p = m_inner;
    void* vt = p->m_vt;
    void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))((char*)vt + 4);
    fn((char*)p + 0x228);
    G1_func_00599570(-1);
}
