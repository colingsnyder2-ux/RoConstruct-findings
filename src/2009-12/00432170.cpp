// from server: 45% by atomic.potato
struct S
{
    int XItem(const unsigned char*);
};

int S::XItem(const unsigned char* value)
{
    return value[0];
}
