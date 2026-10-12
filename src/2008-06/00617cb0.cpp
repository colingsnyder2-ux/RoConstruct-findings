// from server: 86% by king_originala
struct Event {
    int reserved[2];
    int position;
};

struct Collection {
    char storage[32];
    Collection(Event** first, Event** last);
    ~Collection();
};

struct Rect {
    float data[4];
    static Rect __cdecl xyxy(float x0, float y0, float x1, float y1);
};

#pragma pack(push, 2)
struct Command {
    char reserved[40];
    unsigned char mode;
    char padding;
    short startX;
    short startY;
    union {
        int position;
        struct {
            short endX;
            short endY;
        };
    };

    void update(Event* event);
    void collect(Collection* collection, Event* event, const Rect& rect);
    void applyFirst(Collection* collection);
    void applySecond(Collection* collection);
};
#pragma pack(pop)

void Command::update(Event* event)
{
    Event* savedEvent = event;
    position = savedEvent->position;
    Collection collection(&event, &event);
    collect(&collection, savedEvent,
            Rect::xyxy((float)startX, (float)startY,
                       (float)endX, (float)endY));
    if (mode)
        applyFirst(&collection);
    else
        applySecond(&collection);
}
