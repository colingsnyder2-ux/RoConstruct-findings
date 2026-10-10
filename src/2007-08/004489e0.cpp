// from server: 80% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info type_info_888FC4;

int sub_4489E0(int a, int b) {
    if (b == 2) {
        if (type_info_888FC4.operator==(*(const type_info*)a)) {
            return a;
        }
        return 0;
    }
    if (b == 0) {
        return a;
    }
    return 0;
}
