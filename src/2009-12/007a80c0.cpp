// from server: 33% by atomic.potato
struct SlingshotTool
{
    int f(int);
    char padding24[36];
    unsigned char field24;
    char padding25[7];
    int field2c;
};

int SlingshotTool::f(int)
{
    if (field24 == 0)
        return 0;
    if (field2c != 0)
        return 0;
    return 1;
}
