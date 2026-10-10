// from server: 56% by tester
struct RakPeer_004bdd20 {
    void __cdecl f(int a1, int a2);
};

extern "C" void __stdcall sub_004bb370(int a1, int a2, int a3);

void RakPeer_004bdd20::f(int a1, int a2)
{
    int v1[4];
    int v2[4];
    int v3[4];
    int v4[4];
    int v5[4];

    v1[0] = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;

    v2[0] = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;

    v3[0] = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;

    v4[0] = 1;
    v4[1] = *(int*)(a1 + 4);
    v4[2] = *(int*)(a1 + 8);
    v4[3] = *(int*)(a1 + 12);

    v5[0] = *(int*)(a1 + 0);

    sub_004bb370((int)v5, (int)v4, (int)v3);

    *(int*)(a2 + 0) = v3[0];
    *(int*)(a2 + 4) = v3[1];
    *(int*)(a2 + 8) = v3[2];
    *(int*)(a2 + 12) = v3[3];
}
