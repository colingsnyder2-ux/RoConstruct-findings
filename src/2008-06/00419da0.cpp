// from server: 95% by king_originala
struct String;
extern void (__thiscall *copyString)(String*, const String&);

struct String {
    char storage[28];
    String(const String& other) { copyString(this, other); }
    ~String();
};

struct S {
    char padding[8];
    void consume(void* address, String text);
};

void __cdecl dispatch(S** source)
{
    S* object = *source;
    char* address = reinterpret_cast<char*>(object) + 8;
    object->consume(address, *reinterpret_cast<String*>(address + 8));
}
