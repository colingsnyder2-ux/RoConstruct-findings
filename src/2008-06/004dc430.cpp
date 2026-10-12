// from server: 85% by king_originala
struct S {
    float position[3];
    unsigned int key;
    int value;

    bool less(const S* left, const S* right);
};

static __declspec(noinline) int __fastcall compare(const S* right, const S* left)
{
    if (left->position[0] < right->position[0])
        return -1;
    if (left->position[0] > right->position[0])
        return 1;
    if (left->position[1] < right->position[1])
        return -1;
    if (left->position[1] > right->position[1])
        return 1;
    if (left->position[2] < right->position[2])
        return -1;
    if (left->position[2] > right->position[2])
        return 1;
    return 0;
}

bool S::less(const S* left, const S* right)
{
    int result = compare(right, left);
    if (result < 0)
        return true;
    if (result > 0)
        return false;

    unsigned int a = left->key;
    unsigned int b = right->key;
    if (a < b)
        return true;
    if (a > b)
        return false;

    return left->value < right->value;
}
