// from server: 91% by king_originala
extern "C" unsigned int __cdecl strlen(const char*);

extern int (__stdcall* CompareStringA)(
    unsigned long, unsigned long, const char*, int, const char*, int);

struct Str_0072dcd0 {
    int words[8];
};

extern int (__thiscall* string_compare)(Str_0072dcd0*, const char*);
extern int (__thiscall* string_length)(Str_0072dcd0*);
extern const char* (__thiscall* string_data)(Str_0072dcd0*);
extern void (__thiscall* string_destroy)(Str_0072dcd0*);

struct Item {
    Str_0072dcd0* copy(Str_0072dcd0*);
};

struct Gallery {
    int count();
    Item* item(int);
    int find(int, const char*, int);
};

int Gallery::find(int start, const char* text, int exact)
{
    if (!count())
        return -1;

    if (!text)
        return -1;

    unsigned int length = strlen(text);
    const unsigned int originalLength = length;
    if (length < 1)
        return -1;

    ++start;
    if (start >= count() || start < 0)
        start = 0;

    const int first = start;
    do {
        Item* current = item(start);
        if (exact) {
            int storage;
            Str_0072dcd0* temporary =
                reinterpret_cast<Str_0072dcd0*>(&storage);
            Str_0072dcd0* caption = current->copy(temporary);
            bool equal = string_compare(caption, text) == 0;
            string_destroy(temporary);
            if (equal)
                return start;
        } else {
            int lengthStorage;
            Str_0072dcd0* lengthTemporary =
                reinterpret_cast<Str_0072dcd0*>(&lengthStorage);
            int captionLength = string_length(current->copy(lengthTemporary));
            string_destroy(lengthTemporary);

            unsigned int bufferLength = length;
            if (length >= static_cast<unsigned int>(captionLength)) {
                bufferLength = captionLength;
                length = captionLength;
            }

            int dataStorage;
            Str_0072dcd0* dataTemporary =
                reinterpret_cast<Str_0072dcd0*>(&dataStorage);
            Str_0072dcd0* caption = current->copy(dataTemporary);
            int result = CompareStringA(
                0x800, 1, text, length, string_data(caption), bufferLength);
            string_destroy(dataTemporary);

            if (result == 2 &&
                originalLength <= static_cast<unsigned int>(captionLength))
                return start;

            length = originalLength;
        }

        ++start;
        if (start == count())
            start = 0;
    } while (start != first);

    return -1;
}
