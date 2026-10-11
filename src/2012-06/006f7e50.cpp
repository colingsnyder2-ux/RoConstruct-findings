// from server: 61% by atomic.potato
typedef char *StringPointer;

extern "C" void constructString(StringPointer *object, const char *value);
extern "C" void initializeVerb(void *object);

struct DuplicateSelectionVerb
{
    int value;
    DuplicateSelectionVerb *function(StringPointer *argument);
};

DuplicateSelectionVerb *DuplicateSelectionVerb::function(StringPointer *argument)
{
    StringPointer temporary;
    constructString(&temporary, "TrackCamera");
    initializeVerb(this);
    value = 0xb9c74c;
    return this;
}
