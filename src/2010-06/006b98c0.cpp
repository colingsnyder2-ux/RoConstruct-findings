// from server: 47% by atomic.potato
struct String
{
    String(const String&);
};

struct Rocket
{
    Rocket(const String&);
    String name;
};

Rocket::Rocket(const String& value)
    : name(value)
{
}
