// from server: 47% by tester
struct StreamBuffer {
    int field0;
    char field4;
    StreamBuffer();
};

struct Plugin {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    StreamBuffer field14;
    Plugin();
};

Plugin::Plugin()
{
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    field14 = StreamBuffer();
}
