// from server: 89% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Iterator {
    const void* volatile owner;
    const char* position;
};

struct Range {
    Iterator first;
    Iterator last;
    bool empty;
};

struct Tag {
    char value;
};

bool __cdecl compare_range(const char*, const char*, Iterator, Tag, Tag);

bool __cdecl equal_ranges(const Range* left, const Range* right)
{
    int leftSize;
    if (left->empty) {
        leftSize = 0;
    } else {
        const void* lastOwner = left->last.owner;
        const void* firstOwner = left->first.owner;
        const char* first = left->first.position;
        const char* last = left->last.position;
        if (lastOwner != reinterpret_cast<const void*>(-4) &&
            (!lastOwner || lastOwner != firstOwner))
            _invalid_parameter_noinfo();
        leftSize = static_cast<int>(last - first);
    }

    int rightSize;
    if (right->empty) {
        rightSize = 0;
    } else {
        const void* lastOwner = right->last.owner;
        const void* firstOwner = right->first.owner;
        const char* last = right->last.position;
        const char* first = right->first.position;
        if (lastOwner != reinterpret_cast<const void*>(-4) &&
            (!lastOwner || lastOwner != firstOwner))
            _invalid_parameter_noinfo();
        rightSize = static_cast<int>(last - first);
    }

    if (leftSize != rightSize)
        return false;

    Iterator last = left->last;
    Iterator first = left->first;
    Tag tag = Tag();
    return compare_range(first.position, last.position, right->first,
                         tag, tag);
}
