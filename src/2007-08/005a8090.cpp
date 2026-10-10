// from server: 79% by colin
struct VHumanoid {
    char pad[0x130];
    int field130;
    int field134;
    char pad2[0x8];
    float field140;
    float field144;
    float field148;
    void sub_444710(const char*);
    void update(const float*);
};

void VHumanoid::update(const float* v) {
    if (v[0] != field140 || v[1] != field144 || v[2] != field148) {
        field140 = v[0];
        field144 = v[1];
        field148 = v[2];
        sub_444710((const char*)0x8c58cc);
    }
    int eax = field134;
    eax = -eax;
    eax = (eax >> 31) & 2;
    eax += 2;
    int ecx = (eax != 2) ? 1 : 0;
    field134 = eax;
    ecx -= 1;
    ecx &= 0xf0;
    field130 = ecx;
}
