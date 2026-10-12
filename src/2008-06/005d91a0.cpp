// from server: 89% by king_originala
struct Vector3
{
    float x, y, z;
};

struct Matrix
{
    Vector3 *column(Vector3 *result, int index);
};

struct Part
{
    Matrix *call_5e82c0();
};

struct S
{
    void *call_5d8b10();
    float f();
};

extern const float scale_828b60;
extern "C" float __cdecl call_5de650(const Vector3 &value);

float S::f()
{
    void *p = call_5d8b10();
    if (p)
    {
        Part *part = (Part *)((char *)p + 0x228);
        if (part)
        {
            Matrix *matrix = part->call_5e82c0();
            float scale = scale_828b60;
            Vector3 temporary;
            Vector3 *v = matrix->column(&temporary, 2);
            Vector3 scaled = { v->x * scale, v->y * scale, v->z * scale };
            return call_5de650(scaled);
        }
    }
    return 0.0f;
}
