// from server: 50% by colin
struct Node {
    char pad[0x18];
    void* field_18;
};

struct Map {
    void* field_0;
    char pad[0x14];
    void* field_18;
};

struct Result {
    void* first;
    void* second;
    void* third;
};

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void* __cdecl sub_6A0920(int size);
extern "C" void* __fastcall sub_451600(void* self, int edx, void** out, void** key);
extern "C" Result* __fastcall sub_681A50(void* self, int edx, void** out, void** key);

struct RbxSceneNode {
    char pad[0x228];
    Map map;
    void* method(void* arg1, void* arg2);
};

void* RbxSceneNode::method(void* arg1, void* arg2)
{
    void* key = arg1;
    void* result;
    sub_451600(&map, 0, &result, &key);

    void* first = result;
    void* f18 = map.field_18;
    void* f0 = map.field_0;
    if (first == 0 || first != f0)
        _invalid_parameter_noinfo();

    void* second = *(void**)((char*)&result + 4);
    if (second != f18)
    {
        void* mem = sub_6A0920(0x40);
        void* k = arg1;
        Result* r = sub_681A50(&map, 0, &mem, &k);
        first = r->first;
        second = r->second;
    }

    if (first == 0)
        _invalid_parameter_noinfo();

    if (second != *(void**)((char*)first + 0x18))
        _invalid_parameter_noinfo();

    void* dst = *(void**)((char*)second + 0x10);
    void* src = arg2;
    for (int i = 0; i < 16; i++)
        ((void**)dst)[i] = ((void**)src)[i];

    return dst;
}
