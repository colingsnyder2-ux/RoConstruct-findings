// from server: 46% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct TextDisplay
{
    char pad0[168];
    void *m_text;
    TextDisplay();
};

TextDisplay::TextDisplay()
{
    std_string_copy(&m_text, 0);
}
