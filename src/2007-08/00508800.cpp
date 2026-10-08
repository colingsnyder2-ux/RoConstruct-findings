// from server: 100% by colin
// roc 2007-08 00508800  unit: G3D::GCamera  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508800
//
// 00508800  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00508803  83c001               add eax, 1
// 00508806  50                   push eax
// 00508807  e874ffffff           call 0x508780
// 0050880c  c3                   ret 

struct Camera {
    char pad[0x4c];
    int m_field4c;
    void method();
};

void __stdcall sub_508780(int);

void Camera::method() {
    sub_508780(m_field4c + 1);
}
