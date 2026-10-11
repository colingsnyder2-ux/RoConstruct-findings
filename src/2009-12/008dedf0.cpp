// from server: 70% by atomic.potato
struct CXTColorPageCustom {
    char pad0[0x108];
    char field108[0x660];
    int field768;
    int field76c;
    int field770;
    int field774;
    int field778;
    int field77c;
    void* field780;
    void OnChangeEdit();
};

extern "C" void __stdcall sub_7f3ae8(int);
extern "C" void __stdcall sub_8dde90(int, double);
extern "C" int __stdcall sub_8dd420(double, double, double);
extern "C" void __stdcall sub_85f8e0(int, int);
extern "C" void __stdcall sub_8dd460(int);

extern double dbl_9a68e0;

void CXTColorPageCustom::OnChangeEdit()
{
    sub_7f3ae8(1);
    sub_8dde90((int)(this->field108), (double)this->field778 / dbl_9a68e0);
    int v = sub_8dd420(
        (double)this->field774 / ((double)this->field778 / dbl_9a68e0),
        (double)this->field778 / dbl_9a68e0,
        (double)this->field77c / dbl_9a68e0);
    if (v != *(int*)((char*)this->field780 + 0x124))
        sub_85f8e0(v, 0);
    sub_8dd460(v);
}
