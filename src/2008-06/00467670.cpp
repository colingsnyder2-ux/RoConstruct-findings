// from server: 75% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vec2
{
    float x, y;
};

struct Rect
{
    float left, top, right, bottom;
};

struct Device;

struct DeviceTable
{
    void *reserved0[7];
    int (__stdcall *acquire)(Device *);
    int (__stdcall *unacquire)(Device *);
    void *reserved1[4];
    int (__stdcall *setCooperativeLevel)(Device *, void *, unsigned long);
};

struct Device
{
    DeviceTable *table;
};

extern Vec2 __cdecl adjust(const Vec2 &, int);

struct DxUserInput
{
    char reserved0[0x59];
    unsigned char flag;
    char reserved1[6];
    Vec2 delta;
    char reserved2[0x108];
    void *window;
    char reserved3[4];
    Device *device;
    char reserved4[0x16];
    unsigned char active;

    Rect bounds();
    void update(const Vec2 &);
};

void DxUserInput::update(const Vec2 &point)
{
    device->table->unacquire(device);

    if (device->table->setCooperativeLevel(device, window, 5) != 0)
        return;

    if (device->table->acquire(device) != 0)
        return;

    Rect r = bounds();
    Vec2 offset;
    offset.x = point.x - (r.right + r.left) * 0.5f;
    offset.y = point.y - (r.bottom + r.top) * 0.5f;
    delta = adjust(offset, -10);
    active = 1;
    flag = 0;
}
