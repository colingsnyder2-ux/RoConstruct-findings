// from server: 94% by king_originala
struct String {};

extern const char* (__thiscall *string_c_str)(const String*);

struct TextData
{
    char padding[4];
    String text;
};

struct Record
{
    virtual void slot0();
    virtual bool value();
    TextData* data;
};

struct PrimaryInterface
{
    virtual ~PrimaryInterface();
    char padding[0x1c];
};

struct SecondaryInterface
{
    virtual ~SecondaryInterface();
    char padding[0xd8];
    int flag;
    char tail[0x18];
};

struct PropertyItem : PrimaryInterface, SecondaryInterface
{
    PropertyItem(const char*, int, int);
    virtual ~PropertyItem();
    void OnValueChanged(int);
};

struct ItemInterface
{
    ItemInterface(Record*, int);
    virtual ~ItemInterface();
    char padding[0x1c];
};

struct XItem : PropertyItem, ItemInterface
{
    Record* record;

    XItem(Record*, int);
    virtual ~XItem();
};

XItem::XItem(Record* source, int argument)
    : PropertyItem(string_c_str(&source->data->text), 0, 0),
      ItemInterface(source, argument),
      record(source)
{
    flag = 1;
    OnValueChanged(source->value());
}
