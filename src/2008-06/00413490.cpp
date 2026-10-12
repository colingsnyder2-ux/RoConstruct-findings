// from server: 98% by king_originala
struct Text;
extern Text* (__thiscall *constructText)(Text*, const char*);
extern const char copyText[];

struct Text {
    char storage[28];
    Text(const char*);
    Text(const Text&);
};

inline Text::Text(const char* s) {
    Text* volatile location = this;
    constructText(this, s);
}

struct Action {
    void (__thiscall **table)(Action*, int);
};

struct Context {
    Action* find(Text);
};

struct CutVerb {
    char padding[8];
    Context* context;
    void execute(int);
    void finish(int);
};

void CutVerb::execute(int argument) {
    Action* action = context->find(Text(copyText));
    action->table[4](action, argument);
    finish(argument);
}
