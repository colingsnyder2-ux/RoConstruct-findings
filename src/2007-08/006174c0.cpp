// from server: 56% by tester
extern "C" int __stdcall iscntrl(int c);
extern void __cdecl func_0060ee90(int a, const char* b);

int* g_table_7c34ac[0x101];

const char g_str_7c394c[] = "guous syntax (function call x new statement)";
const char g_str_7c3950[] = "char(%d)";

struct S {
    char pad[0x34];
    int field_34;
    int __cdecl func_006174c0(int c);
};

int S::func_006174c0(int c)
{
    if (c < 0x101) {
        if (iscntrl(c)) {
            func_0060ee90(this->field_34, g_str_7c3950);
        } else {
            func_0060ee90(this->field_34, g_str_7c394c);
        }
        return 0;
    }
    return (int)g_table_7c34ac[c];
}
