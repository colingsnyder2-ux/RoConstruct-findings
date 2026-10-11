// from server: 26% by colin
struct CXTPPropertyGridItem {
    char pad[0x90];
    int m_nValue;
    void OnValueChanged(int value);
    void SetValue(int value);
};

struct CSelectionPropGrid {
    char pad0[0xfc];
    int field_fc;
    char pad1[0x20];
    int field_120;
    char pad2[0x1c];
    int field_140;
    void sub_43a070(int a, int b);
    void sub_717b20(int a, int b, int c);
    void sub_7120e0(int a);
    CSelectionPropGrid(int a, int b);
};

extern "C" void* __stdcall sub_802464(void* p);

void CSelectionPropGrid::sub_43a070(int a, int b) {
}

void CSelectionPropGrid::sub_717b20(int a, int b, int c) {
}

void CSelectionPropGrid::sub_7120e0(int a) {
}

CSelectionPropGrid::CSelectionPropGrid(int a, int b) {
    char* p = (char*)(*(int*)(a + 4) + 4);
    void* s = sub_802464(p);
    sub_717b20(0, 0, (int)s);
    sub_43a070(b, a);
    field_fc = 1;
    *(int*)this = 0x813814;
    *(int*)((char*)this + 0x20) = 0x8137b4;
    *(int*)((char*)this + 0x120) = 0x8137ac;
    field_140 = a;
    int v = (*(int(**)(void))a)();
    sub_7120e0(v & 0xff);
}
