// from server: 65% by colin
struct CXTPPopupBar {
    void LoadFromArchive(void* ar);
    void SetTearOffEnabled(int);
};

extern "C" void __stdcall sub_66B710(void*);
extern "C" void __stdcall sub_685780(void*, const char*, void*, int);
extern "C" void __stdcall sub_6857C0(void*, const char*, void*, void*);
extern "C" void __stdcall sub_685720(void*, const char*, void*, int);
extern "C" void __stdcall sub_685840(void*, const char*, void*, int, int, int, int);

void CXTPPopupBar::LoadFromArchive(void* ar)
{
    char* base = (char*)this;
    sub_66B710(ar);
    sub_685780(ar, (const char*)0x7CAEF0, base + 0x1B0, 0);
    sub_6857C0(ar, (const char*)0x7CAEE0, base + 0x1DC, (void*)0x785954);
    sub_685720(ar, (const char*)0x7CAED4, base + 0x1E0, 0);
    sub_685720(ar, (const char*)0x7CAEC4, base + 0x1E4, 0);
    if (*(int*)((char*)ar + 0x28) > 3) {
        sub_685840(ar, (const char*)0x7CAEBC, base + 0x1EC, 2, 4, 2, 4);
        sub_685780(ar, (const char*)0x7CAEB0, base + 0x1E8, 1);
    }
    if (*(int*)((char*)ar + 0x28) > 8) {
        sub_685780(ar, (const char*)0x7CAEA0, base + 0x1FC, 0);
    }
    if (*(int*)((char*)ar + 0x28) < 0x14) {
        SetTearOffEnabled(1);
    }
    if (*(int*)((char*)ar + 0x28) > 0x12) {
        sub_685780(ar, (const char*)0x7CAE94, base + 0x200, 0);
    }
}
