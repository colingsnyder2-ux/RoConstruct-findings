// from server: 64% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Text {
    char storage[28];
    ~Text();
};

extern bool __cdecl equal_text(const Text &, const Text &);

struct Item {
    Text getText();
};

struct Entry {
    Item *object;
    unsigned int auxiliary;
};

struct Vector;

struct Proxy {
    Vector *owner;
};

struct Vector {
    Proxy *proxy;
    char reserved[8];
    Entry *begin;
    Entry *end;
};

struct S {
    char reserved[264];
    Vector *items;
    Item *find(Text text);
};

Item *S::find(Text text)
{
    Vector *v = items;
    if (v) {
        Entry *last = v->end;
        if (v->begin > last)
            _invalid_parameter_noinfo();
        Proxy *lastProxy = v->proxy;

        v = items;
        Entry *current = v->begin;
        if (current > v->end)
            _invalid_parameter_noinfo();
        Proxy *proxy = v->proxy;

        for (;;) {
            if (!proxy || proxy != lastProxy)
                _invalid_parameter_noinfo();
            if (current == last)
                break;

            Vector *owner;
            if (!proxy) {
                _invalid_parameter_noinfo();
                owner = 0;
            } else {
                owner = proxy->owner;
            }

            if (current >= owner->end)
                _invalid_parameter_noinfo();

            if (equal_text(current->object->getText(), text)) {
                if (!proxy) {
                    _invalid_parameter_noinfo();
                    owner = 0;
                } else {
                    owner = proxy->owner;
                }
                if (current >= owner->end)
                    _invalid_parameter_noinfo();
                return current->object;
            }

            if (!proxy) {
                _invalid_parameter_noinfo();
                owner = 0;
            } else {
                owner = proxy->owner;
            }
            if (current >= owner->end)
                _invalid_parameter_noinfo();
            ++current;
        }
    }
    return 0;
}
