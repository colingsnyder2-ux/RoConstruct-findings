// from server: 75% by colin
struct CXTPMenuBar {
    void* field_98;
    CXTPMenuBar* sub_6a7640(void* arg);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

CXTPMenuBar* CXTPMenuBar::sub_6a7640(void* arg) {
    void* local = 0;
    sub_77dd74(reinterpret_cast<char*>(this) + 0x98, &local);
    return this;
}
