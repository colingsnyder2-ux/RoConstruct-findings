// from server: 41% by colin
struct CXTColorDialog {
    void dtor();
    int getCount();
    void* getItem(int index);
    void cleanup();
    void baseDtor();
    char pad[0x8c];
    int count;
    void** items;
    char pad2[0x1c];
    char field_b0[0x20];
};

extern "C" void __stdcall sub_738382(void*);
extern "C" void __stdcall sub_7386fa(void*);
extern "C" int __stdcall sub_738a30();
extern "C" void __stdcall sub_62ff20();

void CXTColorDialog::dtor()
{
    int i;
    void* p;
    this->pad[0] = 0;
    *(void**)this = (void*)0x7d028c;
    i = 0;
    while (i < sub_738a30()) {
        if (i < 0 || i >= this->count) {
            sub_62ff20();
        }
        p = this->items[i];
        if (p != 0) {
            (*(void (__thiscall**)(void*, int))((*(void***)p)[1]))(p, 1);
        }
        i++;
        sub_738a30();
    }
    sub_738382(this->field_b0);
    sub_7386fa(this);
}
