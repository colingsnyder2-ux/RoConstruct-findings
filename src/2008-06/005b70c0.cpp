// from server: 77% by colin
extern bool G1_func_005dd7b0(float);
extern bool G1_func_005dd8b0(float*);
extern void G1_func_005b6ed0(float* out, float a, float b);

extern float G2_00826de0;
extern float G2_00837604;

bool func_005b70c0(float* in, float* out)
{
    float v[3];
    v[0] = in[0];
    v[1] = in[1];
    v[2] = in[2];

    if (G1_func_005dd7b0(v[0]))
        v[0] = 0.0f;
    if (G1_func_005dd7b0(v[1]))
        v[1] = 0.0f;
    if (G1_func_005dd7b0(v[2]))
        v[2] = 0.0f;

    if (G1_func_005dd8b0(v))
        return false;

    float tmp[3];
    G1_func_005b6ed0(tmp, G2_00826de0, G2_00837604);

    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
    return true;
}
