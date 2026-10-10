// from server: 42% by colin
struct CXTPCustomizeSheet_CCustomizeEdit {
    void sub_6C6E70(void*);
    void* sub_6C6A60(void*);
    void func(void*);
};

extern "C" int __stdcall sub_77DCD0(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTPCustomizeSheet_CCustomizeEdit::func(void* arg)
{
    void* local = 0;
    int flag = 0;
    void* result;

    if (sub_77DCD0(arg)) {
        sub_6C6A60(&local);
        flag = 1;
        result = &local;
    } else {
        result = arg;
    }

    sub_6C6E70(result);

    if (flag & 1) {
        sub_77DDBC(&local);
    }
}
