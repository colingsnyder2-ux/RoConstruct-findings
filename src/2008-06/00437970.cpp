// from server: 72% by tester
struct VColor3 {
    float r;
    float g;
    float b;
};

struct XItem {
    char pad[0xe4];
    void (__stdcall *vtable_0xe4)(unsigned int);
    void setColor(const VColor3* color);
};

void XItem::setColor(const VColor3* color) {
    unsigned int packed;
    unsigned char r, g, b;
    float scale = 255.0f;

    r = (unsigned char)(int)(color->b * scale);
    g = (unsigned char)(int)(color->g * scale);
    b = (unsigned char)(int)(color->r * scale);

    packed = (r << 16) | (g << 8) | b;
    vtable_0xe4(packed);
}
