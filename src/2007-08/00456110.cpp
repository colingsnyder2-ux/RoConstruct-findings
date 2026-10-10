// from server: 77% by colin
struct HelpCommand {
    int execute(int);
};

extern "C" int __cdecl sub_630646(int);
extern "C" int __stdcall GetClientRect(int, void*);

int HelpCommand::execute(int a)
{
    int rc;
    int result;
    int rect[4];

    result = sub_630646(a);
    if (result == -1)
        return 0;

    GetClientRect(*(int*)((char*)this + 0x20), rect);

    result = (*(int (__stdcall**)(int, int, int, void*, int, int, int, int))(*(int*)((char*)this + 0x88) + 0x5c))(
        (int)((char*)this + 0x88),
        0x50000000,
        (int)rect,
        (void*)this,
        1,
        0,
        0x78515c,
        0);

    return (result != 0) ? 0 : -1;
}
