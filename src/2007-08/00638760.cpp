// from server: 43% by colin
struct CXTPControlComboBox {
    void sub_636C40(void*);
    void sub_635E50(void*);
    void SetCurSel(void*);
};

extern "C" int __stdcall sub_77DCD0(void*);
extern "C" void __stdcall sub_77DDBc(void*);

void CXTPControlComboBox::SetCurSel(void* p)
{
    char buf[16];
    int flag = 0;
    if (sub_77DCD0(p)) {
        sub_635E50(&buf);
        flag = 1;
    }
    sub_636C40(p);
    if (flag & 1) {
        sub_77DDBc(&buf);
    }
}
