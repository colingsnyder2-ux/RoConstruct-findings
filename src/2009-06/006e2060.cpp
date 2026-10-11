// from server: 74% by atomic.potato
// roc 2009-06 006e2060  unit: RBX::ChatOutput  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e2060

extern "C" bool __stdcall string_less(const void* a, const void* b);

struct ChatOutput {
    char pad[0x1c];
};

ChatOutput* find_if(ChatOutput* first, ChatOutput* last, const void* value);

ChatOutput* find_if(ChatOutput* first, ChatOutput* last, const void* value)
{
    if (first != last) {
        do {
            if (string_less(first, value))
                break;
            first = (ChatOutput*)((char*)first + 0x1c);
        } while (first != last);
    }
    return first;
}
