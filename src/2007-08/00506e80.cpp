// from server: 93% by colin
struct GCamera {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float getAspectRatio(int arg);
};

extern "C" GCamera* __stdcall sub_506ba0(int);

float GCamera::getAspectRatio(int arg)
{
    GCamera* p = sub_506ba0(arg);
    float w = p->field8 - p->field0;
    float h = p->fieldC - p->field4;
    return w * w / h;
}
