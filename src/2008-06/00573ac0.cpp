// from server: 88% by colin
struct PercentPanel {
    char pad[0x108];
    void* field_108;
    void renderItem(int index);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_6a17c6(void*, void*, void*, int, int);

void PercentPanel::renderItem(int index)
{
    int* vec = (int*)field_108;
    int count = (vec[4] - vec[3]) >> 3;
    if ((unsigned)index >= (unsigned)count)
        _invalid_parameter_noinfo();
    int* base = (int*)vec[3];
    int item = base[index * 2];
    sub_6a17c6((void*)item, (void*)0x92907c, (void*)0x92b8d8, 0, 0);
}
