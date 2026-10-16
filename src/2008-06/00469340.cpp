// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// from server: 90% by king_originala
struct Vector2 {
    float x;
    float y;
};

struct Input {
    int axis;
    int value;
};

void __cdecl f(Vector2* result, const Input* input)
{
    result->x = 0.0f;
    result->y = 0.0f;
    float val = (float)input->value;
    if (input->axis == 0)
        result->x = val;
    else
        result->y = val;
}
