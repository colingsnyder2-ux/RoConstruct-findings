// from server: 49% by colin
struct CAutoHidePanelTabManager {
    char pad[0x44];
    int field_44;
    int field_48;
    int field_4c;
    int field_50;
    char pad2[0x1c];
    int* field_70;
    int field_74;
    void SetColor(int a, int b, int c, int d);
};

void CAutoHidePanelTabManager::SetColor(int a, int b, int c, int d) {
    field_44 = a;
    field_48 = c;
    field_4c = b;
    field_50 = d;
    int i = field_74 - 1;
    if (i >= 0) {
        do {
            if (i < 0 || i >= field_74) {
                break;
            }
            int local[4];
            local[0] = 0;
            local[1] = 0;
            local[2] = 0;
            local[3] = 0;
            int obj = field_70[i];
            ((void (__thiscall*)(int, int*))0x6fd290)(obj, local);
            i--;
        } while (i >= 0);
    }
}
