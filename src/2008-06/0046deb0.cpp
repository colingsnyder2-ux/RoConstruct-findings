// from server: 98% by king_originala
struct StringStorage;

typedef StringStorage* (__thiscall *StringCopy)(
    StringStorage*, const StringStorage&);

extern StringCopy stringCopy;

struct StringStorage {
    unsigned char data[28];

    StringStorage(const StringStorage&);
    ~StringStorage();
};

__forceinline StringStorage::StringStorage(const StringStorage& source)
{
    stringCopy(this, source);
}

struct S {
    unsigned int first;
    unsigned int second;
    StringStorage third;
    StringStorage fourth;

    S(const S&);
};

S::S(const S& source)
    : first(source.first),
      second(source.second),
      third(source.third),
      fourth(source.fourth)
{
}
