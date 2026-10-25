// from server: 100% by king_originala
struct State {
    bool query();
};

struct EventHandler {
    unsigned char padding[8];
    State state;
};

struct Result {
    unsigned short type;
    unsigned short reserved[3];
    short value;
};

struct Error {
    unsigned long words[3];
};

int __stdcall invoke(EventHandler* object, unsigned long arg2,
                     void* arg3, unsigned long arg4,
                     unsigned long arg5, void* arg6,
                     Result* result, void* arg8, void* arg9)
{
    result->type = 11;
    try {
        result->value = object->state.query() ? 1 : 0;
        return 1;
    }
    catch (Error error) {
        return 0;
    }
}
