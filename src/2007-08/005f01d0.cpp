// from server: 90% by colin
struct MsgString {
    char pad[0x10];
};

struct Message {
    char pad[0xf8];
    MsgString text;
    void setText(const MsgString& value);
};

extern "C" bool __cdecl G1_func_0077e630(const MsgString*, const MsgString*);
extern "C" MsgString* __stdcall G1_func_0077e690(MsgString*, const MsgString*);
extern "C" void __fastcall G1_func_00444710(Message*, int, const char*);

void Message::setText(const MsgString& value)
{
    if (G1_func_0077e630(&text, &value)) {
        G1_func_0077e690(&text, &value);
        G1_func_00444710(this, 0, (const char*)0x8c778c);
    }
}
