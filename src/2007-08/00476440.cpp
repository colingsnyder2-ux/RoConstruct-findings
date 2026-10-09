// from server: 75% by colin
// roc 2007-08 00476440  unit: CInstanceRecord::CNameItem  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476440
//
// 00476440  51                   push ecx
// 00476441  8d0424               lea eax, [esp]
// 00476444  50                   push eax
// 00476445  6806140000           push 0x1406
// 0047644a  6802190000           push 0x1902
// 0047644f  6a01                 push 1
// 00476451  6a01                 push 1
// 00476453  e868f5ffff           call 0x4759c0
// 00476458  2b442420             sub eax, dword ptr [esp + 0x20]
// 0047645c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00476460  83e801               sub eax, 1
// 00476463  50                   push eax
// 00476464  51                   push ecx
// 00476465  ff1588eb7700         call dword ptr [0x77eb88]
// 0047646b  d90424               fld dword ptr [esp]
// 0047646e  59                   pop ecx
// 0047646f  c20800               ret 8

struct CNameItem {
    float f(int, int);
};

extern "C" int __stdcall sub_4759C0(int, int, int, int, int*);
extern "C" void __stdcall glReadPixels(int, int, int, int, unsigned int, unsigned int, void*);

float CNameItem::f(int a, int b) {
    int x;
    int r = sub_4759C0(1, 1, 0x1902, 0x1406, &x);
    r = r - a - 1;
    glReadPixels(b, r, 1, 1, 0x1902, 0x1406, &x);
    return *(float*)&x;
}
