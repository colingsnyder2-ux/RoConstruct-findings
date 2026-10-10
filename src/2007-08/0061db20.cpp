// from server: 48% by colin
struct ChatLine {
    char pad[0x14];
    ChatLine* begin;
    ChatLine* end;
};

struct ChatOutput {
    char pad[0x14];
    ChatLine* lines_begin;
    ChatLine* lines_end;

    void assignLine(unsigned int index, const ChatLine& line);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall std_string_dtor(void*);
extern "C" void __stdcall std_string_assign(void*, const void*);

void ChatOutput::assignLine(unsigned int index, const ChatLine& line)
{
    if (lines_begin == 0) {
        unsigned int count = (unsigned int)(((char*)lines_end - (char*)lines_begin) / 28);
        if (index >= count)
            _invalid_parameter_noinfo();
    } else {
        _invalid_parameter_noinfo();
    }

    ChatLine* dest = &lines_begin[index];
    std_string_assign(dest, &line);
    std_string_dtor(dest);
}
