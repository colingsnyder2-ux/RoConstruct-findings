// from server: 52% by atomic.potato
struct Item
{
    bool check(int);
};

bool Item::check(int value)
{
    if (check(0x133))
        return true;
    if (check(0x134))
        return true;
    return false;
}
