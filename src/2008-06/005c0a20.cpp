// from server: 52% by tester
struct SettingsItem {
    void* m_data;
    SettingsItem(int, int);
};

extern "C" void* __cdecl operator_new(unsigned int);

SettingsItem::SettingsItem(int a, int b)
{
    m_data = 0;
    void* p = operator_new(0x14);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x838834;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    m_data = p;
}
