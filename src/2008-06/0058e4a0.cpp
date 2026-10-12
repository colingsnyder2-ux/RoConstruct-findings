// from server: 95% by king_originala
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int (__cdecl *formatText)(char *, const char *, ...);

void __cdecl writeText(void *, const char *);
void __cdecl writeChar(void *, unsigned char);

void __cdecl escapeText(void *output, const char *text)
{
    unsigned char c;
    char buffer[8];
    unsigned int size = strlen(text);

    if (size)
    {
        int (__cdecl *formatter)(char *, const char *, ...) = formatText;
        int length = static_cast<int>(size);
        do
        {
            c = static_cast<unsigned char>(*text++);
            if (c == '<')
                writeText(output, "&lt;");
            else if (c == '>')
                writeText(output, "&gt;");
            else if (c == '&')
                writeText(output, "&amp;");
            else if (c == '"')
                writeText(output, "&quot;");
            else if (c == '\'')
                writeText(output, "&apos;");
            else if ((c < 32 && c != 9 && c != 10 && c != 13) || c > 126)
            {
                formatter(buffer, "&#%d;", static_cast<int>(c));
                writeText(output, buffer);
            }
            else
                writeChar(output, c);
        } while (--length);
    }
}
