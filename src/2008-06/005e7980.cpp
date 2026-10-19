// from server: 77% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 76% by colin
// roc 2008-06 005e7980  unit: RBX::Geometry  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7980
//
// 005e7980  83ec0c               sub esp, 0xc
// 005e7983  53                   push ebx
// 005e7984  56                   push esi
// 005e7985  57                   push edi
// 005e7986  8bf9                 mov edi, ecx
// 005e7988  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 005e798e  8bcb                 mov ecx, ebx
// 005e7990  e8cb19fbff           call 0x599360
// 005e7995  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 005e799b  8bce                 mov ecx, esi
// 005e799d  e8be19fbff           call 0x599360
// 005e79a2  8b8f9c000000         mov ecx, dword ptr [edi + 0x9c]
// 005e79a8  8b01                 mov eax, dword ptr [ecx]
// 005e79aa  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e79ad  81c394000000         add ebx, 0x94
// 005e79b3  53                   push ebx
// 005e79b4  8d542410             lea edx, [esp + 0x10]
// 005e79b8  52                   push edx
// 005e79b9  ffd0                 call eax
// 005e79bb  d900                 fld dword ptr [eax]
// 005e79bd  d886b8000000         fadd dword ptr [esi + 0xb8]
// 005e79c3  5f                   pop edi
// 005e79c4  d986bc000000         fld dword ptr [esi + 0xbc]
// 005e79ca  d84004               fadd dword ptr [eax + 4]
// 005e79cd  d986c0000000         fld dword ptr [esi + 0xc0]
// 005e79d3  d84008               fadd dword ptr [eax + 8]
// 005e79d6  d986b8000000         fld dword ptr [esi + 0xb8]
// 005e79dc  d820                 fsub dword ptr [eax]
// 005e79de  d986bc000000         fld dword ptr [esi + 0xbc]
// 005e79e4  d86004               fsub dword ptr [eax + 4]
// 005e79e7  d986c0000000         fld dword ptr [esi + 0xc0]
// 005e79ed  5e                   pop esi
// 005e79ee  d86008               fsub dword ptr [eax + 8]
// 005e79f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e79f5  d9ca                 fxch st(2)
// 005e79f7  5b                   pop ebx
// 005e79f8  d918                 fstp dword ptr [eax]
// 005e79fa  d95804               fstp dword ptr [eax + 4]
// 005e79fd  d95808               fstp dword ptr [eax + 8]
// 005e7a00  d9ca                 fxch st(2)
// 005e7a02  d9580c               fstp dword ptr [eax + 0xc]
// 005e7a05  d95810               fstp dword ptr [eax + 0x10]
// 005e7a08  d95814               fstp dword ptr [eax + 0x14]
// 005e7a0b  d900                 fld dword ptr [eax]
// 005e7a0d  d9058c748200         fld dword ptr [0x82748c]
// 005e7a13  dce9                 fsub st(1), st(0)
// 005e7a15  d9c9                 fxch st(1)
// 005e7a17  d918                 fstp dword ptr [eax]
// 005e7a19  d94004               fld dword ptr [eax + 4]
// 005e7a1c  d8e1                 fsub st(1)
// 005e7a1e  d95804               fstp dword ptr [eax + 4]
// 005e7a21  d94008               fld dword ptr [eax + 8]
// 005e7a24  d8e1                 fsub st(1)
// 005e7a26  d95808               fstp dword ptr [eax + 8]
// 005e7a29  d9400c               fld dword ptr [eax + 0xc]
// 005e7a2c  d8c1                 fadd st(1)
// 005e7a2e  d9580c               fstp dword ptr [eax + 0xc]
// 005e7a31  d94010               fld dword ptr [eax + 0x10]
// 005e7a34  d8c1                 fadd st(1)
// 005e7a36  d95810               fstp dword ptr [eax + 0x10]
// 005e7a39  d84014               fadd dword ptr [eax + 0x14]
// 005e7a3c  d95814               fstp dword ptr [eax + 0x14]
// 005e7a3f  83c40c               add esp, 0xc
// 005e7a42  c20400               ret 4

struct DataSource {
    const void* get();
};

struct Geometry {
    char pad0[0x9c];
    DataSource* dataSource;
    void* fieldA0;
    void* fieldA4;
    void compute(void* out);
};

void Geometry::compute(void* out) {
    DataSource* ds = *(DataSource**)((char*)this + 0xa0);
    ds->get();
    DataSource* ds2 = *(DataSource**)((char*)this + 0xa0);
    ds2->get();

    DataSource* src = *(DataSource**)((char*)this + 0x9c);
    void* vtable = *(void**)src;
    float* (__thiscall* fn)(void*, void*, void*) = *(float* (__thiscall**)(void*, void*, void*))((char*)vtable + 0x14);

    float local[3];
    float* r = fn(src, local, (char*)ds + 0x94);

    float* o = (float*)out;
    float* s = (float*)ds2;

    o[0] = r[0] + s[0xb8 / 4];
    o[1] = r[1] + s[0xbc / 4];
    o[2] = r[2] + s[0xc0 / 4];
    o[3] = s[0xb8 / 4] - r[0];
    o[4] = s[0xbc / 4] - r[1];
    o[5] = s[0xc0 / 4] - r[2];

    float depth = *(float*)0x82748c;
    o[0] = o[0] - depth;
    o[1] = o[1] - depth;
    o[2] = o[2] - depth;
    o[3] = o[3] + depth;
    o[4] = o[4] + depth;
    o[5] = o[5] + depth;
}
