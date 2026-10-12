// from server: 75% by king_originala
struct Vector2
{
    float x, y;
};

struct Rect
{
    float values[4];
};

struct Panel;

struct PanelTable
{
    void *reserved0[18];
    Vector2 *(__thiscall *position)(Panel *, Vector2 *);
    void *reserved1[4];
    Vector2 *(__thiscall *size)(Panel *, Vector2 *);
};

void __cdecl makeRect(Rect *, const Vector2 &, const Vector2 &);

struct Panel
{
    PanelTable *table;
    Rect *bounds(Rect *);
};

Rect *Panel::bounds(Rect *result)
{
    Vector2 p;
    Vector2 storage;
    table->position(this, &p);
    Vector2 *s = table->size(this, &storage);
    Vector2 end = { s->x + p.x, s->y + p.y };
    Vector2 begin = { p.x, p.y };
    makeRect(result, begin, end);
    return result;
}
