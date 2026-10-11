// from server: 77% by colin
struct FilteredSelection {
    void func_005dbf40(float);
};

extern "C" int __stdcall G1_func_0062d3d0(void*);

void* __fastcall sub_005d8b10(FilteredSelection* self);
void __fastcall sub_005dbe70(FilteredSelection* self, float value);

void FilteredSelection::func_005dbf40(float arg)
{
    if (sub_005d8b10(this) == 0)
        return;
    if (G1_func_0062d3d0(sub_005d8b10(this)))
        return;
    float v = *(float*)((char*)this + 0x1a8) - arg;
    sub_005dbe70(this, v);
}
