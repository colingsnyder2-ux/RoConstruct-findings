// from server: 56% by king_originala
struct Text {
    unsigned char data[28];
    Text(const Text&);
    ~Text();
};

extern Text* (__thiscall *copyText)(Text*, const Text*);

inline Text::Text(const Text& other) {
    copyText(this, &other);
}

struct Argument {
    Text text;
    unsigned value;
};

struct Context {
    bool check(Argument argument);
};

extern Context* context;

struct Result {
    unsigned value;
};

extern void __cdecl buildResult(Result*, unsigned, const Argument*);

Result* __cdecl reconstruct(Result* result, unsigned value,
                            const Argument* argument) {
    if (context->check(*argument))
        buildResult(result, value, argument);
    else
        result->value = 0;
    return result;
}
