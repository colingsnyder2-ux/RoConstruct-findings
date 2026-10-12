// from server: 96% by king_originala
struct String {
    unsigned char data[28];
};

extern bool (__cdecl *equalString)(const String&, const String&);

String* __cdecl f(String* first, String* last, const String& value)
{
    if (first != last) {
        bool (__cdecl *compare)(const String&, const String&) = equalString;
        do {
            if (compare(*first, value))
                break;
            ++first;
        } while (first != last);
        return first;
    }
    return last;
}
