// from server: 76% by colin
// roc 2007-08 004fd390  unit: RBX::Render::AggregateChunk  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd390
//
// 004fd390  8b442404             mov eax, dword ptr [esp + 4]
// 004fd394  d94044               fld dword ptr [eax + 0x44]
// 004fd397  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fd39b  d84040               fadd dword ptr [eax + 0x40]
// 004fd39e  d84048               fadd dword ptr [eax + 0x48]
// 004fd3a1  dd05f82a7900         fld qword ptr [0x792af8]
// 004fd3a7  dcf9                 fdiv st(1), st(0)
// 004fd3a9  d9400c               fld dword ptr [eax + 0xc]
// 004fd3ac  dd05c8f87900         fld qword ptr [0x79f8c8]
// 004fd3b2  d9c0                 fld st(0)
// 004fd3b4  dee2                 fsubrp st(2)
// 004fd3b6  d9cb                 fxch st(3)
// 004fd3b8  dec9                 fmulp st(1)
// 004fd3ba  d94144               fld dword ptr [ecx + 0x44]
// 004fd3bd  d84140               fadd dword ptr [ecx + 0x40]
// 004fd3c0  d84148               fadd dword ptr [ecx + 0x48]
// 004fd3c3  def2                 fdivrp st(2)
// 004fd3c5  d9410c               fld dword ptr [ecx + 0xc]
// 004fd3c8  deeb                 fsubp st(3)
// 004fd3ca  d9c9                 fxch st(1)
// 004fd3cc  deca                 fmulp st(2)
// 004fd3ce  ded9                 fcompp 
// 004fd3d0  dfe0                 fnstsw ax
// 004fd3d2  f6c441               test ah, 0x41
// 004fd3d5  7506                 jne 0x4fd3dd
// 004fd3d7  b801000000           mov eax, 1
// 004fd3dc  c3                   ret 
// 004fd3dd  33c0                 xor eax, eax
// 004fd3df  c3                   ret 

struct RBX_Render_AggregateChunk
{
    char pad0[0xc];
    float field_c;
    char pad10[0x30];
    float field_40;
    float field_44;
    float field_48;
};

extern double G_00792af8;
extern double G_0079f8c8;

int compare_chunks(RBX_Render_AggregateChunk* a, RBX_Render_AggregateChunk* b)
{
    double v1 = (double)(a->field_44 + a->field_40 + a->field_48) / G_00792af8;
    double v2 = G_0079f8c8 - (double)a->field_c;
    double v3 = v2 * v1;

    double v4 = (double)(b->field_44 + b->field_40 + b->field_48);
    double v5 = G_0079f8c8 - (double)b->field_c;
    double v6 = v5 * (v4 / G_00792af8);

    if (v3 == v6)
        return 0;
    return 1;
}
