// from server: 10% by colin
struct ImageButton {
    char pad[0x144];
    int field_144;
    char pad2[0x4];
    int field_14c;

    bool method_54();
    int method_78(int);
    void method_14c(int, unsigned char);
    int method_573310(int*, int);

    void target(int arg);
};

int ImageButton::method_573310(int* a, int b) {
    return 0;
}

void ImageButton::method_14c(int a, unsigned char b) {
}

bool ImageButton::method_54() {
    return false;
}

int ImageButton::method_78(int a) {
    return 0;
}

void ImageButton::target(int arg) {
    if (method_54()) {
        int local;
        int r = method_573310(&local, field_144);
        unsigned char b = (unsigned char)method_78(r);
        method_14c(arg, b);
    }
}
