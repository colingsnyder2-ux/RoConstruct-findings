// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct Table {
    void* reserved0[89];
    void (__thiscall *reset)(S*);
    void* reserved1[11];
    S* (__thiscall *getControl)(S*);
};

struct Options {
    char reserved0[0x7c];
    int field7c;
    char reserved1[8];
    int field88;

    void setEnabled(int);
};

struct Column {
    char reserved0[0xb0];
    int fieldb0;
    char reserved1[0x10];

    Column(int, const char*, int, int, int, int, int);
    void setFlag(int);
};

struct S {
    Table* table;
    char reserved0[0x1b4];
    int field1b8;
    char reserved1[0xcc];
    Options* options;

    int base(int);
    void initialize();
    Column* addColumn(Column*);
    int f(int);
};

int S::f(int argument)
{
    int result = base(argument);
    if (result == -1)
        return result;

    S* control = table->getControl(this);
    control->field1b8 = 0;
    control->initialize();
    control->table->reset(control);
    control->options->field88 = 0;
    control->options->field7c = 0;
    control->options->setEnabled(1);

    Column* column = control->addColumn(
        new Column(0, "Name", 200, 1, -1, 1, 1));
    column->setFlag(1);
    column->fieldb0 = 0;

    control->addColumn(
        new Column(1, "Value", 200, 1, -1, 1, 1))->fieldb0 = 0;

    return 0;
}
