// from server: 95% by king_originala
struct Tag {};

struct Guard1
{
    int* value;
    int count;
    bool active;
    bool* flag;
    ~Guard1();
};

struct Guard2
{
    int* value;
    int count;
    bool active;
    bool* flag;
    ~Guard2();
};

int __cdecl copy_impl(int*, int*, int, Tag, Tag);

int __cdecl reconstructed(int first, int last, int destination)
{
    bool flag = false;
    Tag tag;
    Guard1 firstGuard = { &first, 1, true, &flag };
    Guard2 lastGuard = { &last, 2, true, &flag };

    return copy_impl(&first, &last, destination, tag, tag);
}
