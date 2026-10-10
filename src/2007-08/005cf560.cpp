// from server: 82% by colin
struct IStage {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    float compute();
};

extern float __fastcall sub_005e2220(int);

float IStage::compute()
{
    float total = 0.0f;
    int i = 0;
    if (field20 > 0) {
        do {
            total += sub_005e2220(*(int*)(field1C + i * 4));
            i++;
        } while (i < field20);
    }
    return total;
}
