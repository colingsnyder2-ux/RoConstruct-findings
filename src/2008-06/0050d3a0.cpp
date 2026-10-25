// from server: 100% by king_originala
// roc 2008-06 0050d3a0  unit: G3D::Log  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050d3a0
//
// 0050d3a0  8b442404             mov eax, dword ptr [esp + 4]
// 0050d3a4  8b4808               mov ecx, dword ptr [eax + 8]
// 0050d3a7  0faf4c240c           imul ecx, dword ptr [esp + 0xc]
// 0050d3ac  8b5004               mov edx, dword ptr [eax + 4]
// 0050d3af  034c2408             add ecx, dword ptr [esp + 8]
// 0050d3b3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050d3b7  89048a               mov dword ptr [edx + ecx*4], eax
// 0050d3ba  c3                   ret 

struct S {
    int unused;
    int* data;
    int width;
};

void __cdecl setValue(S* s, int x, int y, int value)
{
    s->data[y * s->width + x] = value;
}
