// from server: 86% by colin
struct IRenderableBucket
{
    void onAdded(void *);
};

struct JointsService
{
    void addChild(void *);
};

void __stdcall sub_55AE20(void *);
void *__cdecl sub_6A17C6(void *, int, void *, void *, int);

void JointsService::addChild(void *child)
{
    sub_55AE20(child);
    void *r = sub_6A17C6(child, 0, (void *)0x92907c, (void *)0x939f70, 0);
    if (r)
    {
        ((IRenderableBucket *)((char *)this + 0x138))->onAdded(r);
    }
}
