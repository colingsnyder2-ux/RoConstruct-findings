// from server: 100% by king_originala
// roc 2008-06 00430440  unit: CWrapperView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430440
//
// 00430440  8b542404             mov edx, dword ptr [esp + 4]
// 00430444  8bc1                 mov eax, ecx
// 00430446  8b08                 mov ecx, dword ptr [eax]
// 00430448  8910                 mov dword ptr [eax], edx
// 0043044a  85c9                 test ecx, ecx
// 0043044c  740f                 je 0x43045d
// 0043044e  8b01                 mov eax, dword ptr [ecx]
// 00430450  8b5004               mov edx, dword ptr [eax + 4]
// 00430453  c744240401000000     mov dword ptr [esp + 4], 1
// 0043045b  ffe2                 jmp edx
// 0043045d  c20400               ret 4

struct Object {
    virtual void first();
    virtual void destroy(unsigned int);
};

struct CWrapperView {
    Object *object;
    void replace(Object *);
};

void CWrapperView::replace(Object *value)
{
    Object *old = object;
    object = value;
    if (old)
        old->destroy(1);
}
