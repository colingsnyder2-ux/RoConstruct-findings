// from server: 82% by 2gx

/* 2gx, 2026 */

typedef unsigned int u32;
typedef unsigned char u8;

struct TextBuffer {
    u8* data;
    u32 length;
};

struct Context {
    u8 pad00[4];
    void* field04;
    u8 pad08[0x2c];
    void* field34;
    u8 pad38[4];
    TextBuffer* field3C;
    u8* field40;
    u8 field44;
};

struct Invocation {
    Context* context;
    const char* requested;
};

static const char location_format[] = "%s:%d: %s";
static const char lexical_error[] = "lexical element too long";
static const char near_format[] = "%s near '%s'";

extern "C" char** (__cdecl *get_replacement)();
extern "C" int __cdecl lookup_text(const char*, const char*);
extern "C" void __cdecl copy_data(void*, const void*, u32);
extern "C" void* __cdecl create_value(int);
extern "C" void __cdecl report_error(void*, int);

extern "C" void* __cdecl build_message(
    void* destination,
    const char* format,
    void* argument1,
    void* argument2,
    const char* argument3
);

typedef void* (__cdecl *BuildMessage4)(
    void*,
    const char*,
    void*,
    void*
);

__declspec(noinline) void __fastcall process_context(
    Invocation* invocation
)
{
    Context* context = invocation->context;
    const char* requested = invocation->requested;

    char** replacement = get_replacement();
    volatile u8 previous = context->field44;

    u8 next;

    if (replacement != 0)
        next = static_cast<u8>(**replacement);
    else
        next = '.';

    context->field44 = next;

    TextBuffer* buffer = context->field3C;
    u32 length = buffer->length;
    u8* data = buffer->data;

    if (length != 0) {
        do {
            --length;

            if (data[length] == previous)
                data[length] = next;

        } while (length != 0);
    }

    if (lookup_text(
        reinterpret_cast<const char*>(context->field3C->data),
        requested
    ) != 0)
        return;

    buffer = context->field3C;
    length = buffer->length;
    next = context->field44;
    data = buffer->data;

    if (length != 0) {
        do {
            --length;

            if (data[length] == next)
                data[length] = '.';

        } while (length != 0);
    }

    u8 local[0x50];

    copy_data(
        local,
        context->field40 + 0x10,
        0x50
    );

    void* result = build_message(
        context->field34,
        location_format,
        local,
        context->field04,
        lexical_error
    );

    create_value(0);

    BuildMessage4 second_message =
        reinterpret_cast<BuildMessage4>(&build_message);

    second_message(
        context->field34,
        near_format,
        result,
        context->field3C->data
    );

    report_error(context->field34, 3);
}

void __cdecl func_00664400(
    Context* context,
    const char* requested
)
{
    Invocation invocation;
    invocation.context = context;
    invocation.requested = requested;

    process_context(&invocation);
}
