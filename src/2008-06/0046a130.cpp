// from server: 94% by king_originala
struct Vector2
{
    float x;
    float y;
};

extern float scale;
extern float offset;

extern void __cdecl transform(Vector2*, Vector2*, Vector2*, Vector2*, int, float);

void __cdecl func_0046a130(Vector2* a, Vector2* b, Vector2* c, Vector2* d)
{
    float value = a->y + c->y;
    transform(a, b, c, d, 6, 0.0f);
    b->y = 0.0f;
    c->y = value;
    value = -(d->y * scale - offset);
    float& result = c->y > value ? c->y : value;
    c->y = result;
}
