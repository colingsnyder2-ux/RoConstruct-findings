// from server: 88% by colin
// roc 2007-08 00409e20  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409e20
//
// 00409e20  8b442404             mov eax, dword ptr [esp + 4]
// 00409e24  8b4028               mov eax, dword ptr [eax + 0x28]
// 00409e27  8b08                 mov ecx, dword ptr [eax]
// 00409e29  89442404             mov dword ptr [esp + 4], eax
// 00409e2d  8b5104               mov edx, dword ptr [ecx + 4]
// 00409e30  ffe2                 jmp edx

struct VCApp_CComContainedObject {
    void* m_pUnknown;
    void* m_pUnk04;
    void* m_pUnk08;
    void* m_pUnk0C;
    void* m_pUnk10;
    void* m_pUnk14;
    void* m_pUnk18;
    void* m_pUnk1C;
    void* m_pUnk20;
    void* m_pUnk24;
    void* m_pUnk28;
};

struct VCApp_Inner {
    void* m_pVtbl;
};

struct VCApp_Outer {
    void* m_pVtbl;
};

void VCApp_CComContainedObject_Forward(VCApp_CComContainedObject* self, void* arg);

void VCApp_CComContainedObject_Forward(VCApp_CComContainedObject* self, void* arg)
{
    VCApp_Inner* inner = (VCApp_Inner*)self->m_pUnk28;
    void** vtbl = (void**)inner->m_pVtbl;
    void (*fn)(VCApp_Inner*, void*) = (void (*)(VCApp_Inner*, void*))vtbl[1];
    fn(inner, arg);
}
