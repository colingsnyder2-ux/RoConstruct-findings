// from server: 78% by colin
// roc 2007-08 004cd810  unit: 0RBX::View  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd810
//
// 004cd810  56                   push esi
// 004cd811  8bf1                 mov esi, ecx
// 004cd813  8b06                 mov eax, dword ptr [esi]
// 004cd815  8b5024               mov edx, dword ptr [eax + 0x24]
// 004cd818  ffd2                 call edx
// 004cd81a  dd05c8db7900         fld qword ptr [0x79dbc8]
// 004cd820  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 004cd823  8b01                 mov eax, dword ptr [ecx]
// 004cd825  8b5014               mov edx, dword ptr [eax + 0x14]
// 004cd828  83ec08               sub esp, 8
// 004cd82b  dd1c24               fstp qword ptr [esp]
// 004cd82e  ffd2                 call edx
// 004cd830  8b4608               mov eax, dword ptr [esi + 8]
// 004cd833  8b8088010000         mov eax, dword ptr [eax + 0x188]
// 004cd839  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 004cd83f  8b764c               mov esi, dword ptr [esi + 0x4c]
// 004cd842  8d8828020000         lea ecx, [eax + 0x228]
// 004cd848  8b4208               mov eax, dword ptr [edx + 8]
// 004cd84b  ffd0                 call eax
// 004cd84d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd851  50                   push eax
// 004cd852  51                   push ecx
// 004cd853  8bce                 mov ecx, esi
// 004cd855  e826c70200           call 0x4f9f80
// 004cd85a  5e                   pop esi
// 004cd85b  c20400               ret 4

struct Sub1 {
    virtual void f0();
    virtual void f4();
    virtual void f8();
    virtual void f12();
    virtual void f16();
    virtual void f20();
    virtual void f24();
    virtual void f28();
    virtual void f32();
    virtual void f36();
};

struct Sub2 {
    virtual void f0();
    virtual void f4();
    virtual void f8();
    virtual void f12();
    virtual void f16();
    virtual void f20(double);
};

struct Sub3 {
    virtual void f0();
    virtual void f4();
    virtual void f8();
};

struct View {
    void f(int);
};

extern "C" void __stdcall func_4f9f80(void*, int, int);

void View::f(int arg)
{
    Sub1* p1 = *(Sub1**)((char*)this + 0);
    p1->f24();

    double d = *(double*)0x79dbc8;
    Sub2* p2 = *(Sub2**)((char*)this + 0x48);
    p2->f20(d);

    Sub3* p3 = *(Sub3**)(*(char**)((char*)this + 8) + 0x188);
    void* p4 = *(void**)((char*)p3 + 0x228);
    void* p5 = *(void**)((char*)this + 0x4c);
    int r = ((int (__thiscall*)(void*))*(void**)((char*)p4 + 8))((char*)p3 + 0x228);
    func_4f9f80(p5, arg, r);
}
