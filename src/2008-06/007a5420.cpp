// from server: 75% by king_originala
typedef unsigned short Word;

struct Symbol
{
    Word code;
    Word length;
};

extern unsigned int __fastcall reverseBits(unsigned int code, unsigned int length);

void __fastcall buildCodes(Symbol* symbols, const Word* counts, int last)
{
    Word next[16];
    unsigned int code = 0;

    for (int length = 1; length <= 15; ++length)
    {
        code = (Word)((counts[length - 1] + code) * 2);
        next[length] = (Word)code;
    }

    for (int i = 0; i <= last; ++i)
    {
        unsigned int length = symbols[i].length;
        if (length != 0)
        {
            unsigned int value = next[length]++;
            symbols[i].code = (Word)reverseBits(value, length);
        }
    }
}
