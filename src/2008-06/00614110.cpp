// from server: 76% by king_originala
struct Value {
    unsigned int data[9];
    bool operator!=(const Value& other) const;
};

struct Link {
    char reserved0[0x14];
    Link* parent;
    char reserved1[0x10];
    char* flag28;
    char* flag2c;
    char reserved2[0x38];
    Value value;

    void reset();
    void setValue(const Value& other);
};

void Link::setValue(const Value& other)
{
    if (value != other) {
        if (!flag28 || !flag28[4]) {
            if (parent)
                parent->reset();
            else if (flag2c)
                flag2c[8] = 1;

            if (flag28)
                flag28[4] = 1;
        }
        value = other;
    }
}
