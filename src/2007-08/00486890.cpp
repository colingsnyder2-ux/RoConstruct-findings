// from server: 78% by colin
// roc 2007-08 00486890  unit: G3D::GWindow  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486890
//
// 00486890  51                   push ecx
// 00486891  56                   push esi
// 00486892  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00486896  81c13c010000         add ecx, 0x13c
// 0048689c  51                   push ecx
// 0048689d  8bce                 mov ecx, esi
// 0048689f  c744240800000000     mov dword ptr [esp + 8], 0
// 004868a7  ff159ce67700         call dword ptr [0x77e69c]
// 004868ad  8bc6                 mov eax, esi
// 004868af  5e                   pop esi
// 004868b0  59                   pop ecx
// 004868b1  c20400               ret 4

struct GWindow {
    char pad[0x13c];
    void* field_13c;
    GWindow* construct(GWindow* other);
};

extern "C" void* __stdcall sub_77e69c(void*, void*);

GWindow* GWindow::construct(GWindow* other)
{
    void* tmp = 0;
    sub_77e69c(&field_13c, &tmp);
    return other;
}
