// from server: 63% by tester
struct CSettingsExplorer {
    char pad[0xbc];
    void* field_bc;
    char pad2[0x108 - 0xbc - 4];
    void* field_108;
    int sub_41F6F0();
};

extern "C" void* __stdcall sub_630D36(void*, void*, void*, void*, void*);

int CSettingsExplorer::sub_41F6F0()
{
    if (this->field_108 != 0)
        return 0;

    void* p = sub_630D36(this->field_bc, 0, (void*)0x881f4c, (void*)0x884e54, 0);
    if (p != 0)
        return 0;

    void* q = sub_630D36(this->field_bc, 0, (void*)0x881f4c, (void*)0x884e54, 0);
    CSettingsExplorer* r = (CSettingsExplorer*)q;
    if (r->sub_41F6F0() != 0)
        return 0;

    return 1;
}
