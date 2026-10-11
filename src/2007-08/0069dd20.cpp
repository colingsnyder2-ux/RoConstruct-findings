// from server: 75% by colin
// roc 2007-08 0069dd20  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dd20
//
// 0069dd20  8b442404             mov eax, dword ptr [esp + 4]
// 0069dd24  8b9138010000         mov edx, dword ptr [ecx + 0x138]
// 0069dd2a  81c130010000         add ecx, 0x130
// 0069dd30  50                   push eax
// 0069dd31  52                   push edx
// 0069dd32  e8d94b0300           call 0x6d2910
// 0069dd37  c20400               ret 4

struct CXTPPropertyGridItemColor {
    char pad[0x130];
    int field_130;
    int field_134;
    int field_138;
    void OnInplaceButtonDown(int);
};

void CXTPPropertyGridItemColor::OnInplaceButtonDown(int arg) {
    int v = field_138;
    int* p = &field_130;
    extern void __stdcall sub_6d2910(int*, int);
    sub_6d2910(p, v);
}
