// from server: 75% by colin
struct UString_sink
{
    float write_all();
};

extern "C" float __cdecl sub_00614670(int);

float UString_sink::write_all()
{
    float total = 0.0f;
    int i = 0;
    while (i < *(int*)(*(int*)((char*)this + 0x10) + 4))
    {
        int* arr = *(int**)((char*)this + 0x10);
        int item = arr[i];
        total += sub_00614670(item);
        i++;
    }
    return total;
}
