// from server: 79% by colin
struct CXTPPropertyGridItemConstraints {
    char pad0[0x28];
    int m_count;
    int GetItemIndex(int index);
    int FindItem(int value);
};

struct CXTPPropertyGridItemEnum {
    char pad0[0xbc];
    CXTPPropertyGridItemConstraints* m_pConstraints;
    char pad1[0x100 - 0xc0];
    int m_nValue;
    int* m_pValuePtr;
    void SetValue(int value);
    void OnValueChanged();
};

void CXTPPropertyGridItemEnum::SetValue(int value)
{
    m_nValue = value;
    if (m_pValuePtr != 0)
        *m_pValuePtr = value;
    int index = m_pConstraints->FindItem(value);
    int* p = &index;
    m_pConstraints->GetItemIndex(index);
    OnValueChanged();
}
