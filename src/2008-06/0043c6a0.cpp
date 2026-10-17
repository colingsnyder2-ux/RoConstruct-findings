// from server: 10% by colin
struct CXTPPropertyGridItemEnum;

struct EnumDescriptor {
    void* allItems_begin;
    void* allItems_end;
    void* allItems_cap;
    unsigned int enumCount;
    unsigned int enumCountMSB;
};

struct Item {
    int value;
};

struct TemporaryBase {
    unsigned int words[3];
    TemporaryBase();
    ~TemporaryBase();
};

struct Temporary : TemporaryBase {
    void initialize(void*);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct CXTPPropertyGridItemEnum {
    char pad0[4];
    void* field4;
    void* field8;
    void* fieldC;
    unsigned int field10;
    unsigned int field14;
    int convertToValue(int index, int* out);
    int convertToString(int index, void* out);
    void setHidden(int hidden);
    int method(int* arg);
};

int CXTPPropertyGridItemEnum::method(int* arg)
{
    EnumDescriptor* desc = (EnumDescriptor*)arg;
    unsigned int i = field10;
    if (i > field14)
        _invalid_parameter_noinfo();
    void* begin = field4;
    unsigned int end = field14;
    if (field10 > end)
        _invalid_parameter_noinfo();
    void* cur = field4;
    if (begin != 0 && begin != cur)
        _invalid_parameter_noinfo();
    if (i == end)
    {
        setHidden(1);
        return 0;
    }
    while (i != end)
    {
        Item* item = (Item*)i;
        int v = item->value;
        int out;
        convertToValue(v, &out);
        if (out != 0)
        {
            setHidden(0);
            return 0;
        }
        i += 8;
    }
    setHidden(1);
    return 0;
}
