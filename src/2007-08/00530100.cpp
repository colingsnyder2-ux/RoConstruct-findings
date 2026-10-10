// from server: 64% by colin
struct VModelInstance {
    char pad0[4];
    VModelInstance* field4;
    VModelInstance* field8;
    char padC[0x1C];
    char field28[0x5C];
    int field84;
    int field80;
    void sub_530100();
    void sub_52FC40(int* out, char* arg);
    void sub_52FD60(int* arg);
};

void VModelInstance::sub_530100() {
    if (field8 == 0) {
        return;
    }
    VModelInstance* p = field4;
    p->sub_530100();
    if (field80 == p->field80) {
        return;
    }
    VModelInstance* q = field8;
    q->sub_530100();
    int tmp;
    sub_52FC40(&tmp, field28);
    sub_52FD60(&tmp);
    VModelInstance* r = field4;
    r->sub_530100();
    field80 = r->field80;
}
