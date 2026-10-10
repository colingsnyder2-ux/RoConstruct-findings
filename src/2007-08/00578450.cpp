// from server: 86% by colin
struct VPartInstance
{
    char pad[0x1e0];
    float m_field1E0;
    void setField(float value);
};

void VPartInstance::setField(float value)
{
    if (m_field1E0 == value)
        return;
    m_field1E0 = value;
    extern void __stdcall sub_444710(void*);
    sub_444710((void*)0x8c2938);
}
