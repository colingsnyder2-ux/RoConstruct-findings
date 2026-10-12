// from server: 95% by king_originala
struct Prototype {
    unsigned char padding0[0x3c];
    const char* source;
    unsigned char padding1[9];
    unsigned char parameterCount;
    unsigned char vararg;
};

struct FunctionState {
    Prototype* prototype;
    unsigned char padding0[8];
    void* lexer;
    void* state;
    unsigned char padding1[0x1e];
    unsigned char activeCount;
    unsigned char padding2[0x79];
    unsigned short activeVariables[200];
};

struct Parser {
    unsigned char padding0[0x10];
    int token;
    unsigned char padding1[4];
    void* name;
    unsigned char padding2[0x14];
    FunctionState* function;
};

extern const char* __cdecl formatMessage(void*, const char*, ...);
extern unsigned short __cdecl registerLocal(Parser*, void*);
extern void __fastcall activateLocals(Parser*, int);
extern void __cdecl reportError(void*, const char*, int);
extern void __cdecl syntaxError(Parser*, const char*);
extern void __cdecl nextToken(Parser*);
extern void __cdecl reserveRegisters(FunctionState*, int);

void __fastcall parseParameters(Parser* parser)
{
    FunctionState* function = parser->function;
    Prototype* prototype = function->prototype;
    int count = 0;

    prototype->vararg = 0;
    if (parser->token != 41) {
        do {
            switch (parser->token) {
            case 285:
                {
                    void* name = parser->name;
                    nextToken(parser);
                    FunctionState* current = parser->function;
                    if (current->activeCount + count + 1 > 200) {
                        const char* message;
                        if (current->prototype->source == 0)
                            message = formatMessage(
                                current->state,
                                "main function has more than %d %s",
                                200, "local variables");
                        else
                            message = formatMessage(
                                current->state,
                                "function at line %d has more than %d %s",
                                current->prototype->source,
                                200, "local variables");
                        reportError(current->lexer, message, 0);
                    }
                    current->activeVariables[current->activeCount + count] =
                        registerLocal(parser, name);
                    ++count;
                }
                break;
            case 279:
                nextToken(parser);
                prototype->vararg |= 2;
                break;
            default:
                syntaxError(parser, "<name> or '...' expected");
                break;
            }
            if (prototype->vararg != 0 || parser->token != 44)
                break;
            nextToken(parser);
        } while (1);
    }

    activateLocals(parser, count);
    prototype->parameterCount =
        function->activeCount - (prototype->vararg & 1);
    reserveRegisters(function, function->activeCount);
}
