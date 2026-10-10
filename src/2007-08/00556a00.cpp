// from server: 57% by colin
struct Vec3 { float x, y, z; };

struct Inner {
    char pad0[0xfc];
    int field_fc;
};

struct ChatEnter {
    void* vtbl;
    char pad0[0xfc - 4];
    int field_fc;
    void method_556900();
    Vec3* getVecA(Vec3* out);
    Vec3* getVecB(Vec3* out);
    void method_68();
    bool method_5553d0(Vec3* v, int a);
    void target(int* out, int* in);
};

void ChatEnter::target(int* out, int* in)
{
    Vec3 a, b, c;
    this->method_556900();
    this->getVecA(&a);
    Vec3* pb = this->getVecB(&b);
    c.x = a.x + pb->x;
    c.y = a.y + pb->y;
    c.z = a.z + pb->z;
    if (this->method_5553d0(&c, in[2])) {
        int t = in[0];
        if (t == 3) {
            if (this->field_fc != 2) {
                this->field_fc = 2;
                this->method_68();
            }
        } else if (t == 4) {
            if (this->field_fc != 3) {
                this->field_fc = 3;
                this->method_68();
            }
        }
        out[0] = 1;
        out[1] = 0;
    } else {
        if (this->field_fc != 0) {
            this->field_fc = 0;
            this->method_68();
        }
        out[0] = 0;
        out[1] = 0;
    }
}
