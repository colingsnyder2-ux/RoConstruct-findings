// from server: 57% by colin
struct CRobloxTreeCtrl {
    char pad[0x18];
    int field_18;
    int sub_667770(int, void*);
    int sub_667a70(void*);
};

extern "C" void __cdecl sub_630b8c(void*, int, int);
extern "C" void __cdecl sub_630a1e();

int CRobloxTreeCtrl::sub_667a70(void* arg) {
    char buf[0x3c];
    int result;
    sub_630b8c(buf, 0, 0x3c);
    result = -1;
    if (this->sub_667770(this->field_18, arg) == 0) {
        result = -1;
    } else {
        result = *(int*)(buf + 0x34);
    }
    sub_630a1e();
    return result;
}
