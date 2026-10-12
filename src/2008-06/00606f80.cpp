// from server: 89% by king_originala
struct Shape {
    virtual void reserved0();
    virtual int kind();
};

struct Body {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual float measure();
};

struct Part {
    char reserved[0x9c];
    Body* body;
    void* data;
};

struct Result {
    char reserved0[8];
    int state;
    char reserved1[0x14];
    float first;
    float total;
};

struct Contact {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual void reserved4();
    virtual void reset();

    Shape* shape;
    int reserved6;
    Part* part1;
    Part* part2;
    char reserved7[0x20];
    Result* result;

    bool check(float value);
    Result* create(void* first, void* second);
    bool update();
};

bool Contact::update()
{
    if (check(0.0f)) {
        if (shape->kind() == 7) {
            if (!result)
                result = create(part1->data, part2->data);

            Body* firstBody = part1->body;
            Body* secondBody = part2->body;
            Result* output = result;
            float first = firstBody->measure();
            double second = secondBody->measure();
            output->first = first;
            output->state = 0;
            output->total = first + second;
        }
        return true;
    }

    reset();
    return false;
}
