// from server: 96% by king_originala
struct Source {
    unsigned int unused;
    char* data;
};

struct ChatEnter {
    unsigned int words[83];
    ChatEnter(unsigned int value);
    ~ChatEnter();
    ChatEnter* construct(unsigned int value);
    void initialize();
    void finish(unsigned int value);
};

struct Member {
    unsigned int data;
    Member(unsigned int value, char* source);
    ~Member();
};

struct UnifiedImageWidget : ChatEnter {
    Member member;
    UnifiedImageWidget(unsigned int value, Source* source, unsigned int option);
};

UnifiedImageWidget::UnifiedImageWidget(
    unsigned int value, Source* source, unsigned int option)
    : ChatEnter((unsigned int)source),
      member(
          (words[0] = 0x84b91c,
           words[4] = 0x84b90c,
           words[5] = 0x84b904,
           words[8] = 0x84b8fc,
           words[9] = 0x84b8ec,
           words[17] = 0x84b8dc,
           words[25] = 0x84b8cc,
           words[33] = 0x84b8bc,
           words[41] = 0x84b8ac,
           words[49] = 0x84b89c,
           words[76] = 0x84b894,
           value),
          source->data + 4)
{
    finish(option);
}
