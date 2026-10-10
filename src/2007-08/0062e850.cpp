// from server: 43% by colin
struct Vector3 {
    float x, y, z;
};

struct Box {
    Vector3 center;
    Vector3 axis[3];
    Vector3 extent;
};

struct AdornG3D {
    void render3dAdorn(int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_736ED0();

void AdornG3D::render3dAdorn(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int v8 = a1;
    int v9 = (v8 / 3) * 3;
    int v10 = v8 - v9;
    int v11 = (v8 < 3) ? 1 : 0;
    int v12 = v10 + 1;
    int v13 = 3;
    int v14 = 0;
    int v15 = v11 + v11 - 1;
    float v16 = (float)v15;
    int v17 = v12 % v13;
    float v18 = v16 * ((float*)&a2)[v10];
    float v19 = 0.0f;
    float v20 = 0.0f;
    float v21 = 0.0f;
    float v22 = 0.0f;
    float v23 = 0.0f;
    float v24 = 0.0f;
    float v25 = v18;
    float v26 = v18 - v25;
    ((float*)&v19)[v10] = v26;
    int v27 = v10 + 2;
    float v28 = v25 + v18;
    ((float*)&v19)[v27] = v28;
    int v29 = 3;
    int v30 = v17;
    int v31 = v12 % v29;
    int v32 = v30;
    int v33 = v31;
    for (;;) {
        int v36, v37, v38;
        if (v14 != 0) {
            v36 = v32;
            v38 = -1;
            v37 = v33;
        } else {
            v38 = -1;
            v36 = v33;
            v37 = v32;
        }
        int v39 = v36;
        int v40 = v37;
        int v41 = v38;
        for (;;) {
            float v42 = (float)v41;
            int v43 = a1;
            int v44 = *(int*)(v43 + 0x3c);
            float v45 = v42 * ((float*)&a2)[v39];
            float v46 = v25 - v45;
            ((float*)&v19)[v39] = v46;
            float v47 = v25 + v45;
            ((float*)&v19)[v40] = v47;
            float v48 = -((float*)&a2)[v40];
            float v49 = v48 - v25;
            ((float*)&v19)[v40] = v49;
            float v50 = v25 + ((float*)&a2)[v40];
            ((float*)&v19)[v40] = v50;
            float v51 = v19;
            float v52 = v20;
            float v53 = v21;
            float v54 = v22;
            float v55 = v23;
            float v56 = v24;
            int v57 = sub_736ED0();
            int v58 = *(int*)v44;
            int v59 = a8;
            int v60 = v57;
            int v61 = v59;
            int v62 = (int)&v51;
            int v63 = a7;
            ((void (__thiscall*)(int, int, int, int))v58)(v44, v62, v61, v60);
            v41 += 2;
            if (v41 <= 1) {
                continue;
            }
            break;
        }
        v14++;
        if (v14 < 2) {
            continue;
        }
        break;
    }
}
