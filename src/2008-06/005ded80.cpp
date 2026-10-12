// from server: 75% by king_originala
extern "C" double __cdecl fabs(double);
extern "C" double __cdecl sqrt(double);
extern "C" double __cdecl atan(double);
#pragma intrinsic(fabs, sqrt, atan)
#pragma float_control(precise, off)

extern const float invalidResult;

float __cdecl f(float speed, float distance, float height, float gravity)
{
    double g = fabs(gravity);
    double v = speed;
    double v2 = v * v;
    double d = distance;
    double discriminant = v2 * v2
        - (d * d * g + 2.0 * (v2 * height)) * g;

    if (discriminant <= 0.0)
        return invalidResult;

    double root = sqrt(discriminant);
    double denominator = d * g;
    double upper = atan((v2 + root) / denominator);
    speed = (float)upper;
    double lower = atan((v2 - root) / denominator);
    gravity = (float)lower;

    const float* result = lower < upper ? &gravity : &speed;
    return *result;
}
