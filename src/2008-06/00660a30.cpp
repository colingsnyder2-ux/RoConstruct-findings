// from server: 94% by king_originala
struct String {
    unsigned char padding[5];
    unsigned char marked;
};

struct Proto {
    unsigned char padding0[5];
    unsigned char marked;
    unsigned char padding1[22];
    String **upvalues;
    unsigned char padding2[4];
    int sizeupvalues;
    unsigned char padding3[20];
    int linedefined;
    unsigned char padding4[8];
    unsigned char nups;
};

struct Exp {
    int kind;
    int padding;
    int info;
};

struct Upvalue {
    unsigned char kind;
    unsigned char info;
};

struct FuncState {
    Proto *proto;
    unsigned char padding0[8];
    void *lexer;
    void *state;
    unsigned char padding1[31];
    Upvalue upvalues[60];
};

extern const char *__cdecl format(void *, const char *, ...);
extern void __cdecl report(void *, const char *, int);
extern void *__cdecl grow(void *, void *, int *, int, int, const char *);
extern void __cdecl barrier(void *, Proto *, String *);

int __cdecl indexupvalue(FuncState *fs, String *name, Exp *value)
{
    Proto *f = fs->proto;
    int oldsize = f->sizeupvalues;
    int i;

    for (i = 0; i < f->nups; ++i) {
        if (fs->upvalues[i].kind == value->kind &&
            fs->upvalues[i].info == value->info)
            return i;
    }

    if (f->nups + 1 > 60) {
        const char *message;
        if (f->linedefined == 0)
            message = format(fs->state,
                             (const char *)0x0084c4f8,
                             60, (const char *)0x0084c574);
        else
            message = format(fs->state,
                             (const char *)0x0084c4d0,
                             f->linedefined, 60,
                             (const char *)0x0084c574);
        report(fs->lexer, message, 0);
    }

    if (f->nups + 1 > f->sizeupvalues)
        f->upvalues = (String **)grow(fs->state, f->upvalues,
                                     &f->sizeupvalues, 4, 0x7ffffffd,
                                     (const char *)0x0080b716);

    for (; oldsize < f->sizeupvalues; ++oldsize)
        f->upvalues[oldsize] = 0;

    f->upvalues[f->nups] = name;
    if ((name->marked & 3) && (f->marked & 4))
        barrier(fs->state, f, name);

    fs->upvalues[f->nups].kind = (unsigned char)value->kind;
    fs->upvalues[f->nups].info = (unsigned char)value->info;
    return f->nups++;
}
