// from server: 87% by colin
struct IStage
{
    float sub_005CF520();
};

float IStage::sub_005CF520()
{
    float total = 0.0f;
    int i = 0;
    if (i < *(int *)((char *)this + 0x38))
    {
        do
        {
            int obj = *(int *)(*(int *)((char *)this + 0x34) + i * 4);
            float v = (*(float (__thiscall **)(int))(*(int *)obj + 0x10))(obj);
            total = total + v;
            i++;
        } while (i < *(int *)((char *)this + 0x38));
    }
    return total;
}
