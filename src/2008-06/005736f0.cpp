// from server: 75% by king_originala
struct Vec2 {
    float x, y;
};

extern float width_00974d78;
extern float height_00974d7c;
extern const float ratio_0082f840;
extern const float inverseRatio_0082f86c;
extern const float scale_0082748c;

Vec2* __cdecl transform(Vec2* out, const Vec2* in)
{
    out->x = 0.0f;
    out->y = 0.0f;

    double width = width_00974d78;
    double height = width * ratio_0082f840;

    if (height_00974d7c > height) {
        double x = in->x * (double)scale_0082748c;
        double y = in->y * (double)scale_0082748c;
        out->x = (float)(x * width);
        out->y = (float)(y * height);
    } else {
        height = height_00974d7c;
        width = height * inverseRatio_0082f86c;
        double x = in->x * (double)scale_0082748c;
        double y = in->y * (double)scale_0082748c;
        out->x = (float)(x * width);
        out->y = (float)(y * height);
    }

    return out;
}
