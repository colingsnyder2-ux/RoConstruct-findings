// from server: 77% by king_originala
struct Stream;

extern int (__thiscall *stream_sputn)(Stream *, const char *, int);
extern int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);
extern int compression_mode;
extern void __cdecl check_result(int);

struct Buffer {
    char *base;
    int capacity;
    char *next;
    char *end;
};

struct State {
    void *context;
    int reserved[4];
    Buffer buffer;
    int flags;

    void before(const char **, const char *, char **, char *);
    int process(int);
    void after(const char **, char **, bool);
};

struct Compressor {
    State *state;
    int write(Stream *, const char *, int);
};

int Compressor::write(Stream *stream, const char *source, int count)
{
    if (!(state->flags & 2)) {
        state->flags |= 2;
        State *active = state;
        active->buffer.next = active->buffer.base;
        active->buffer.end = active->buffer.base + active->buffer.capacity;
    }

    Buffer *buffer = &state->buffer;
    const char *current = source;
    const char *end = source + count;

    while (current != end) {
        if (buffer->next == buffer->end) {
            int pending = state->buffer.next - state->buffer.base;
            int written = stream_sputn(stream, state->buffer.base, pending);

            if (written < pending && written > 0) {
                memmove_s(state->buffer.base, pending - written,
                          state->buffer.base + written, pending - written);
            }

            State *active = state;
            active->buffer.next = active->buffer.base - written + pending;
            active->buffer.end = active->buffer.base + active->buffer.capacity;

            if (written == 0)
                break;
        }

        State *active = state;
        active->before(&current, end, &buffer->next, buffer->end);
        int result = active->process(compression_mode);
        active->after(&current, &buffer->next, true);
        check_result(result);
    }

    return current - source;
}
