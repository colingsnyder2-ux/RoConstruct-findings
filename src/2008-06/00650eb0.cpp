// from server: 80% by colin
struct ChatLine {
    char pad[0x1c];
};

struct ChatOutput {
};

extern "C" bool __stdcall string_equal(const void*, const void*);

ChatLine* __cdecl find(ChatLine* first, ChatLine* last, const void* value)
{
    while (first != last) {
        if (string_equal(first, value))
            break;
        first = (ChatLine*)((char*)first + 0x1c);
    }
    return first;
}
