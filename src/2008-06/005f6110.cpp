// from server: 87% by king_originala
struct S;

struct State
{
    char reserved[20];
    char* buffer;
    int capacity;
    char* current;
    char* end;
    int flags;

    void reset(int, bool);
    void before(char*&, char*, char*&, char*);
    int process(int);
    void after(char*&, char*&, bool);
};

struct Cleanup
{
    S* owner;
    ~Cleanup();
};

struct S
{
    State* state;
    void func_005f6110(void**, int);
};

extern int finish_mode;
extern int stream_end;
extern void __cdecl check_error(int);

typedef int (__thiscall *WriteFunction)(void*, const char*, int);
extern WriteFunction sputn;

void S::func_005f6110(void** sink, int mode)
{
    if ((state->flags & 1) && (mode & 1))
    {
        state->flags = 0;
        State* p = state;
        p->end = p->current = p->buffer;
        state->reset(0, true);
    }

    if ((state->flags & 2) && (mode & 2))
    {
        Cleanup cleanup = { this };
        bool more = true;
        char dummy;
        char* input = &dummy;
        char*& output_end = state->end;
        char*& output = state->current;

        do
        {
            if (output != output_end)
            {
                State* p = state;
                p->before(input, input, output, output_end);
                int result = p->process(finish_mode);
                p->after(input, output, false);
                check_error(result);
                more = result != stream_end;
            }

            int count = state->current - state->buffer;
            int written = 0;
            char* buffer = state->buffer;

            while (written < count)
                written += sputn(*sink, buffer + written, count - written);

            State* p = state;
            char* begin = p->buffer;
            int capacity = p->capacity;
            char* remaining = begin - written + count;
            char* end = begin + capacity;
            p->current = remaining;
            p->end = end;
        }
        while (more);
    }
}
