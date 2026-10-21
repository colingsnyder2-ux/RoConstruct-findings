// from server: 98% by colin
// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client-dll roc_manual_contact_820ece28fd48f7e1.cpp

// Candidate translation unit (score above; library headers required).
extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

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
            if (!result) {
                void* right = part2->data;
                _ReadWriteBarrier();
                void* left = part1->data;
                _ReadWriteBarrier();
                result = create(left, right);
            }

            Body* secondBody = part2->body;
            Body* firstBody = part1->body;
            Result* output = result;
            _ReadWriteBarrier();
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

