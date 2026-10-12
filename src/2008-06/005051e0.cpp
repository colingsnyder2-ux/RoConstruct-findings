// from server: 90% by king_originala
struct Item {
    char padding[0x30];
    float depth;
    unsigned int layer;
};

int __cdecl compare(const Item* const& left, const Item* const& right)
{
    if (left->layer < right->layer ||
        (left->layer == right->layer && right->depth > left->depth))
        return 1;
    return 0;
}
