// from server: 81% by king_originala
struct Matrix {
    float data[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;
};

struct String {
    unsigned char data[28];
    String(const String&);
};

struct Text {
    unsigned char data[28];
    String get() const;
    String alternate() const;
};

struct Result {
    unsigned char data[64];
};

struct Argument {
    unsigned char data[64];
    Argument(String, String, const Frame&, bool&);
    Argument(const Argument&);
};

struct Endpoint {
    Result apply(Argument, Argument);
};

struct Sink {
    unsigned char padding[4];
    Endpoint endpoint;
};

struct Object {
    unsigned char padding[8];
    Text text;
    unsigned char remainder[52];
    Sink* sink;
};

struct S {
    Object* object;
    Result f(Frame frame);
};

struct Guard {
    Object* object;
    unsigned int state;
    Guard(S*);
    ~Guard();
};

struct Flag {
    bool value;
    unsigned char padding[7];
    Flag() : value(false) {}
    ~Flag() {
        if (value)
            value = false;
    }
};

Result S::f(Frame frame)
{
    Guard guard(this);
    Frame first = {
        Matrix(frame.rotation),
        frame.x,
        frame.y,
        frame.z
    };
    Frame second = {
        Matrix(first.rotation),
        first.x,
        first.y,
        first.z
    };
    Flag flag;
    Object* other = guard.object;
    Object* source = object;
    Endpoint* sink = &source->sink->endpoint;
    return sink->apply(
        Argument(other->text.alternate(), source->text.get(),
                 second, flag.value),
        Argument(other->text.get(), source->text.get(),
                 second, flag.value));
}
