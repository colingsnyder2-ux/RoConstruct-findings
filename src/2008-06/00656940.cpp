// from server: 91% by king_originala
struct String;

extern String* (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);
extern String* (__cdecl *append_text)(String*, const String&, const char*);
extern String* (__cdecl *append_string)(String*, const String&, const String&);

struct String
{
    char storage[28];

    struct Text {};
    struct Join {};

    String(const String&);
    String(Text, const String&, const char*);
    String(Join, const String&, const String&);
    ~String();
};

inline String::String(const String& other)
{
    string_copy(this, other);
}

inline String::String(Text, const String& left, const char* right)
{
    append_text(this, left, right);
}

inline String::String(Join, const String& left, const String& right)
{
    append_string(this, left, right);
}

inline String::~String()
{
    string_destroy(this);
}

struct Instance
{
    virtual String evaluate(const String&) = 0;
    char padding[0x100];
    Instance* parent;

    Instance* getRootAncestor();
};

struct Evaluator : Instance
{
    virtual String evaluate(const String&) = 0;
};

struct EquationDisplay : Instance
{
    char padding2[0x3c];
    String text;
    char padding3[0x28];
    String expression;

    String display();
};

String EquationDisplay::display()
{
    Instance* root;
    if (this)
    {
        root = parent;
        if (root)
        {
            if (root->parent)
                root = root->parent->getRootAncestor();
        }
        else
            root = this;
    }
    else
        root = 0;

    Evaluator* evaluator = dynamic_cast<Evaluator*>(root);
    if (evaluator)
    {
        String value = evaluator->evaluate(expression);
        return String(String::Join(), String(String::Text(), text, ": "), value);
    }
    return text;
}
