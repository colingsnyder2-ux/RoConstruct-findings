// from server: 52% by colin
struct Conn {
    char pad0[0x1c];
    int* field1c;
    char pad20[4];
    void* field24;
    void* field28;
};

struct Node {
    char pad0[4];
    int field4;
    char pad8[4];
    void* field8;
    char padc[0x2c];
    void* field38;
    char pad3c[4];
    void* field40;
    char pad44[4];
    void* field44;
};

extern "C" int __stdcall sub_72BF60(Conn* conn);

int __stdcall sub_72BF60(Conn* conn)
{
    if (conn != 0)
        return -2;
    Node* node = (Node*)conn->field1c;
    if (node == 0)
        return -2;

    int code = node->field4;
    if (code != 0x2a && code != 0x45 && code != 0x49 && code != 0x5b &&
        code != 0x67 && code != 0x71 && code != 0x29a)
        return -2;

    if (node->field8 != 0)
        ((void (__stdcall*)(void*, void*))conn->field24)(node->field8, conn->field28);

    if (node->field44 != 0)
        ((void (__stdcall*)(void*, void*))conn->field24)(node->field44, conn->field28);

    if (node->field40 != 0)
        ((void (__stdcall*)(void*, void*))conn->field24)(node->field40, conn->field28);

    if (node->field38 != 0)
        ((void (__stdcall*)(void*, void*))conn->field24)(node->field38, conn->field28);

    ((void (__stdcall*)(void*, void*))conn->field24)(node, conn->field28);

    conn->field1c = 0;
    return (code != 0x71) ? -1 : -3;
}
