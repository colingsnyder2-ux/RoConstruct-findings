// from server: 62% by colin
// roc 2007-08 0063a690  unit: CXTPControl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a690
//
// 0063a690  83ec10               sub esp, 0x10
// 0063a693  56                   push esi
// 0063a694  8bf1                 mov esi, ecx
// 0063a696  8b06                 mov eax, dword ptr [esi]
// 0063a698  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0063a69e  6a00                 push 0
// 0063a6a0  ffd2                 call edx
// 0063a6a2  85c0                 test eax, eax
// 0063a6a4  744b                 je 0x63a6f1
// 0063a6a6  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0063a6ad  7442                 je 0x63a6f1
// 0063a6af  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0063a6b5  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0063a6bb  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0063a6c1  89442404             mov dword ptr [esp + 4], eax
// 0063a6c5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0063a6cb  89442410             mov dword ptr [esp + 0x10], eax
// 0063a6cf  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063a6d3  894c2408             mov dword ptr [esp + 8], ecx
// 0063a6d7  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063a6dd  8954240c             mov dword ptr [esp + 0xc], edx
// 0063a6e1  8b11                 mov edx, dword ptr [ecx]
// 0063a6e3  8b929c010000         mov edx, dword ptr [edx + 0x19c]
// 0063a6e9  50                   push eax
// 0063a6ea  8d442408             lea eax, [esp + 8]
// 0063a6ee  50                   push eax
// 0063a6ef  ffd2                 call edx
// 0063a6f1  5e                   pop esi
// 0063a6f2  83c410               add esp, 0x10
// 0063a6f5  c20400               ret 4

struct CXTPControl {
    void OnDrawSomething(int);
};

struct CXTPControlImpl {
    virtual int GetSomething(int);
    virtual void DrawSomething(int, int*);
};

struct CXTPControl_ {
    int field0;
    char pad[0xf8];
    int field_fc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
};

void CXTPControl::OnDrawSomething(int arg) {
    CXTPControl_* self = (CXTPControl_*)this;
    int* vtable = *(int**)this;
    int (*func)(void*, int) = (int (*)(void*, int))vtable[0x80/4];
    int result = func(this, 0);
    if (result != 0) {
        if (self->field_fc != 0) {
            int a = self->field_c0;
            int b = self->field_c4;
            int c = self->field_c8;
            int d = self->field_cc;
            int stack[4];
            stack[0] = a;
            stack[1] = b;
            stack[2] = c;
            stack[3] = d;
            CXTPControlImpl* impl = (CXTPControlImpl*)self->field_fc;
            int* implVtable = *(int**)impl;
            void (*draw)(void*, int*, int) = (void (*)(void*, int*, int))implVtable[0x19c/4];
            draw(impl, stack, arg);
        }
    }
}
