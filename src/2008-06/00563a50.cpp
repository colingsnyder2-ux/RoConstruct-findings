// from server: 50% by atomic.potato
extern "C" float* __cdecl sub_501AE0(float*);
extern "C" float __cdecl sub_5631C0(float*);

float sub_00563A50(float value)
{
    float result;
    result = *sub_501AE0(&result);
    sub_5631C0(&result);
    return result;
}
