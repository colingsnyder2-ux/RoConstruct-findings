// from server: 38% by colin
struct BitStream;

struct EnumDescriptor;

struct EnumItem
{
    int value;
    char padding0[0x24];
    unsigned int index;
    char padding1[0x24];
};

struct Instance
{
    char padding0[0x104];
    Instance* parent;
    bool isDescendantOf(Instance* node);
};

struct MotorAngles
{
    float* begin;
    float* end;
    float* capacity;
};

struct PhysicsItem
{
    char padding0[0x10];
    MotorAngles motorAngles;
};

struct S
{
    Instance* instance;
    char padding0[0x8];
    double accumulated;
    unsigned int head;
    unsigned int count;
    EnumItem items[8];

    void readMotorAngles(BitStream& bitStream, PhysicsItem& item, unsigned char compactNum);
};

extern "C" void __stdcall sub_4ca5c0(const char* name, void* dest);
extern "C" bool __stdcall sub_4a5f20(void* self, float* a, float* b, float* c, float* d);
extern "C" void __stdcall sub_409d50(void* self, const char* str);
extern "C" void __stdcall sub_6a158c(void* self, const char* str);
extern "C" void __stdcall sub_5dd6d0(void* self, void* dest);
extern "C" void __stdcall sub_4a6380(void* self, void* dest, unsigned char* out);
extern "C" void* __cdecl sub_49e890();
extern "C" void __stdcall sub_569620(void* self);
extern "C" void __stdcall sub_5693a0(void* self, int a, const char* fmt, unsigned char b);
extern "C" void __stdcall sub_600660(void* self);
extern "C" void __stdcall sub_4c7d20(void* self, unsigned char count, float zero);
extern "C" float __stdcall sub_5dda30(void* self);
extern "C" void __cdecl sub_802890();

void S::readMotorAngles(BitStream& bitStream, PhysicsItem& item, unsigned char compactNum)
{
    unsigned int idx = (this->head + 9) & 0x80000007;
    if ((int)idx < 0)
    {
        idx = (idx - 1) | 0xfffffff8;
        idx = idx + 1;
    }
    unsigned int cnt = this->count;
    if ((int)cnt < 8)
    {
        cnt = cnt + 1;
        this->count = cnt;
    }
    this->head = idx;

    EnumItem* slot = &this->items[idx];
    slot->value = (int)(unsigned int)compactNum;

    sub_4ca5c0((const char*)slot, (char*)slot + 0x28);

    float f0 = 0.0f;
    float f1 = 0.0f;
    float f2 = 0.0f;
    float f3 = 1.0f;

    if (!sub_4a5f20(&bitStream, &f0, &f1, &f2, &f3))
    {
        void* str = 0;
        sub_409d50(&str, "Failed to read Quaternion");
        sub_6a158c(&str, "Failed to read Quaternion");
    }

    sub_5dd6d0((char*)slot + 4, (char*)slot + 4);

    unsigned char out;
    sub_4a6380(&bitStream, &out, &out);

    if (out > 0x32)
    {
        void* settings = sub_49e890();
        if (*(unsigned char*)((char*)settings + 0x130) != 0)
        {
            void* stream = 0;
            sub_569620(&stream);
            unsigned char v = out;
            void* p = *(void**)&stream;
            sub_5693a0(p, 2, "Physics-in has %d motors", v);
            sub_600660(&stream);
        }
    }

    sub_4c7d20((char*)slot + 0x34, out, 0.0f);

    int n = (int)out;
    for (int i = 0; i < n; ++i)
    {
        unsigned char dummy;
        sub_4a6380(&bitStream, &dummy, &dummy);
        float val = sub_5dda30(&dummy);
        float* b = item.motorAngles.begin;
        float* e = item.motorAngles.end;
        unsigned int sz = (unsigned int)(e - b);
        if ((unsigned int)i >= sz)
        {
            sub_802890();
        }
        item.motorAngles.begin[i] = val;
    }

    if (compactNum != 0)
    {
        Instance* inst = this->instance;
        if (inst != 0)
        {
            Instance* p = *(Instance**)((char*)inst + 0x104);
            if (compactNum == (unsigned char)(unsigned int)p)
            {
                this->accumulated = 0.0;
                return;
            }
            if (p != 0)
            {
                if (inst->isDescendantOf(p))
                {
                    this->accumulated = 0.0;
                    return;
                }
            }
        }
    }

    if ((int)this->count < 2)
        return;

    unsigned int prev = (this->head + 7) & 0x80000007;
    if ((int)prev < 0)
    {
        prev = (prev - 1) | 0xfffffff8;
        prev = prev + 1;
    }
    EnumItem* prevSlot = &this->items[prev];
    int diff = slot->value - prevSlot->value;
    double d = (double)diff;
    if (diff < 0)
        d += 4294967296.0;

    double w = this->accumulated;
    if (d > w)
    {
        d = d * 0.5;
        w = w * 0.5;
    }
    else
    {
        d = d * 0.5;
        w = w * 0.5;
    }
    this->accumulated = d + w;
}
