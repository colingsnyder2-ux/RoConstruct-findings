// from server: 77% by king_originala
extern float g_005e83c0_a;
extern float g_005e83c0_b;
extern "C" double __cdecl sub_006a1bb0(double);

struct Vector {
    float x, y, z;
};

struct Primitive {
    Vector* func_005e83c0(Vector* output, const Vector* input);
};

Vector* Primitive::func_005e83c0(Vector* output, const Vector* input)
{
    float a = g_005e83c0_a;
    float b = g_005e83c0_a;
    float c = g_005e83c0_a;

    double z = *(input->z < a ? &input->z : &c);
    double y = *(input->y < a ? &input->y : &b);
    double x = *(input->x < a ? &input->x : &a);

    output->x = (float)x;
    output->y = (float)y;
    output->z = (float)z;

    if (g_005e83c0_b < x * y * z)
        output->y = (float)sub_006a1bb0(g_005e83c0_b / (y * z));

    return output;
}
