// from server: 94% by why2
struct GettingUp {
    float field0;
    float field4;
    void f(float);
};

void GettingUp::f(float a) {
    field4 = (a - field4) * field0 + field4;
}
