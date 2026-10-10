// from server: 37% by colin
struct CXTPColorManager {
    float sub_6689f0(void* arg);
    float sub_668a10(void* arg);
    float sub_668a30(void* arg);
    float sub_6692f0(void* a, void* b);
};

float CXTPColorManager::sub_6692f0(void* a, void* b)
{
    float x = sub_6689f0(a) - sub_6689f0(b);
    float y = sub_668a10(a) - sub_668a10(b);
    float z = sub_668a30(a) - sub_668a30(b);
    return x * y + x * y + z * z;
}
