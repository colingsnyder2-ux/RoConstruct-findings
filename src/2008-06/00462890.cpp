// from server: 49% by king_originala
struct String {
    char* data;
    ~String();
    operator const char*() const;
};

struct FindState {
    char reserved0[0x80];
    unsigned flags;
    char reserved1[0x118];
    int options;

    String replacement();
    String search();
};

struct View;

typedef void (__thiscall *FindFunction)(
    View*, const char*, int, int, int, int);
typedef void (__thiscall *ReplaceFunction)(
    View*, const char*, int, int, int, int, const char*);
typedef void (__thiscall *ReplaceAllFunction)(
    View*, const char*, const char*, int, int, int);

struct ViewTable {
    void* reserved0[105];
    FindFunction find;
    void* reserved1[4];
    ReplaceFunction replace;
    ReplaceAllFunction replaceAll;
};

struct View {
    ViewTable* table;
    int handle(unsigned, long);
};

extern "C" FindState* __stdcall getFindState(long);
extern int findResult;

int View::handle(unsigned, long parameter)
{
    FindState* state = getFindState(parameter);

    if (state->flags & 0x40) {
        findResult = 0;
        return 0;
    }

    if (state->flags & 0x08) {
        table->find(
            this,
            state->search(),
            state->flags & 1,
            (state->flags >> 2) & 1,
            (state->flags >> 1) & 1,
            state->options);
    } else if (state->flags & 0x10) {
        table->replace(
            this,
            state->search(),
            state->flags & 1,
            (state->flags >> 2) & 1,
            (state->flags >> 1) & 1,
            state->options,
            state->replacement());
    } else if (state->flags & 0x20) {
        table->replaceAll(
            this,
            state->replacement(),
            state->search(),
            (state->flags >> 2) & 1,
            (state->flags >> 1) & 1,
            state->options);
    }

    return 0;
}
