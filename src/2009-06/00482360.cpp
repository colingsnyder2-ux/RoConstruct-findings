// from server: 67% by colin
struct NodeVisiter {
    float f_1c;
    float f_20;
    float f_24;
    float get(float* p);
};

float NodeVisiter::get(float* p) {
    float a, b, c;
    if (f_24 >= 0.0f) {
        a = p[2];
    } else {
        a = p[5];
    }
    if (f_20 < 0.0f) {
        b = p[1];
    } else {
        b = p[4];
    }
    if (f_1c < 0.0f) {
        c = p[0];
    } else {
        c = p[3];
    }
    return c * f_1c + b * f_20 + a * f_24;
}
