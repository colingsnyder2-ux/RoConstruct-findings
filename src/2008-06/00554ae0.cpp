// from server: 98% by king_originala
extern "C" void (__cdecl *invalid_parameter_handler)();

struct S {
    struct Cursor {
        unsigned index;
        unsigned limit;
        Cursor* previous;
    };

    unsigned reserved[4];
    void** begin;
    void** end;
    void** capacity;
    Cursor* current;

    void invoke(void* argument, void* element);
    void run(void* argument);
};

void S::run(void* argument)
{
    Cursor cursor = { 0, unsigned(end - begin), current };
    current = &cursor;

    if (cursor.index < cursor.limit) {
        void (__cdecl *handler)() = invalid_parameter_handler;
        do {
            unsigned index = cursor.index;
            if (index >= unsigned(end - begin))
                handler();

            invoke(argument, begin[index]);
            ++cursor.index;
        } while (cursor.index < cursor.limit);
    }

    current = cursor.previous;
}
