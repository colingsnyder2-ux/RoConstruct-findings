// from server: 36% by colin
extern "C" void __cdecl sub_0059C8D0(float*, float*);
extern "C" void __cdecl sub_00466020(float*, float*, float*);

struct DxUserInput
{
    void update(float* a1, float* a2, float* a3, int a4, float a5);
};

void DxUserInput::update(float* a1, float* a2, float* a3, int a4, float a5)
{
    float v1 = a1[0];
    float v2 = a1[1];
    float v3 = (float)a4;
    float v4 = v1 * 0.0f;
    float v5 = v2 * 0.0f;
    float v6 = -v4;
    float v7 = -v5;
    float v8 = v3 + v6;
    float v9 = v3 + v7;
    float v10 = v3 - v4;
    float v11 = v3 - v5;
    float v12 = a2[0];
    float v13 = a2[1];
    float v14 = v12;
    float v15 = v13;
    float v16 = v12;
    float v17 = v13;
    sub_0059C8D0(&v14, &v16);
    float v18 = a3[0] + v8;
    float v19 = a3[1] + v9;
    float v20 = v10;
    float v21 = v11;
    sub_00466020(&v18, &v20, &v14);
    float v22 = v14 - v18;
    float v23 = v16 - v20;
    float v24 = v22 * a5;
    float v25 = v23 * a5;
    float v26 = v24 + v18;
    float v27 = v25 + v20;
    a2[0] = v26;
    a2[1] = v27;
    a3[0] = a3[0] + v26;
    a3[1] = a3[1] + v27;
}
