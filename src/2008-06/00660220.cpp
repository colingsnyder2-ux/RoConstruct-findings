// from server: 95% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct PartInstance
{
    char padding[0x1e8];
    float value;
    int canX() const;
};

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

extern float threshold;

struct FilterCharacterOcclusion
{
    int filter(PartInstance* p);
};

int FilterCharacterOcclusion::filter(PartInstance* p)
{
    PartInstance* part = GetSetImpl::get(p);
    if ((unsigned char)part->canX() && !(threshold >= part->value))
        return 2;
    return 1;
}
