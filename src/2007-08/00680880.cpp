// from server: 24% by colin
struct CXTPBitmapDC {
    void* m_pVtable;
    int m_field4;
    int m_field8;
    int m_fieldC;
    int m_field10;
    void Destroy();
};

extern "C" void* __stdcall SelectObject(void*, void*);

void CXTPBitmapDC::Destroy()
{
    m_pVtable = (void*)0x7cecf4;
    SelectObject((void*)m_field10, (void*)m_field4);
    ((void (__thiscall*)(CXTPBitmapDC*))0x7388e6)(this);
    ((void (__thiscall*)(CXTPBitmapDC*))0x7383dc)(this);
}
