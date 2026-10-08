// from server: 100% by colin
// roc 2007-08 006485c0  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006485c0
//
// 006485c0  8b542404             mov edx, dword ptr [esp + 4]
// 006485c4  8bc1                 mov eax, ecx
// 006485c6  33c9                 xor ecx, ecx
// 006485c8  8908                 mov dword ptr [eax], ecx
// 006485ca  895004               mov dword ptr [eax + 4], edx
// 006485cd  894808               mov dword ptr [eax + 8], ecx
// 006485d0  89480c               mov dword ptr [eax + 0xc], ecx
// 006485d3  c20400               ret 4

struct CXTPCommandBar {
    int field0;
    int field4;
    int field8;
    int fieldC;
    CXTPCommandBar* construct(int arg);
};

CXTPCommandBar* CXTPCommandBar::construct(int arg)
{
    field0 = 0;
    field4 = arg;
    field8 = 0;
    fieldC = 0;
    return this;
}
