// from server: 70% by atomic.potato
extern "C" int __cdecl MessageValue();

struct CameraCopyType
{
    void copy(const void *);
};

struct RotateSelectionVerb
{
    int f(void *);
};

int RotateSelectionVerb::f(void *value)
{
    void *result = value;
    CameraCopyType *camera = (CameraCopyType *)this;
    camera->copy((const void *)MessageValue());
    return (int)result;
}
