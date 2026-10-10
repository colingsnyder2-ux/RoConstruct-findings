// from server: 82% by colin
struct CPropertyGridItemBrickColor {
    void sub_671270();
    void sub_77ddbc();
    void destroy();
};

void CPropertyGridItemBrickColor::destroy() {
    *(void**)this = (void*)0x7cb670;
    sub_671270();
    sub_77ddbc();
}
